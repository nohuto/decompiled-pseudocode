/*
 * XREFs of DxgkNetDispStartMiracastDisplayDevice @ 0x1C02D2CA0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z @ 0x1C0049810 (-DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z.c)
 *     ?IsAllowedToCallMiracast@@YA_NXZ @ 0x1C0049DC8 (-IsAllowedToCallMiracast@@YA_NXZ.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C0063340 (DxgkMiracastStartMiracastSession.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkNetDispStartMiracastDisplayDevice(_OWORD *a1)
{
  struct _KEVENT *v2; // rdi
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int16 *v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  struct DXGPROCESS *Current; // rax
  __int64 v11; // rax
  NTSTATUS v12; // eax
  NTSTATUS v13[4]; // [rsp+50h] [rbp-268h] BYREF
  unsigned __int16 v14[264]; // [rsp+60h] [rbp-258h] BYREF
  HANDLE Handle; // [rsp+270h] [rbp-48h]
  UUID Uuid; // [rsp+278h] [rbp-40h] BYREF
  __int128 Object; // [rsp+290h] [rbp-28h] BYREF

  Object = 0LL;
  v2 = 0LL;
  if ( !IsAllowedToCallMiracast() )
    return -2147483640LL;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (_OWORD *)MmUserProbeAddress;
  v6 = v14;
  v7 = 4LL;
  do
  {
    *(_OWORD *)v6 = *a1;
    *((_OWORD *)v6 + 1) = a1[1];
    *((_OWORD *)v6 + 2) = a1[2];
    *((_OWORD *)v6 + 3) = a1[3];
    *((_OWORD *)v6 + 4) = a1[4];
    *((_OWORD *)v6 + 5) = a1[5];
    *((_OWORD *)v6 + 6) = a1[6];
    v6 += 64;
    *((_OWORD *)v6 - 1) = a1[7];
    a1 += 8;
    --v7;
  }
  while ( v7 );
  *(_OWORD *)v6 = *a1;
  *((_OWORD *)v6 + 1) = a1[1];
  *((_QWORD *)v6 + 4) = *((_QWORD *)a1 + 4);
  if ( *(_DWORD *)v14 == 552 )
  {
    Current = DXGPROCESS::GetCurrent((__int64)v6, 128LL, v3, v4);
    v13[0] = DxgkNetDispAccessCheck(Current);
    if ( v13[0] >= 0 )
    {
      v11 = *(_QWORD *)&Uuid.Data1 - Object;
      if ( *(_QWORD *)&Uuid.Data1 == (_QWORD)Object )
        v11 = *(_QWORD *)Uuid.Data4 - *((_QWORD *)&Object + 1);
      if ( v11 || (v13[0] = ExUuidCreate(&Uuid), v13[0] >= 0) )
      {
        if ( Handle
          && (*(_QWORD *)&Object = 0LL,
              v12 = ObReferenceObjectByHandle(
                      Handle,
                      0x1F0003u,
                      (POBJECT_TYPE)ExEventObjectType,
                      1,
                      (PVOID *)&Object,
                      0LL),
              v2 = (struct _KEVENT *)Object,
              v13[0] = v12,
              v12 < 0) )
        {
          v8 = -2147483640;
          WdLogSingleEntry1(2LL, Handle);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Caller specified event handle (0x%I64x) is not an valid event handle.",
            (__int64)Handle,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        else
        {
          return (unsigned int)DxgkMiracastStartMiracastSession(v14, v2, v13);
        }
        return v8;
      }
      v9 = -2147483647LL;
    }
    else
    {
      v9 = -2147483643LL;
    }
    v8 = v9;
  }
  else
  {
    v8 = -2147483640;
    v9 = -2147483640LL;
  }
  WdLogSingleEntry1(3LL, v9);
  return v8;
}
