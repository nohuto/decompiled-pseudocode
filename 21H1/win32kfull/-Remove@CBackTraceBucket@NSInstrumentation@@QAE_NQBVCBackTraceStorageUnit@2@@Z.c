/*
 * XREFs of ?Remove@CBackTraceBucket@NSInstrumentation@@QAE_NQBVCBackTraceStorageUnit@2@@Z @ 0x24A558
 * Callers:
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QAE_NQBVCBackTraceStorageUnit@2@@Z @ 0x24A4C4 (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 * Callees:
 *     <none>
 */

char __thiscall NSInstrumentation::CBackTraceBucket::Remove(
        const struct NSInstrumentation::CBackTraceStorageUnit **this,
        const struct NSInstrumentation::CBackTraceStorageUnit *a2)
{
  const struct NSInstrumentation::CBackTraceStorageUnit *v3; // esi
  const struct NSInstrumentation::CBackTraceStorageUnit *v4; // eax
  const struct NSInstrumentation::CBackTraceStorageUnit *v7; // ecx

  v3 = 0;
  v4 = *this;
  if ( !*this )
    return 0;
  do
  {
    if ( v4 == a2 )
      break;
    v3 = v4;
    v4 = *(const struct NSInstrumentation::CBackTraceStorageUnit **)v4;
  }
  while ( v4 );
  if ( !v4 )
    return 0;
  if ( (*((_DWORD *)v4 + 22))-- == 1 )
  {
    v7 = *(const struct NSInstrumentation::CBackTraceStorageUnit **)v4;
    if ( v4 == *this )
      *this = v7;
    else
      *(_DWORD *)v3 = v7;
    ExFreePoolWithTag(v4, 0);
  }
  return 1;
}
