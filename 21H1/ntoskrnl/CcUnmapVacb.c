/*
 * XREFs of CcUnmapVacb @ 0x1405EDEFC
 * Callers:
 *     CcGetVacbMiss @ 0x14022B6B0 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x14022BDD0 (CcUnmapVacbArray.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404E5E74 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     CcDereferenceSharedCacheMapFileObject @ 0x140232608 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x140232654 (CcReferenceSharedCacheMapFileObject.c)
 *     MmUnmapViewInSystemCache @ 0x1402A0380 (MmUnmapViewInSystemCache.c)
 *     CcUpdateSharedCacheMapFlag @ 0x1402D036C (CcUpdateSharedCacheMapFlag.c)
 *     PfCheckDeprioritizeImage @ 0x14064F958 (PfCheckDeprioritizeImage.c)
 *     PfCheckDeprioritizeFile @ 0x1406631F0 (PfCheckDeprioritizeFile.c)
 */

void __fastcall CcUnmapVacb(__int64 a1, __int64 a2, char a3)
{
  char v3; // bp
  int v7; // eax
  char v8; // r8
  int v9; // esi
  _KPROCESS *Process; // rcx
  unsigned int v11; // eax
  bool v12; // zf
  ULONG_PTR v13; // rax
  __int64 v14; // rbx
  unsigned __int64 v15; // r8

  v3 = 0;
  if ( (a3 & 1) != 0 && (*(_DWORD *)(a2 + 152) & 0x40) != 0 )
  {
LABEL_19:
    v3 = 1;
    goto LABEL_4;
  }
  v7 = *(_DWORD *)(a2 + 152);
  if ( (v7 & 0x200000) != 0 && (v7 & 0x200) == 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v11 = *(_DWORD *)(a2 + 512);
    if ( HIDWORD(Process[1].ActiveProcessors.Bitmap[8]) == v11 )
      v12 = (Process[1].DirectoryTableBase & 0x400000000000LL) == 0;
    else
      v12 = (unsigned int)PfCheckDeprioritizeImage(v11) == 0;
    if ( v12 )
      goto LABEL_13;
    v13 = CcReferenceSharedCacheMapFileObject(a2);
    v14 = *(_QWORD *)(v13 + 24);
    CcDereferenceSharedCacheMapFileObject(a2, v13);
    v15 = (*(__int64 *)(a2 + 8) >> 12) + ((*(_QWORD *)(a2 + 8) & 0xFFFLL) != 0);
    if ( v15 >= ((*(__int64 *)(a1 + 16) >> 12) & 0xFFFFFFFFFFFFFFC0uLL) + 64 )
      v15 = ((*(__int64 *)(a1 + 16) >> 12) & 0xFFFFFFFFFFFFFFC0uLL) + 64;
    if ( v15 <= 1 )
      v15 = 1LL;
    if ( !(unsigned int)PfCheckDeprioritizeFile(*(unsigned int *)(a2 + 512), v14, v15) )
    {
LABEL_13:
      CcUpdateSharedCacheMapFlag(a2, 0x200000, 0);
      goto LABEL_4;
    }
    goto LABEL_19;
  }
LABEL_4:
  v8 = v3 | 2;
  v9 = a3 & 2;
  if ( !v9 )
    v8 = v3;
  MmUnmapViewInSystemCache(*(_QWORD *)a1, *(_QWORD *)(a2 + 168), v8);
  if ( !v9 )
    *(_QWORD *)a1 = 0LL;
}
