/*
 * XREFs of HalpDmaPrependTranslations @ 0x1404C63A0
 * Callers:
 *     HalpDmaAllocateMapRegisters @ 0x1404C4F2C (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaAllocateMapRegistersAtHighLevel @ 0x1404C531C (HalpDmaAllocateMapRegistersAtHighLevel.c)
 *     HalpDmaCommitScatterMapBuffers @ 0x1404C5864 (HalpDmaCommitScatterMapBuffers.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x140867468 (HalpDmaAllocateLocalScatterPool.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpDmaPrependTranslations(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx

  v3 = a1;
  v4 = (unsigned int)(a2 - 1);
  if ( (_DWORD)v4 )
  {
    do
    {
      v3 = *(_QWORD *)(v3 + 8);
      --v4;
    }
    while ( v4 );
  }
  *(_QWORD *)(v3 + 8) = a3;
  return a1;
}
