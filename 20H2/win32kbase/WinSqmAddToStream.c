/*
 * XREFs of WinSqmAddToStream @ 0x1C013C510
 * Callers:
 *     <none>
 * Callees:
 *     WinSqmEventEnabled @ 0x1C00720A8 (WinSqmEventEnabled.c)
 *     ?IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z @ 0x1C0072100 (-IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z.c)
 *     WinSqmEventWrite @ 0x1C00B8C30 (WinSqmEventWrite.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

unsigned int __fastcall WinSqmAddToStream(struct _GUID *a1, int a2, unsigned int a3, __int64 a4)
{
  unsigned int result; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _GUID *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // r11d
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  ULONGLONG v18; // rdx
  int v19; // ebx
  void *v20; // r10
  const wchar_t *v21; // r9
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-E0h] BYREF
  int *v26; // [rsp+30h] [rbp-D0h]
  __int64 v27; // [rsp+38h] [rbp-C8h]
  void *v28; // [rsp+40h] [rbp-C0h]
  __int64 v29; // [rsp+48h] [rbp-B8h]
  unsigned int *v30; // [rsp+50h] [rbp-B0h]
  __int64 v31; // [rsp+58h] [rbp-A8h]
  _BYTE v32[432]; // [rsp+60h] [rbp-A0h] BYREF
  int v33; // [rsp+258h] [rbp+158h] BYREF
  unsigned int v34; // [rsp+260h] [rbp+160h] BYREF

  v34 = a3;
  v33 = a2;
  result = (unsigned int)memset(v32, 0, sizeof(v32));
  if ( !a4 )
    result = MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9, v10);
  if ( a1 != (struct _GUID *)-1LL )
  {
    if ( (unsigned int)IsExtendedWinSqmHandle(a1) )
    {
      v11 = (struct _GUID *)((char *)a1 + 24);
    }
    else
    {
      v11 = (struct _GUID *)&unk_1C02076D8;
      if ( a1 )
        v11 = a1;
    }
    result = WinSqmEventEnabled(&SQM_ADD_LEGACYSTREAMROW, v11);
    if ( result )
    {
      v14 = v34;
      UserData.Ptr = (ULONGLONG)v11;
      *(_QWORD *)&UserData.Size = 16LL;
      v15 = 0LL;
      if ( v34 > 9 )
        v14 = 9;
      v27 = 4LL;
      v34 = v14;
      v26 = &v33;
      v28 = &unk_1C024E7E0;
      v30 = &v34;
      v29 = 4LL;
      v31 = 4LL;
      if ( v14 )
      {
        while ( 1 )
        {
          v16 = (unsigned int)(3 * v15);
          if ( (unsigned int)(v16 + 6) >= 0x1F )
            break;
          v17 = 2LL * (unsigned int)(v16 + 4);
          v18 = a4 + 16LL * (unsigned int)v15;
          *(&UserData.Ptr + v17) = v18;
          v19 = *(_DWORD *)v18;
          v20 = (void *)(v18 + 8);
          *((_QWORD *)&UserData.Size + v17) = 4LL;
          if ( v19 != 1 )
            v20 = &unk_1C021E60C;
          v13 = 2LL * (unsigned int)(v16 + 5);
          *(&UserData.Ptr + v13) = (ULONGLONG)v20;
          *((_QWORD *)&UserData.Size + v13) = 4LL;
          if ( v19 == 2 )
            v21 = *(const wchar_t **)(v18 + 8);
          else
            v21 = L"0";
          v22 = -1LL;
          do
            ++v22;
          while ( v21[v22] );
          v12 = (unsigned int)(2 * v22 + 2);
          v23 = v15 + 2;
          v15 = (unsigned int)(v15 + 1);
          v24 = 2LL * (unsigned int)(3 * v23);
          *(&UserData.Ptr + v24) = (ULONGLONG)v21;
          *(&UserData.Size + 2 * v24) = v12;
          *(&UserData.Reserved + 2 * v24) = 0;
          if ( (unsigned int)v15 >= v14 )
            return WinSqmEventWrite(&SQM_ADD_LEGACYSTREAMROW, 0x1Fu, &UserData);
        }
        return MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v15, v16);
      }
      else
      {
        return WinSqmEventWrite(&SQM_ADD_LEGACYSTREAMROW, 0x1Fu, &UserData);
      }
    }
  }
  return result;
}
