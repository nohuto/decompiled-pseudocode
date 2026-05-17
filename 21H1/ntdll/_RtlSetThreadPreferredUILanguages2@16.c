/*
 * XREFs of _RtlSetThreadPreferredUILanguages2@16 @ 0x4B2D66B0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlGetThreadPreferredUILanguages@16 @ 0x4B2D2D80 (_RtlGetThreadPreferredUILanguages@16.c)
 *     _RtlpMuiRegFreeLanguageList@4 @ 0x4B2D32FD (_RtlpMuiRegFreeLanguageList@4.c)
 *     _RtlpMuiRegDupLanguageList@8 @ 0x4B2D5E04 (_RtlpMuiRegDupLanguageList@8.c)
 *     _RtlSetThreadPreferredUILanguages@12 @ 0x4B2D64B0 (_RtlSetThreadPreferredUILanguages@12.c)
 *     _RtlpFreeTebLanguageList@4 @ 0x4B2EBD41 (_RtlpFreeTebLanguageList@4.c)
 *     _RtlpDupTebLanguageList@4 @ 0x4B353D5C (_RtlpDupTebLanguageList@4.c)
 */

int __stdcall RtlSetThreadPreferredUILanguages2(int a1, int a2, int *a3, int *a4)
{
  int Heap; // esi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // edi
  _BYTE v10[4]; // [esp+4h] [ebp-8h] BYREF
  int v11; // [esp+8h] [ebp-4h] BYREF

  if ( !a4 )
    return RtlSetThreadPreferredUILanguages(a1, a2, a3);
  *a4 = 0;
  v11 = 0;
  RtlGetThreadPreferredUILanguages(a1 | 0x30, (int)v10, 0, &v11);
  Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, 16);
  if ( !Heap )
    return -1073741801;
  if ( NtCurrentTeb()->PreferredLanguages )
  {
    v6 = RtlpMuiRegDupLanguageList((int)NtCurrentTeb()->PreferredLanguages);
    *(_DWORD *)Heap = v6;
    if ( !v6 )
      goto LABEL_20;
    *(_DWORD *)(v6 + 32) &= ~0x40u;
  }
  if ( NtCurrentTeb()->MergedPrefLanguages )
  {
    v7 = RtlpMuiRegDupLanguageList((int)NtCurrentTeb()->MergedPrefLanguages);
    *(_DWORD *)(Heap + 4) = v7;
    if ( !v7 )
      goto LABEL_20;
    *(_DWORD *)(v7 + 32) &= ~0x40u;
  }
  if ( !NtCurrentTeb()->UserPrefLanguages )
    goto LABEL_14;
  v8 = RtlpDupTebLanguageList(NtCurrentTeb()->UserPrefLanguages);
  *(_DWORD *)(Heap + 8) = v8;
  if ( v8 )
  {
    *(_DWORD *)(*(_DWORD *)v8 + 32) &= ~0x40u;
LABEL_14:
    *(_DWORD *)(Heap + 12) = NtCurrentTeb()->ClientId.UniqueThread;
    v9 = RtlSetThreadPreferredUILanguages(a1, a2, a3);
    if ( v9 >= 0 )
    {
      *a4 = Heap;
      Heap = 0;
    }
    goto LABEL_16;
  }
LABEL_20:
  v9 = -1073741801;
LABEL_16:
  if ( Heap )
  {
    RtlpMuiRegFreeLanguageList(*(_BYTE **)Heap);
    RtlpMuiRegFreeLanguageList(*(_BYTE **)(Heap + 4));
    RtlpFreeTebLanguageList(*(_DWORD *)(Heap + 8));
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  return v9;
}
