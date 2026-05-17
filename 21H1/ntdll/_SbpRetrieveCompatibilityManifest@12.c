/*
 * XREFs of _SbpRetrieveCompatibilityManifest@12 @ 0x4B2B3DD4
 * Callers:
 *     _SbpDetermineDllContext@8 @ 0x4B2B9AA4 (_SbpDetermineDllContext@8.c)
 * Callees:
 *     _RtlQueryInformationActivationContext@28 @ 0x4B2B4CC0 (_RtlQueryInformationActivationContext@28.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 */

int __fastcall SbpRetrieveCompatibilityManifest(void *a1, int *a2, unsigned int *a3)
{
  int v3; // esi
  int Heap; // edi
  int v5; // ebx
  int v6; // eax
  unsigned int v7; // eax
  int v10; // [esp+10h] [ebp-Ch]
  unsigned int v12; // [esp+18h] [ebp-4h] BYREF

  v3 = 0;
  Heap = *a2;
  *a2 = 0;
  v10 = Heap;
  v5 = a1 != NtCurrentPeb()->ImageBaseAddress ? 1073741826 : 2;
  v6 = RtlQueryInformationActivationContext(v5, a1, 0, 6, 0, 0, &v12);
  if ( v6 < 0 && v6 != -1073741789 )
    return v3;
  v7 = v12;
  if ( !v12 )
    return 1;
  if ( v12 > *a3 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8, v12);
    if ( !Heap )
      return v3;
    v7 = v12;
  }
  if ( (int)RtlQueryInformationActivationContext(v5, a1, 0, 6, Heap, v7, &v12) >= 0 )
  {
    *a2 = Heap;
    *a3 = v12;
    return 1;
  }
  if ( Heap && Heap != v10 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v3;
}
