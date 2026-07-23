/*
 * XREFs of KiStartProfileTarget @ 0x14051C2E0
 * Callers:
 *     KeStartProfile @ 0x14051BE0C (KeStartProfile.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x1402CDD00 (KeEnumerateNextProcessor.c)
 *     KeSubtractAffinityEx @ 0x1402CFF20 (KeSubtractAffinityEx.c)
 *     KeOrAffinityEx @ 0x1402D0100 (KeOrAffinityEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     HalStartProfileInterrupt @ 0x1404BEA50 (HalStartProfileInterrupt.c)
 */

ULONG_PTR __fastcall KiStartProfileTarget(__int64 *Argument)
{
  __int64 v1; // rsi
  char v3; // cl
  unsigned __int8 CurrentIrql; // r15
  unsigned int v5; // r13d
  _DWORD *SchedulerAssist; // r10
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  unsigned __int16 *v14; // rbx
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r9
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // zf
  ULONG_PTR result; // rax
  signed __int32 v22[8]; // [rsp+0h] [rbp-68h] BYREF
  __int128 v23; // [rsp+20h] [rbp-48h] BYREF
  __int64 v24; // [rsp+30h] [rbp-38h]
  unsigned int v25; // [rsp+70h] [rbp+8h] BYREF

  v1 = *Argument;
  v25 = 0;
  v24 = 0LL;
  v3 = KiProfileIrql;
  v23 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8((unsigned __int8)KiProfileIrql);
  v5 = (unsigned __int8)v24 + 1;
  if ( KiIrqlFlags
    && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v5) != 0
    && CurrentIrql <= 0xFu
    && (unsigned __int8)(v3 - 2) <= 0xDu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1LL << ((unsigned __int8)v5 + CurrentIrql)) & (((unsigned __int64)v5 << ((unsigned __int8)v5 + v3))
                                                                         - v5) & 0xFFFFFFFC;
  }
  if ( !_InterlockedDecrement((volatile signed __int32 *)Argument + 2) )
  {
    if ( *(_BYTE *)(v1 + 242) )
    {
      *((_BYTE *)Argument + 192) = 0;
      goto LABEL_9;
    }
    v7 = *(_QWORD *)(v1 + 24);
    v8 = (_QWORD *)(v1 + 8);
    *(_BYTE *)(v1 + 242) = v5;
    if ( v7 )
    {
      v9 = *(_QWORD **)(v7 + 32);
      v10 = v7 + 24;
      if ( *v9 != v10 )
        goto LABEL_26;
      *v8 = v10;
      *(_QWORD *)(v1 + 16) = v9;
      *v9 = v8;
      *(_QWORD *)(v10 + 8) = v8;
    }
    else
    {
      v11 = (_QWORD *)qword_140C32008;
      if ( *(__int64 **)qword_140C32008 != &KiProfileListHead )
        goto LABEL_26;
      *v8 = &KiProfileListHead;
      *(_QWORD *)(v1 + 16) = v11;
      *v11 = v8;
      qword_140C32008 = v1 + 8;
    }
    v12 = KiProfileSourceListHead;
    if ( (__int64 *)KiProfileSourceListHead != &KiProfileSourceListHead )
    {
      while ( *(_DWORD *)(v12 + 16) != *(__int16 *)(v1 + 240) )
      {
        v12 = *(_QWORD *)v12;
        if ( (__int64 *)v12 == &KiProfileSourceListHead )
          goto LABEL_20;
      }
      goto LABEL_22;
    }
LABEL_20:
    v12 = Argument[23];
    Argument[23] = 0LL;
    *(_DWORD *)(v12 + 16) = *(__int16 *)(v1 + 240);
    *(_DWORD *)(v12 + 28) = 0;
    *(_DWORD *)(v12 + 24) = 1310721;
    memset((void *)(v12 + 32), 0, 0xA0uLL);
    v13 = KiProfileSourceListHead;
    if ( *(__int64 **)(KiProfileSourceListHead + 8) == &KiProfileSourceListHead )
    {
      *(_QWORD *)v12 = KiProfileSourceListHead;
      *(_QWORD *)(v12 + 8) = &KiProfileSourceListHead;
      *(_QWORD *)(v13 + 8) = v12;
      KiProfileSourceListHead = v12;
LABEL_22:
      *((_QWORD *)&v23 + 1) = *(_QWORD *)(v1 + 80);
      *(_QWORD *)&v23 = v1 + 72;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v25, (unsigned __int16 **)&v23) )
        *(_DWORD *)(v12 + 4LL * v25 + 192) += v5;
      v14 = (unsigned __int16 *)(v12 + 24);
      KeSubtractAffinityEx((unsigned __int16 *)(v1 + 72), v14, (_BYTE *)Argument + 16);
      _InterlockedOr(v22, 0);
      KeOrAffinityEx(v14, (unsigned __int16 *)(v1 + 72), v14);
      *((_BYTE *)Argument + 192) = v5;
      goto LABEL_9;
    }
LABEL_26:
    __fastfail(3u);
  }
LABEL_9:
  _InterlockedAdd((volatile signed __int32 *)Argument + 3, 0xFFFFFFFF);
  while ( *((int *)Argument + 3) > 0 )
    _mm_pause();
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (Argument[CurrentPrcb->Group + 3] & CurrentPrcb->GroupSetMember) != 0 )
    HalStartProfileInterrupt(*(__int16 *)(v1 + 240));
  if ( KiIrqlFlags )
  {
    if ( ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v5) != 0 )
    {
      v16 = KeGetCurrentIrql();
      if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
      {
        v17 = KeGetCurrentPrcb();
        v18 = v17->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + CurrentIrql));
        v20 = (v19 & v18[5]) == 0;
        v18[5] &= v19;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick((__int64)v17);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
