/*
 * XREFs of WinSqmAddToStreamEx @ 0x1C013C700
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0032934 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     Win32AllocPool @ 0x1C003C610 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     WinSqmEventEnabled @ 0x1C00720A8 (WinSqmEventEnabled.c)
 *     ?IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z @ 0x1C0072100 (-IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z.c)
 *     WinSqmEventWrite @ 0x1C00B8C30 (WinSqmEventWrite.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall WinSqmAddToStreamEx(struct _GUID *a1, int a2, unsigned int a3, __int64 a4, char a5)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _GUID *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // r10d
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  ULONGLONG v23; // rbx
  __int64 v24; // rdi
  unsigned int v25; // r13d
  unsigned int v26; // r12d
  ULONG v27; // ecx
  __int64 v28; // r15
  ULONG v29; // ecx
  ULONGLONG v30; // rdx
  int v31; // eax
  ULONG v32; // ecx
  ULONG v33; // [rsp+20h] [rbp-81h] BYREF
  ULONGLONG v34; // [rsp+28h] [rbp-79h]
  struct _EVENT_DATA_DESCRIPTOR UserData[7]; // [rsp+30h] [rbp-71h] BYREF
  int v36; // [rsp+108h] [rbp+67h] BYREF
  unsigned int v37; // [rsp+110h] [rbp+6Fh] BYREF

  v37 = a3;
  v36 = a2;
  memset(UserData, 0, sizeof(UserData));
  v33 = 0;
  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9, v10);
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
    if ( (unsigned int)WinSqmEventEnabled(&SQM_ADD_STREAMROW, v11) )
    {
      v14 = v37;
      v15 = 0;
      if ( v37 > 0x40 )
        v14 = 64LL;
      v37 = v14;
      if ( (_DWORD)v14 )
      {
        LODWORD(v16) = v33;
        do
        {
          v13 = 2LL * v15;
          v12 = (unsigned int)(*(_DWORD *)(a4 + 16LL * v15 + 4) - 1);
          if ( *(_DWORD *)(a4 + 16LL * v15 + 4) == 1 )
          {
            v17 = 19;
          }
          else
          {
            v12 = (unsigned int)(*(_DWORD *)(a4 + 16LL * v15 + 4) - 2);
            if ( *(_DWORD *)(a4 + 16LL * v15 + 4) == 2 )
            {
              v12 = *(_QWORD *)(a4 + 16LL * v15 + 8);
              v18 = -1LL;
              do
                ++v18;
              while ( *(_WORD *)(v12 + 2 * v18) );
              if ( (unsigned int)v18 > 0x80 )
                LODWORD(v18) = 128;
              v17 = 2 * v18 + 17;
            }
            else
            {
              if ( *(_DWORD *)(a4 + 16LL * v15 + 4) != 3 )
                return;
              v17 = 23;
            }
          }
          ++v15;
          v16 = (v17 & 0xFFFFFFF8) + (unsigned int)v16;
          v33 = v16;
        }
        while ( v15 < (unsigned int)v14 );
      }
      else
      {
        v16 = v33;
      }
      if ( (unsigned int)v16 <= 0x4400
        || (MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v12, v13, v14), v16 = v33, v33 <= 0x4400) )
      {
        v19 = Win32AllocPool(v16, 0x6D715355u);
        v23 = v19;
        if ( v19 )
        {
          UserData[0].Ptr = (ULONGLONG)v11;
          v24 = v19;
          UserData[1].Ptr = (ULONGLONG)&v36;
          *(_QWORD *)&UserData[0].Size = 16LL;
          v25 = 0;
          UserData[2].Ptr = (ULONGLONG)&unk_1C024E7E0;
          *(_QWORD *)&UserData[1].Size = 4LL;
          UserData[3].Ptr = (ULONGLONG)&v37;
          UserData[4].Ptr = (ULONGLONG)&v33;
          *(_QWORD *)&UserData[2].Size = 4LL;
          *(_QWORD *)&UserData[3].Size = 4LL;
          for ( *(_QWORD *)&UserData[4].Size = 4LL; v25 < v37; v24 += v26 )
          {
            *(_DWORD *)v24 = *(_DWORD *)(a4 + 16LL * v25 + 4);
            switch ( *(_DWORD *)(a4 + 16LL * v25 + 4) )
            {
              case 1:
                v32 = v33;
                v26 = 16;
                if ( v24 + 16 > v23 + v33 )
                {
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v20, v21, v22);
                  v32 = v33;
                }
                if ( v24 + 16 > v23 + v32 )
                  goto LABEL_53;
                *(_DWORD *)(v24 + 8) = *(_DWORD *)(a4 + 16LL * v25 + 8);
                break;
              case 2:
                v28 = -1LL;
                do
                  ++v28;
                while ( *(_WORD *)(*(_QWORD *)(a4 + 16LL * v25 + 8) + 2 * v28) );
                v29 = v33;
                if ( (unsigned int)v28 > 0x80 )
                  LODWORD(v28) = 128;
                v26 = (2 * v28 + 17) & 0xFFFFFFF8;
                v30 = v24 + v26;
                v34 = v30;
                if ( v30 > v23 + v33 )
                {
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v30, v21, v22);
                  v29 = v33;
                  v30 = v34;
                }
                if ( v30 > v23 + v29 )
                  goto LABEL_53;
                v31 = RtlStringCchCopyW(
                        (unsigned __int16 *)(v24 + 8),
                        (unsigned int)(v28 + 1),
                        *(size_t **)(a4 + 16LL * v25 + 8));
                v20 = 0x80000000LL;
                if ( (int)(v31 + 0x80000000) >= 0 && v31 != -2147483643 )
                  goto LABEL_53;
                break;
              case 3:
                v26 = 16;
                v27 = v33;
                if ( v24 + 16 > v23 + v33 )
                {
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v20, v21, v22);
                  v27 = v33;
                }
                if ( v24 + 16 > v23 + v27 )
                  goto LABEL_53;
                *(_QWORD *)(v24 + 8) = *(_QWORD *)(a4 + 16LL * v25 + 8);
                break;
              default:
                goto LABEL_53;
            }
            *(_DWORD *)(v24 + 4) = v26;
            ++v25;
          }
          UserData[5].Size = v33;
          UserData[5].Ptr = v23;
          UserData[6].Ptr = (ULONGLONG)&a5;
          UserData[5].Reserved = 0;
          *(_QWORD *)&UserData[6].Size = 4LL;
          WinSqmEventWrite(&SQM_ADD_STREAMROW, 7u, UserData);
LABEL_53:
          Win32FreePool(v23);
        }
      }
    }
  }
}
