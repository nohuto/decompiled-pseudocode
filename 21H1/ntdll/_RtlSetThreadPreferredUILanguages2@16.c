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

int __userpurge RtlSetThreadPreferredUILanguages2@<eax>(int a1@<edi>, int a2, int a3, int *a4, _DWORD *a5)
{
  PVOID Heap; // esi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // edi
  SIZE_T v11; // [esp-Ch] [ebp-18h]
  ULONG NumberOfLanguages; // [esp+4h] [ebp-8h] BYREF
  ULONG ReturnLength; // [esp+8h] [ebp-4h] BYREF

  if ( !a5 )
    return RtlSetThreadPreferredUILanguages(a2, a3, a4);
  HIDWORD(v11) = a1;
  *a5 = 0;
  ReturnLength = 0;
  RtlGetThreadPreferredUILanguages(a2 | 0x30, &NumberOfLanguages, 0, &ReturnLength);
  LODWORD(v11) = 16;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v11);
  if ( !Heap )
    return -1073741801;
  if ( NtCurrentTeb()->PreferredLanguages )
  {
    v7 = RtlpMuiRegDupLanguageList((int)NtCurrentTeb()->PreferredLanguages);
    *(_DWORD *)Heap = v7;
    if ( !v7 )
      goto LABEL_19;
    *(_DWORD *)(v7 + 32) &= ~0x40u;
  }
  if ( NtCurrentTeb()->MergedPrefLanguages )
  {
    v8 = RtlpMuiRegDupLanguageList((int)NtCurrentTeb()->MergedPrefLanguages);
    *((_DWORD *)Heap + 1) = v8;
    if ( !v8 )
      goto LABEL_19;
    *(_DWORD *)(v8 + 32) &= ~0x40u;
  }
  if ( !NtCurrentTeb()->UserPrefLanguages )
    goto LABEL_14;
  v9 = RtlpDupTebLanguageList(NtCurrentTeb()->UserPrefLanguages);
  *((_DWORD *)Heap + 2) = v9;
  if ( v9 )
  {
    *(_DWORD *)(*(_DWORD *)v9 + 32) &= ~0x40u;
LABEL_14:
    *((_DWORD *)Heap + 3) = NtCurrentTeb()->ClientId.UniqueThread;
    v10 = RtlSetThreadPreferredUILanguages(a2, a3, a4);
    if ( v10 >= 0 )
    {
      *a5 = Heap;
      Heap = 0;
    }
    goto LABEL_16;
  }
LABEL_19:
  v10 = -1073741801;
LABEL_16:
  if ( Heap )
  {
    RtlpMuiRegFreeLanguageList(*(PVOID *)Heap);
    RtlpMuiRegFreeLanguageList(*((PVOID *)Heap + 1));
    RtlpFreeTebLanguageList(*((PVOID *)Heap + 2));
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  return v10;
}
