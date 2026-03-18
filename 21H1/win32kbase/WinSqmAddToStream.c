/*
 * XREFs of WinSqmAddToStream @ 0x1C0144BB0
 * Callers:
 *     <none>
 * Callees:
 *     WinSqmEventWrite @ 0x1C004B250 (WinSqmEventWrite.c)
 *     WinSqmEventEnabled @ 0x1C0054728 (WinSqmEventEnabled.c)
 *     ?IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z @ 0x1C0054780 (-IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

unsigned int __fastcall WinSqmAddToStream(struct _GUID *a1, int a2, unsigned int a3, __int64 a4)
{
  unsigned int result; // eax
  __int64 v7; // rcx
  struct _GUID *v8; // rdi
  __int64 v9; // rcx
  unsigned int v10; // r11d
  unsigned int v11; // r8d
  int v12; // r9d
  __int64 v13; // rcx
  ULONGLONG v14; // rdx
  int v15; // ebx
  void *v16; // r10
  const wchar_t *v17; // r9
  __int64 v18; // rax
  ULONG v19; // edx
  unsigned int v20; // eax
  __int64 v21; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-E0h] BYREF
  int *v23; // [rsp+30h] [rbp-D0h]
  __int64 v24; // [rsp+38h] [rbp-C8h]
  void *v25; // [rsp+40h] [rbp-C0h]
  __int64 v26; // [rsp+48h] [rbp-B8h]
  unsigned int *v27; // [rsp+50h] [rbp-B0h]
  __int64 v28; // [rsp+58h] [rbp-A8h]
  _BYTE v29[432]; // [rsp+60h] [rbp-A0h] BYREF
  int v30; // [rsp+258h] [rbp+158h] BYREF
  unsigned int v31; // [rsp+260h] [rbp+160h] BYREF

  v31 = a3;
  v30 = a2;
  result = (unsigned int)memset(v29, 0, sizeof(v29));
  if ( !a4 )
    result = MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
  if ( a1 != (struct _GUID *)-1LL )
  {
    if ( (unsigned int)IsExtendedWinSqmHandle(a1) )
    {
      v8 = (struct _GUID *)((char *)a1 + 24);
    }
    else
    {
      v8 = (struct _GUID *)&unk_1C0210E80;
      if ( a1 )
        v8 = a1;
    }
    result = WinSqmEventEnabled(&SQM_ADD_LEGACYSTREAMROW, v8);
    if ( result )
    {
      v10 = v31;
      UserData.Ptr = (ULONGLONG)v8;
      *(_QWORD *)&UserData.Size = 16LL;
      v11 = 0;
      if ( v31 > 9 )
        v10 = 9;
      v24 = 4LL;
      v31 = v10;
      v23 = &v30;
      v25 = &unk_1C02567A0;
      v27 = &v31;
      v26 = 4LL;
      v28 = 4LL;
      if ( v10 )
      {
        while ( 1 )
        {
          v12 = 3 * v11;
          if ( 3 * v11 + 6 >= 0x1F )
            break;
          v13 = 2LL * (unsigned int)(v12 + 4);
          v14 = a4 + 16LL * v11;
          *(&UserData.Ptr + v13) = v14;
          v15 = *(_DWORD *)v14;
          v16 = (void *)(v14 + 8);
          *((_QWORD *)&UserData.Size + v13) = 4LL;
          if ( v15 != 1 )
            v16 = &unk_1C022613C;
          v9 = 2LL * (unsigned int)(v12 + 5);
          *(&UserData.Ptr + v9) = (ULONGLONG)v16;
          *((_QWORD *)&UserData.Size + v9) = 4LL;
          if ( v15 == 2 )
            v17 = *(const wchar_t **)(v14 + 8);
          else
            v17 = L"0";
          v18 = -1LL;
          do
            ++v18;
          while ( v17[v18] );
          v19 = 2 * v18 + 2;
          v20 = v11 + 2;
          ++v11;
          v21 = 6LL * v20;
          *(&UserData.Ptr + v21) = (ULONGLONG)v17;
          *(&UserData.Size + 2 * v21) = v19;
          *(&UserData.Reserved + 2 * v21) = 0;
          if ( v11 >= v10 )
            return WinSqmEventWrite(&SQM_ADD_LEGACYSTREAMROW, 0x1Fu, &UserData);
        }
        return MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
      }
      else
      {
        return WinSqmEventWrite(&SQM_ADD_LEGACYSTREAMROW, 0x1Fu, &UserData);
      }
    }
  }
  return result;
}
