/*
 * XREFs of VidSchSubmitWaitFromCpu @ 0x1C00013E0
 * Callers:
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0069C20 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x1C000C130 (VidSchiUnwaitMonitoredFences.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C001217C (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     memset @ 0x1C0016E40 (memset.c)
 *     ??_GVIDSCH_CPU_WAITER@@QEAAPEAXI@Z @ 0x1C0029ECC (--_GVIDSCH_CPU_WAITER@@QEAAPEAXI@Z.c)
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0035B8C (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 */

__int64 __fastcall VidSchSubmitWaitFromCpu(
        unsigned int a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        char a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // r12
  unsigned __int64 v9; // rsi
  unsigned int v12; // ecx
  __int64 v13; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v15; // rbx
  unsigned __int64 v16; // rdi
  PVOID v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // r13
  char v20; // cl
  char v21; // al
  char v22; // cl
  char v23; // al
  __int64 v24; // r15
  __int64 v25; // rax
  _QWORD *v26; // rcx
  _QWORD *v27; // rdx
  __int64 v28; // rax
  _QWORD v30[2]; // [rsp+20h] [rbp-40h] BYREF
  char v31; // [rsp+30h] [rbp-30h]
  __int64 v32; // [rsp+38h] [rbp-28h] BYREF
  _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-20h] BYREF
  __int16 v34; // [rsp+58h] [rbp-8h]

  v8 = a8;
  v9 = a1;
  v12 = 0;
  if ( !(_DWORD)v9 )
  {
LABEL_5:
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x78uLL, 0x38616956u);
    v15 = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag[4] = 0LL;
      *((_DWORD *)PoolWithTag + 26) = 0;
    }
    else
    {
      v15 = 0LL;
    }
    if ( !v15 )
      return 3221225495LL;
    v16 = v9;
    if ( (unsigned int)v9 > 4 )
    {
      v18 = 0xFFFFFFFFFFFFFFFFuLL % v9;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v9 < 0x10 )
      {
LABEL_30:
        VIDSCH_CPU_WAITER::`scalar deleting destructor'(v15, v18);
        return 3221225495LL;
      }
      v17 = ExAllocatePoolWithTag((POOL_TYPE)512, 16 * v9, 0x38616956u);
    }
    else
    {
      v17 = v15 + 5;
    }
    v15[4] = v17;
    *((_DWORD *)v15 + 26) = v9;
    v18 = (unsigned __int64)v17;
    if ( v17 && (_DWORD)v9 )
    {
      memset(v17, 0, 16 * v9);
      v18 = v15[4];
    }
    if ( v18 )
    {
      v19 = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
      v20 = (2 * a6) | a5 & 0xFD | v15[14] & 0xFC;
      v15[3] = a7;
      v21 = v20;
      v22 = v20 | 4;
      v23 = v21 & 0xFB;
      if ( !a8 )
      {
        v8 = a4;
        v22 = v23;
      }
      *((_BYTE *)v15 + 112) = v22;
      v15[2] = v8;
      if ( (_DWORD)v9 )
      {
        v24 = a2 - (_QWORD)a3;
        do
        {
          *(_QWORD *)v18 = *(__int64 *)((char *)a3 + v24);
          v18 += 16LL;
          v25 = *a3++;
          *(_QWORD *)(v18 - 8) = v25;
          --v16;
        }
        while ( v16 );
      }
      v34 = 0;
      v32 = v19 + 1712;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v19 + 1712), &LockHandle);
      LOBYTE(v34) = 1;
      v30[1] = v30;
      v30[0] = v30;
      v31 = 0;
      v26 = *(_QWORD **)(v19 + 840);
      if ( *v26 != v19 + 832 )
LABEL_26:
        __fastfail(3u);
      v15[1] = v26;
      *v15 = v19 + 832;
      *v26 = v15;
      *(_QWORD *)(v19 + 840) = v15;
      VidSchiUnwaitMonitoredFences(v30, v19, 0LL);
      if ( !v31 )
      {
        while ( 1 )
        {
          v27 = (_QWORD *)v30[0];
          if ( *(_QWORD **)(v30[0] + 8LL) != v30 )
            goto LABEL_26;
          v28 = *(_QWORD *)v30[0];
          if ( *(_QWORD *)(*(_QWORD *)v30[0] + 8LL) != v30[0] )
            goto LABEL_26;
          v30[0] = *(_QWORD *)v30[0];
          *(_QWORD *)(v28 + 8) = v30;
          if ( v27 == v30 )
            break;
          *v27 = 0LL;
          v27[1] = 0LL;
          HwQueueStagingList::ProcessHwQueue((HwQueueStagingList *)v30, (struct VIDSCH_HW_QUEUE *)(v27 - 22));
        }
        v31 = 1;
      }
      AcquireSpinLock::Release((AcquireSpinLock *)&v32);
      return 0LL;
    }
    goto LABEL_30;
  }
  v13 = a2;
  while ( *(_DWORD *)(*(_QWORD *)v13 + 44LL) != 5 || !*(_BYTE *)(*(_QWORD *)v13 + 28LL) )
  {
    ++v12;
    v13 += 8LL;
    if ( v12 >= (unsigned int)v9 )
      goto LABEL_5;
  }
  return 3221225760LL;
}
