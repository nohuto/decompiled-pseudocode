/*
 * XREFs of ??0DXGPROCESS@@IEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z @ 0x1C0117604
 * Callers:
 *     ??0DXGPROCESSVM@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@PEAVDXGPROCESS@@2@Z @ 0x1C0048840 (--0DXGPROCESSVM@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@PEAVDXGPROCESS@@2@Z.c)
 *     ??0DXGPROCESSVMWP@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z @ 0x1C00488D0 (--0DXGPROCESSVMWP@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C0117234 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

DXGPROCESS *__fastcall DXGPROCESS::DXGPROCESS(DXGPROCESS *this, struct DXGGLOBAL *a2, struct _EPROCESS *const a3)
{
  *((_QWORD *)this + 3) = a2;
  *(_OWORD *)((char *)this + 8) = 0LL;
  *(_QWORD *)this = &DXGPROCESS::`vftable';
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = a3;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 33) = 8;
  *((_DWORD *)this + 34) = 39;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 41) = 53;
  *((_DWORD *)this + 42) = 85;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 0;
  *((_DWORD *)this + 49) = 44;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_DWORD *)this + 56) = 0;
  *((_DWORD *)this + 57) = 2;
  *((_DWORD *)this + 58) = 37;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 36) = (char *)this + 280;
  *((_QWORD *)this + 35) = (char *)this + 280;
  *((_WORD *)this + 148) = 0;
  *((_QWORD *)this + 39) = (char *)this + 304;
  *((_QWORD *)this + 38) = (char *)this + 304;
  *((_BYTE *)this + 347) &= ~0x80u;
  *((_BYTE *)this + 348) &= ~1u;
  *((_QWORD *)this + 42) = 0LL;
  *((_WORD *)this + 172) = 0;
  *((_BYTE *)this + 346) = 0;
  *(_WORD *)((char *)this + 349) = 0;
  *((_DWORD *)this + 88) = 0;
  *((_DWORD *)this + 89) = 0;
  *((_DWORD *)this + 90) = 0;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_DWORD *)this + 101) = 1;
  *((_DWORD *)this + 100) = 0;
  *(_QWORD *)((char *)this + 452) = 1LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_DWORD *)this + 112) = 0;
  *((_BYTE *)this + 347) &= 0x81u;
  *((_QWORD *)this + 52) = (char *)this + 408;
  *((_QWORD *)this + 51) = (char *)this + 408;
  *((_DWORD *)this + 115) = 0;
  *((_WORD *)this + 232) = 0;
  *(_QWORD *)((char *)this + 468) = 0LL;
  *((_WORD *)this + 238) = 0;
  *((_BYTE *)this + 478) = 0;
  *((_QWORD *)this + 60) = 0LL;
  *((_WORD *)this + 244) = 0;
  *((_DWORD *)this + 68) = 2;
  *((_DWORD *)this + 106) = 0;
  *((_BYTE *)this + 348) &= ~2u;
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)this + 25);
  return this;
}
