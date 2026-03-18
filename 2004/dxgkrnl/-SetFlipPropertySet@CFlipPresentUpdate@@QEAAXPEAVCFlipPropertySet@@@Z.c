/*
 * XREFs of ?SetFlipPropertySet@CFlipPresentUpdate@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x1C006DDAC
 * Callers:
 *     ?ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z @ 0x1C0069F14 (-ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z.c)
 *     ?CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N0_KPEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x1C006A2D0 (-CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N0_KPEAVCFlipPropertySet@@PEAPEAVCFlipPresen.c)
 * Callees:
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x1C0067C60 (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 */

void __fastcall CFlipPresentUpdate::SetFlipPropertySet(CFlipPresentUpdate *this, struct CFlipPropertySet *a2)
{
  CFlipPropertySetBase *v4; // rcx

  if ( a2 )
    ++*((_DWORD *)a2 + 2);
  v4 = (CFlipPropertySetBase *)*((_QWORD *)this + 7);
  if ( v4 )
    CFlipPropertySetBase::Release(v4);
  *((_QWORD *)this + 7) = a2;
}
