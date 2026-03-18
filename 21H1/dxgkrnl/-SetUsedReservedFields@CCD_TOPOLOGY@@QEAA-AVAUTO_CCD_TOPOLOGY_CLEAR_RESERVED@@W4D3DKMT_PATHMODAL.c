/*
 * XREFs of ?SetUsedReservedFields@CCD_TOPOLOGY@@QEAA?AVAUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@W4D3DKMT_PATHMODALITY_RESERVED_FIELD@@@Z @ 0x1C00EC85C
 * Callers:
 *     ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x1C00EC498 (-CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z.c)
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C0158DFC (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z @ 0x1C02E869C (-CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CCD_TOPOLOGY::SetUsedReservedFields(__int64 a1, _QWORD *a2, int a3)
{
  unsigned int i; // r10d
  _QWORD *result; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax

  for ( i = 0; i < *(unsigned __int16 *)(*(_QWORD *)(a1 + 64) + 20LL); *(_DWORD *)(v7 + *(_QWORD *)(a1 + 64) + 280) = a3 )
  {
    v6 = i++;
    v7 = 272 * v6;
    v8 = *(_QWORD *)(a1 + 64);
    *(_OWORD *)(v7 + v8 + 280) = 0LL;
    *(_OWORD *)(v7 + v8 + 296) = 0LL;
    *(_QWORD *)(v7 + v8 + 312) = 0LL;
  }
  *(_DWORD *)(a1 + 88) = a3;
  result = a2;
  *a2 = a1;
  return result;
}
