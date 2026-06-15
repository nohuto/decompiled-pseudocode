/*
 * XREFs of ?RemoveAt@?$CAtlList@PEAVCSubmixImpl@@V?$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140010698
 * Callers:
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x1400101E0 (--1CSubmixImpl@@QEAA@XZ.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x1400019B0 (-RemoveAll@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXX.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1400336CC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlList<CSubmixImpl *,ATL::CElementTraits<CSubmixImpl *>>::RemoveAt(__int64 a1, __int64 *a2)
{
  bool v2; // zf

  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  if ( a2 == (__int64 *)SubmixList )
    SubmixList = *a2;
  else
    *(_QWORD *)a2[1] = *a2;
  if ( a2 == (__int64 *)qword_140084718 )
    qword_140084718 = a2[1];
  else
    *(_QWORD *)(*a2 + 8) = a2[1];
  *a2 = qword_140084730;
  v2 = qword_140084720-- == 1;
  qword_140084730 = (__int64)a2;
  if ( v2 )
    ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll((__int64)&SubmixList);
}
