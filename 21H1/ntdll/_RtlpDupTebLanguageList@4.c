/*
 * XREFs of _RtlpDupTebLanguageList@4 @ 0x4B353D5C
 * Callers:
 *     _RtlSetThreadPreferredUILanguages2@16 @ 0x4B2D66B0 (_RtlSetThreadPreferredUILanguages2@16.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpMuiRegDupLanguageList@8 @ 0x4B2D5E04 (_RtlpMuiRegDupLanguageList@8.c)
 *     _RtlpFreeTebLanguageList@4 @ 0x4B2EBD41 (_RtlpFreeTebLanguageList@4.c)
 *     _RtlpMuiRegDupLanguageConfigList@8 @ 0x4B36B18D (_RtlpMuiRegDupLanguageConfigList@8.c)
 */

PVOID *__thiscall RtlpDupTebLanguageList(int *this)
{
  PVOID *Heap; // esi
  int v3; // eax
  int v4; // eax
  SIZE_T v6; // [esp-4h] [ebp-Ch]

  if ( !this )
    return 0;
  LODWORD(v6) = 8;
  Heap = (PVOID *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v6);
  if ( !Heap )
    return 0;
  if ( *this && (v3 = RtlpMuiRegDupLanguageList(*this), (*Heap = (PVOID)v3) == 0)
    || this[1] && (v4 = RtlpMuiRegDupLanguageConfigList(), (Heap[1] = (PVOID)v4) == 0) )
  {
    RtlpFreeTebLanguageList(Heap);
    return 0;
  }
  return Heap;
}
