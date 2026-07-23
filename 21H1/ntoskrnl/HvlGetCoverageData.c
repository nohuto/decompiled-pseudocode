/*
 * XREFs of HvlGetCoverageData @ 0x1404EBDF8
 * Callers:
 *     ExpCovQueryHypervisorInformation @ 0x140952864 (ExpCovQueryHypervisorInformation.c)
 * Callees:
 *     MmBuildMdlForNonPagedPool @ 0x14023A430 (MmBuildMdlForNonPagedPool.c)
 *     IoAllocateMdl @ 0x1402BE6D0 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x1402C0A80 (IoFreeMdl.c)
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     HvlpAcquireHypercallPage @ 0x1404ECDE0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404ED9E0 (HvlpReleaseHypercallPage.c)
 */

bool __fastcall HvlGetCoverageData(char a1, ULONG a2, void *a3)
{
  __int16 v3; // bx
  bool v5; // r14
  struct _MDL *Mdl; // rax
  struct _MDL *v7; // r15
  unsigned __int64 v8; // rdi
  _DWORD *v9; // rbx
  _OWORD v11[2]; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v12[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v13[144]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v14[2064]; // [rsp+100h] [rbp+0h] BYREF

  v3 = (__int16)a3;
  v5 = 0;
  memset(v12, 0, sizeof(v12));
  memset(v11, 0, sizeof(v11));
  Mdl = IoAllocateMdl(a3, a2, 0, 0, 0LL);
  v7 = Mdl;
  if ( Mdl )
  {
    MmBuildMdlForNonPagedPool(Mdl);
    v8 = ((v3 & 0xFFF) + 4095LL + (unsigned __int64)v7->ByteCount) >> 12;
    v9 = (_DWORD *)HvlpAcquireHypercallPage(v12, 1LL, v14, 1032LL);
    HvlpAcquireHypercallPage(v11, 2LL, v13, 72LL);
    *v9 = (a1 != 0) + 1;
    v9[1] = v8;
    memmove(v9 + 2, &v7[1], 8LL * (unsigned int)v8);
    LOWORD(v9) = HvcallInitiateHypercall(147);
    HvlpReleaseHypercallPage(v11);
    HvlpReleaseHypercallPage(v12);
    v5 = (_WORD)v9 == 0;
    IoFreeMdl(v7);
  }
  return v5;
}
