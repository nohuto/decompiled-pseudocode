/*
 * XREFs of MiGetClosestNodeWithProcessors @ 0x14035C92C
 * Callers:
 *     MiCreateColorAnchors @ 0x14035C800 (MiCreateColorAnchors.c)
 *     MiComputeIdealDpcGang @ 0x14055AC1C (MiComputeIdealDpcGang.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x1402DE440 (KeQueryNodeActiveAffinity.c)
 */

__int64 __fastcall MiGetClosestNodeWithProcessors(unsigned int a1)
{
  unsigned int v1; // ebx
  unsigned int *v3; // rdi
  unsigned int *v4; // rsi
  USHORT Count; // [rsp+38h] [rbp+10h] BYREF

  Count = 0;
  v1 = a1;
  KeQueryNodeActiveAffinity(a1, 0LL, &Count);
  if ( Count )
    return v1;
  v3 = (unsigned int *)(qword_140C4DC98 + 4LL * v1 * (unsigned __int16)KeNumberNodes);
  v4 = &v3[(unsigned __int16)KeNumberNodes];
  while ( ++v3 < v4 )
  {
    v1 = *v3;
    KeQueryNodeActiveAffinity(*v3, 0LL, &Count);
    if ( Count )
      return v1;
  }
  return 0xFFFFFFFFLL;
}
