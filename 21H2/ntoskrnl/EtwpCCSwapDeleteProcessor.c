/*
 * XREFs of EtwpCCSwapDeleteProcessor @ 0x1405AC6E8
 * Callers:
 *     KiStartDynamicProcessor @ 0x1408BA7D8 (KiStartDynamicProcessor.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCCSwapDeleteProcessor(__int64 a1)
{
  PVOID *v1; // rbx
  __int64 v2; // rdi

  v1 = (PVOID *)(a1 + 296);
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
