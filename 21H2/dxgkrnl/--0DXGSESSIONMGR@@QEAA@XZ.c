/*
 * XREFs of ??0DXGSESSIONMGR@@QEAA@XZ @ 0x1C0195AA8
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C0192DAC (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     memset @ 0x1C0028F00 (memset.c)
 */

DXGSESSIONMGR *__fastcall DXGSESSIONMGR::DXGSESSIONMGR(DXGSESSIONMGR *this)
{
  char *v2; // rcx

  *((_DWORD *)this + 7) = 44;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 8) = 53;
  *((_DWORD *)this + 18) = 3;
  v2 = (char *)this + 48;
  *((_QWORD *)this + 5) = v2;
  *((_DWORD *)this + 28) = 1;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = 45;
  *((_DWORD *)this + 32) = -1;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_DWORD *)this + 89) = 53;
  *((_DWORD *)this + 88) = 0;
  *((_DWORD *)this + 101) = -1;
  *((_DWORD *)this + 102) = 1;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_DWORD *)this + 100) = 0;
  *((_QWORD *)this + 53) = (char *)this + 416;
  *((_QWORD *)this + 52) = (char *)this + 416;
  *((_BYTE *)this + 432) = 0;
  memset(v2, 0, 8LL * *((unsigned int *)this + 18));
  *((_QWORD *)this + 46) = (char *)this + 360;
  *((_QWORD *)this + 45) = (char *)this + 360;
  *((_DWORD *)this + 33) = 0;
  ExInitializePagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 192), 0LL, 0LL, 0x200u, 0x30uLL, 0x4B677844u, 0);
  *((_QWORD *)this + 41) = (char *)this + 320;
  *((_QWORD *)this + 40) = (char *)this + 320;
  return this;
}
