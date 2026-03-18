/*
 * XREFs of CmpCommitSetSecurityUoW @ 0x140778DFC
 * Callers:
 *     CmpTransMgrCommitUoW @ 0x1407606AC (CmpTransMgrCommitUoW.c)
 * Callees:
 *     CmpRemoveSecurityCellList @ 0x1402F2C04 (CmpRemoveSecurityCellList.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     CmpAssignSecurityToKcb @ 0x140704AE4 (CmpAssignSecurityToKcb.c)
 *     HvFreeCell @ 0x140706E0C (HvFreeCell.c)
 *     CmpAssignSecurityDescriptor @ 0x140873E74 (CmpAssignSecurityDescriptor.c)
 *     HvMarkCellDirty @ 0x14087E360 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpCommitSetSecurityUoW(__int64 a1, __int64 *a2)
{
  __int64 v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rax
  unsigned int v6; // ebx
  ULONG_PTR v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r15
  unsigned int v10; // r14d
  __int64 v11; // rax
  __int64 v12; // r8
  unsigned int v13; // ebx
  __int64 v14; // r8
  __int64 v15; // r8
  int v16; // ebx
  int v17; // eax
  __int64 v18; // rcx
  _DWORD v20[2]; // [rsp+30h] [rbp-18h] BYREF
  _DWORD v21[4]; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v22; // [rsp+90h] [rbp+48h]
  unsigned int v24; // [rsp+A0h] [rbp+58h]
  int v25; // [rsp+A8h] [rbp+60h] BYREF
  int v26; // [rsp+ACh] [rbp+64h]

  v20[1] = 0;
  v21[1] = 0;
  v26 = 0;
  v3 = 0LL;
  v20[0] = -1;
  v4 = 0LL;
  v5 = *(_QWORD *)(a1 + 48);
  v21[0] = -1;
  v25 = -1;
  v6 = *(_DWORD *)(v5 + 40);
  v7 = *(_QWORD *)(v5 + 32);
  v24 = v6;
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v7 + 8))(v7, v6, v20);
  if ( !v9 )
    return (unsigned int)-1073741670;
  LOBYTE(v8) = 1;
  if ( !(unsigned __int8)HvMarkCellDirty(v7, v6, v8) )
  {
LABEL_21:
    v16 = -1073741443;
    goto LABEL_12;
  }
  v3 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v7 + 8))(v7, *(unsigned int *)(a1 + 96), v21);
  if ( v3 )
  {
    v10 = *(_DWORD *)(v9 + 44);
    v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v7 + 8))(v7, v10, &v25);
    v4 = v11;
    if ( v11 )
    {
      v13 = *(_DWORD *)(v11 + 8);
      LOBYTE(v12) = 1;
      v22 = *(_DWORD *)(v11 + 4);
      if ( (unsigned __int8)HvMarkCellDirty(v7, v10, v12) )
      {
        LOBYTE(v14) = 1;
        if ( (unsigned __int8)HvMarkCellDirty(v7, v13, v14) )
        {
          LOBYTE(v15) = 1;
          if ( (unsigned __int8)HvMarkCellDirty(v7, v22, v15) )
          {
            v16 = CmpAssignSecurityDescriptor(v7, v24, v9, (int)v3 + 20, 1);
            if ( v16 < 0 )
            {
              *(_DWORD *)(v9 + 44) = v10;
            }
            else
            {
              v17 = *(_DWORD *)(v4 + 12);
              if ( v17 == 1 )
              {
                (*(void (__fastcall **)(ULONG_PTR, int *))(v7 + 16))(v7, &v25);
                v4 = 0LL;
                CmpRemoveSecurityCellList(v7, v10);
                HvFreeCell(v7, v10);
              }
              else
              {
                *(_DWORD *)(v4 + 12) = v17 - 1;
              }
              v18 = *a2;
              *(_QWORD *)(v9 + 4) = *a2;
              *(_QWORD *)(*(_QWORD *)(a1 + 48) + 168LL) = v18;
              CmpAssignSecurityToKcb(*(_QWORD *)(a1 + 48), *(unsigned int *)(v9 + 44), 0LL, 0, 0);
              ++*(_QWORD *)(*(_QWORD *)(a1 + 48) + 304LL);
            }
            goto LABEL_12;
          }
        }
      }
      goto LABEL_21;
    }
  }
  v16 = -1073741670;
LABEL_12:
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v7 + 16))(v7, v20);
  if ( v3 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v7 + 16))(v7, v21);
  if ( v4 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(v7 + 16))(v7, &v25);
  return (unsigned int)v16;
}
