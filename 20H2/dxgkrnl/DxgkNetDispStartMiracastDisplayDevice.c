/*
 * XREFs of DxgkNetDispStartMiracastDisplayDevice @ 0x1C0223960
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z @ 0x1C003D744 (-DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z.c)
 *     ?IsAllowedToCallMiracast@@YA_NXZ @ 0x1C003DD88 (-IsAllowedToCallMiracast@@YA_NXZ.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C0054860 (DxgkMiracastStartMiracastSession.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkNetDispStartMiracastDisplayDevice(_OWORD *a1)
{
  struct _KEVENT *v2; // rdi
  __int64 v3; // r8
  _OWORD *v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdi
  __int64 v14; // rax
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  NTSTATUS v19[4]; // [rsp+30h] [rbp-268h] BYREF
  _DWORD v20[132]; // [rsp+40h] [rbp-258h] BYREF
  HANDLE Handle; // [rsp+250h] [rbp-48h]
  UUID Uuid; // [rsp+258h] [rbp-40h] BYREF
  __int128 Object; // [rsp+270h] [rbp-28h] BYREF

  Object = 0LL;
  v2 = 0LL;
  if ( !IsAllowedToCallMiracast() )
    return -2147483640LL;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (_OWORD *)MmUserProbeAddress;
  v5 = v20;
  v6 = 4LL;
  do
  {
    *v5 = *a1;
    v5[1] = a1[1];
    v5[2] = a1[2];
    v5[3] = a1[3];
    v5[4] = a1[4];
    v5[5] = a1[5];
    v5[6] = a1[6];
    v5 += 8;
    *(v5 - 1) = a1[7];
    a1 += 8;
    --v6;
  }
  while ( v6 );
  *v5 = *a1;
  v5[1] = a1[1];
  *((_QWORD *)v5 + 4) = *((_QWORD *)a1 + 4);
  if ( v20[0] == 552 )
  {
    Current = DXGPROCESS::GetCurrent((__int64)v5, 128LL);
    v19[0] = DxgkNetDispAccessCheck(Current);
    if ( v19[0] >= 0 )
    {
      v14 = *(_QWORD *)&Uuid.Data1 - Object;
      if ( *(_QWORD *)&Uuid.Data1 == (_QWORD)Object )
        v14 = *(_QWORD *)Uuid.Data4 - *((_QWORD *)&Object + 1);
      if ( v14 || (v19[0] = ExUuidCreate(&Uuid), v19[0] >= 0) )
      {
        if ( Handle
          && (*(_QWORD *)&Object = 0LL,
              v15 = ObReferenceObjectByHandle(
                      Handle,
                      0x1F0003u,
                      (POBJECT_TYPE)ExEventObjectType,
                      1,
                      (PVOID *)&Object,
                      0LL),
              v2 = (struct _KEVENT *)Object,
              v19[0] = v15,
              v15 < 0) )
        {
          v7 = -2147483640;
          v18 = WdLogNewEntry5_WdError(v17, v16);
          *(_QWORD *)(v18 + 24) = Handle;
          WdLogEvent5_WdError(v18);
        }
        else
        {
          return (unsigned int)DxgkMiracastStartMiracastSession((__int64)v20, v2, v19);
        }
        return v7;
      }
      v13 = -2147483647LL;
    }
    else
    {
      v13 = -2147483643LL;
    }
    v7 = v13;
    v8 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v8 + 24) = v13;
  }
  else
  {
    v7 = -2147483640;
    v8 = WdLogNewEntry5_WdWarning(v5, 128LL, v3);
    *(_QWORD *)(v8 + 24) = -2147483640LL;
  }
  WdLogEvent5_WdWarning(v8);
  return v7;
}
