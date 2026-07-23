/*
 * XREFs of CmpLightWeightCommitDeleteValueKeyUoW @ 0x140732AFC
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x1405E1934 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x1402483A4 (CmpFreeTransientPoolWithTag.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x1405E1CE0 (CmpLightWeightCleanupSetValueKeyUoW.c)
 *     CmpFreeValue @ 0x140660258 (CmpFreeValue.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1406DDF90 (CmpCleanUpKcbCachedSymlink.c)
 */

__int64 __fastcall CmpLightWeightCommitDeleteValueKeyUoW(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r14
  __int64 v4; // rax
  ULONG_PTR v6; // rbp
  __int64 v7; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // r8d
  int v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+54h] [rbp+Ch]

  v12 = -1;
  v2 = *(_QWORD *)(a1 + 104);
  v13 = 0;
  v4 = *(_QWORD *)(a1 + 48);
  v6 = *(_QWORD *)(v4 + 32);
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v6 + 8))(v6, *(unsigned int *)(v4 + 40), &v12);
  CmpFreeValue(v6, *(unsigned int *)(*(_QWORD *)(a1 + 112) + 4LL));
  CmpFreeTransientPoolWithTag(*(void **)(a1 + 112), 0x77554D43u);
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(v7 + 4) = *a2;
  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 168LL) = *a2;
  ++*(_QWORD *)(*(_QWORD *)(a1 + 48) + 304LL);
  if ( *(_DWORD *)v2 == 1 )
  {
    v9 = *(_QWORD *)(v7 + 36);
    *(_QWORD *)(v7 + 36) = *(_QWORD *)(v2 + 4);
    *(_QWORD *)(v2 + 4) = v9;
    CmpCleanUpKcbCachedSymlink(*(_QWORD *)(a1 + 48));
    v10 = *(_QWORD *)(a1 + 48);
    v11 = *(_DWORD *)(v7 + 40);
    *(_DWORD *)(v10 + 96) = *(_DWORD *)(v7 + 36);
    *(_DWORD *)(v10 + 100) = v11;
    if ( !*(_DWORD *)(v7 + 36) )
    {
      *(_QWORD *)(v7 + 60) = 0LL;
      *(_WORD *)(*(_QWORD *)(a1 + 48) + 178LL) = 0;
      *(_DWORD *)(*(_QWORD *)(a1 + 48) + 180LL) = 0;
    }
  }
  CmpLightWeightCleanupSetValueKeyUoW(v6, (unsigned int *)v2);
  *(_QWORD *)(a1 + 104) = 0LL;
  return (*(__int64 (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v12);
}
