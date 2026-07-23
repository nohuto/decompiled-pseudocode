/*
 * XREFs of HalpInterruptEnumerateUnmaskedInterrupts @ 0x1404BB490
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     HalpAcquireHighLevelLock @ 0x140378A70 (HalpAcquireHighLevelLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     HalpInterruptEnumerateUnmaskedSecondaryInterrupts @ 0x1404D1230 (HalpInterruptEnumerateUnmaskedSecondaryInterrupts.c)
 */

__int64 __fastcall HalpInterruptEnumerateUnmaskedInterrupts(
        __int64 (__fastcall *a1)(__int64, _WORD *),
        __int64 a2,
        _WORD *a3)
{
  unsigned int v4; // r8d
  unsigned int v5; // ebx
  char v6; // bp
  unsigned __int8 v7; // al
  ULONG_PTR *v8; // r12
  unsigned __int64 v9; // r13
  ULONG_PTR *v10; // r8
  ULONG_PTR *v11; // rax
  ULONG_PTR *v12; // r15
  ULONG_PTR *v13; // rdi
  int v14; // r14d
  _DWORD *v15; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  ULONG_PTR *v24; // [rsp+80h] [rbp+18h]
  ULONG_PTR *v25; // [rsp+88h] [rbp+20h]

  v4 = (unsigned __int16)a3[1];
  if ( *a3 && v4 >= 0x20 )
  {
    memset(a3, 0, v4 - 4);
    v5 = 0;
    v6 = 1;
    v7 = HalpAcquireHighLevelLock(&HalpInterruptLock);
    v8 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
    v9 = v7;
    while ( v8 != &HalpRegisteredInterruptControllers )
    {
      v24 = v8;
      v10 = v8;
      v8 = (ULONG_PTR *)*v8;
      v11 = v10 + 30;
      v12 = (ULONG_PTR *)v10[30];
      v25 = v10 + 30;
      while ( v12 != v11 )
      {
        v13 = v12;
        v12 = (ULONG_PTR *)*v12;
        if ( *((_DWORD *)v13 + 7) != -1 )
        {
          v14 = *((_DWORD *)v13 + 5);
          if ( v14 < *((_DWORD *)v13 + 6) )
          {
            do
            {
              v15 = (_DWORD *)(v13[5] + 56LL * (unsigned int)(v14 - *((_DWORD *)v13 + 5)));
              if ( (v15[3] & 1) != 0 )
              {
                *((_DWORD *)a3 + 4) = *((_DWORD *)v13 + 7) + v14 - *((_DWORD *)v13 + 5);
                a3[2] = 0;
                *((_DWORD *)a3 + 2) = v15[2];
                *((_DWORD *)a3 + 3) = *v15;
                *((_QWORD *)a3 + 3) = v10[43];
                v6 = a1(a2, a3);
                if ( !v6 )
                  goto LABEL_16;
                v10 = v24;
              }
              ++v14;
            }
            while ( v14 < *((_DWORD *)v13 + 6) );
            v11 = v25;
          }
        }
      }
    }
LABEL_16:
    KxReleaseSpinLock(&HalpInterruptLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v20 = (v19 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v19;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
    if ( v6 && SecondaryIcServicesEnabled )
      return (unsigned int)HalpInterruptEnumerateUnmaskedSecondaryInterrupts(a1, a2, a3);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
