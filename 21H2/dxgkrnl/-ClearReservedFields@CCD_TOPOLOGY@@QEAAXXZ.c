/*
 * XREFs of ?ClearReservedFields@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C01AC07C
 * Callers:
 *     ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x1C01ABFD8 (-CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z.c)
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C01E878C (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ??1AUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@QEAA@XZ @ 0x1C03A8E44 (--1AUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CCD_TOPOLOGY::ClearReservedFields(CCD_TOPOLOGY *this)
{
  unsigned int i; // r8d
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax

  for ( i = 0; i < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL); *(_QWORD *)(v4 + v5 + 344) = 0LL )
  {
    v3 = i++;
    v4 = 296 * v3;
    v5 = *((_QWORD *)this + 8);
    *(_OWORD *)(v4 + v5 + 312) = 0LL;
    *(_OWORD *)(v4 + v5 + 328) = 0LL;
  }
  *((_DWORD *)this + 22) = 0;
}
