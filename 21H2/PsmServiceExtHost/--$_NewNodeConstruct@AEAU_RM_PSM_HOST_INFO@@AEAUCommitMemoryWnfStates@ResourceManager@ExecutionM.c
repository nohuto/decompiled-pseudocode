/*
 * XREFs of ??$_NewNodeConstruct@AEAU_RM_PSM_HOST_INFO@@AEAUCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEAAPEAU?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@1@AEAU_RM_PSM_HOST_INFO@@AEAUCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@Z @ 0x18002C8E4
 * Callers:
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x18002C9A4 (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180045B70 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

char *__fastcall utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_NewNodeConstruct<_RM_PSM_HOST_INFO &,ExecutionModel::ResourceManager::CommitMemoryWnfStates &>(
        __int64 a1,
        _OWORD *a2,
        _OWORD *a3)
{
  char *v5; // rax
  char *v6; // rdx
  _OWORD *v7; // rcx
  __int64 v8; // rax
  __int128 v9; // xmm1

  v5 = (char *)operator new(0x250uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( !v5 )
    return 0LL;
  v7 = v5 + 24;
  v8 = 4LL;
  do
  {
    *v7 = *a2;
    v7[1] = a2[1];
    v7[2] = a2[2];
    v7[3] = a2[3];
    v7[4] = a2[4];
    v7[5] = a2[5];
    v7[6] = a2[6];
    v7 += 8;
    v9 = a2[7];
    a2 += 8;
    *(v7 - 1) = v9;
    --v8;
  }
  while ( v8 );
  *v7 = *a2;
  v7[1] = a2[1];
  *((_QWORD *)v7 + 4) = *((_QWORD *)a2 + 4);
  *((_OWORD *)v6 + 36) = *a3;
  return v6;
}
