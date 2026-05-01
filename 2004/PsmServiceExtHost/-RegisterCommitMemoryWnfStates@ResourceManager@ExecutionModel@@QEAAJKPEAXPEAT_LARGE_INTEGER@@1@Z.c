/*
 * XREFs of ?RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z @ 0x18002C49C
 * Callers:
 *     RmgrSrv_RegisterWithServer @ 0x18002C170 (RmgrSrv_RegisterWithServer.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F120 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E110 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpRmSidInitialize@@YAXPEAT_RM_SID@@PEAX@Z @ 0x18002C454 (-RmpRmSidInitialize@@YAXPEAT_RM_SID@@PEAX@Z.c)
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x18002C834 (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RegisterCommitMemoryWnfStates(
        ExecutionModel::ResourceManager *this,
        unsigned int a2,
        void *a3,
        union _LARGE_INTEGER *a4,
        union _LARGE_INTEGER *a5)
{
  ExecutionModel::ResourceManager *v6; // r14
  unsigned int v9; // ebx
  _BYTE v11[80]; // [rsp+30h] [rbp-88h] BYREF

  v6 = g_pResourceManager;
  RmpAcquireGlobalLock();
  if ( a4 && a5 )
  {
    RmpRmSidInitialize((union _RM_SID *)v11, a3);
    v9 = ExecutionModel::ResourceManager::AddCommitMemoryWnfStates(v6, a2, (union _RM_SID *)v11, a4, a5);
  }
  else
  {
    v9 = -2147024809;
  }
  RmpReleaseGlobalLock();
  return v9;
}
