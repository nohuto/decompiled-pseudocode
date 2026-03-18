/*
 * XREFs of MiEnableNewPfns @ 0x14052C560
 * Callers:
 *     MiAddPhysicalMemory @ 0x1408C76D0 (MiAddPhysicalMemory.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C3730 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertLargePageInNodeList @ 0x1402F1DC0 (MiInsertLargePageInNodeList.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     MiSetFreeZeroPfnCold @ 0x1403AB590 (MiSetFreeZeroPfnCold.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiDetermineNewPfnHeatState @ 0x1403F65E4 (MiDetermineNewPfnHeatState.c)
 */

unsigned __int64 __fastcall MiEnableNewPfns(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, unsigned int a3)
{
  ULONG_PTR v3; // rdi
  BOOL v5; // r12d
  unsigned __int64 v6; // rbx
  unsigned int v7; // edx
  __int64 v8; // rsi
  __int64 v9; // r8
  _DWORD *v10; // r9
  unsigned __int64 v11; // r15
  unsigned __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rbp
  unsigned __int64 v15; // r13
  char v16; // si
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  _DWORD *SchedulerAssist; // r9
  __int16 v24; // r14
  __int64 v25; // rsi
  unsigned __int64 v26; // rbp
  struct _KPRCB *CurrentPrcb; // r10
  bool v28; // zf
  struct _KPRCB *v29; // r8
  __int64 CachedResidentAvailable; // rdx
  int v31; // [rsp+20h] [rbp-68h]
  unsigned __int64 v32; // [rsp+28h] [rbp-60h]
  __int128 v33; // [rsp+30h] [rbp-58h] BYREF
  __int64 v34; // [rsp+40h] [rbp-48h]

  v34 = 0LL;
  v3 = BugCheckParameter2;
  v5 = (a3 & 0x100) == 0;
  v33 = 0LL;
  v6 = a2 - BugCheckParameter2;
  v32 = a2 - BugCheckParameter2;
  if ( (a3 & 0x1800) != 0 )
  {
    v7 = (a3 >> 11) & 1;
    v8 = v7;
    v31 = MiDetermineNewPfnHeatState(v5, v7);
    v11 = MiLargePageSizes[v8];
    result = v6 / v11;
    v13 = v6 % v11;
    v14 = 48 * v3 - 0x58000000000LL;
    v15 = v6 / v11;
    if ( v6 / v11 )
    {
      v16 = ~(_BYTE)v8 & 3;
      do
      {
        MiLockPageInline(v14, v13, v9, v10);
        *(_BYTE *)(v14 + 34) = v5 | *(_BYTE *)(v14 + 34) & 0xF8;
        *(_BYTE *)(v14 + 39) = v16 | *(_BYTE *)(v14 + 39) & 0xFC;
        MiSetFreeZeroPfnCold(v14, v31);
        v34 = (unsigned __int8)v17;
        *(_QWORD *)&v33 = v3;
        *((_QWORD *)&v33 + 1) = v5;
        result = MiInsertLargePageInNodeList((__int64)&v33, v18, v19, v17);
        v14 += 48 * v11;
        v3 += v11;
        --v15;
      }
      while ( v15 );
      v6 = v32;
    }
  }
  else
  {
    v20 = MiDetermineNewPfnHeatState(v5, 3u);
    v24 = (unsigned __int16)SchedulerAssist | 0x400;
    if ( !v20 )
      v24 = (__int16)SchedulerAssist;
    result = 0xFFFFFA8000000000uLL;
    v25 = 48 * v3 - 0x58000000000LL;
    while ( v3 < a2 )
    {
      v26 = (unsigned __int8)MiLockPageInline(v25, v21, v22, SchedulerAssist);
      MiInsertPageInFreeOrZeroedList(v3, v24);
      _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      result = (unsigned int)KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v26 <= 0xFu && (unsigned __int8)result >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v21 = -1LL << ((unsigned __int8)v26 + 1);
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            result = ~(unsigned __int16)v21;
            v28 = ((unsigned int)result & SchedulerAssist[5]) == 0;
            v22 = (unsigned int)result & SchedulerAssist[5];
            SchedulerAssist[5] = v22;
            if ( v28 )
              result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v26);
      ++v3;
      v25 += 48LL;
    }
  }
  v29 = KeGetCurrentPrcb();
  CachedResidentAvailable = (int)v29->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable != -1 )
  {
    for ( ; v6 + CachedResidentAvailable <= 0x100; result = v6 + (int)result )
    {
      if ( v6 >= 0x80000 )
        break;
      result = (unsigned int)_InterlockedCompareExchange(
                               (volatile signed __int32 *)&v29->CachedResidentAvailable,
                               v6 + CachedResidentAvailable,
                               CachedResidentAvailable);
      v28 = (_DWORD)CachedResidentAvailable == (_DWORD)result;
      CachedResidentAvailable = (int)result;
      if ( v28 )
        return result;
      if ( (_DWORD)result == -1 )
        break;
    }
    if ( (int)CachedResidentAvailable > 192 )
    {
      result = (unsigned int)_InterlockedCompareExchange(
                               (volatile signed __int32 *)&v29->CachedResidentAvailable,
                               192,
                               CachedResidentAvailable);
      if ( (_DWORD)CachedResidentAvailable == (_DWORD)result )
      {
        result = (unsigned int)(CachedResidentAvailable - 192);
        v6 += (int)result;
      }
    }
  }
  if ( v6 )
    _InterlockedExchangeAdd64(&qword_140C52800, v6);
  return result;
}
