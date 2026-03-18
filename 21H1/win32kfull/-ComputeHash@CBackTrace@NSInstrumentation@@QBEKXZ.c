/*
 * XREFs of ?ComputeHash@CBackTrace@NSInstrumentation@@QBEKXZ @ 0x24A15D
 * Callers:
 *     ?Insert@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QAEPAVCBackTraceStorageUnit@2@QBVCBackTrace@2@@Z @ 0x24A2AF (-Insert@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 *     ?Lookup@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QBEPAVCBackTraceStorageUnit@2@QBVCBackTrace@2@@Z @ 0x24A3E8 (-Lookup@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 * Callees:
 *     <none>
 */

unsigned int __thiscall NSInstrumentation::CBackTrace::ComputeHash(NSInstrumentation::CBackTrace *this)
{
  unsigned int result; // eax
  unsigned int i; // edx

  result = 0;
  for ( i = 0; i < 0x14; ++i )
    result += *((_DWORD *)this + i);
  if ( !result )
    return 1;
  return result;
}
