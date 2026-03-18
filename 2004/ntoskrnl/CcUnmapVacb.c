/*
 * XREFs of CcUnmapVacb @ 0x1406973FC
 * Callers:
 *     CcGetVacbMiss @ 0x1402BE330 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x1402BEA50 (CcUnmapVacbArray.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404E6424 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     MmUnmapViewInSystemCache @ 0x140247350 (MmUnmapViewInSystemCache.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x1402C5438 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x1402C5484 (CcReferenceSharedCacheMapFileObject.c)
 *     CcUpdateSharedCacheMapFlag @ 0x140320EF0 (CcUpdateSharedCacheMapFlag.c)
 *     PfCheckDeprioritizeFile @ 0x14061DAD0 (PfCheckDeprioritizeFile.c)
 *     PfCheckDeprioritizeImage @ 0x1406B7AF0 (PfCheckDeprioritizeImage.c)
 */

struct _KTHREAD *__fastcall CcUnmapVacb(__int64 a1, __int64 a2, char a3, _DWORD *a4)
{
  char v4; // bp
  int v8; // eax
  char v9; // r8
  int v10; // esi
  struct _KTHREAD *result; // rax
  _KPROCESS *Process; // rcx
  unsigned int v13; // eax
  bool v14; // zf
  ULONG_PTR v15; // rax
  __int64 v16; // rbx
  unsigned __int64 v17; // r8

  v4 = 0;
  if ( (a3 & 1) != 0 && (*(_DWORD *)(a2 + 152) & 0x40) != 0 )
  {
LABEL_19:
    v4 = 1;
    goto LABEL_4;
  }
  v8 = *(_DWORD *)(a2 + 152);
  if ( (v8 & 0x200000) != 0 && (v8 & 0x200) == 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v13 = *(_DWORD *)(a2 + 512);
    if ( HIDWORD(Process[1].ActiveProcessors.Bitmap[8]) == v13 )
      v14 = (Process[1].DirectoryTableBase & 0x400000000000LL) == 0;
    else
      v14 = (unsigned int)PfCheckDeprioritizeImage(v13) == 0;
    if ( v14 )
      goto LABEL_13;
    v15 = CcReferenceSharedCacheMapFileObject(a2);
    v16 = *(_QWORD *)(v15 + 24);
    CcDereferenceSharedCacheMapFileObject(a2, v15);
    v17 = (*(__int64 *)(a2 + 8) >> 12) + ((*(_QWORD *)(a2 + 8) & 0xFFFLL) != 0);
    if ( v17 >= ((*(__int64 *)(a1 + 16) >> 12) & 0xFFFFFFFFFFFFFFC0uLL) + 64 )
      v17 = ((*(__int64 *)(a1 + 16) >> 12) & 0xFFFFFFFFFFFFFFC0uLL) + 64;
    if ( v17 <= 1 )
      LODWORD(v17) = 1;
    if ( !(unsigned int)PfCheckDeprioritizeFile(*(_DWORD *)(a2 + 512), v16, v17) )
    {
LABEL_13:
      CcUpdateSharedCacheMapFlag(a2, 0x200000LL, 0LL, a4);
      goto LABEL_4;
    }
    goto LABEL_19;
  }
LABEL_4:
  v9 = v4 | 2;
  v10 = a3 & 2;
  if ( !v10 )
    v9 = v4;
  result = MmUnmapViewInSystemCache(*(_QWORD *)a1, *(_QWORD *)(a2 + 168), v9);
  if ( !v10 )
    *(_QWORD *)a1 = 0LL;
  return result;
}
