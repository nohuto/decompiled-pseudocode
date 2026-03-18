/*
 * XREFs of ??1BLTQUEUE@@QEAA@XZ @ 0x1C03BB2E8
 * Callers:
 *     ??_GBLTQUEUE@@QEAAPEAXI@Z @ 0x1C00585B0 (--_GBLTQUEUE@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C000E608 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??1?$CCachedData@VBLTENTRY@@$02@@QEAA@XZ @ 0x1C006CB20 (--1-$CCachedData@VBLTENTRY@@$02@@QEAA@XZ.c)
 *     ?Cleanup@BLTQUEUE@@QEAAXXZ @ 0x1C03BB490 (-Cleanup@BLTQUEUE@@QEAAXXZ.c)
 */

void __fastcall BLTQUEUE::~BLTQUEUE(BLTQUEUE *this)
{
  unsigned int v2; // edx

  BLTQUEUE::Cleanup(this);
  CCachedData<BLTENTRY,3>::~CCachedData<BLTENTRY,3>((char *)this + 968, v2);
  DXGFASTMUTEX::~DXGFASTMUTEX((BLTQUEUE *)((char *)this + 728));
}
