/*
 * XREFs of ?Lookup@CBackTraceBucket@NSInstrumentation@@QBEPAVCBackTraceStorageUnit@2@QBVCBackTrace@2@K@Z @ 0x24A48A
 * Callers:
 *     ?Lookup@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QBEPAVCBackTraceStorageUnit@2@QBVCBackTrace@2@@Z @ 0x24A3E8 (-Lookup@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 * Callees:
 *     ??8CBackTrace@NSInstrumentation@@QBE_NABV01@@Z @ 0x24A114 (--8CBackTrace@NSInstrumentation@@QBE_NABV01@@Z.c)
 */

struct NSInstrumentation::CBackTraceStorageUnit *__thiscall NSInstrumentation::CBackTraceBucket::Lookup(
        int **this,
        const struct NSInstrumentation::CBackTrace *Buf2,
        unsigned int a3)
{
  int *v3; // esi

  v3 = *this;
  if ( !*this )
    return 0;
  while ( v3[1] != a3 || !NSInstrumentation::CBackTrace::operator==(v3 + 2, Buf2) )
  {
    v3 = (int *)*v3;
    if ( !v3 )
      return 0;
  }
  _InterlockedIncrement(v3 + 22);
  return (struct NSInstrumentation::CBackTraceStorageUnit *)v3;
}
