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

int __fastcall LdrpQueryValueKey(int a1, int a2, _DWORD *a3, void *a4, unsigned int *a5, int a6)
{
  unsigned int v7; // eax
  bool v8; // zf
  unsigned int v9; // eax
  _DWORD *Heap; // eax
  _DWORD *v11; // ebx
  int v12; // eax
  int v13; // edi
  unsigned int v14; // eax
  int v16; // [esp+Ch] [ebp-Ch] BYREF
  int v17; // [esp+10h] [ebp-8h]
  unsigned int v18; // [esp+14h] [ebp-4h]

  v17 = a1;
  if ( !a4 )
  {
    if ( !a5 )
    {
      v7 = 0;
LABEL_4:
      v16 = 0;
      v8 = v7 == -12;
      v9 = v7 + 12;
      v18 = v9;
      if ( v8 )
      {
        v11 = 0;
      }
      else
      {
        Heap = (_DWORD *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8, v9);
        a1 = v17;
        v11 = Heap;
        v9 = v18;
      }
      if ( !v11 )
        return -1073741670;
      v12 = ZwQueryValueKey(a1, a2, 2, v11, v9, &v16);
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
          if ( v14 <= v18 )
            memcpy(a4, v11 + 3, v11[2]);
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
