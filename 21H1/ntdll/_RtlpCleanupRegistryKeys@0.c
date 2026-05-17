/*
 * XREFs of _RtlpCleanupRegistryKeys@0 @ 0x4B353540
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpMuiRegFreeRegistryInfo@8 @ 0x4B2ACEB0 (_RtlpMuiRegFreeRegistryInfo@8.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpCreateProcessRegistryInfo@4 @ 0x4B2D4050 (_RtlpCreateProcessRegistryInfo@4.c)
 *     _RtlpMuiRegGetInstalledLanguageIndexByName@16 @ 0x4B2D4753 (_RtlpMuiRegGetInstalledLanguageIndexByName@16.c)
 *     _RtlLCIDToCultureName@8 @ 0x4B2D4F10 (_RtlLCIDToCultureName@8.c)
 *     _RtlpGetSystemDefaultUILanguage@8 @ 0x4B2D5D90 (_RtlpGetSystemDefaultUILanguage@8.c)
 *     _RtlpInitMuiCriticalSection@8 @ 0x4B2D5E84 (_RtlpInitMuiCriticalSection@8.c)
 *     _RtlCleanUpTEBLangLists@0 @ 0x4B2EBCA0 (_RtlCleanUpTEBLangLists@0.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwEnumerateKey@24 @ 0x4B2F2CA0 (_ZwEnumerateKey@24.c)
 *     _ZwDeleteKey@4 @ 0x4B2F36B0 (_ZwDeleteKey@4.c)
 *     _NtGetMUIRegistryInfo@12 @ 0x4B2F38E0 (_NtGetMUIRegistryInfo@12.c)
 *     _ZwIsUILanguageComitted@0 @ 0x4B2F39B0 (_ZwIsUILanguageComitted@0.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     __wcsicmp @ 0x4B2F7990 (__wcsicmp.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     RtlUnicodeStringInitWorker @ 0x4B32C921 (RtlUnicodeStringInitWorker.c)
 *     _MuiRegAllocArray_0 @ 0x4B35616E (_MuiRegAllocArray_0.c)
 */

int __stdcall RtlpCleanupRegistryKeys()
{
  _DWORD *v0; // ebx
  size_t v1; // edi
  int ProcessRegistryInfo; // esi
  int v3; // ecx
  int v4; // esi
  int Heap; // ecx
  int v6; // esi
  unsigned int v7; // edx
  wchar_t *v8; // esi
  int InstalledLanguageIndexByName; // eax
  int v10; // eax
  int inited; // eax
  int v12; // eax
  size_t v14; // esi
  void *v15; // eax
  HANDLE v16; // eax
  int v17; // [esp-4h] [ebp-134h]
  char v18; // [esp+Fh] [ebp-121h]
  int v19; // [esp+10h] [ebp-120h]
  int v20; // [esp+14h] [ebp-11Ch]
  HANDLE Handle; // [esp+18h] [ebp-118h] BYREF
  int v22; // [esp+1Ch] [ebp-114h] BYREF
  HANDLE v23; // [esp+20h] [ebp-110h] BYREF
  size_t Size; // [esp+24h] [ebp-10Ch]
  _WORD *v25; // [esp+28h] [ebp-108h] BYREF
  int v26; // [esp+2Ch] [ebp-104h] BYREF
  wchar_t *String2; // [esp+30h] [ebp-100h]
  __int16 v28; // [esp+34h] [ebp-FCh] BYREF
  size_t v29; // [esp+38h] [ebp-F8h]
  _BYTE v30[8]; // [esp+3Ch] [ebp-F4h] BYREF
  _DWORD v31[6]; // [esp+44h] [ebp-ECh] BYREF
  _DWORD v32[6]; // [esp+5Ch] [ebp-D4h] BYREF
  _BYTE v33[4]; // [esp+74h] [ebp-BCh] BYREF
  char v34; // [esp+78h] [ebp-B8h] BYREF

  v0 = 0;
  v1 = 0;
  v18 = 0;
  v23 = 0;
  ZwIsUILanguageComitted();
  ProcessRegistryInfo = RtlpCreateProcessRegistryInfo((int *)&v25);
  if ( ProcessRegistryInfo < 0 )
    goto LABEL_31;
  ProcessRegistryInfo = RtlpGetSystemDefaultUILanguage(&v22, v25);
  if ( ProcessRegistryInfo < 0 )
    goto LABEL_31;
  v26 = 11272192;
  String2 = (wchar_t *)&v34;
  if ( !RtlLCIDToCultureName((unsigned __int16)v22, (unsigned __int16 *)&v26) || !v25 )
  {
    ProcessRegistryInfo = -1073741823;
    goto LABEL_31;
  }
  ProcessRegistryInfo = RtlUnicodeStringInitWorker(
                          (int)v30,
                          L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages",
                          v3,
                          v3);
  if ( ProcessRegistryInfo < 0 )
  {
LABEL_31:
    if ( v23 )
      NtClose(v23);
    if ( v1 )
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, (int)v0, v1);
  }
  else
  {
    v31[0] = 24;
    v31[2] = v30;
    v31[1] = 0;
    v31[3] = 64;
    v31[4] = 0;
    v31[5] = 0;
    ProcessRegistryInfo = ZwOpenKey((int)&v23, 983103, (int)v31);
    if ( ProcessRegistryInfo >= 0 )
    {
      Handle = 0;
      Size = 0;
      v4 = 0;
      v20 = 0;
      Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, 512);
      v19 = Heap;
      if ( !Heap )
      {
        ProcessRegistryInfo = -1073741801;
        v1 = 0;
        v0 = 0;
        goto LABEL_31;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          do
          {
            v6 = ZwEnumerateKey((int)v23, v4, 0, Heap, 512, (int)v33);
            v22 = v6;
            if ( v6 < 0 )
            {
LABEL_20:
              if ( Handle )
                NtClose(Handle);
              ProcessRegistryInfo = v6 != -2147483622 ? v22 : 0;
              if ( v0 )
              {
                while ( v1 )
                {
                  v16 = (HANDLE)v0[--v1];
                  Handle = v16;
                  if ( v16 )
                  {
                    if ( ProcessRegistryInfo >= 0 )
                    {
                      v18 = 1;
                      ZwDeleteKey((int)v16);
                      v16 = Handle;
                    }
                    NtClose(v16);
                  }
                }
                v17 = (int)v0;
                v0 = 0;
                RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v17);
              }
              if ( ProcessRegistryInfo >= 0 && v18 )
              {
                NtGetMUIRegistryInfo(2, (int)v0, (int)v0);
                RtlCleanUpTEBLangLists();
                RtlpInitMuiCriticalSection();
                RtlEnterCriticalSection((int)&RegistryInfoCritSect);
                ProcessRegistryInfo = RtlpMuiRegFreeRegistryInfo(g_RegInfo, 4095);
                if ( ProcessRegistryInfo >= 0 )
                {
                  if ( g_RegInfo )
                    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, (int)v0, g_RegInfo);
                  g_RegInfo = (int)v0;
                }
                RtlLeaveCriticalSection((int)&RegistryInfoCritSect);
              }
              v1 = v19;
              goto LABEL_31;
            }
            Heap = v19;
            v4 = ++v20;
            v7 = *(_DWORD *)(v19 + 12);
          }
          while ( v7 + 24 > 0x200 );
          v8 = (wchar_t *)(v19 + 16);
          *(_WORD *)(v19 + 2 * (v7 >> 1) + 16) = 0;
          InstalledLanguageIndexByName = RtlpMuiRegGetInstalledLanguageIndexByName(
                                           (int)v25,
                                           (const WCHAR *)(v19 + 16),
                                           0,
                                           &v28);
          Heap = v19;
          if ( InstalledLanguageIndexByName < 0 )
          {
            v10 = _wcsicmp(v8, String2);
            Heap = v19;
            if ( v10 )
              break;
          }
LABEL_10:
          v4 = v20;
        }
        inited = RtlUnicodeStringInitWorker((int)v30, v8, v19, v19);
        Heap = v19;
        v4 = v20;
        if ( inited >= 0 )
        {
          v32[1] = v23;
          v32[2] = v30;
          Handle = 0;
          v32[0] = 24;
          v32[3] = 64;
          v32[4] = 0;
          v32[5] = 0;
          v12 = ZwOpenKey((int)&Handle, 983103, (int)v32);
          Heap = v19;
          if ( v12 >= 0 )
          {
            if ( v0 )
            {
              v14 = Size;
              if ( v1 >= Size )
              {
                v29 = Size + 10;
                v15 = (void *)MuiRegAllocArray_0(v19, Size + 10);
                Size = (size_t)v15;
                if ( !v15 )
                {
LABEL_19:
                  v6 = -1073741801;
                  v22 = -1073741801;
                  goto LABEL_20;
                }
                memcpy(v15, v0, v14);
                RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v0);
                v0 = (_DWORD *)Size;
                Size = v29;
              }
            }
            else
            {
              Size = 10;
              v0 = (_DWORD *)MuiRegAllocArray_0(v19, 10);
              if ( !v0 )
                goto LABEL_19;
            }
            Heap = v19;
            v0[v1++] = Handle;
            Handle = 0;
            goto LABEL_10;
          }
        }
      }
    }
  }
  return ProcessRegistryInfo;
}
