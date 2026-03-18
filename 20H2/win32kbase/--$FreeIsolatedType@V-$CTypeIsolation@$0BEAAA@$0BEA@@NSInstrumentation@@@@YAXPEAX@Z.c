/*
 * XREFs of ??$FreeIsolatedType@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C005D65C
 * Callers:
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C005D520 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C005D690 (--0PATHMEMOBJ@@QEAA@XZ.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C013ED94 (-Free@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

unsigned __int8 **__fastcall FreeIsolatedType<NSInstrumentation::CTypeIsolation<81920,320>>(__int64 a1)
{
  unsigned __int8 **result; // rax
  unsigned __int8 *v3; // rcx

  result = gpTypeIsolation;
  v3 = gpTypeIsolation[4];
  if ( v3 )
    return (unsigned __int8 **)NSInstrumentation::CTypeIsolation<81920,320>::Free(v3, a1);
  return result;
}
