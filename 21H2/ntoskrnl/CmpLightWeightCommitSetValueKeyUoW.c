/*
 * XREFs of CmpLightWeightCommitSetValueKeyUoW @ 0x1405E1BB8
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x1405E1934 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x1402483A4 (CmpFreeTransientPoolWithTag.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x1405E1CE0 (CmpLightWeightCleanupSetValueKeyUoW.c)
 *     CmpFreeValue @ 0x140660258 (CmpFreeValue.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1406DDF90 (CmpCleanUpKcbCachedSymlink.c)
 */

__int64 __fastcall CmpLightWeightCommitSetValueKeyUoW(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 v6; // rax
  ULONG_PTR v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned int v11; // ecx
  unsigned int v12; // eax
  unsigned int *v13; // rcx
  ULONG_PTR v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r8
  int v17; // r9d
  int v19; // [rsp+40h] [rbp+8h] BYREF
  int v20; // [rsp+44h] [rbp+Ch]

  v19 = -1;
  v4 = a1[13];
  v20 = 0;
  v6 = a1[6];
  v8 = *(_QWORD *)(v6 + 32);
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v8 + 8))(v8, *(unsigned int *)(v6 + 40), &v19);
  v10 = a1[14];
  v11 = *(unsigned __int16 *)(v10 + 8);
  if ( *(_DWORD *)(v9 + 60) < v11 )
  {
    *(_DWORD *)(v9 + 60) = v11;
    *(_WORD *)(a1[6] + 178LL) = *(_WORD *)(a1[14] + 8LL);
    v10 = a1[14];
  }
  v12 = *(_DWORD *)(v10 + 12);
  if ( *(_DWORD *)(v9 + 64) < v12 )
  {
    *(_DWORD *)(v9 + 64) = v12;
    *(_DWORD *)(a1[6] + 180LL) = *(_DWORD *)(a1[14] + 12LL);
  }
  *(_QWORD *)(v9 + 4) = *a2;
  *(_QWORD *)(a1[6] + 168LL) = *a2;
  ++*(_QWORD *)(a1[6] + 304LL);
  v13 = (unsigned int *)a1[14];
  v14 = v13[1];
  if ( (_DWORD)v14 != -1 )
  {
    CmpFreeValue(v8, v14);
    v13 = (unsigned int *)a1[14];
  }
  CmpFreeTransientPoolWithTag(v13, 0x77554D43u);
  a1[14] = 0LL;
  if ( *(_DWORD *)v4 == 1 )
  {
    v15 = *(_QWORD *)(v9 + 36);
    *(_QWORD *)(v9 + 36) = *(_QWORD *)(v4 + 4);
    *(_QWORD *)(v4 + 4) = v15;
    CmpCleanUpKcbCachedSymlink(a1[6], a3);
    v16 = a1[6];
    v17 = *(_DWORD *)(v9 + 40);
    *(_DWORD *)(v16 + 96) = *(_DWORD *)(v9 + 36);
    *(_DWORD *)(v16 + 100) = v17;
  }
  CmpLightWeightCleanupSetValueKeyUoW(v8, v4);
  a1[13] = 0LL;
  return (*(__int64 (__fastcall **)(ULONG_PTR, int *))(v8 + 16))(v8, &v19);
}
