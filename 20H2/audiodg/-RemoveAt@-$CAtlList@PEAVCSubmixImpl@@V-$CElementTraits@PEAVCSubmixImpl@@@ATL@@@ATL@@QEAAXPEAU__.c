/*
 * XREFs of ?RemoveAt@?$CAtlList@PEAVCSubmixImpl@@V?$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1400106B8
 * Callers:
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x140010200 (--1CSubmixImpl@@QEAA@XZ.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x140001A10 (-RemoveAll@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXX.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14003DD6C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
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
  if ( a2 == (__int64 *)qword_14008F718 )
    qword_14008F718 = a2[1];
  else
    *(_QWORD *)(*a2 + 8) = a2[1];
  *a2 = qword_14008F730;
  v2 = qword_14008F720-- == 1;
  qword_14008F730 = (__int64)a2;
  if ( v2 )
    ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll((__int64)&SubmixList);
}
