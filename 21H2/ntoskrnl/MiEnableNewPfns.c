/*
 * XREFs of MiEnableNewPfns @ 0x14052E2A0
 * Callers:
 *     MiAddPhysicalMemory @ 0x1408C4FF0 (MiAddPhysicalMemory.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertLargePageInNodeList @ 0x1403097A0 (MiInsertLargePageInNodeList.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiSetFreeZeroPfnCold @ 0x1403B1600 (MiSetFreeZeroPfnCold.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiDetermineNewPfnHeatState @ 0x1403F7D80 (MiDetermineNewPfnHeatState.c)
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
  unsigned __int8 v17; // r9
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  _DWORD *SchedulerAssist; // r9
  __int16 v22; // r14
  __int64 v23; // rsi
  unsigned __int64 v24; // rbp
  struct _KPRCB *CurrentPrcb; // r10
  bool v26; // zf
  struct _KPRCB *v27; // r8
  __int64 CachedResidentAvailable; // rdx
  int v29; // [rsp+20h] [rbp-68h]
  unsigned __int64 v30; // [rsp+28h] [rbp-60h]
  __int128 v31; // [rsp+30h] [rbp-58h] BYREF
  __int64 v32; // [rsp+40h] [rbp-48h]

  v32 = 0LL;
  v3 = BugCheckParameter2;
  v5 = (a3 & 0x100) == 0;
  v31 = 0LL;
  v6 = a2 - BugCheckParameter2;
  v30 = a2 - BugCheckParameter2;
  if ( (a3 & 0x1800) != 0 )
  {
    v7 = (a3 >> 11) & 1;
    v8 = v7;
    v29 = MiDetermineNewPfnHeatState(v5, v7);
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
        MiSetFreeZeroPfnCold(v14, v29);
        v32 = v17;
        *(_QWORD *)&v31 = v3;
        *((_QWORD *)&v31 + 1) = v5;
        result = MiInsertLargePageInNodeList((__int64)&v31);
        v14 += 48 * v11;
        v3 += v11;
        --v15;
      }
      while ( v15 );
      v6 = v30;
    }
  }
  else
  {
    v18 = MiDetermineNewPfnHeatState(v5, 3u);
    v22 = (unsigned __int16)SchedulerAssist | 0x400;
    if ( !v18 )
      v22 = (__int16)SchedulerAssist;
    result = 0xFFFFFA8000000000uLL;
    v23 = 48 * v3 - 0x58000000000LL;
    while ( v3 < a2 )
    {
      v24 = (unsigned __int8)MiLockPageInline(v23, v19, v20, SchedulerAssist);
      MiInsertPageInFreeOrZeroedList(v3, v22);
      _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      result = (unsigned int)KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v24 <= 0xFu && (unsigned __int8)result >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v19 = -1LL << ((unsigned __int8)v24 + 1);
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            result = ~(unsigned __int16)v19;
            v26 = ((unsigned int)result & SchedulerAssist[5]) == 0;
            v20 = (unsigned int)result & SchedulerAssist[5];
            SchedulerAssist[5] = v20;
            if ( v26 )
              result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v24);
      ++v3;
      v23 += 48LL;
    }
  }
  v27 = KeGetCurrentPrcb();
  CachedResidentAvailable = (int)v27->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable != -1 )
  {
    for ( ; v6 + CachedResidentAvailable <= 0x100; result = v6 + (int)result )
    {
      if ( v6 >= 0x80000 )
        break;
      result = (unsigned int)_InterlockedCompareExchange(
                               (volatile signed __int32 *)&v27->CachedResidentAvailable,
                               v6 + CachedResidentAvailable,
                               CachedResidentAvailable);
      v26 = (_DWORD)CachedResidentAvailable == (_DWORD)result;
      CachedResidentAvailable = (int)result;
      if ( v26 )
        return result;
      if ( (_DWORD)result == -1 )
        break;
    }
    if ( (int)CachedResidentAvailable > 192 )
    {
      result = (unsigned int)_InterlockedCompareExchange(
                               (volatile signed __int32 *)&v27->CachedResidentAvailable,
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
    _InterlockedExchangeAdd64(&qword_140C529C0, v6);
  return result;
}
