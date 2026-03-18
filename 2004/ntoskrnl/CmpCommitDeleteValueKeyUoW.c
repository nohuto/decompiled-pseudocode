/*
 * XREFs of CmpCommitDeleteValueKeyUoW @ 0x140752064
 * Callers:
 *     CmpTransMgrCommitUoW @ 0x140751ACC (CmpTransMgrCommitUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     CmpMarkValueDataDirty @ 0x1405E112C (CmpMarkValueDataDirty.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1405E6AE8 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpInitializeValueNameString @ 0x1406433E4 (CmpInitializeValueNameString.c)
 *     CmpFindNameInList @ 0x140655778 (CmpFindNameInList.c)
 *     CmpFreeValue @ 0x14069DDBC (CmpFreeValue.c)
 *     CmpRemoveValueFromList @ 0x1406F5350 (CmpRemoveValueFromList.c)
 *     HvMarkCellDirty @ 0x1408787F0 (HvMarkCellDirty.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpCommitDeleteValueKeyUoW(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rax
  ULONG_PTR v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rdx
  unsigned int *v9; // r13
  __int64 (__fastcall *v10)(ULONG_PTR, __int64, _DWORD *); // rax
  __int64 v11; // r12
  _WORD *PoolWithTag; // rax
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // edx
  _DWORD v18[2]; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v19[2]; // [rsp+38h] [rbp-28h] BYREF
  PVOID P; // [rsp+40h] [rbp-20h]
  __int128 v21; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v22; // [rsp+A0h] [rbp+40h] BYREF
  __int64 *v23; // [rsp+A8h] [rbp+48h]
  __int64 v24; // [rsp+B0h] [rbp+50h]
  unsigned int v25; // [rsp+B8h] [rbp+58h] BYREF

  v24 = a3;
  v23 = a2;
  v19[0] = -1;
  v18[0] = -1;
  v19[1] = 0;
  v18[1] = 0;
  v4 = *(_QWORD *)(a1 + 48);
  v25 = 0;
  v21 = 0LL;
  v5 = *(_QWORD *)(v4 + 32);
  v6 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v5 + 8))(v5, *(unsigned int *)(v4 + 40), v19);
  v7 = v6;
  if ( !v6 )
    return 3221225626LL;
  v8 = *(unsigned int *)(a1 + 88);
  v9 = (unsigned int *)(v6 + 36);
  v10 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(v5 + 8);
  v22 = -1;
  v11 = v10(v5, v8, v18);
  if ( v11 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x8000uLL, 0x62534D43u);
    P = PoolWithTag;
    if ( PoolWithTag )
    {
      CmpInitializeValueNameString(v11, (__int64)&v21, PoolWithTag);
      if ( CmpFindNameInList(v5, v9, (__int64)&v21, 0, (__int64)&v25, (__int64)&v22)
        && v22 != -1
        && ((*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v18),
            (v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v5 + 8))(v5, v22, v18)) != 0) )
      {
        if ( (unsigned __int8)HvMarkCellDirty(v5, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL), 0LL)
          && (unsigned __int8)HvMarkCellDirty(v5, *(unsigned int *)(v7 + 40), 0LL)
          && (unsigned __int8)HvMarkCellDirty(v5, v22, 0LL)
          && CmpMarkValueDataDirty(v5, v11) )
        {
          v13 = CmpRemoveValueFromList(v5, v25, v9);
          if ( v13 >= 0 )
          {
            CmpFreeValue(v5, v22);
            v14 = *v23;
            *(_QWORD *)(v7 + 4) = *v23;
            *(_QWORD *)(*(_QWORD *)(a1 + 48) + 168LL) = v14;
            if ( !*v9 )
            {
              *(_QWORD *)(v7 + 60) = 0LL;
              *(_WORD *)(*(_QWORD *)(a1 + 48) + 178LL) = 0;
              *(_DWORD *)(*(_QWORD *)(a1 + 48) + 180LL) = 0;
            }
            ++*(_QWORD *)(*(_QWORD *)(a1 + 48) + 304LL);
            CmpCleanUpKcbCachedSymlink(*(_QWORD *)(a1 + 48));
            v15 = *(_QWORD *)(a1 + 48);
            v16 = *(_DWORD *)(v7 + 40);
            *(_DWORD *)(v15 + 96) = *v9;
            *(_DWORD *)(v15 + 100) = v16;
          }
        }
        else
        {
          v13 = -1073741443;
        }
      }
      else
      {
        v13 = -1073741670;
      }
      ExFreePoolWithTag(P, 0);
    }
    else
    {
      v13 = -1073741670;
    }
    if ( v11 )
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v18);
  }
  else
  {
    v13 = -1073741670;
  }
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v19);
  return (unsigned int)v13;
}
