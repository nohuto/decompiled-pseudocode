/*
 * XREFs of sub_1C0005240 @ 0x1C0005240
 * Callers:
 *     sub_1C0007840 @ 0x1C0007840 (sub_1C0007840.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C002E55C @ 0x1C002E55C (sub_1C002E55C.c)
 *     sub_1C0034EEC @ 0x1C0034EEC (sub_1C0034EEC.c)
 */

void __fastcall sub_1C0005240(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdx
  KIRQL v5; // al
  __int64 v6; // r8
  unsigned __int16 v7; // r9
  KIRQL v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r10
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r8
  int v29; // edx
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // rdx
  KSPIN_LOCK *v33; // rcx
  __int64 v34; // rax
  KIRQL v35; // dl
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // r8
  int v41; // ecx
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  KIRQL v46; // bp
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rax
  int v51; // r10d
  __int64 v52; // rax

  if ( !a1 )
    sub_1C002DC78(0LL, 0LL);
  v4 = *(_DWORD **)(a1 + 64);
  if ( !v4 )
    sub_1C002DC78(a1, 0LL);
  if ( *v4 != 541218120 )
    sub_1C002DC78(a1, v4);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v6 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v7 = v6;
  v8 = v5;
  if ( (dword_1C006B268 & 0x10) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 64);
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 888)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
      *(_DWORD *)v10 = 724267376;
      *(_QWORD *)(v10 + 8) = 0LL;
      *(_QWORD *)(v10 + 16) = 1LL;
      *(_QWORD *)(v10 + 24) = v6;
      v7 = *(_WORD *)(a2 + 4);
    }
  }
  v11 = *(int *)(a2 + 12);
  if ( (dword_1C006B268 & 0x10) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 64);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
      *(_DWORD *)v13 = 724267376;
      *(_QWORD *)(v13 + 24) = v7;
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_QWORD *)(v13 + 16) = v11;
    }
  }
  v14 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v14;
  v15 = a2 + 32 * (v14 + 43);
  *(_DWORD *)v15 = 1;
  *(_DWORD *)(v15 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v15 + 8) = -1;
  *(_QWORD *)(v15 + 12) = 0LL;
  *(_QWORD *)(v15 + 20) = 0LL;
  *(_DWORD *)(v15 + 28) = 0;
  v16 = *(int *)(a2 + 12);
  v17 = *(unsigned __int16 *)(a2 + 4);
  if ( (dword_1C006B268 & 0x200) != 0 )
  {
    v18 = *(_QWORD *)(a1 + 64);
    if ( v18 )
    {
      v19 = *(_QWORD *)(v18 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v18 + 880)) & *(_DWORD *)(v18 + 884));
      *(_DWORD *)v19 = 812658992;
      *(_QWORD *)(v19 + 8) = 0LL;
      *(_QWORD *)(v19 + 16) = v16;
      *(_QWORD *)(v19 + 24) = v17;
    }
  }
  if ( (_DWORD)v16 == 1 )
  {
LABEL_14:
    KeResetEvent((PRKEVENT)(a2 + 472));
    v21 = *(unsigned __int16 *)(a2 + 4);
    v22 = *(int *)(a2 + 12);
    if ( (dword_1C006B268 & 0x10) != 0 )
    {
      v20 = *(_QWORD *)(a1 + 64);
      if ( v20 )
      {
        v23 = *(_QWORD *)(v20 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
        *(_DWORD *)v23 = 1986359664;
        *(_QWORD *)(v23 + 8) = 0LL;
        *(_QWORD *)(v23 + 16) = v22;
        *(_QWORD *)(v23 + 24) = v21;
      }
    }
    *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 24) = 10;
    if ( *(_QWORD *)(a2 + 456) == a2 + 456 )
    {
      if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
        sub_1C002E55C(DeviceObject->DeviceExtension, v20, v21, 14, (__int64)&unk_1C0062098, *(_WORD *)(a2 + 4), a2);
      v24 = *(unsigned __int16 *)(a2 + 4);
      if ( (dword_1C006B268 & 0x200) != 0 )
      {
        v25 = *(_QWORD *)(a1 + 64);
        if ( v25 )
        {
          v26 = *(_QWORD *)(v25 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 880)) & *(_DWORD *)(v25 + 884));
          *(_DWORD *)v26 = 1414360677;
          *(_QWORD *)(v26 + 8) = 0LL;
          *(_QWORD *)(v26 + 16) = 0LL;
          *(_QWORD *)(v26 + 24) = v24;
        }
      }
      v27 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 2;
      *(_DWORD *)(v27 + a2 + 1384) = 2;
      v28 = *(int *)(a2 + 12);
      v29 = *(_DWORD *)(a2 + 12);
      v30 = *(unsigned __int16 *)(a2 + 4);
      if ( (dword_1C006B268 & 0x10) != 0 )
      {
        v31 = *(_QWORD *)(a1 + 64);
        if ( v31 )
        {
          v32 = *(_QWORD *)(v31 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v31 + 880)) & *(_DWORD *)(v31 + 884));
          *(_DWORD *)v32 = 757952880;
          *(_QWORD *)(v32 + 8) = 0LL;
          *(_QWORD *)(v32 + 16) = v28;
          *(_QWORD *)(v32 + 24) = v30;
          v29 = *(_DWORD *)(a2 + 12);
        }
      }
      v33 = (KSPIN_LOCK *)(a2 + 440);
      v34 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v34 + a2 + 1384) = v29;
      v35 = v8;
    }
    else
    {
      if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
        sub_1C002E55C(DeviceObject->DeviceExtension, v20, v21, 15, (__int64)&unk_1C0062098, *(_WORD *)(a2 + 4), a2);
      v36 = *(unsigned __int16 *)(a2 + 4);
      if ( (dword_1C006B268 & 0x200) != 0 )
      {
        v37 = *(_QWORD *)(a1 + 64);
        if ( v37 )
        {
          v38 = *(_QWORD *)(v37 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v37 + 880)) & *(_DWORD *)(v37 + 884));
          *(_DWORD *)v38 = 1196650085;
          *(_QWORD *)(v38 + 8) = 0LL;
          *(_QWORD *)(v38 + 16) = 0LL;
          *(_QWORD *)(v38 + 24) = v36;
        }
      }
      v39 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 4;
      *(_DWORD *)(v39 + a2 + 1384) = 4;
      v40 = *(int *)(a2 + 12);
      v41 = *(_DWORD *)(a2 + 12);
      v42 = *(unsigned __int16 *)(a2 + 4);
      if ( (dword_1C006B268 & 0x10) != 0 )
      {
        v43 = *(_QWORD *)(a1 + 64);
        if ( v43 )
        {
          v44 = *(_QWORD *)(v43 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v43 + 880)) & *(_DWORD *)(v43 + 884));
          *(_DWORD *)v44 = 757952880;
          *(_QWORD *)(v44 + 8) = 0LL;
          *(_QWORD *)(v44 + 16) = v40;
          *(_QWORD *)(v44 + 24) = v42;
          v41 = *(_DWORD *)(a2 + 12);
        }
      }
      v45 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v45 + a2 + 1384) = v41;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v8);
      v46 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 2448));
      if ( *(_DWORD *)(a2 + 2412) != 1 )
      {
        *(_DWORD *)(a2 + 2412) = 1;
        if ( (dword_1C006B268 & 0x200) != 0 )
        {
          v47 = *(_QWORD *)(a2 + 16);
          if ( v47 )
          {
            v48 = *(_QWORD *)(v47 + 64);
            if ( v48 )
            {
              v49 = *(_QWORD *)(v48 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v48 + 880)) & *(_DWORD *)(v48 + 884));
              *(_DWORD *)v49 = 1464029265;
              *(_QWORD *)(v49 + 8) = 0LL;
              *(_QWORD *)(v49 + 16) = a2;
              *(_QWORD *)(v49 + 24) = 0LL;
            }
          }
        }
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 2440));
        IoQueueWorkItem(*(PIO_WORKITEM *)(a2 + 2456), WorkerRoutine, DelayedWorkQueue, (PVOID)a2);
      }
      v35 = v46;
      v33 = (KSPIN_LOCK *)(a2 + 2448);
    }
    KeReleaseSpinLock(v33, v35);
  }
  else
  {
    switch ( (int)v16 )
    {
      case 2:
      case 3:
      case 4:
      case 8:
      case 9:
      case 10:
      case 14:
      case 15:
      case 16:
      case 17:
      case 20:
        sub_1C000FD80(a1, 512, 808546354, v16, *(unsigned __int16 *)(a2 + 4));
        v50 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = v51;
        *(_DWORD *)(v50 + a2 + 1384) = v51;
        break;
      case 18:
        goto LABEL_14;
      default:
        sub_1C000FD80(a1, 512, 808546392, v16, *(unsigned __int16 *)(a2 + 4));
        v52 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 19;
        *(_DWORD *)(v52 + a2 + 1384) = 19;
        break;
    }
    sub_1C0034EEC(a1, a2, v8, 0LL);
  }
}
