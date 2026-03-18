/*
 * XREFs of ??1BLTQUEUE@@QEAA@XZ @ 0x1C02FB654
 * Callers:
 *     ??_GBLTQUEUE@@QEAAPEAXI@Z @ 0x1C0047F0C (--_GBLTQUEUE@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C000653C (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C001C3D8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_EBLTENTRY@@QEAAPEAXI@Z @ 0x1C005DE88 (--_EBLTENTRY@@QEAAPEAXI@Z.c)
 *     ?Cleanup@BLTQUEUE@@QEAAXXZ @ 0x1C02FB808 (-Cleanup@BLTQUEUE@@QEAAXXZ.c)
 */

void __fastcall BLTQUEUE::~BLTQUEUE(BLTQUEUE *this)
{
  BLTENTRY *v2; // rcx
  __int64 v3; // rdx

  BLTQUEUE::Cleanup(this);
  v2 = (BLTENTRY *)*((_QWORD *)this + 335);
  if ( v2 )
    BLTENTRY::`vector deleting destructor'(v2);
  `vector destructor iterator'((char *)this + 952, 576LL, 3LL, (void (__fastcall *)(char *))BLTENTRY::~BLTENTRY);
  DXGFASTMUTEX::~DXGFASTMUTEX((BLTQUEUE *)((char *)this + 720), v3);
}
