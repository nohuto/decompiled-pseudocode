/*
 * XREFs of _SbpRetrieveCompatibilityManifest@12 @ 0x4B2B3DD4
 * Callers:
 *     _SbpDetermineDllContext@8 @ 0x4B2B9AA4 (_SbpDetermineDllContext@8.c)
 * Callees:
 *     _RtlQueryInformationActivationContext@28 @ 0x4B2B4CC0 (_RtlQueryInformationActivationContext@28.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 */

int __fastcall SbpRetrieveCompatibilityManifest(PACTIVATION_CONTEXT ActivationContext, PVOID *a2, _DWORD *a3)
{
  int v3; // esi
  PVOID Heap; // edi
  ULONG v5; // ebx
  NTSTATUS InformationActivationContext; // eax
  unsigned int v7; // eax
  SIZE_T v9; // [esp-8h] [ebp-24h]
  SIZE_T v10; // [esp-4h] [ebp-20h]
  ULONG_PTR *v11; // [esp+0h] [ebp-1Ch]
  PVOID v13; // [esp+10h] [ebp-Ch]
  SIZE_T ActivationContextInformationLength; // [esp+18h] [ebp-4h] BYREF

  v3 = 0;
  Heap = *a2;
  *a2 = 0;
  v13 = Heap;
  HIDWORD(v9) = &ActivationContextInformationLength;
  LODWORD(v9) = 0;
  v5 = ActivationContext != NtCurrentPeb()->ImageBaseAddress ? 1073741826 : 2;
  InformationActivationContext = RtlQueryInformationActivationContext(
                                   v5,
                                   ActivationContext,
                                   0,
                                   CompatibilityInformationInActivationContext,
                                   0,
                                   v9,
                                   v11);
  if ( InformationActivationContext < 0 && InformationActivationContext != -1073741789 )
    return v3;
  v7 = ActivationContextInformationLength;
  if ( !(_DWORD)ActivationContextInformationLength )
    return 1;
  if ( (unsigned int)ActivationContextInformationLength > *a3 )
  {
    LODWORD(v10) = ActivationContextInformationLength;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v10);
    if ( !Heap )
      return v3;
    v7 = ActivationContextInformationLength;
  }
  if ( RtlQueryInformationActivationContext(
         v5,
         ActivationContext,
         0,
         CompatibilityInformationInActivationContext,
         Heap,
         __PAIR64__(&ActivationContextInformationLength, v7),
         (PSIZE_T)HIDWORD(v10)) >= 0 )
  {
    *a2 = Heap;
    *a3 = ActivationContextInformationLength;
    return 1;
  }
  if ( Heap && Heap != v13 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v3;
}
