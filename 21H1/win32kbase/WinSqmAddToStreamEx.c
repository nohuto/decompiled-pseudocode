/*
 * XREFs of WinSqmAddToStreamEx @ 0x1C0144DA0
 * Callers:
 *     <none>
 * Callees:
 *     WinSqmEventWrite @ 0x1C004B250 (WinSqmEventWrite.c)
 *     WinSqmEventEnabled @ 0x1C0054728 (WinSqmEventEnabled.c)
 *     ?IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z @ 0x1C0054780 (-IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0069980 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall WinSqmAddToStreamEx(struct _GUID *a1, int a2, unsigned int a3, __int64 a4, char a5)
{
  __int64 v7; // rcx
  struct _GUID *v8; // rdi
  unsigned int v9; // r9d
  unsigned int v10; // r10d
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // r8
  ULONGLONG v17; // rbx
  __int64 v18; // rdi
  unsigned int v19; // r13d
  unsigned int v20; // r12d
  ULONG v21; // ecx
  __int64 v22; // r15
  ULONG v23; // ecx
  int v24; // eax
  ULONG v25; // ecx
  ULONG v26; // [rsp+20h] [rbp-81h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-79h]
  struct _EVENT_DATA_DESCRIPTOR UserData[7]; // [rsp+30h] [rbp-71h] BYREF
  int v29; // [rsp+108h] [rbp+67h] BYREF
  unsigned int v30; // [rsp+110h] [rbp+6Fh] BYREF

  v30 = a3;
  v29 = a2;
  memset(UserData, 0, sizeof(UserData));
  v26 = 0;
  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
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
    if ( (unsigned int)WinSqmEventEnabled(&SQM_ADD_STREAMROW, v8) )
    {
      v9 = v30;
      v10 = 0;
      if ( v30 > 0x40 )
        v9 = 64;
      v30 = v9;
      if ( v9 )
      {
        LODWORD(v11) = v26;
        do
        {
          switch ( *(_DWORD *)(a4 + 16LL * v10 + 4) )
          {
            case 1:
              v12 = 19;
              break;
            case 2:
              v13 = -1LL;
              do
                ++v13;
              while ( *(_WORD *)(*(_QWORD *)(a4 + 16LL * v10 + 8) + 2 * v13) );
              if ( (unsigned int)v13 > 0x80 )
                LODWORD(v13) = 128;
              v12 = 2 * v13 + 17;
              break;
            case 3:
              v12 = 23;
              break;
            default:
              return;
          }
          ++v10;
          v11 = (v12 & 0xFFFFFFF8) + (unsigned int)v11;
          v26 = v11;
        }
        while ( v10 < v9 );
      }
      else
      {
        v11 = v26;
      }
      if ( (unsigned int)v11 <= 0x4400 || (MicrosoftTelemetryAssertTriggeredNoArgsKM(v11), v11 = v26, v26 <= 0x4400) )
      {
        v14 = Win32AllocPool(v11, 0x6D715355u);
        v17 = v14;
        if ( v14 )
        {
          UserData[0].Ptr = (ULONGLONG)v8;
          v18 = v14;
          UserData[1].Ptr = (ULONGLONG)&v29;
          *(_QWORD *)&UserData[0].Size = 16LL;
          v19 = 0;
          UserData[2].Ptr = (ULONGLONG)&unk_1C02567A0;
          *(_QWORD *)&UserData[1].Size = 4LL;
          UserData[3].Ptr = (ULONGLONG)&v30;
          UserData[4].Ptr = (ULONGLONG)&v26;
          *(_QWORD *)&UserData[2].Size = 4LL;
          *(_QWORD *)&UserData[3].Size = 4LL;
          for ( *(_QWORD *)&UserData[4].Size = 4LL; v19 < v30; v18 += v20 )
          {
            *(_DWORD *)v18 = *(_DWORD *)(a4 + 16LL * v19 + 4);
            switch ( *(_DWORD *)(a4 + 16LL * v19 + 4) )
            {
              case 1:
                v25 = v26;
                v20 = 16;
                if ( v18 + 16 > v17 + v26 )
                {
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v26);
                  v25 = v26;
                }
                if ( v18 + 16 > v17 + v25 )
                  goto LABEL_53;
                *(_DWORD *)(v18 + 8) = *(_DWORD *)(a4 + 16LL * v19 + 8);
                break;
              case 2:
                v22 = -1LL;
                do
                  ++v22;
                while ( *(_WORD *)(*(_QWORD *)(a4 + 16LL * v19 + 8) + 2 * v22) );
                v23 = v26;
                if ( (unsigned int)v22 > 0x80 )
                  LODWORD(v22) = 128;
                v20 = (2 * v22 + 17) & 0xFFFFFFF8;
                v15 = v18 + v20;
                v27 = v15;
                if ( v15 > v17 + v26 )
                {
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v26);
                  v23 = v26;
                  v15 = v27;
                }
                if ( v15 > v17 + v23 )
                  goto LABEL_53;
                v24 = RtlStringCchCopyW(
                        (unsigned __int16 *)(v18 + 8),
                        (unsigned int)(v22 + 1),
                        *(size_t **)(a4 + 16LL * v19 + 8));
                v15 = 0x80000000LL;
                if ( (int)(v24 + 0x80000000) >= 0 && v24 != -2147483643 )
                  goto LABEL_53;
                break;
              case 3:
                v20 = 16;
                v21 = v26;
                if ( v18 + 16 > v17 + v26 )
                {
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v26);
                  v21 = v26;
                }
                if ( v18 + 16 > v17 + v21 )
                  goto LABEL_53;
                *(_QWORD *)(v18 + 8) = *(_QWORD *)(a4 + 16LL * v19 + 8);
                break;
              default:
                goto LABEL_53;
            }
            *(_DWORD *)(v18 + 4) = v20;
            ++v19;
          }
          UserData[5].Size = v26;
          UserData[5].Ptr = v17;
          UserData[6].Ptr = (ULONGLONG)&a5;
          UserData[5].Reserved = 0;
          *(_QWORD *)&UserData[6].Size = 4LL;
          WinSqmEventWrite(&SQM_ADD_STREAMROW, 7u, UserData);
LABEL_53:
          Win32FreePool(v17, v15, v16);
        }
      }
    }
  }
}
