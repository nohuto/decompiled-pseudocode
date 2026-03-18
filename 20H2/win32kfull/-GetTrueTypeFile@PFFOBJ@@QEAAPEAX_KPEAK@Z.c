/*
 * XREFs of ?GetTrueTypeFile@PFFOBJ@@QEAAPEAX_KPEAK@Z @ 0x1C02C1184
 * Callers:
 *     ?pvFile@RFONTOBJ@@QEAAPEAXPEAK@Z @ 0x1C02A7B08 (-pvFile@RFONTOBJ@@QEAAPEAXPEAK@Z.c)
 *     ?pvFileUMPD@RFONTOBJ@@QEAAPEAXPEAKPEAPEAX@Z @ 0x1C02A7B8C (-pvFileUMPD@RFONTOBJ@@QEAAPEAXPEAKPEAPEAX@Z.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C0060E84 (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C00657A0 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PFFOBJ::GetTrueTypeFile(PFFOBJ *this, __int64 a2, unsigned int *a3, __int64 a4)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, unsigned int *); // rbx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  v6 = 0LL;
  v7 = *(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)(*(_QWORD *)this + 88LL) + 3088LL);
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v9, this, (__int64)a3, a4);
  *a3 = 0;
  if ( v7 )
    v6 = v7(a2, a3);
  ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v9);
  return v6;
}
