/*
 * XREFs of RtlpCleanupRegistryKeys @ 0x1800EFDE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180036490 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18003AA98 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlLCIDToCultureName @ 0x18003B020 (RtlLCIDToCultureName.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x18003C5B0 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlCleanUpTEBLangLists @ 0x18006EDC0 (RtlCleanUpTEBLangLists.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18006F2A0 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpInitMuiCriticalSection @ 0x18006F9A8 (RtlpInitMuiCriticalSection.c)
 *     RtlStringLengthWorkerW @ 0x18007BBEC (RtlStringLengthWorkerW.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     _wcsicmp @ 0x18008DD70 (_wcsicmp.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     NtOpenKey @ 0x18009D2F0 (NtOpenKey.c)
 *     NtEnumerateKey @ 0x18009D6F0 (NtEnumerateKey.c)
 *     NtDeleteKey @ 0x18009EB00 (NtDeleteKey.c)
 *     ZwGetMUIRegistryInfo @ 0x18009EF60 (ZwGetMUIRegistryInfo.c)
 *     NtIsUILanguageComitted @ 0x18009F100 (NtIsUILanguageComitted.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 *     _MuiRegAllocArray_0 @ 0x1800F20A8 (_MuiRegAllocArray_0.c)
 */

__int64 RtlpCleanupRegistryKeys()
{
  unsigned int v0; // r13d
  __int64 Heap; // r15
  int SystemDefaultUILanguage; // ebx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdi
  void *v6; // r11
  int v7; // r12d
  unsigned int v8; // edi
  char *v9; // r14
  int v10; // esi
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  HANDLE *v13; // rsi
  HANDLE v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  char *v18; // rax
  char *v19; // rbx
  __int64 v20; // rcx
  char v21; // [rsp+38h] [rbp-D0h]
  unsigned __int16 v22; // [rsp+3Ch] [rbp-CCh] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C8h]
  HANDLE v24; // [rsp+48h] [rbp-C0h]
  HANDLE v25[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+70h] [rbp-98h] BYREF
  wchar_t *String2; // [rsp+78h] [rbp-90h]
  __int64 v30; // [rsp+88h] [rbp-80h] BYREF
  __int64 v31; // [rsp+90h] [rbp-78h] BYREF
  int v32; // [rsp+98h] [rbp-70h]
  __int64 v33; // [rsp+A0h] [rbp-68h]
  HANDLE *v34; // [rsp+A8h] [rbp-60h]
  int v35; // [rsp+B0h] [rbp-58h]
  __int128 v36; // [rsp+B8h] [rbp-50h]
  int v37; // [rsp+C8h] [rbp-40h]
  HANDLE v38; // [rsp+D0h] [rbp-38h]
  HANDLE *v39; // [rsp+D8h] [rbp-30h]
  int v40; // [rsp+E0h] [rbp-28h]
  __int128 v41; // [rsp+E8h] [rbp-20h]
  char v42; // [rsp+F8h] [rbp-10h] BYREF

  v0 = 0;
  Heap = 0LL;
  v21 = 0;
  v24 = 0LL;
  NtIsUILanguageComitted();
  SystemDefaultUILanguage = RtlpCreateProcessRegistryInfo(&v27);
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_41;
  v5 = v27;
  SystemDefaultUILanguage = RtlpGetSystemDefaultUILanguage(&v22, v27, v3, v4);
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_41;
  String2 = (wchar_t *)&v42;
  LODWORD(v28) = 11272192;
  if ( !RtlLCIDToCultureName(v22, (__int64)&v28) || !v5 )
  {
    SystemDefaultUILanguage = -1073741823;
    goto LABEL_41;
  }
  *(_OWORD *)v25 = 0LL;
  SystemDefaultUILanguage = RtlStringLengthWorkerW(
                              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages",
                              0x7FFFLL,
                              &v30);
  if ( SystemDefaultUILanguage < 0 )
  {
LABEL_41:
    if ( v24 )
      NtClose(v24);
    if ( Heap )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  else
  {
    v25[1] = v6;
    LOWORD(v25[0]) = 2 * v30;
    WORD1(v25[0]) = 2 * v30 + 2;
    v32 = 48;
    v34 = v25;
    v33 = 0LL;
    v35 = 64;
    v36 = 0LL;
    SystemDefaultUILanguage = NtOpenKey();
    if ( SystemDefaultUILanguage >= 0 )
    {
      Handle = 0LL;
      v7 = 0;
      v8 = 0;
      v9 = 0LL;
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 512LL);
      if ( !Heap )
      {
        SystemDefaultUILanguage = -1073741801;
        goto LABEL_41;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v10 = NtEnumerateKey();
            if ( v10 < 0 )
            {
LABEL_21:
              if ( Handle )
                NtClose(Handle);
              SystemDefaultUILanguage = 0;
              if ( v10 != -2147483622 )
                SystemDefaultUILanguage = v10;
              if ( v9 )
              {
                if ( v8 )
                {
                  v13 = (HANDLE *)&v9[8 * v8];
                  do
                  {
                    --v13;
                    --v8;
                    v14 = *v13;
                    Handle = v14;
                    if ( v14 )
                    {
                      if ( SystemDefaultUILanguage >= 0 )
                      {
                        v21 = 1;
                        NtDeleteKey();
                        v14 = Handle;
                      }
                      NtClose(v14);
                    }
                  }
                  while ( v8 );
                }
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v9);
              }
              if ( SystemDefaultUILanguage >= 0 && v21 )
              {
                ZwGetMUIRegistryInfo();
                RtlCleanUpTEBLangLists();
                RtlpInitMuiCriticalSection();
                RtlEnterCriticalSection((__int64)&RegistryInfoCritSect);
                SystemDefaultUILanguage = RtlpMuiRegFreeRegistryInfo(g_RegInfo, 0xFFFu);
                if ( SystemDefaultUILanguage >= 0 )
                {
                  if ( g_RegInfo )
                    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, g_RegInfo);
                  g_RegInfo = 0LL;
                }
                RtlLeaveCriticalSection((__int64)&RegistryInfoCritSect, v15, v16);
              }
              goto LABEL_41;
            }
            v11 = *(unsigned int *)(Heap + 12);
            ++v7;
            if ( v11 + 24 <= 0x200 )
            {
              *(_WORD *)(Heap + 2 * (v11 >> 1) + 16) = 0;
              if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName(v27, (const WCHAR *)(Heap + 16), 0, &v26) < 0 )
              {
                if ( wcsicmp((const wchar_t *)(Heap + 16), String2) )
                  break;
              }
            }
          }
          *(_OWORD *)v25 = 0LL;
          if ( Heap != -16 )
            break;
LABEL_17:
          v38 = v24;
          Handle = 0LL;
          v39 = v25;
          v37 = 48;
          v40 = 64;
          v41 = 0LL;
          if ( (int)NtOpenKey() >= 0 )
          {
            if ( v9 )
            {
              if ( v8 >= v0 )
              {
                v18 = (char *)MuiRegAllocArray_0(v12, v0 + 10);
                v19 = v18;
                if ( !v18 )
                {
LABEL_20:
                  v10 = -1073741801;
                  goto LABEL_21;
                }
                memmove(v18, v9, v0);
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v9);
                v0 += 10;
                v9 = v19;
              }
            }
            else
            {
              v0 = 10;
              v9 = (char *)MuiRegAllocArray_0(v12, 10LL);
              if ( !v9 )
                goto LABEL_20;
            }
            v20 = v8++;
            *(_QWORD *)&v9[8 * v20] = Handle;
            Handle = 0LL;
          }
        }
        if ( (int)RtlStringLengthWorkerW((_WORD *)(Heap + 16), 0x7FFFLL, &v31) >= 0 )
        {
          v25[1] = (HANDLE)(Heap + 16);
          LOWORD(v25[0]) = 2 * v31;
          WORD1(v25[0]) = 2 * v31 + 2;
          goto LABEL_17;
        }
      }
    }
  }
  return (unsigned int)SystemDefaultUILanguage;
}
