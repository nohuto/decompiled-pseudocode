/*
 * XREFs of ?HampActCompareForMaxCommit@@YAJPEAU_HAM_ACTIVITY@@0K@Z @ 0x180033A68
 * Callers:
 *     ?HampActGetCommitRequest@@YA_KPEAU_HAM_ACTIVITY@@_K@Z @ 0x1800339B0 (-HampActGetCommitRequest@@YA_KPEAU_HAM_ACTIVITY@@_K@Z.c)
 * Callees:
 *     ?HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x180006028 (-HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 */

__int64 __fastcall HampActCompareForMaxCommit(struct _HAM_ACTIVITY *a1, struct _HAM_ACTIVITY *a2, char a3)
{
  __int64 v3; // r11
  struct _HAM_ACTIVITY *v4; // r9
  struct _HAM_ACTIVITY *v5; // r10
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  struct _HAM_ACTIVITY *v9; // rax
  unsigned __int8 v10; // dl
  __int64 v11; // r9
  BOOL IsStartedOrReachedPendState; // eax
  int v13; // r8d

  v3 = *((_QWORD *)a1 + 10);
  v4 = a2;
  v5 = a1;
  if ( (a3 & 1) == 0 )
  {
    HampActIsStartedOrReachedPendState((__int64)a1, 5u);
    IsStartedOrReachedPendState = HampActIsStartedOrReachedPendState(v11, v10);
    if ( v13 )
    {
      if ( !IsStartedOrReachedPendState )
        return 1LL;
    }
    else if ( IsStartedOrReachedPendState )
    {
      return 0xFFFFFFFFLL;
    }
  }
  if ( (*((_DWORD *)v5 + 28) & 0x10000) != 0 && (*((_DWORD *)v4 + 28) & 0x10000) == 0 )
    return 1LL;
  if ( (*((_DWORD *)v5 + 28) & 0x10000) == 0 && (*((_DWORD *)v4 + 28) & 0x10000) != 0 )
    return 0xFFFFFFFFLL;
  v7 = *((_QWORD *)v5 + 57);
  if ( v7 > *((_QWORD *)v4 + 57) )
    return 1LL;
  if ( v7 < *((_QWORD *)v4 + 57) )
    return 0xFFFFFFFFLL;
  v8 = *((_QWORD *)v5 + 58);
  if ( v8 > *((_QWORD *)v4 + 58) )
    return 1LL;
  if ( v8 < *((_QWORD *)v4 + 58) )
    return 0xFFFFFFFFLL;
  v9 = *(struct _HAM_ACTIVITY **)(v3 + 1000);
  if ( v5 == v9 )
    return 1LL;
  if ( v4 == v9 )
    return 0xFFFFFFFFLL;
  return 0LL;
}
