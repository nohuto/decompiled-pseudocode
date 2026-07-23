/*
 * XREFs of SmKmIssueIo @ 0x14059837C
 * Callers:
 *     SmIssueIo @ 0x140599F5C (SmIssueIo.c)
 * Callees:
 *     ?SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEAXPEAU_IO_STATUS_BLOCK@@K@Z3@Z @ 0x140597C98 (-SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEA.c)
 *     SmKmIssueVolumeIo @ 0x1405983E4 (SmKmIssueVolumeIo.c)
 */

__int64 __fastcall SmKmIssueIo(
        struct _SMKM_FILE_INFO *a1,
        __int64 a2,
        void (*a3)(void *, struct _IO_STATUS_BLOCK *, unsigned int),
        void *a4,
        int a5)
{
  __int64 v5; // rax
  PSMKM_REGION_EXTENT i; // r10
  union _LARGE_INTEGER v8; // [rsp+40h] [rbp+8h] BYREF

  v5 = *(unsigned int *)(a2 + 24);
  for ( i = a1->Extents; (unsigned int)v5 >= i->RegionCount; ++i )
    v5 = (unsigned int)(v5 - i->RegionCount);
  v8.QuadPart = i->ByteOffset + *(unsigned int *)(a2 + 20) + v5 * *(unsigned int *)(a2 + 28);
  if ( a5 )
    return SmKmIssueFileIo(a1, (struct _SMKM_ISSUE_IO_PARAMS *)a2, &v8, a3, a4);
  else
    return SmKmIssueVolumeIo((_DWORD)a1, a2, (unsigned int)&v8, (_DWORD)a3, (__int64)a4);
}
