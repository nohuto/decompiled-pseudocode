/*
 * XREFs of ??1CVpoContext@@IEAA@XZ @ 0x14004DB84
 * Callers:
 *     _ATL::CComObject_CVpoContext_::CComObject_CVpoContext__::_1_::dtor$0 @ 0x14004DAD2 (_ATL--CComObject_CVpoContext_--CComObject_CVpoContext__--_1_--dtor$0.c)
 *     ??1?$CComAggObject@VCVpoContext@@@ATL@@UEAA@XZ @ 0x14004DAE4 (--1-$CComAggObject@VCVpoContext@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCVpoContext@@@ATL@@QEAA@XZ @ 0x14004DB28 (--1-$CComContainedObject@VCVpoContext@@@ATL@@QEAA@XZ.c)
 *     ??1?$CComObject@VCVpoContext@@@ATL@@UEAA@XZ @ 0x14004DB34 (--1-$CComObject@VCVpoContext@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     ?FindKey@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEBAHAEBK@Z @ 0x14004DFC0 (-FindKey@-$CSimpleMap@KPEAVCVpoContext@@V-$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@Q.c)
 *     ?RemoveAt@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEAAHH@Z @ 0x14004E474 (-RemoveAt@-$CSimpleMap@KPEAVCVpoContext@@V-$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@.c)
 */

void __fastcall CVpoContext::~CVpoContext(CVpoContext *this)
{
  unsigned int Key; // eax
  __int64 v3; // rcx

  Key = ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::FindKey(
          this,
          (char *)this + 88);
  if ( Key != -1 )
    ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::RemoveAt(
      v3,
      Key);
  if ( *((_BYTE *)this + 64) )
  {
    *((_BYTE *)this + 64) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  }
}
