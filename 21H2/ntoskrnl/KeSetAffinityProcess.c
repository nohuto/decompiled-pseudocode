/*
 * XREFs of KeSetAffinityProcess @ 0x1403CB43C
 * Callers:
 *     PspSetProcessAffinitySafe @ 0x140908724 (PspSetProcessAffinitySafe.c)
 *     KiInitializeDynamicProcessorDpc @ 0x1409B02C0 (KiInitializeDynamicProcessorDpc.c)
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeFirstGroupAffinityEx @ 0x140240B10 (KeFirstGroupAffinityEx.c)
 *     KiSetIdealNodeProcessByGroup @ 0x14029AA54 (KiSetIdealNodeProcessByGroup.c)
 *     KiSetAffinityThread @ 0x14029D724 (KiSetAffinityThread.c)
 *     KiProcessDeferredReadyList @ 0x1402D5420 (KiProcessDeferredReadyList.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
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
  char v13; // r15
  unsigned __int16 *v14; // rcx
  unsigned __int16 v15; // si
  _QWORD *i; // rbx
  __int128 *v17; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r9
  _DWORD *v22; // r8
  int v23; // eax
  bool v24; // zf
  unsigned __int16 v25; // si
  unsigned __int16 v26; // dx
  _QWORD *v27; // r8
  char v28; // r12
  __int64 v29; // r9
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
    v13 = v39;
    v14 = (unsigned __int16 *)(a1 + 80);
    if ( v39 )
    {
      v25 = *v14;
      v26 = 0;
      if ( !*v14 )
        goto LABEL_23;
      v27 = a3 + 4;
      v28 = 0;
      do
      {
        v29 = *(_QWORD *)((char *)v27 + a1 - (_QWORD)a3 + 80);
        if ( v29 )
        {
          if ( v26 < *a3 && (v29 | *v27) != v29 )
          {
            v29 |= *v27;
            v28 = 1;
          }
          if ( LOWORD(v46[0]) <= v26 )
            LOWORD(v46[0]) = v41 + v26;
          *(_QWORD *)((char *)v27 + (char *)v46 - (char *)a3) |= v29;
        }
        ++v26;
        ++v27;
      }
      while ( v26 < v25 );
      v24 = v28 == 0;
      v12 = (volatile LONG *)(a1 + 64);
      if ( v24 )
        goto LABEL_23;
      v30 = v46[1];
      *(_OWORD *)v14 = v46[0];
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
      v15 = 0;
      *(_OWORD *)v14 = *(_OWORD *)a3;
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
          if ( *(_QWORD *)&a3[4 * v15 + 4] )
          {
            KiSetIdealNodeProcessByGroup(a1, 0LL, v15);
            if ( !v6 )
            {
              v6 = 1;
              *(_WORD *)(a1 + 836) = *(_WORD *)(a1 + 2LL * v15 + 772);
            }
          }
          ++v15;
        }
        while ( v15 < *a3 );
        v13 = 0;
        v12 = (volatile LONG *)(a1 + 64);
      }
    }
    for ( i = *(_QWORD **)(a1 + 48); i != (_QWORD *)(a1 + 48); i = (_QWORD *)*i )
    {
      WORD4(v44) = *((_WORD *)i - 100);
      v17 = &v44;
      *(_QWORD *)&v44 = *(_QWORD *)(a1 + 8LL * WORD4(v44) + 88);
      if ( !(_QWORD)v44 )
        v17 = &v45;
      KiSetAffinityThread((__int64)(i - 95), (__int64)&v42, v17);
    }
    if ( !v13 )
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
      v20 = KeGetCurrentIrql();
      if ( v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
      {
        v21 = KeGetCurrentPrcb();
        v22 = v21->SchedulerAssist;
        v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v24 = (v23 & v22[5]) == 0;
        v22[5] &= v23;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick(v21);
      }
    }
  }
  __writecr8(CurrentIrql);
  return 3221225485LL;
}
