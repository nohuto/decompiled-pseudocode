/*
 * XREFs of ?HampClientInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@PEAXPEAT_HAM_STATE_CHANGE_FLAGS@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800096AC
 * Callers:
 *     ?HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAT_HAM_STATE_CHANGE_FLAGS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000932C (-HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_H.c)
 * Callees:
 *     CemRcTableInitialize @ 0x180009828 (CemRcTableInitialize.c)
 *     memset_0 @ 0x18004651A (memset_0.c)
 */

_OWORD *__fastcall HampClientInitialize(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        _OWORD *a6,
        _OWORD *a7,
        _DWORD *a8,
        _QWORD *a9)
{
  _OWORD *result; // rax
  __int128 v14; // xmm0

  memset_0(a9, 0, 0xB0uLL);
  RtlInitializeSRWLock(a9 + 3);
  *((_DWORD *)a9 + 8) = 0;
  a9[6] = a9 + 5;
  a9[5] = a9 + 5;
  CemRcTableInitialize(HampClientPkgDestroy, a9 + 7);
  *a9 = a1;
  *((_DWORD *)a9 + 34) = a4;
  *((_DWORD *)a9 + 35) = a2;
  *((_DWORD *)a9 + 36) = a3;
  *((_DWORD *)a9 + 37) = _InterlockedIncrement((volatile signed __int32 *)(a1 + 744));
  *((_DWORD *)a9 + 33) = a5;
  if ( a8 )
    *((_DWORD *)a9 + 38) = *a8;
  result = a6;
  if ( a6 )
  {
    v14 = *a6;
    result = a7;
    *((_DWORD *)a9 + 32) |= 2u;
    *(_OWORD *)(a9 + 13) = v14;
    a9[15] = a7;
  }
  return result;
}
