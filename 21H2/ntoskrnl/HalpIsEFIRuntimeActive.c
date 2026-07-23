/*
 * XREFs of HalpIsEFIRuntimeActive @ 0x1403CC590
 * Callers:
 *     <none>
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x14037AE50 (HalQueryMaximumProcessorCount.c)
 */

char __fastcall HalpIsEFIRuntimeActive(__int64 a1)
{
  unsigned int MaximumProcessorCount; // eax
  int v2; // edx
  unsigned int v3; // r9d
  __int64 i; // r8
  __int64 v5; // rax

  MaximumProcessorCount = HalQueryMaximumProcessorCount(a1);
  v2 = 0;
  v3 = MaximumProcessorCount;
  if ( !MaximumProcessorCount )
    return 0;
  for ( i = 0LL; ; i += 8LL )
  {
    v5 = *(_QWORD *)(i + HalpInterruptProcessorPcr);
    if ( v5 )
    {
      if ( (*(_DWORD *)(v5 + 224) & 0x1FF) != 0 )
        break;
    }
    if ( ++v2 >= v3 )
      return 0;
  }
  return 1;
}
