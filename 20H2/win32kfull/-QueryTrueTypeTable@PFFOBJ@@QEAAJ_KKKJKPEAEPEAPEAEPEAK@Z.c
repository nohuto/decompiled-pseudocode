/*
 * XREFs of ?QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z @ 0x1C02C1274
 * Callers:
 *     ?pjTable@RFONTOBJ@@QEAAPEAEKPEAK@Z @ 0x1C02A7A58 (-pjTable@RFONTOBJ@@QEAAPEAEKPEAK@Z.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C0060E84 (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ?bCheckFntFileInfo@PFFOBJ@@QEAAHXZ @ 0x1C00613F4 (-bCheckFntFileInfo@PFFOBJ@@QEAAHXZ.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C00657A0 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PFFOBJ::QueryTrueTypeTable(
        PFFOBJ *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int8 *a7,
        unsigned __int8 **a8,
        unsigned int *a9)
{
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v16; // edi
  __int64 (__fastcall *v17)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, unsigned __int8 *, unsigned __int8 **, unsigned int *); // rbx
  _BYTE v18[16]; // [rsp+50h] [rbp-28h] BYREF

  if ( !(unsigned int)PFFOBJ::bCheckFntFileInfo(this) )
    return 0xFFFFFFFFLL;
  v16 = -1;
  v17 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, unsigned __int8 *, unsigned __int8 **, unsigned int *))(*(_QWORD *)(*(_QWORD *)this + 88LL) + 3072LL);
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v18, this, v13, v14);
  if ( a7 )
    *a7 = 0;
  if ( v17 )
    v16 = v17(a2, a3, a4, a5, a6, a7, a8, a9);
  ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v18);
  return v16;
}
