/*
 * XREFs of KeSetAffinityProcess @ 0x1403CB2CC
 * Callers:
 *     PspSetProcessAffinitySafe @ 0x1409085C4 (PspSetProcessAffinitySafe.c)
 *     KiInitializeDynamicProcessorDpc @ 0x1409AF390 (KiInitializeDynamicProcessorDpc.c)
 *     Phase1InitializationDiscard @ 0x140A3B6A4 (Phase1InitializationDiscard.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x140230BD0 (KiProcessDeferredReadyList.c)
 *     KeFirstGroupAffinityEx @ 0x1402C2670 (KeFirstGroupAffinityEx.c)
 *     KiSetIdealNodeProcessByGroup @ 0x1402E9704 (KiSetIdealNodeProcessByGroup.c)
 *     KiSetAffinityThread @ 0x1402EC3D4 (KiSetAffinityThread.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140314D90 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414200 (memset.c)
 */

__int64 __fastcall KeSetAffinityProcess(__int64 a1, char a2, unsigned __int16 *a3)
{
  char v6; // r13
  char v7; // r15
  unsigned int v8; // edx
  unsigned int v9; // eax
  _QWORD *v10; // rcx
  unsigned __int8 CurrentIrql; // r14
  volatile LONG *v12; // r12
  __int64 v13; // r9
  char v14; // r15
  unsigned __int16 *v15; // rcx
  unsigned __int16 v16; // si
  _QWORD *i; // rbx
  __int128 *v18; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  _DWORD *v23; // r8
  int v24; // eax
  bool v25; // zf
  unsigned __int16 v26; // si
  unsigned __int16 v27; // dx
  _QWORD *v28; // r8
  char v29; // r12
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int64 v38; // rax
  char v39; // [rsp+20h] [rbp-E0h]
  signed __int32 v40; // [rsp+24h] [rbp-DCh] BYREF
  int v41; // [rsp+28h] [rbp-D8h]
  __int64 v42; // [rsp+30h] [rbp-D0h] BYREF
  struct _KPRCB *CurrentPrcb; // [rsp+38h] [rbp-C8h]
  __int128 v44; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v45; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v46[11]; // [rsp+60h] [rbp-A0h] BYREF

  v45 = 0LL;
  LODWORD(v46[0]) = 1310721;
  v39 = 0;
  v42 = 0LL;
  v6 = 0;
  v7 = 0;
  v41 = 1;
  memset((char *)v46 + 4, 0, 0xA4uLL);
  if ( (a2 & 3) != 0 )
  {
    if ( (a2 & 1) != 0 )
      v7 = 1;
    else
      v39 = 1;
  }
  KeFirstGroupAffinityEx((__int64)&v45, a3);
  v8 = *a3;
  v9 = 0;
  v40 = 0;
  if ( v8 )
  {
    v10 = a3 + 4;
    do
    {
      if ( *v10 )
        _bittestandset(&v40, v9);
      ++v9;
      ++v10;
    }
    while ( v9 < v8 );
  }
  v44 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v12 = (volatile LONG *)(a1 + 64);
  CurrentPrcb = KeGetCurrentPrcb();
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( !v7 || ((*(_DWORD *)(a1 + 636) - 1) & *(_DWORD *)(a1 + 636)) == 0 )
  {
    v14 = v39;
    v15 = (unsigned __int16 *)(a1 + 80);
    if ( v39 )
    {
      v26 = *v15;
      v27 = 0;
      if ( !*v15 )
        goto LABEL_23;
      v28 = a3 + 4;
      v29 = 0;
      do
      {
        v13 = *(_QWORD *)((char *)v28 + a1 - (_QWORD)a3 + 80);
        if ( v13 )
        {
          if ( v27 < *a3 && (v13 | *v28) != v13 )
          {
            v13 |= *v28;
            v29 = 1;
          }
          if ( LOWORD(v46[0]) <= v27 )
            LOWORD(v46[0]) = v41 + v27;
          *(_QWORD *)((char *)v28 + (char *)v46 - (char *)a3) |= v13;
        }
        ++v27;
        ++v28;
      }
      while ( v27 < v26 );
      v25 = v29 == 0;
      v12 = (volatile LONG *)(a1 + 64);
      if ( v25 )
        goto LABEL_23;
      v30 = v46[1];
      *(_OWORD *)v15 = v46[0];
      v31 = v46[2];
      *(_OWORD *)(a1 + 96) = v30;
      v32 = v46[3];
      *(_OWORD *)(a1 + 112) = v31;
      v33 = v46[4];
      *(_OWORD *)(a1 + 128) = v32;
      v34 = v46[5];
      *(_OWORD *)(a1 + 144) = v33;
      v35 = v46[6];
      *(_OWORD *)(a1 + 160) = v34;
      v36 = v46[8];
      *(_OWORD *)(a1 + 176) = v35;
      *(_OWORD *)(a1 + 192) = v46[7];
      v37 = v46[9];
      v38 = *(_QWORD *)&v46[10];
      *(_OWORD *)(a1 + 208) = v36;
      *(_OWORD *)(a1 + 224) = v37;
      *(_QWORD *)(a1 + 240) = v38;
    }
    else
    {
      v16 = 0;
      *(_OWORD *)v15 = *(_OWORD *)a3;
      *(_OWORD *)(a1 + 96) = *((_OWORD *)a3 + 1);
      *(_OWORD *)(a1 + 112) = *((_OWORD *)a3 + 2);
      *(_OWORD *)(a1 + 128) = *((_OWORD *)a3 + 3);
      *(_OWORD *)(a1 + 144) = *((_OWORD *)a3 + 4);
      *(_OWORD *)(a1 + 160) = *((_OWORD *)a3 + 5);
      *(_OWORD *)(a1 + 176) = *((_OWORD *)a3 + 6);
      *(_OWORD *)(a1 + 192) = *((_OWORD *)a3 + 7);
      *(_OWORD *)(a1 + 208) = *((_OWORD *)a3 + 8);
      *(_OWORD *)(a1 + 224) = *((_OWORD *)a3 + 9);
      *(_QWORD *)(a1 + 240) = *((_QWORD *)a3 + 20);
      if ( *a3 )
      {
        do
        {
          if ( *(_QWORD *)&a3[4 * v16 + 4] )
          {
            KiSetIdealNodeProcessByGroup(a1, 0LL, v16);
            if ( !v6 )
            {
              v6 = 1;
              *(_WORD *)(a1 + 836) = *(_WORD *)(a1 + 2LL * v16 + 772);
            }
          }
          ++v16;
        }
        while ( v16 < *a3 );
        v14 = 0;
        v12 = (volatile LONG *)(a1 + 64);
      }
    }
    for ( i = *(_QWORD **)(a1 + 48); i != (_QWORD *)(a1 + 48); i = (_QWORD *)*i )
    {
      WORD4(v44) = *((_WORD *)i - 100);
      v18 = &v44;
      *(_QWORD *)&v44 = *(_QWORD *)(a1 + 8LL * WORD4(v44) + 88);
      if ( !(_QWORD)v44 )
        v18 = &v45;
      KiSetAffinityThread((__int64)(i - 95), (__int64)&v42, (__int64)v18, v13);
    }
    if ( !v14 )
      *(_DWORD *)(a1 + 636) = v40;
LABEL_23:
    ExReleaseSpinLockExclusiveFromDpcLevel(v12);
    KiProcessDeferredReadyList((__int64)CurrentPrcb, (__int64)&v42, CurrentIrql);
    return 0LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v21 = KeGetCurrentIrql();
      if ( v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
      {
        v22 = KeGetCurrentPrcb();
        v23 = v22->SchedulerAssist;
        v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v25 = (v24 & v23[5]) == 0;
        v23[5] &= v24;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(v22);
      }
    }
  }
  __writecr8(CurrentIrql);
  return 3221225485LL;
}
