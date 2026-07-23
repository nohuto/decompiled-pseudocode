/*
 * XREFs of KiStopProfileTarget @ 0x14051C5A0
 * Callers:
 *     KeStopProfile @ 0x14051BF20 (KeStopProfile.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x1402CCE60 (KeIsEmptyAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x1402CDC80 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x1402CDD00 (KeEnumerateNextProcessor.c)
 *     KeSubtractAffinityEx @ 0x1402CFF20 (KeSubtractAffinityEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

ULONG_PTR __fastcall KiStopProfileTarget(__int64 *Argument)
{
  __int64 v1; // r14
  char v3; // cl
  unsigned __int8 CurrentIrql; // r15
  _DWORD *SchedulerAssist; // r10
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v10; // rsi
  int v11; // edx
  bool v12; // zf
  __int64 v13; // rcx
  _QWORD *v14; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r9
  _DWORD *v18; // r8
  int v19; // eax
  ULONG_PTR result; // rax
  signed __int32 v21[8]; // [rsp+0h] [rbp-58h] BYREF
  __int128 v22; // [rsp+20h] [rbp-38h] BYREF
  __int64 v23; // [rsp+30h] [rbp-28h]
  unsigned int v24; // [rsp+60h] [rbp+8h] BYREF

  v1 = *Argument;
  v24 = 0;
  v22 = 0LL;
  v23 = 0LL;
  v3 = KiProfileIrql;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8((unsigned __int8)KiProfileIrql);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)(v3 - 2) <= 0xDu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1LL << (CurrentIrql + 1)) & ((1LL << (v3 + 1)) - 1) & 0xFFFFFFFC;
  }
  if ( !_InterlockedDecrement((volatile signed __int32 *)Argument + 2) && *(_BYTE *)(v1 + 242) )
  {
    *(_BYTE *)(v1 + 242) = 0;
    v6 = v1 + 8;
    v7 = *(_QWORD *)(v1 + 8);
    if ( v7 != v1 + 8 )
    {
      v8 = *(_QWORD **)(v1 + 16);
      if ( *(_QWORD *)(v7 + 8) != v6 || *v8 != v6 )
        goto LABEL_26;
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
    }
    v9 = (_QWORD *)KiProfileSourceListHead;
    do
    {
      v10 = v9;
      v9 = (_QWORD *)*v9;
    }
    while ( *((_DWORD *)v10 + 4) != *(__int16 *)(v1 + 240) );
    *((_QWORD *)&v22 + 1) = *(_QWORD *)(v1 + 80);
    *(_QWORD *)&v22 = v1 + 72;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v24, (unsigned __int16 **)&v22) )
    {
      v11 = v24;
      v12 = (*((_DWORD *)v10 + v24 + 48))-- == 1;
      if ( v12 )
        KeAddProcessorAffinityEx((_WORD *)Argument + 8, v11);
    }
    _InterlockedOr(v21, 0);
    KeSubtractAffinityEx((unsigned __int16 *)v10 + 12, (unsigned __int16 *)Argument + 8, (_BYTE *)v10 + 24);
    if ( !(unsigned int)KeIsEmptyAffinityEx((_WORD *)v10 + 12) )
      goto LABEL_22;
    v13 = *v10;
    v14 = (_QWORD *)v10[1];
    if ( *(_QWORD **)(*v10 + 8LL) == v10 && (_QWORD *)*v14 == v10 )
    {
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
      Argument[23] = (__int64)v10;
LABEL_22:
      *((_BYTE *)Argument + 192) = 1;
      goto LABEL_23;
    }
LABEL_26:
    __fastfail(3u);
  }
LABEL_23:
  _InterlockedAdd((volatile signed __int32 *)Argument + 3, 0xFFFFFFFF);
  while ( *((int *)Argument + 3) > 0 )
    _mm_pause();
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (Argument[CurrentPrcb->Group + 3] & CurrentPrcb->GroupSetMember) != 0 )
    (*((void (__fastcall **)(_QWORD, _QWORD))HalpProfileInterface[0] + 2))((unsigned int)*(__int16 *)(v1 + 240), 0LL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v16 = KeGetCurrentIrql();
      if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
      {
        v17 = KeGetCurrentPrcb();
        v18 = v17->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v12 = (v19 & v18[5]) == 0;
        v18[5] &= v19;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)v17);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
