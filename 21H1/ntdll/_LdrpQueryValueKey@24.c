/*
 * XREFs of _LdrpQueryValueKey@24 @ 0x4B2AD60A
 * Callers:
 *     __RtlpMuiRegLoadInstalledFromKey@8 @ 0x4B2AC6E3 (__RtlpMuiRegLoadInstalledFromKey@8.c)
 *     _RtlpLoadInstallLanguageFallback@12 @ 0x4B2ACC28 (_RtlpLoadInstallLanguageFallback@12.c)
 *     _RtlpMuiRegAddAlternateCodePage@8 @ 0x4B2ACD4A (_RtlpMuiRegAddAlternateCodePage@8.c)
 *     _RtlpMuiRegLoadPreferredUILanguages@24 @ 0x4B2AD2AC (_RtlpMuiRegLoadPreferredUILanguages@24.c)
 *     __IsMachineLanguageListInMutableLocation@0 @ 0x4B2ADAEB (__IsMachineLanguageListInMutableLocation@0.c)
 *     _RtlpGetUserOrMachineUILanguage4NLS@12 @ 0x4B36A9A0 (_RtlpGetUserOrMachineUILanguage4NLS@12.c)
 *     _RtlpHasMachineUILock@8 @ 0x4B36ABB1 (_RtlpHasMachineUILock@8.c)
 *     _RtlpLoadPolicyLanguageSpec@16 @ 0x4B36AC26 (_RtlpLoadPolicyLanguageSpec@16.c)
 *     _RtlpMuiRegLoadMachinePreferredUILanguages@16 @ 0x4B36BB58 (_RtlpMuiRegLoadMachinePreferredUILanguages@16.c)
 *     __RtlpMuiRegInitLIPLanguage@12 @ 0x4B36C534 (__RtlpMuiRegInitLIPLanguage@12.c)
 *     __RtlpMuiRegPopulateBaseLanguages@20 @ 0x4B36C81E (__RtlpMuiRegPopulateBaseLanguages@20.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __fastcall LdrpQueryValueKey(HANDLE a1, _UNICODE_STRING *a2, _DWORD *a3, void *a4, ULONG *a5, int a6)
{
  ULONG v7; // eax
  bool v8; // zf
  ULONG v9; // eax
  _DWORD *Heap; // eax
  _DWORD *v11; // ebx
  NTSTATUS v12; // eax
  int v13; // edi
  ULONG v14; // eax
  SIZE_T v16; // [esp-4h] [ebp-1Ch]
  ULONG ResultLength; // [esp+Ch] [ebp-Ch] BYREF
  HANDLE KeyHandle; // [esp+10h] [ebp-8h]
  ULONG Length; // [esp+14h] [ebp-4h]

  KeyHandle = a1;
  if ( !a4 )
  {
    if ( !a5 )
    {
      v7 = 0;
LABEL_4:
      ResultLength = 0;
      v8 = v7 == -12;
      v9 = v7 + 12;
      Length = v9;
      if ( v8 )
      {
        v11 = 0;
      }
      else
      {
        LODWORD(v16) = v9;
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v16);
        a1 = KeyHandle;
        v11 = Heap;
        v9 = Length;
      }
      if ( !v11 )
        return -1073741670;
      v12 = ZwQueryValueKey(a1, a2, KeyValuePartialInformation, v11, v9, &ResultLength);
      v13 = v12;
      if ( v12 != -1073741772 )
      {
        if ( v12 < 0 )
        {
LABEL_15:
          if ( v13 != -2147483643 )
          {
LABEL_20:
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
            return v13;
          }
LABEL_16:
          if ( a5 )
            *a5 = v11[2];
          if ( a3 )
            *a3 = v11[1];
          goto LABEL_20;
        }
        if ( a4 && a5 )
        {
          v14 = v11[2];
          if ( v14 > *a5 )
          {
            v13 = -2147483643;
            goto LABEL_16;
          }
          if ( v14 <= Length )
          {
            LODWORD(v16) = v11[2];
            memcpy(a4, v11 + 3, v16);
          }
        }
      }
      if ( v13 >= 0 )
        goto LABEL_16;
      goto LABEL_15;
    }
LABEL_3:
    v7 = *a5;
    goto LABEL_4;
  }
  if ( a5 )
    goto LABEL_3;
  return -1073741811;
}
