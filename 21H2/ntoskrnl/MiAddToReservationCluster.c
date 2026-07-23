/*
 * XREFs of MiAddToReservationCluster @ 0x140387A04
 * Callers:
 *     MiBuildReservationCluster @ 0x140386F40 (MiBuildReservationCluster.c)
 * Callees:
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14022AE80 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiReferencePageForModifiedWrite @ 0x140277E5C (MiReferencePageForModifiedWrite.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiAddToReservationCluster(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, _QWORD *a5, _DWORD *a6)
{
  unsigned int v6; // r12d
  __int64 v7; // rdx
  unsigned int v8; // r14d
  __int64 v9; // rax
  __int64 v11; // r15
  __int64 v12; // rdi
  unsigned int v13; // esi
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r9
  int v17; // r15d
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r10
  int v21; // eax
  __int64 v22; // rcx
  int *v23; // r8
  int v24; // r9d
  int *v25; // rdx
  bool v26; // zf
  bool i; // zf
  unsigned __int8 v28; // cl
  struct _KPRCB *v29; // r10
  int v30; // eax
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r9
  int v33; // eax
  _DWORD *v34; // r8
  struct _KPRCB *v35; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v38; // edx
  _DWORD *SchedulerAssist; // r9
  __int64 v40; // [rsp+20h] [rbp-48h]
  __int64 v41; // [rsp+28h] [rbp-40h]
  __int64 v42; // [rsp+70h] [rbp+8h]
  unsigned int v44; // [rsp+80h] [rbp+18h]

  v44 = a3;
  v6 = 0;
  v7 = *(_QWORD *)(a1 + 248);
  v42 = v7;
  v8 = (unsigned int)a4;
  v9 = 5LL * (*(_WORD *)(a1 + 204) & 0xF);
  v40 = v9;
  if ( (_DWORD)a3 )
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)(v7 + 8 * v9 + 2832);
      v41 = v11;
      if ( v11 == 0xFFFFFFFFFLL )
        return v6;
      v12 = 48 * v11 - 0x58000000000LL;
      v13 = 0;
      v14 = (unsigned __int8)MiLockPageInline(v12, v7, a3, a4);
      if ( v11 == *(_QWORD *)(v42 + 8 * v40 + 2832) )
      {
        v15 = *(_QWORD *)(v12 + 16);
        if ( qword_140C4DF80 && (v15 & 0x10) == 0 )
          v15 &= ~qword_140C4DF80;
        v16 = HIDWORD(v15);
        if ( (_DWORD)v16 != v8 )
        {
          v13 = v16 - v8;
          if ( !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v42, (_WORD *)(v12 + 16))
            || (unsigned int)v16 < v8
            || v13 > 0x1F
            || v13 + v6 >= v44 )
          {
            goto LABEL_17;
          }
        }
        if ( _bittest64(*(const signed __int64 **)(a2 + 8), v16) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v14 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v26 = (v38 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v38;
                if ( v26 )
                {
                  v35 = CurrentPrcb;
LABEL_70:
                  KiRemoveSystemWorkPriorityKick(v35);
                }
              }
            }
          }
LABEL_18:
          __writecr8(v14);
          return v6;
        }
        if ( v13 )
        {
          if ( v8 >= *(_DWORD *)a2 )
            goto LABEL_17;
          if ( v13 > 1 )
          {
            if ( *(_DWORD *)a2 - v8 < v13 )
              goto LABEL_17;
            v22 = *(_QWORD *)(a2 + 8);
            v23 = (int *)(v22 + 4 * ((unsigned __int64)v8 >> 5));
            v24 = *v23;
            v25 = (int *)(v22 + 4 * ((unsigned __int64)(v13 + v8 - 1) >> 5));
            if ( v23 != v25 )
            {
              for ( i = (v24 & (-1 << v8)) == 0; i; i = *v23 == 0 )
              {
                if ( ++v23 == v25 )
                {
                  v26 = ((0xFFFFFFFF >> ~(v13 + v8 - 1)) & *v23) == 0;
                  goto LABEL_46;
                }
              }
LABEL_17:
              _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v31 = KeGetCurrentIrql();
                  if ( v31 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v31 >= 2u )
                  {
                    v32 = KeGetCurrentPrcb();
                    v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
                    v34 = v32->SchedulerAssist;
                    v26 = (v33 & v34[5]) == 0;
                    v34[5] &= v33;
                    if ( v26 )
                    {
                      v35 = v32;
                      goto LABEL_70;
                    }
                  }
                }
              }
              goto LABEL_18;
            }
            v26 = (v24 & (0xFFFFFFFF >> (32 - v13) << v8)) == 0;
LABEL_46:
            if ( !v26 )
              goto LABEL_17;
          }
          else if ( _bittest(*(const signed __int32 **)(a2 + 8), v8) )
          {
            goto LABEL_17;
          }
        }
        v17 = MiReferencePageForModifiedWrite(48 * v11 - 0x58000000000LL, 0);
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v28 = KeGetCurrentIrql();
            if ( v28 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v28 >= 2u )
            {
              v29 = KeGetCurrentPrcb();
              a4 = v29->SchedulerAssist;
              v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
              v26 = (v30 & a4[5]) == 0;
              a3 = (unsigned int)v30 & a4[5];
              a4[5] = a3;
              if ( v26 )
                KiRemoveSystemWorkPriorityKick(v29);
            }
          }
        }
        __writecr8(v14);
        if ( !v17 )
          return v6;
        if ( v13 )
        {
          v6 += v13;
          v8 += v13;
          *a6 += v13;
          do
          {
            *a5++ = qword_140C4EDA8;
            --v13;
          }
          while ( v13 );
        }
        ++v6;
        *a5 = v41;
        ++v8;
        ++a5;
        if ( v17 == 3 && v6 >= 0x10 )
          return v6;
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v19 = KeGetCurrentIrql();
            if ( v19 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v19 >= 2u )
            {
              v20 = KeGetCurrentPrcb();
              a4 = v20->SchedulerAssist;
              v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
              v26 = (v21 & a4[5]) == 0;
              a3 = (unsigned int)v21 & a4[5];
              a4[5] = a3;
              if ( v26 )
                KiRemoveSystemWorkPriorityKick(v20);
            }
          }
        }
        __writecr8(v14);
      }
      if ( v6 == v44 )
        return v6;
      v7 = v42;
      v9 = v40;
    }
  }
  return v6;
}
