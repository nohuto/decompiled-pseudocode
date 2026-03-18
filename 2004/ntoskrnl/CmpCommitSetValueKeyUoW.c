/*
 * XREFs of CmpCommitSetValueKeyUoW @ 0x140751D0C
 * Callers:
 *     CmpTransMgrCommitUoW @ 0x140751ACC (CmpTransMgrCommitUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     CmpSetValueKeyExisting @ 0x1405E0E2C (CmpSetValueKeyExisting.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1405E6AE8 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpGetValueData @ 0x1405EBEC0 (CmpGetValueData.c)
 *     CmpInitializeValueNameString @ 0x1406433E4 (CmpInitializeValueNameString.c)
 *     CmpFindNameInList @ 0x140655778 (CmpFindNameInList.c)
 *     CmpSetValueKeyNew @ 0x14069E068 (CmpSetValueKeyNew.c)
 *     HvMarkCellDirty @ 0x1408787F0 (HvMarkCellDirty.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpCommitSetValueKeyUoW(__int64 a1, __int64 *a2)
{
  void *Src; // r12
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // rdx
  PVOID v7; // r13
  ULONG_PTR v8; // rdi
  __int64 (__fastcall *v9)(ULONG_PTR, __int64, _DWORD *); // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  unsigned int v12; // eax
  unsigned int v13; // r14d
  _WORD *PoolWithTag; // rax
  int v15; // ebx
  unsigned __int16 v16; // cx
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // r8d
  bool ValueData; // al
  unsigned int v22; // r13d
  __int64 v23; // r8
  size_t Size; // [rsp+28h] [rbp-41h]
  __int64 v25; // [rsp+40h] [rbp-29h] BYREF
  PVOID P; // [rsp+48h] [rbp-21h] BYREF
  int v27; // [rsp+50h] [rbp-19h] BYREF
  int v28; // [rsp+54h] [rbp-15h] BYREF
  _DWORD v29[2]; // [rsp+58h] [rbp-11h] BYREF
  _DWORD v30[2]; // [rsp+60h] [rbp-9h] BYREF
  _DWORD v31[2]; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int16 v32[40]; // [rsp+70h] [rbp+7h] BYREF
  char v33; // [rsp+D0h] [rbp+67h]
  char v35; // [rsp+E8h] [rbp+7Fh] BYREF

  v25 = 0LL;
  v31[1] = 0;
  v29[1] = 0;
  v30[1] = 0;
  v31[0] = -1;
  Src = 0LL;
  v4 = *(_QWORD *)(a1 + 48);
  v5 = 0LL;
  v6 = *(unsigned int *)(a1 + 92);
  v7 = 0LL;
  v29[0] = -1;
  v30[0] = -1;
  v8 = *(_QWORD *)(v4 + 32);
  v33 = 0;
  v35 = 0;
  *(_OWORD *)v32 = 0LL;
  v9 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(v8 + 8);
  v28 = 0;
  v27 = 0;
  v10 = v9(v8, v6, v31);
  v11 = v10;
  if ( !v10 )
    return (unsigned int)-1073741670;
  v12 = *(_DWORD *)(v10 + 4);
  v13 = v12 + 0x80000000;
  if ( v12 < 0x80000000 )
    v13 = v12;
  LODWORD(P) = v13;
  if ( v13 )
  {
    if ( v12 < 0x80000000 )
    {
      ValueData = CmpGetValueData(
                    v8,
                    *(unsigned int *)(a1 + 92),
                    v11,
                    (unsigned int *)&P,
                    (__int64)&v25,
                    (__int64)&v35,
                    (__int64)v29);
      Src = (void *)v25;
      if ( !ValueData )
        goto LABEL_36;
      v13 = (unsigned int)P;
      v33 = 1;
    }
    else
    {
      Src = (void *)(v11 + 8);
    }
  }
  v5 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v8 + 8))(
         v8,
         *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL),
         v30);
  if ( !v5 )
  {
LABEL_36:
    v15 = -1073741670;
    goto LABEL_20;
  }
  if ( (unsigned __int8)HvMarkCellDirty(v8, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL), 0LL) )
  {
    *(_DWORD *)(a1 + 72) = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 40LL) >> 31;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x8000uLL, 0x62534D43u);
    P = PoolWithTag;
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      CmpInitializeValueNameString(v11, (__int64)v32, PoolWithTag);
      if ( CmpFindNameInList(v8, (unsigned int *)(v5 + 36), (__int64)v32, 0, (__int64)&v28, (__int64)&v27) )
      {
        if ( *(_DWORD *)(a1 + 68) != 5 || (v22 = v27, v27 == -1) )
        {
          v15 = CmpSetValueKeyNew(
                  v8,
                  v5,
                  (__int64)v32,
                  v28,
                  *(_DWORD *)(v11 + 12),
                  (__int64)Src,
                  v13,
                  *(_DWORD *)(a1 + 72));
        }
        else
        {
          v25 = 0xFFFFFFFFLL;
          v23 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v8 + 8))(v8, (unsigned int)v27, &v25);
          if ( !v23 )
          {
            v15 = -1073741670;
LABEL_19:
            v7 = P;
            goto LABEL_20;
          }
          LODWORD(Size) = v13;
          v15 = CmpSetValueKeyExisting(v8, v22, v23, *(_DWORD *)(v11 + 12), Src, Size, *(_DWORD *)(a1 + 72));
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v8 + 16))(v8, &v25);
        }
        if ( v15 >= 0 )
        {
          HvMarkCellDirty(v8, *(unsigned int *)(a1 + 92), 0LL);
          v16 = v32[0];
          if ( *(_DWORD *)(v5 + 60) < (unsigned int)v32[0] )
          {
            *(_DWORD *)(v5 + 60) = v32[0];
            *(_WORD *)(*(_QWORD *)(a1 + 48) + 178LL) = v16;
          }
          if ( *(_DWORD *)(v5 + 64) < v13 )
          {
            *(_DWORD *)(v5 + 64) = v13;
            *(_DWORD *)(*(_QWORD *)(a1 + 48) + 180LL) = v13;
          }
          ++*(_QWORD *)(*(_QWORD *)(a1 + 48) + 304LL);
          v17 = *a2;
          *(_QWORD *)(v5 + 4) = *a2;
          *(_QWORD *)(*(_QWORD *)(a1 + 48) + 168LL) = v17;
          CmpCleanUpKcbCachedSymlink(*(_QWORD *)(a1 + 48));
          v18 = *(_QWORD *)(a1 + 48);
          v19 = *(_DWORD *)(v5 + 40);
          *(_DWORD *)(v18 + 96) = *(_DWORD *)(v5 + 36);
          *(_DWORD *)(v18 + 100) = v19;
        }
        goto LABEL_19;
      }
    }
    goto LABEL_36;
  }
  v15 = -1073741443;
LABEL_20:
  if ( Src && v33 )
  {
    if ( v35 )
      ExFreePoolWithTag(Src, 0);
    else
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v8 + 16))(v8, v29);
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v5 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v8 + 16))(v8, v30);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v8 + 16))(v8, v31);
  return (unsigned int)v15;
}
