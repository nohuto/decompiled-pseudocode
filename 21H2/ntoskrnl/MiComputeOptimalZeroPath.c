/*
 * XREFs of MiComputeOptimalZeroPath @ 0x140A558A8
 * Callers:
 *     MiInitSystem @ 0x140A54E5C (MiInitSystem.c)
 * Callees:
 *     MiZeroPhysicalPage @ 0x1402976D0 (MiZeroPhysicalPage.c)
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiChangePageAttribute @ 0x14030EF34 (MiChangePageAttribute.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

ULONG_PTR MiComputeOptimalZeroPath()
{
  unsigned int *v0; // rsi
  unsigned int v1; // edi
  __int64 i; // rbx
  ULONG_PTR result; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  _DWORD *v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  int *v9; // r15
  __int64 v10; // rsi
  ULONG_PTR v11; // rdi
  unsigned __int64 v12; // r14
  __int64 v13; // r12
  __int64 v14; // r13
  unsigned __int64 v15; // rbx
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 v17; // rax
  __int64 v18; // rsi
  unsigned __int64 *v19; // rdi
  ULONG_PTR v20; // r15
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rbx
  _DWORD *v23; // r9
  __int64 v24; // r8
  unsigned __int64 v25; // rax
  __int64 v26; // rsi
  int *v27; // r15
  unsigned __int64 v28; // kr00_8
  unsigned __int64 v29; // r14
  unsigned __int64 v30; // rdx
  bool v31; // zf
  __int64 v32; // rdi
  __int64 v33; // r14
  __int64 v34; // rbx
  unsigned __int64 v35; // rsi
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v37; // rsi
  __int64 v38; // rbx
  unsigned __int64 v39; // r14
  struct _KPRCB *v40; // r10
  signed __int32 v41[8]; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 *v42; // [rsp+20h] [rbp-58h]
  __int64 v43; // [rsp+28h] [rbp-50h]
  ULONG_PTR v44; // [rsp+30h] [rbp-48h]
  unsigned __int64 v45; // [rsp+40h] [rbp-38h]
  __int128 v46; // [rsp+48h] [rbp-30h]
  ULONG_PTR BugCheckParameter2[4]; // [rsp+58h] [rbp-20h]
  int v48; // [rsp+C0h] [rbp+48h] BYREF
  int v49; // [rsp+C4h] [rbp+4Ch]
  __int64 v50; // [rsp+C8h] [rbp+50h]
  __int64 v51; // [rsp+D0h] [rbp+58h]
  int *v52; // [rsp+D8h] [rbp+60h]

  v48 = 0;
  v0 = (unsigned int *)&v48;
  v1 = 0;
  v49 = 2;
  v46 = 0LL;
  for ( i = 0LL; ; ++i )
  {
    result = MiGetPage((__int64)&MiSystemPartition, v1, 0LL);
    BugCheckParameter2[i] = result;
    if ( result == -1LL )
      break;
    v7 = *v0;
    v8 = 48 * result - 0x58000000000LL;
    BugCheckParameter2[i - 2] = v8;
    if ( *(unsigned __int8 *)(v8 + 34) >> 6 != (_DWORD)v7 )
      MiChangePageAttribute(v8, v7, 0LL, v6);
    ++v1;
    ++v0;
    if ( v1 >= 2 )
    {
      v43 = 2LL;
      v9 = &v48;
      v42 = (unsigned __int64 *)&unk_140C4E028;
      v10 = 0LL;
      v52 = &v48;
      v51 = 0LL;
      do
      {
        v11 = *(ULONG_PTR *)((char *)BugCheckParameter2 + v10);
        v12 = 0LL;
        v13 = *v9;
        v44 = v11;
        v14 = 3LL;
        do
        {
          v15 = __rdtsc();
          _InterlockedOr(v41, 0);
          MiZeroPhysicalPage(v11, 3, v13);
          _InterlockedOr(v41, 0);
          v17 = __rdtsc();
          v12 += (((unsigned __int64)HIDWORD(v17) << 32) | (unsigned int)v17) - v15;
          --v14;
        }
        while ( v14 );
        v18 = *(ULONG_PTR *)((char *)&BugCheckParameter2[-2] + v10);
        v19 = v42;
        v20 = v44;
        v50 = 3LL;
        v45 = v12 / 3;
        v21 = 0LL;
        do
        {
          v22 = __rdtsc();
          _InterlockedOr(v41, 0);
          MiChangePageAttribute(v18, 1LL, 0LL, SchedulerAssist);
          MiZeroPhysicalPage(v20, 3, v13);
          MiChangePageAttribute(v18, (unsigned int)v13, 0LL, v23);
          _InterlockedOr(v41, 0);
          v25 = __rdtsc();
          v21 += (((unsigned __int64)HIDWORD(v25) << 32) | (unsigned int)v25) - v22;
          --v50;
        }
        while ( v50 );
        v26 = v51;
        v27 = v52;
        v28 = v21;
        v29 = v45;
        v30 = v45 / 0xA;
        if ( v28 / 3 < 9 * (v45 / 0xA) )
        {
          v30 = (unsigned __int64)dword_140C4DFDC;
          dword_140C4DFDC[4 * v13] = 1;
        }
        v10 = v26 + 8;
        *(v19 - 1) = v29;
        v9 = v27 + 1;
        *v19 = v28 / 3;
        v51 = v10;
        v31 = v43-- == 1;
        v52 = v9;
        v42 = v19 + 2;
      }
      while ( !v31 );
      v32 = 0LL;
      v33 = 2LL;
      do
      {
        v34 = BugCheckParameter2[v32 - 2];
        v35 = (unsigned __int8)MiLockPageInline(v34, v30, v24, SchedulerAssist);
        MiInsertPageInFreeOrZeroedList(BugCheckParameter2[v32], 2);
        _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        result = (unsigned int)KiIrqlFlags;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            result = KeGetCurrentIrql();
            if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v35 <= 0xFu && (unsigned __int8)result >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v30 = -1LL << ((unsigned __int8)v35 + 1);
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              result = ~(unsigned __int16)v30;
              v31 = ((unsigned int)result & SchedulerAssist[5]) == 0;
              v24 = (unsigned int)result & SchedulerAssist[5];
              SchedulerAssist[5] = v24;
              if ( v31 )
                result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v35);
        ++v32;
        --v33;
      }
      while ( v33 );
      return result;
    }
  }
  if ( v1 )
  {
    v37 = v1;
    do
    {
      --v37;
      --v1;
      v38 = BugCheckParameter2[v37 - 2];
      v39 = (unsigned __int8)MiLockPageInline(v38, v4, v5, v6);
      MiInsertPageInFreeOrZeroedList(BugCheckParameter2[v37], 2);
      _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      result = (unsigned int)KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v39 <= 0xFu && (unsigned __int8)result >= 2u )
          {
            v40 = KeGetCurrentPrcb();
            v4 = -1LL << ((unsigned __int8)v39 + 1);
            v6 = v40->SchedulerAssist;
            result = ~(unsigned __int16)v4;
            v31 = ((unsigned int)result & v6[5]) == 0;
            v5 = (unsigned int)result & v6[5];
            v6[5] = v5;
            if ( v31 )
              result = KiRemoveSystemWorkPriorityKick((__int64)v40);
          }
        }
      }
      __writecr8(v39);
    }
    while ( v1 );
  }
  return result;
}
