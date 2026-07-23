/*
 * XREFs of MiUpdateForkMaps @ 0x14055B9E0
 * Callers:
 *     MiCloneVads @ 0x140559568 (MiCloneVads.c)
 * Callees:
 *     MiIncreaseUsedPtesCount @ 0x140314524 (MiIncreaseUsedPtesCount.c)
 *     MiFillPteHierarchy @ 0x1403171C0 (MiFillPteHierarchy.c)
 *     MiGetNextPageTable @ 0x140318570 (MiGetNextPageTable.c)
 *     MiMakeSystemAddressValid @ 0x1403190E0 (MiMakeSystemAddressValid.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140327920 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiMapSinglePage @ 0x14036B2B4 (MiMapSinglePage.c)
 *     MiBuildForkPageTable @ 0x14055820C (MiBuildForkPageTable.c)
 *     MiDoneWithThisPageGetAnother @ 0x14055A378 (MiDoneWithThisPageGetAnother.c)
 */

ULONG_PTR __fastcall MiUpdateForkMaps(__int64 *a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, char a6)
{
  __int64 NextPageTable; // rax
  ULONG_PTR v9; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  ULONG_PTR v13; // rax
  __int64 v14; // rbx
  unsigned __int64 *v15; // r13
  int v16; // edi
  __int64 v17; // rbx
  __int64 v18; // r14
  __int64 v19; // rbp
  __int64 *v20; // r15
  __int64 v21; // rax
  unsigned __int64 v22; // rbx
  __int64 *v23; // rbx
  __int64 v24; // r8
  __int64 v25; // r9
  struct _LIST_ENTRY *Flink; // rdx
  unsigned __int8 v27; // r9
  __int64 v28; // [rsp+30h] [rbp-68h] BYREF
  __int64 v29; // [rsp+38h] [rbp-60h]
  ULONG_PTR v30; // [rsp+40h] [rbp-58h]
  __int128 v31; // [rsp+48h] [rbp-50h] BYREF
  __int128 v32; // [rsp+58h] [rbp-40h] BYREF
  int v33; // [rsp+A8h] [rbp+10h] BYREF
  _QWORD *v34; // [rsp+B8h] [rbp+20h]

  v34 = a4;
  v33 = 0;
  v31 = 0LL;
  v32 = 0LL;
  NextPageTable = MiGetNextPageTable(a2, a3, 0LL, a6, 4, &v33);
  v30 = NextPageTable;
  v9 = NextPageTable;
  if ( !NextPageTable )
    return a3 + 8;
  LODWORD(v11) = MI_IS_PHYSICAL_ADDRESS(NextPageTable << 25 >> 16);
  if ( (_DWORD)v11 )
  {
    v12 = (unsigned int)v11;
    do
    {
      v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v12;
    }
    while ( v12 );
    v9 += 8LL;
    v11 = (unsigned int)v11;
    do
    {
      v9 = (__int64)(v9 << 25) >> 16;
      --v11;
    }
    while ( v11 );
  }
  else
  {
    if ( ((v9 ^ a1[6]) & 0xFFFFFFFFFFFFF000uLL) != 0 )
    {
      MiFillPteHierarchy((__int64)(v9 << 25) >> 16, (unsigned __int64 *)&v31);
      v14 = *a1;
      v15 = (unsigned __int64 *)&v32 + 1;
      a1[6] = v9;
      v16 = 4;
      v29 = 3LL;
      v17 = *(_QWORD *)(v14 + 40) >> 12;
      v18 = v17;
      v19 = 0LL;
      do
      {
        v20 = (__int64 *)(MiMapSinglePage(a1[7], v17, 1073741856LL, 0LL) + 8LL * ((*(_DWORD *)v15 >> 3) & 0x1FF));
        v21 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v20);
        v28 = v21;
        v22 = v21;
        if ( v21 )
        {
          if ( (v21 & 1) != 0 )
          {
            if ( MiPteInShadowRange((unsigned __int64)&v28)
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
            {
              Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( Flink )
              {
                if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v28 >> 3) & 0x1FF)) & 0x20) != 0 )
                  v22 |= 0x20uLL;
              }
            }
          }
          else if ( qword_140C4DF80 )
          {
            if ( (v21 & 0x10) != 0 )
              v22 = v21 & 0xFFFFFFFFFFFFFFEFuLL;
            else
              v22 = ~qword_140C4DF80 & v21;
          }
          v17 = (v22 >> 12) & 0xFFFFFFFFFLL;
        }
        else
        {
          v23 = &a1[4 - v16];
          MiDoneWithThisPageGetAnother(v23 + 1, a5, *a1, a6);
          v17 = v23[1];
          MiBuildForkPageTable(*a1, v17, *v15, v20, v18, v16 - 1);
          ++*v34;
          if ( v19 )
            MiIncreaseUsedPtesCount(v19, 1LL, v24, v25);
        }
        v19 = 48 * v17 - 0x58000000000LL;
        --v16;
        --v15;
        v18 = v17;
        --v29;
      }
      while ( v29 );
      v13 = MiMapSinglePage(a1[7], v17, 1073741856LL, 0LL);
      v9 = v30;
      a1[4] = v13;
      a1[8] = v19;
    }
    else
    {
      v13 = a1[4];
    }
    v27 = a6;
    a1[5] = v13 | v9 & 0xFFF;
    MiMakeSystemAddressValid(v9, 0LL, 0, v27, 1);
  }
  return v9;
}
