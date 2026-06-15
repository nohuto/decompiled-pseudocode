/*
 * XREFs of ??4?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAAEAV01@AEAV01@@Z @ 0x1800D5B20
 * Callers:
 *     ?PrepareAcesForACL@CDacl@ATL@@EEBAXXZ @ 0x180032930 (-PrepareAcesForACL@CDacl@ATL@@EEBAXXZ.c)
 * Callees:
 *     ??1?$CAutoPtr@VCConstraintModel@@@ATL@@QEAA@XZ @ 0x1800D76D4 (--1-$CAutoPtr@VCConstraintModel@@@ATL@@QEAA@XZ.c)
 */

__int64 *__fastcall ATL::CAutoPtr<ATL::CDacl::CAccessAce>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rax

  if ( *a1 == *a2 )
  {
    if ( a1 != a2 )
      *a2 = 0LL;
  }
  else
  {
    ATL::CAutoPtr<CConstraintModel>::~CAutoPtr<CConstraintModel>(a1);
    v4 = *a2;
    *a2 = 0LL;
    *a1 = v4;
  }
  return a1;
}
