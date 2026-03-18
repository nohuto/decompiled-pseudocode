/*
 * XREFs of KiValidateComponentName @ 0x1405136D0
 * Callers:
 *     KiInvokeBugCheckAddTriageDumpDataCallbacks @ 0x14051317C (KiInvokeBugCheckAddTriageDumpDataCallbacks.c)
 *     IopLiveDumpAddTriageDumpData @ 0x1409A8410 (IopLiveDumpAddTriageDumpData.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x1402594E0 (MmIsAddressValidEx.c)
 *     RtlStringCbLengthA @ 0x140504DBC (RtlStringCbLengthA.c)
 */

char __fastcall KiValidateComponentName(__int64 psz, _DWORD *a2)
{
  unsigned __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rcx
  size_t pcbLength; // [rsp+40h] [rbp+18h] BYREF

  pcbLength = 0LL;
  if ( !MmIsAddressValidEx(psz) )
    return 0;
  v4 = psz & 0xFFFFFFFFFFFFF000uLL;
  v5 = 257;
  if ( psz - (psz & 0xFFFFFFFFFFFFF000uLL) > 0xEFF )
  {
    v6 = -1LL;
    if ( v4 + 4096 >= v4 )
      v6 = v4 + 4096;
    v7 = 0LL;
    if ( v4 + 4096 >= v4 )
      v7 = v6;
    if ( !v7 || !MmIsAddressValidEx(v7) )
      v5 = v4 - psz + 4096;
  }
  if ( RtlStringCbLengthA((STRSAFE_PCNZCH)psz, v5, &pcbLength) < 0 )
    return 0;
  *a2 = pcbLength;
  return 1;
}
