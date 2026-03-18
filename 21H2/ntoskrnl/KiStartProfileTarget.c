/*
 * XREFs of KiStartProfileTarget @ 0x140571A40
 * Callers:
 *     KeStartProfile @ 0x14057158C (KeStartProfile.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     KiOrAffinityEx @ 0x1402FEC10 (KiOrAffinityEx.c)
 *     KiSubtractAffinityEx @ 0x1402FEDA0 (KiSubtractAffinityEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 */

ULONG_PTR __fastcall KiStartProfileTarget(__int64 *Argument)
{
  __int64 v1; // rsi
  char v3; // cl
  unsigned __int8 CurrentIrql; // r12
  unsigned int v5; // r15d
  _DWORD *SchedulerAssist; // r10
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  unsigned __int16 v14; // r9
  __int64 v15; // rbx
  unsigned __int16 v16; // r9
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  _DWORD *v20; // r8
  int v21; // eax
  bool v22; // zf
  ULONG_PTR result; // rax
  signed __int32 v24[12]; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int16 *v25[2]; // [rsp+30h] [rbp-20h] BYREF
  __int16 v26; // [rsp+40h] [rbp-10h]
  int v27; // [rsp+42h] [rbp-Eh]
  __int16 v28; // [rsp+46h] [rbp-Ah]
  unsigned int v29; // [rsp+90h] [rbp+40h] BYREF
  int v30; // [rsp+98h] [rbp+48h] BYREF
  __int64 v31; // [rsp+A0h] [rbp+50h] BYREF

  v1 = *Argument;
  v27 = 0;
  v3 = KiProfileIrql;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8((unsigned __int8)KiProfileIrql);
  v5 = (unsigned __int8)v31 + 1;
  if ( KiIrqlFlags
    && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v5) != 0
    && CurrentIrql <= 0xFu
    && (unsigned __int8)(v3 - 2) <= 0xDu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1LL << ((unsigned __int8)v5 + CurrentIrql)) & (((unsigned __int64)v5 << ((unsigned __int8)v5 + v3))
                                                                         - v5) & 0xFFFFFFFC;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Argument + 2, 0xFFFFFFFF) == 1 )
  {
    if ( *(_BYTE *)(v1 + 346) )
    {
      *((_BYTE *)Argument + 288) = 0;
      goto LABEL_9;
    }
    v7 = *(_QWORD *)(v1 + 24);
    v8 = (_QWORD *)(v1 + 8);
    *(_BYTE *)(v1 + 346) = v5;
    if ( v7 )
    {
      v9 = *(_QWORD **)(v7 + 32);
      v10 = v7 + 24;
      if ( *v9 != v10 )
        goto LABEL_30;
      *v8 = v10;
      *(_QWORD *)(v1 + 16) = v9;
      *v9 = v8;
      *(_QWORD *)(v10 + 8) = v8;
    }
    else
    {
      v11 = (_QWORD *)qword_140C2BB88;
      if ( *(__int64 **)qword_140C2BB88 != &KiProfileListHead )
        goto LABEL_30;
      *v8 = &KiProfileListHead;
      *(_QWORD *)(v1 + 16) = v11;
      *v11 = v8;
      qword_140C2BB88 = v1 + 8;
    }
    v12 = KiProfileSourceListHead;
    if ( (__int64 *)KiProfileSourceListHead != &KiProfileSourceListHead )
    {
      while ( *(_DWORD *)(v12 + 16) != *(__int16 *)(v1 + 344) )
      {
        v12 = *(_QWORD *)v12;
        if ( (__int64 *)v12 == &KiProfileSourceListHead )
          goto LABEL_20;
      }
      goto LABEL_22;
    }
LABEL_20:
    v12 = Argument[35];
    Argument[35] = 0LL;
    *(_DWORD *)(v12 + 16) = *(__int16 *)(v1 + 344);
    *(_QWORD *)(v12 + 24) = 2097153LL;
    memset((void *)(v12 + 32), 0, 0x100uLL);
    v13 = KiProfileSourceListHead;
    if ( *(__int64 **)(KiProfileSourceListHead + 8) == &KiProfileSourceListHead )
    {
      *(_QWORD *)v12 = KiProfileSourceListHead;
      *(_QWORD *)(v12 + 8) = &KiProfileSourceListHead;
      *(_QWORD *)(v13 + 8) = v12;
      KiProfileSourceListHead = v12;
LABEL_22:
      v26 = 0;
      v25[1] = *(unsigned __int16 **)(v1 + 80);
      v25[0] = (unsigned __int16 *)(v1 + 72);
      while ( !(unsigned int)KeEnumerateNextProcessor(&v29, v25) )
        ++*(_DWORD *)(v12 + 4LL * v29 + 288);
      v14 = 0;
      if ( Argument != (__int64 *)-16LL )
        v14 = *((_WORD *)Argument + 9);
      v15 = v12 + 24;
      KiSubtractAffinityEx((_WORD *)(v1 + 72), (char *)v15, (_BYTE *)Argument + 16, v14);
      _InterlockedOr(v24, 0);
      v16 = 0;
      if ( v15 )
        v16 = *(_WORD *)(v15 + 2);
      KiOrAffinityEx((char *)v15, (_WORD *)(v1 + 72), (_BYTE *)v15, v16);
      LOBYTE(v5) = 1;
      *((_BYTE *)Argument + 288) = 1;
      goto LABEL_9;
    }
LABEL_30:
    __fastfail(3u);
  }
LABEL_9:
  _InterlockedAdd((volatile signed __int32 *)Argument + 3, 0xFFFFFFFF);
  while ( *((int *)Argument + 3) > 0 )
    _mm_pause();
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (Argument[CurrentPrcb->Group + 3] & CurrentPrcb->GroupSetMember) != 0 )
  {
    v30 = 1718767691;
    ((void (__fastcall *)(_QWORD, int *, _QWORD, __int64 *))off_140C02098[0])(
      (unsigned int)*(__int16 *)(v1 + 344),
      &v30,
      0LL,
      &v31);
    v31 = _InterlockedExchange64((volatile __int64 *)(v1 + 336), v31);
  }
  if ( KiIrqlFlags )
  {
    if ( ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v5) != 0 )
    {
      v18 = KeGetCurrentIrql();
      if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
      {
        v19 = KeGetCurrentPrcb();
        v20 = v19->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + CurrentIrql));
        v22 = (v21 & v20[5]) == 0;
        v20[5] &= v21;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick((__int64)v19);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
