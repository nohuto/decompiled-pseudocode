/*
 * XREFs of ?HampActGetCommitRequest@@YA_KPEAU_HAM_ACTIVITY@@_K@Z @ 0x180033700
 * Callers:
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180017F70 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 * Callees:
 *     ?HampActCompareForMaxCommit@@YAJPEAU_HAM_ACTIVITY@@0K@Z @ 0x1800337B8 (-HampActCompareForMaxCommit@@YAJPEAU_HAM_ACTIVITY@@0K@Z.c)
 */

unsigned __int64 __fastcall HampActGetCommitRequest(struct _HAM_ACTIVITY *a1, unsigned __int64 a2)
{
  _QWORD *v2; // r9
  unsigned __int64 v3; // rbx
  struct _HAM_ACTIVITY *v4; // rdx
  unsigned __int64 v5; // rdi

  v2 = (_QWORD *)*((_QWORD *)a1 + 10);
  v3 = *((_QWORD *)a1 + 50);
  if ( a2 && a2 <= *((_QWORD *)a1 + 57) && v3 && (*((_BYTE *)a1 + 408) & 1) != 0 )
    v3 = a2;
  if ( (*((_BYTE *)a1 + 480) & 0x20) != 0 )
  {
    v4 = (struct _HAM_ACTIVITY *)v2[125];
    v5 = v2[139] & -(__int64)((v2[81] & 0x2000000000000LL) != 0);
    if ( v4 && v4 != a1 && (int)HampActCompareForMaxCommit(a1, v4, 1u) <= 0 )
      v3 = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v3 == -1LL )
    return -1LL;
  if ( v3 < v5 )
    return 0LL;
  return v3 - v5;
}
