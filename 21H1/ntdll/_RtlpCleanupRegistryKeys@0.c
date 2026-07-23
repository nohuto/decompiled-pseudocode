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
  ULONG *v0; // ebx
  unsigned int v1; // edi
  int SystemDefaultUILanguage; // esi
  int v3; // ecx
  ULONG v4; // esi
  PVOID Heap; // ecx
  NTSTATUS v6; // esi
  unsigned int v7; // edx
  wchar_t *v8; // esi
  int InstalledLanguageIndexByName; // eax
  int v10; // eax
  int inited; // eax
  NTSTATUS v12; // eax
  unsigned int v14; // esi
  void *v15; // eax
  HANDLE v16; // eax
  SIZE_T v17; // [esp-4h] [ebp-134h]
  size_t v18; // [esp-4h] [ebp-134h]
  ULONG *v19; // [esp-4h] [ebp-134h]
  char v20; // [esp+Fh] [ebp-121h]
  int v21; // [esp+10h] [ebp-120h]
  ULONG v22; // [esp+14h] [ebp-11Ch]
  HANDLE Handle; // [esp+18h] [ebp-118h] BYREF
  LANGID DefaultUILanguageId[2]; // [esp+1Ch] [ebp-114h] BYREF
  HANDLE KeyHandle; // [esp+20h] [ebp-110h] BYREF
  unsigned int Size; // [esp+24h] [ebp-10Ch]
  PLCID Size_4; // [esp+28h] [ebp-108h] BYREF
  _UNICODE_STRING String; // [esp+2Ch] [ebp-104h] BYREF
  __int16 v29; // [esp+34h] [ebp-FCh] BYREF
  unsigned int v30; // [esp+38h] [ebp-F8h]
  _BYTE v31[8]; // [esp+3Ch] [ebp-F4h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+44h] [ebp-ECh] BYREF
  _OBJECT_ATTRIBUTES v33; // [esp+5Ch] [ebp-D4h] BYREF
  ULONG ResultLength; // [esp+74h] [ebp-BCh] BYREF
  char v35; // [esp+78h] [ebp-B8h] BYREF

  v0 = 0;
  v1 = 0;
  v20 = 0;
  KeyHandle = 0;
  ZwIsUILanguageComitted();
  SystemDefaultUILanguage = RtlpCreateProcessRegistryInfo(&Size_4);
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_31;
  SystemDefaultUILanguage = RtlpGetSystemDefaultUILanguage((LANGID)DefaultUILanguageId, Size_4);
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_31;
  *(_DWORD *)&String.Length = 11272192;
  String.Buffer = (wchar_t *)&v35;
  if ( !RtlLCIDToCultureName(DefaultUILanguageId[0], &String) || !Size_4 )
  {
    SystemDefaultUILanguage = -1073741823;
    goto LABEL_31;
  }
  SystemDefaultUILanguage = RtlUnicodeStringInitWorker(
                              (int)v31,
                              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages",
                              v3,
                              v3);
  if ( SystemDefaultUILanguage < 0 )
  {
LABEL_31:
    if ( KeyHandle )
      NtClose(KeyHandle);
    if ( v1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (ULONG)v0, (PVOID)v1);
  }
  else
  {
    ObjectAttributes.Length = 24;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v31;
    ObjectAttributes.RootDirectory = 0;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    SystemDefaultUILanguage = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
    if ( SystemDefaultUILanguage >= 0 )
    {
      Handle = 0;
      Size = 0;
      v4 = 0;
      LODWORD(v17) = 512;
      v22 = 0;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v17);
      v21 = (int)Heap;
      if ( !Heap )
      {
        SystemDefaultUILanguage = -1073741801;
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
            v6 = ZwEnumerateKey(KeyHandle, v4, KeyBasicInformation, Heap, 0x200u, &ResultLength);
            *(_DWORD *)DefaultUILanguageId = v6;
            if ( v6 < 0 )
            {
LABEL_20:
              if ( Handle )
                NtClose(Handle);
              SystemDefaultUILanguage = v6 != -2147483622 ? *(_DWORD *)DefaultUILanguageId : 0;
              if ( v0 )
              {
                while ( v1 )
                {
                  v16 = (HANDLE)v0[--v1];
                  Handle = v16;
                  if ( v16 )
                  {
                    if ( SystemDefaultUILanguage >= 0 )
                    {
                      v20 = 1;
                      ZwDeleteKey(v16);
                      v16 = Handle;
                    }
                    NtClose(v16);
                  }
                }
                v19 = v0;
                v0 = 0;
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v19);
              }
              if ( SystemDefaultUILanguage >= 0 && v20 )
              {
                NtGetMUIRegistryInfo(2u, v0, v0);
                RtlCleanUpTEBLangLists();
                RtlpInitMuiCriticalSection();
                RtlEnterCriticalSection(&RegistryInfoCritSect);
                SystemDefaultUILanguage = RtlpMuiRegFreeRegistryInfo((int)g_RegInfo, 4095);
                if ( SystemDefaultUILanguage >= 0 )
                {
                  if ( g_RegInfo )
                    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (ULONG)v0, g_RegInfo);
                  g_RegInfo = v0;
                }
                RtlLeaveCriticalSection(&RegistryInfoCritSect);
              }
              v1 = v21;
              goto LABEL_31;
            }
            Heap = (PVOID)v21;
            v4 = ++v22;
            v7 = *(_DWORD *)(v21 + 12);
          }
          while ( v7 + 24 > 0x200 );
          v8 = (wchar_t *)(v21 + 16);
          *(_WORD *)(v21 + 2 * (v7 >> 1) + 16) = 0;
          InstalledLanguageIndexByName = RtlpMuiRegGetInstalledLanguageIndexByName(
                                           (int)Size_4,
                                           (const WCHAR *)(v21 + 16),
                                           0,
                                           &v29);
          Heap = (PVOID)v21;
          if ( InstalledLanguageIndexByName < 0 )
          {
            v10 = _wcsicmp(v8, String.Buffer);
            Heap = (PVOID)v21;
            if ( v10 )
              break;
          }
LABEL_10:
          v4 = v22;
        }
        inited = RtlUnicodeStringInitWorker((int)v31, v8, v21, v21);
        Heap = (PVOID)v21;
        v4 = v22;
        if ( inited >= 0 )
        {
          v33.RootDirectory = KeyHandle;
          v33.ObjectName = (PUNICODE_STRING)v31;
          Handle = 0;
          v33.Length = 24;
          v33.Attributes = 64;
          v33.SecurityDescriptor = 0;
          v33.SecurityQualityOfService = 0;
          v12 = ZwOpenKey(&Handle, 0xF003Fu, &v33);
          Heap = (PVOID)v21;
          if ( v12 >= 0 )
          {
            if ( v0 )
            {
              v14 = Size;
              if ( v1 >= Size )
              {
                v30 = Size + 10;
                v15 = (void *)MuiRegAllocArray_0(v21, Size + 10);
                Size = (unsigned int)v15;
                if ( !v15 )
                {
LABEL_19:
                  v6 = -1073741801;
                  *(_DWORD *)DefaultUILanguageId = -1073741801;
                  goto LABEL_20;
                }
                LODWORD(v18) = v14;
                memcpy(v15, v0, v18);
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v0);
                v0 = (ULONG *)Size;
                Size = v30;
              }
            }
            else
            {
              Size = 10;
              v0 = (ULONG *)MuiRegAllocArray_0(v21, 10);
              if ( !v0 )
                goto LABEL_19;
            }
            Heap = (PVOID)v21;
            v0[v1++] = (ULONG)Handle;
            Handle = 0;
            goto LABEL_10;
          }
        }
      }
    }
  }
  return SystemDefaultUILanguage;
}
