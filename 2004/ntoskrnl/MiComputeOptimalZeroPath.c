/*
 * XREFs of MiComputeOptimalZeroPath @ 0x140A52C20
 * Callers:
 *     MiInitSystem @ 0x140A521D4 (MiInitSystem.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14023E080 (MiInsertPageInFreeOrZeroedList.c)
 *     MiGetPage @ 0x1402A5AB0 (MiGetPage.c)
 *     MiChangePageAttribute @ 0x1402F4EBC (MiChangePageAttribute.c)
 *     MiZeroPhysicalPage @ 0x1402F50E4 (MiZeroPhysicalPage.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

ULONG_PTR MiComputeOptimalZeroPath()
{
  unsigned int *v0; // rsi
  unsigned int v1; // edi
  __int64 i; // rbx
  ULONG_PTR result; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned int v7; // edx
  __int64 v8; // rcx
  int *v9; // r15
  __int64 v10; // rsi
  ULONG_PTR v11; // rdi
  unsigned __int64 v12; // r14
  __int64 v13; // r12
  __int64 v14; // r13
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rax
  __int64 v17; // rsi
  unsigned __int64 *v18; // rdi
  ULONG_PTR v19; // r15
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // r9
  __int64 v23; // r8
  unsigned __int64 v24; // rax
  __int64 v25; // rsi
  int *v26; // r15
  unsigned __int64 v27; // kr00_8
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // rdx
  bool v30; // zf
  __int64 v31; // rdi
  __int64 v32; // r14
  __int64 v33; // rbx
  unsigned __int64 v34; // rsi
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v36; // rsi
  __int64 v37; // rbx
  unsigned __int64 v38; // r14
  struct _KPRCB *v39; // r10
  signed __int32 v40[8]; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 *v41; // [rsp+20h] [rbp-58h]
  __int64 v42; // [rsp+28h] [rbp-50h]
  ULONG_PTR v43; // [rsp+30h] [rbp-48h]
  unsigned __int64 v44; // [rsp+40h] [rbp-38h]
  __int128 v45; // [rsp+48h] [rbp-30h]
  ULONG_PTR BugCheckParameter2[4]; // [rsp+58h] [rbp-20h]
  int v47; // [rsp+C0h] [rbp+48h] BYREF
  int v48; // [rsp+C4h] [rbp+4Ch]
  __int64 v49; // [rsp+C8h] [rbp+50h]
  __int64 v50; // [rsp+D0h] [rbp+58h]
  int *v51; // [rsp+D8h] [rbp+60h]

  v47 = 0;
  v0 = (unsigned int *)&v47;
  v1 = 0;
  v48 = 2;
  v45 = 0LL;
  for ( i = 0LL; ; ++i )
  {
    result = MiGetPage((__int64)&MiSystemPartition, v1, 0LL);
    BugCheckParameter2[i] = result;
    if ( result == -1LL )
      break;
    v7 = *v0;
    v8 = 48 * result - 0x58000000000LL;
    BugCheckParameter2[i - 2] = v8;
    if ( *(unsigned __int8 *)(v8 + 34) >> 6 != v7 )
      MiChangePageAttribute(v8, v7, 0);
    ++v1;
    ++v0;
    if ( v1 >= 2 )
    {
      v42 = 2LL;
      v9 = &v47;
      v41 = (unsigned __int64 *)&unk_140C4DDE8;
      v10 = 0LL;
      v51 = &v47;
      v50 = 0LL;
      do
      {
        v11 = *(ULONG_PTR *)((char *)BugCheckParameter2 + v10);
        v12 = 0LL;
        v13 = *v9;
        v43 = v11;
        v14 = 3LL;
        do
        {
          v15 = __rdtsc();
          _InterlockedOr(v40, 0);
          MiZeroPhysicalPage(v11, 3, (unsigned int)v13, (unsigned __int64)SchedulerAssist);
          _InterlockedOr(v40, 0);
          v16 = __rdtsc();
          v12 += (((unsigned __int64)HIDWORD(v16) << 32) | (unsigned int)v16) - v15;
          --v14;
        }
        while ( v14 );
        v17 = *(ULONG_PTR *)((char *)&BugCheckParameter2[-2] + v10);
        v18 = v41;
        v19 = v43;
        v49 = 3LL;
        v44 = v12 / 3;
        v20 = 0LL;
        do
        {
          v21 = __rdtsc();
          _InterlockedOr(v40, 0);
          MiChangePageAttribute(v17, 1u, 0);
          MiZeroPhysicalPage(v19, 3, (unsigned int)v13, v22);
          MiChangePageAttribute(v17, v13, 0);
          _InterlockedOr(v40, 0);
          v24 = __rdtsc();
          v20 += (((unsigned __int64)HIDWORD(v24) << 32) | (unsigned int)v24) - v21;
          --v49;
        }
        while ( v49 );
        v25 = v50;
        v26 = v51;
        v27 = v20;
        v28 = v44;
        v29 = v44 / 0xA;
        if ( v27 / 3 < 9 * (v44 / 0xA) )
        {
          v29 = (unsigned __int64)dword_140C4DD9C;
          dword_140C4DD9C[4 * v13] = 1;
        }
        v10 = v25 + 8;
        *(v18 - 1) = v28;
        v9 = v26 + 1;
        *v18 = v27 / 3;
        v50 = v10;
        v30 = v42-- == 1;
        v51 = v9;
        v41 = v18 + 2;
      }
      while ( !v30 );
      v31 = 0LL;
      v32 = 2LL;
      do
      {
        v33 = BugCheckParameter2[v31 - 2];
        v34 = (unsigned __int8)MiLockPageInline(v33, v29, v23, SchedulerAssist);
        MiInsertPageInFreeOrZeroedList(BugCheckParameter2[v31], 2);
        _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        result = (unsigned int)KiIrqlFlags;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            result = KeGetCurrentIrql();
            if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v34 <= 0xFu && (unsigned __int8)result >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v29 = -1LL << ((unsigned __int8)v34 + 1);
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              result = ~(unsigned __int16)v29;
              v30 = ((unsigned int)result & SchedulerAssist[5]) == 0;
              v23 = (unsigned int)result & SchedulerAssist[5];
              SchedulerAssist[5] = v23;
              if ( v30 )
                result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v34);
        ++v31;
        --v32;
      }
      while ( v32 );
      return result;
    }
  }
  if ( v1 )
  {
    v36 = v1;
    do
    {
      --v36;
      --v1;
      v37 = BugCheckParameter2[v36 - 2];
      v38 = (unsigned __int8)MiLockPageInline(v37, v4, v5, SchedulerAssist);
      MiInsertPageInFreeOrZeroedList(BugCheckParameter2[v36], 2);
      _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      result = (unsigned int)KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v38 <= 0xFu && (unsigned __int8)result >= 2u )
          {
            v39 = KeGetCurrentPrcb();
            v4 = -1LL << ((unsigned __int8)v38 + 1);
            SchedulerAssist = v39->SchedulerAssist;
            result = ~(unsigned __int16)v4;
            v30 = ((unsigned int)result & SchedulerAssist[5]) == 0;
            v5 = (unsigned int)result & SchedulerAssist[5];
            SchedulerAssist[5] = v5;
            if ( v30 )
              result = KiRemoveSystemWorkPriorityKick((__int64)v39);
          }
        }
      }
      __writecr8(v38);
    }
    while ( v1 );
  }
  return result;
}
