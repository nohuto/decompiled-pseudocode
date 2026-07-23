/*
 * XREFs of CcAdjustVacbLevelLockCount @ 0x140300404
 * Callers:
 *     CcDeleteBcbs @ 0x140250A10 (CcDeleteBcbs.c)
 *     CcUnpinFileDataEx @ 0x1402FF380 (CcUnpinFileDataEx.c)
 *     CcAllocateInitializeBcb @ 0x140327AD0 (CcAllocateInitializeBcb.c)
 * Callees:
 *     CcSetVacbLargeOffset @ 0x1403000FC (CcSetVacbLargeOffset.c)
 *     VacbLevelReference @ 0x1403004AC (VacbLevelReference.c)
 */

char __fastcall CcAdjustVacbLevelLockCount(__int64 a1, __int64 a2, int a3)
{
  int v4; // r9d
  __int64 v5; // rbx
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // r11d
  char v11; // cl
  __int64 v12; // rax
  _DWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _DWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r10
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rcx

  v4 = 0;
  v5 = a2;
  v8 = *(_QWORD *)(a1 + 88);
  v9 = 25;
  do
  {
    v10 = v9;
    v9 += 7;
    ++v4;
  }
  while ( *(_QWORD *)(a1 + 32) > 1LL << v9 );
  do
  {
    v11 = v10;
    v12 = v5 >> v10;
    v10 -= 7;
    v8 = *(_QWORD *)(v8 + 8LL * (unsigned int)v12);
    v5 &= (1LL << v11) - 1;
    --v4;
  }
  while ( v4 );
  v13 = (_DWORD *)VacbLevelReference(a1, v8, 0LL);
  *v13 += a3;
  v17 = (_DWORD *)VacbLevelReference(v15, v14, v16);
  v21 = *v17 | v17[1];
  if ( !v21 )
  {
    v22 = VacbLevelReference(v20, v18, v19);
    ++*(_DWORD *)(v22 + 4);
    LOBYTE(v21) = CcSetVacbLargeOffset(v23, a2 & 0xFFFFFFFFFE000000uLL, 0xFFFFFFFFFFFFFFFEuLL, 0LL);
  }
  return v21;
}
