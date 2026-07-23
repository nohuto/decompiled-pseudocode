/*
 * XREFs of MiAllocateAweInfo @ 0x1408D4CE0
 * Callers:
 *     MiCreatePagingFileMap @ 0x1406861B8 (MiCreatePagingFileMap.c)
 *     MiCreateProcessDefaultAweInfo @ 0x1408D5C20 (MiCreateProcessDefaultAweInfo.c)
 * Callees:
 *     ExInitializeAutoExpandPushLock @ 0x1402251D0 (ExInitializeAutoExpandPushLock.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiGetAweInfoPartition @ 0x14054C5D4 (MiGetAweInfoPartition.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     MiCreateAweInfoBitMap @ 0x1408D5AEC (MiCreateAweInfoBitMap.c)
 *     MiDeleteAweInfo @ 0x1408D5FA4 (MiDeleteAweInfo.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateAweInfo(__int64 a1, int a2, char a3, KPROCESSOR_MODE a4, _QWORD *a5)
{
  char v7; // bp
  _QWORD *Pool; // rax
  _QWORD *v11; // rbx
  unsigned int v12; // edi
  int AweInfoBitMap; // esi

  v7 = a2;
  *a5 = 0LL;
  if ( (a2 & 0xFFFFFFFE) != 0 )
    return 3221225711LL;
  Pool = MiAllocatePool(64, 0x50uLL, 0x77416D4Du);
  v11 = Pool;
  if ( !Pool )
    return 3221225626LL;
  if ( (a3 & 2) != 0 )
    Pool[1] = 512LL;
  else
    Pool[1] = (a3 & 1) != 0 ? 16LL : 1LL;
  if ( (v7 & 1) != 0 )
    *(_DWORD *)Pool |= 1u;
  if ( (a3 & 0x10) != 0 )
    *((_DWORD *)Pool + 18) = 0;
  else
    *((_DWORD *)Pool + 18) = ((a3 & 8) != 0) + 1;
  Pool[5] = 0LL;
  Pool[4] = a1;
  if ( (a3 & 4) != 0 )
  {
    if ( (*(_DWORD *)(MiGetAweInfoPartition((__int64)Pool) + 4) & 0x40) == 0 )
    {
      v12 = -1073741637;
LABEL_18:
      ExFreePoolWithTag(v11, 0);
      return v12;
    }
    if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, a4) )
    {
      v12 = -1073741727;
      goto LABEL_18;
    }
    *(_DWORD *)v11 |= 4u;
  }
  AweInfoBitMap = MiCreateAweInfoBitMap(v11);
  if ( AweInfoBitMap < 0 )
  {
    MiDeleteAweInfo(KeGetCurrentThread()->ApcState.Process, v11);
  }
  else
  {
    ExInitializeAutoExpandPushLock(v11 + 7, 1);
    *(_DWORD *)v11 |= 2u;
    if ( a1 )
    {
      *(_DWORD *)(a1 + 92) |= 0x20000u;
      *(_QWORD *)(a1 + 8) = v11;
    }
    *a5 = v11;
  }
  return (unsigned int)AweInfoBitMap;
}
