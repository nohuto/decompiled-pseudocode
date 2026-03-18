/*
 * XREFs of ??1?$CCachedData@VBLTENTRY@@$02@@QEAA@XZ @ 0x1C006CB20
 * Callers:
 *     ??1BLTQUEUE@@QEAA@XZ @ 0x1C03BB2E8 (--1BLTQUEUE@@QEAA@XZ.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0027574 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_EBLTENTRY@@QEAAPEAXI@Z @ 0x1C006CBA8 (--_EBLTENTRY@@QEAAPEAXI@Z.c)
 */

void __fastcall CCachedData<BLTENTRY,3>::~CCachedData<BLTENTRY,3>(char *a1, unsigned int a2)
{
  BLTENTRY *v3; // rcx

  v3 = (BLTENTRY *)*((_QWORD *)a1 + 216);
  if ( v3 )
    BLTENTRY::`vector deleting destructor'(v3, a2);
  `vector destructor iterator'(a1, 576LL, 3LL, (void (__fastcall *)(char *))BLTENTRY::~BLTENTRY);
}
