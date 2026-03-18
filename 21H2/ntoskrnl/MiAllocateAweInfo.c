/*
 * XREFs of MiAllocateAweInfo @ 0x14097BBE0
 * Callers:
 *     MiCreatePagingFileMap @ 0x1406F3A44 (MiCreatePagingFileMap.c)
 *     MiCreateProcessDefaultAweInfo @ 0x14097CC1C (MiCreateProcessDefaultAweInfo.c)
 * Callees:
 *     ExInitializeAutoExpandPushLock @ 0x14022E1F0 (ExInitializeAutoExpandPushLock.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiGetAweInfoPartition @ 0x1405AAEC8 (MiGetAweInfoPartition.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     MiCreateAweInfoBitMap @ 0x14097CAE8 (MiCreateAweInfoBitMap.c)
 *     MiDeleteAweInfo @ 0x14097CFDC (MiDeleteAweInfo.c)
 */

__int64 __fastcall MiAllocateAweInfo(__int64 a1, int a2, char a3, KPROCESSOR_MODE a4, __int64 *a5)
{
  char v7; // bp
  int AweInfoBitMap; // edi
  _QWORD *Pool; // rax
  __int64 v11; // rbx
  PVOID v12; // rax

  v7 = a2;
  *a5 = 0LL;
  if ( (a2 & 0xFFFFFFFE) != 0 )
    return (unsigned int)-1073741585;
  Pool = MiAllocatePool(64, 0x68uLL, 0x77416D4Du);
  v11 = (__int64)Pool;
  if ( !Pool )
    return (unsigned int)-1073741670;
  if ( (a3 & 2) != 0 )
  {
    Pool[2] = 512LL;
  }
  else if ( (a3 & 4) != 0 )
  {
    Pool[2] = 0x40000LL;
    v12 = MiAllocatePool(64, 0x200030uLL, 0x6D486D4Du);
    if ( !v12 )
    {
      AweInfoBitMap = -1073741670;
LABEL_10:
      MiDeleteAweInfo(KeGetCurrentThread()->ApcState.Process, v11);
      return (unsigned int)AweInfoBitMap;
    }
    *(_QWORD *)(v11 + 96) = 0LL;
    *(_QWORD *)(v11 + 88) = v12;
  }
  else
  {
    Pool[2] = (a3 & 1) != 0 ? 16LL : 1LL;
  }
  *(_QWORD *)v11 = 399680LL;
  if ( (v7 & 1) != 0 )
    *(_DWORD *)(v11 + 8) |= 1u;
  if ( (a3 & 0x20) != 0 )
    *(_DWORD *)(v11 + 80) = 0;
  else
    *(_DWORD *)(v11 + 80) = ((a3 & 0x10) != 0) + 1;
  *(_QWORD *)(v11 + 48) = 0LL;
  *(_QWORD *)(v11 + 40) = a1;
  if ( (a3 & 8) != 0 )
  {
    if ( (*(_DWORD *)(MiGetAweInfoPartition(v11) + 4) & 0x40) == 0 )
    {
      AweInfoBitMap = -1073741637;
      goto LABEL_10;
    }
    if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, a4) )
    {
      AweInfoBitMap = -1073741727;
      goto LABEL_10;
    }
    *(_DWORD *)(v11 + 8) |= 4u;
  }
  AweInfoBitMap = MiCreateAweInfoBitMap(v11);
  if ( AweInfoBitMap < 0 )
    goto LABEL_10;
  ExInitializeAutoExpandPushLock((_QWORD *)(v11 + 64), 1);
  *(_DWORD *)(v11 + 8) |= 2u;
  if ( a1 )
  {
    *(_DWORD *)(a1 + 92) |= 0x20000u;
    *(_QWORD *)(a1 + 8) = v11;
  }
  *a5 = v11;
  return (unsigned int)AweInfoBitMap;
}
