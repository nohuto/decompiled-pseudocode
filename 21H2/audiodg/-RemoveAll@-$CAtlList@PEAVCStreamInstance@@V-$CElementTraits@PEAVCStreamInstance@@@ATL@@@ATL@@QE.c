/*
 * XREFs of ?RemoveAll@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x1400104F4
 * Callers:
 *     ?RemoveAt@?$CAtlList@PEAVCChildSubmixInstance@@V?$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14000165C (-RemoveAt@-$CAtlList@PEAVCChildSubmixInstance@@V-$CElementTraits@PEAVCChildSubmixInstance@@@ATL@.c)
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x1400101D0 (--1CSubmixImpl@@QEAA@XZ.c)
 *     ??1CSystemAudioDeviceBase@@UEAA@XZ @ 0x140010554 (--1CSystemAudioDeviceBase@@UEAA@XZ.c)
 *     ?FreeNode@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x14003E1B0 (-FreeNode@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@AEA.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14003DEFC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x14003E1B0 (-FreeNode@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@AEA.c)
 */

void __fastcall ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveAll(__int64 a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx

  while ( *(_QWORD *)(a1 + 16) )
  {
    if ( !*(_QWORD *)a1 )
      ATL::AtlThrowImpl(-2147467259);
    *(_QWORD *)a1 = **(_QWORD **)a1;
    ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::FreeNode(a1);
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v2 = *(_QWORD **)(a1 + 24);
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      free(v2);
      v2 = v3;
    }
    while ( v3 );
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
