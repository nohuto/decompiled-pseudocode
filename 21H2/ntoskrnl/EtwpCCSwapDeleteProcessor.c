/*
 * XREFs of EtwpCCSwapDeleteProcessor @ 0x1406373F4
 * Callers:
 *     EtwInitializeProcessor @ 0x140829F84 (EtwInitializeProcessor.c)
 *     EtwDeleteProcessor @ 0x1409DEEDC (EtwDeleteProcessor.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCCSwapDeleteProcessor(__int64 a1)
{
  PVOID *v1; // rbx
  __int64 v2; // rdi

  v1 = (PVOID *)(a1 + 392);
  v2 = 5LL;
  do
  {
    if ( *v1 )
      ExFreePoolWithTag(*v1, 0);
    ++v1;
    --v2;
  }
  while ( v2 );
}
