/*
 * XREFs of CmpCommitAddKeyUoW @ 0x140760EB8
 * Callers:
 *     CmpTransMgrCommitUoW @ 0x1407606AC (CmpTransMgrCommitUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     CmpFreeKeyByCell @ 0x140704760 (CmpFreeKeyByCell.c)
 *     CmpAssignSecurityToKcb @ 0x140704AE4 (CmpAssignSecurityToKcb.c)
 *     CmpCopyKeyPartial @ 0x1407610A0 (CmpCopyKeyPartial.c)
 *     CmpAddSubKey @ 0x14087CA20 (CmpAddSubKey.c)
 *     HvMarkCellDirty @ 0x14087E360 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpCommitAddKeyUoW(__int64 a1, __int64 *a2)
{
  ULONG_PTR v2; // r15
  __int64 v3; // r12
  unsigned int v5; // edi
  __int64 v6; // rbx
  ULONG_PTR v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rbp
  __int64 v12; // r8
  __int64 v13; // r8
  unsigned int v14; // eax
  __int64 v15; // rdi
  ULONG_PTR v16; // rdx
  __int64 v17; // rcx
  unsigned __int16 v18; // cx
  unsigned int v19; // eax
  unsigned int v20; // ebx
  __int64 v22; // [rsp+80h] [rbp+8h] BYREF
  __int64 *v23; // [rsp+88h] [rbp+10h]
  __int64 v24; // [rsp+90h] [rbp+18h] BYREF

  v23 = a2;
  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(int *)(a1 + 72);
  v5 = -1;
  v6 = *(_QWORD *)(v2 + 72);
  v7 = *(_QWORD *)(v2 + 32);
  v8 = *(_QWORD *)(v6 + 32);
  v24 = 0xFFFFFFFFLL;
  v22 = 0xFFFFFFFFLL;
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v8 + 8))(
         v8,
         *(unsigned int *)(*(_QWORD *)(v2 + 72) + 40LL),
         &v24);
  LOBYTE(v10) = 1;
  v11 = v9;
  if ( (unsigned __int8)HvMarkCellDirty(v7, *(unsigned int *)(v2 + 40), v10)
    && (LOBYTE(v12) = 1, (unsigned __int8)HvMarkCellDirty(v8, *(unsigned int *)(v6 + 40), v12))
    && (LOBYTE(v13) = 1, (unsigned __int8)HvMarkCellDirty(v8, *(unsigned int *)(v11 + 4 * v3 + 28), v13)) )
  {
    v14 = CmpCopyKeyPartial(v7, *(unsigned int *)(v2 + 40), v8, *(unsigned int *)(v6 + 40), 38);
    v5 = v14;
    if ( v14 == -1 || !(unsigned __int8)CmpAddSubKey(v8, *(unsigned int *)(v6 + 40), v14) )
    {
      v20 = -1073741670;
    }
    else
    {
      *(_DWORD *)(a1 + 88) = *(_DWORD *)(v2 + 40);
      *(_DWORD *)(v2 + 40) = v5;
      v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v7 + 8))(v7, v5, &v22);
      v16 = *(unsigned int *)(v15 + 44);
      *(_DWORD *)(v15 + 16) = *(_DWORD *)(v6 + 40);
      CmpAssignSecurityToKcb(v2, v16, 0LL, 0, 0);
      ++*(_QWORD *)(v2 + 304);
      ++*(_QWORD *)(v6 + 304);
      v17 = *v23;
      *(_QWORD *)(v11 + 4) = *v23;
      *(_QWORD *)(v6 + 168) = v17;
      v18 = 2 * *(_WORD *)(v15 + 72);
      if ( (*(_BYTE *)(v15 + 2) & 0x20) == 0 )
        v18 = *(_WORD *)(v15 + 72);
      if ( (unsigned __int16)*(_DWORD *)(v11 + 52) < (unsigned int)v18 )
      {
        *(_WORD *)(v11 + 52) = v18;
        *(_WORD *)(v6 + 176) = v18;
      }
      v19 = *(unsigned __int16 *)(v15 + 74);
      if ( *(_DWORD *)(v11 + 56) < v19 )
        *(_DWORD *)(v11 + 56) = v19;
      v5 = -1;
      v20 = 0;
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v7 + 16))(v7, &v22);
    }
  }
  else
  {
    v20 = -1073741443;
  }
  if ( v11 )
    (*(void (__fastcall **)(__int64, __int64 *))(v8 + 16))(v8, &v24);
  if ( v5 != -1 )
    CmpFreeKeyByCell(v7, v5, 0);
  return v20;
}
