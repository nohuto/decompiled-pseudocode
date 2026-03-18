/*
 * XREFs of ?InitializeCommon@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@AAE_NI@Z @ 0x24A25F
 * Callers:
 *     ?Create@CBackTraceStoreEx@NSInstrumentation@@SGPAV12@XZ @ 0x24A1AF (-Create@CBackTraceStoreEx@NSInstrumentation@@SGPAV12@XZ.c)
 * Callees:
 *     <none>
 */

char __thiscall NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::InitializeCommon(
        _DWORD *this,
        int a2)
{
  PVOID PoolWithTag; // eax
  unsigned int i; // ecx
  int v6; // eax

  this[5] = 256;
  this[6] = 0;
  this[8] = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 0x800u, 0x64497355u);
  this[8] = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  for ( i = 0; i < this[5]; ++i )
  {
    v6 = this[8];
    *(_DWORD *)(v6 + 8 * i) = 0;
    *(_DWORD *)(v6 + 8 * i + 4) = 0;
  }
  return 1;
}
