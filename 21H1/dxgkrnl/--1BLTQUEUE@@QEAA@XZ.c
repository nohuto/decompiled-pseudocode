/*
 * XREFs of ??1BLTQUEUE@@QEAA@XZ @ 0x1C02F80E4
 * Callers:
 *     ??_GBLTQUEUE@@QEAAPEAXI@Z @ 0x1C0046FFC (--_GBLTQUEUE@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C000CF90 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C001C328 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_EBLTENTRY@@QEAAPEAXI@Z @ 0x1C005CF38 (--_EBLTENTRY@@QEAAPEAXI@Z.c)
 *     ?Cleanup@BLTQUEUE@@QEAAXXZ @ 0x1C02F8298 (-Cleanup@BLTQUEUE@@QEAAXXZ.c)
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
