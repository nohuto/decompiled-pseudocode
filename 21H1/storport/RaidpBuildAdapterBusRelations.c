/*
 * XREFs of RaidpBuildAdapterBusRelations @ 0x1C0013DFC
 * Callers:
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0013C54 (RaidAdapterQueryDeviceRelationsIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007C88 (RaidAllocatePool.c)
 *     RaidUnitSetEnumerated @ 0x1C0014088 (RaidUnitSetEnumerated.c)
 *     memmove @ 0x1C001B200 (memmove.c)
 *     WPP_SF_ @ 0x1C0031E4C (WPP_SF_.c)
 *     WPP_SF_DD @ 0x1C0031EBC (WPP_SF_DD.c)
 *     WPP_SF_q @ 0x1C0031F68 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0031FAC (WPP_SF_qD.c)
 */

__int64 __fastcall RaidpBuildAdapterBusRelations(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r13
  unsigned int v4; // ebp
  __int64 v5; // rdx
  _DWORD *Pool; // r12
  unsigned int v7; // r15d
  _QWORD *i; // rsi
  _QWORD *v9; // rdi
  _QWORD *v10; // rcx
  __int64 v11; // rcx
  PDEVICE_OBJECT v12; // rcx
  _QWORD *v13; // rsi
  void *v14; // rcx
  PVOID v15; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rdi
  _QWORD *v19; // rcx
  PDEVICE_OBJECT v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct _KLOCK_QUEUE_HANDLE v23; // [rsp+30h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF
  SIZE_T Size; // [rsp+A0h] [rbp+8h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v23, 0, sizeof(v23));
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    WPP_SF_q(WPP_GLOBAL_Control->AttachedDevice, 40LL, &WPP_f9ccab431b9635edeca76e3554be04bb_Traceguids, a1);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 112), &LockHandle);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 192), &v23);
  v3 = (unsigned int)(*(_DWORD *)(a1 + 136) + *(_DWORD *)(a1 + 216));
  Size = 8 * v3 + 16;
  v4 = 0;
  Pool = RaidAllocatePool(NonPagedPoolNx, Size, 0x52446152u, *(_QWORD *)(a1 + 8));
  if ( !Pool )
  {
    KeReleaseInStackQueuedSpinLock(&v23);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v4 = -1073741801;
    goto LABEL_21;
  }
  v7 = 0;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 41LL, &WPP_f9ccab431b9635edeca76e3554be04bb_Traceguids);
  }
  for ( i = *(_QWORD **)(a1 + 120); i != (_QWORD *)(a1 + 120); i = (_QWORD *)*i )
  {
    v9 = i - 7;
    v10 = i - 7;
    if ( (i[49] & 4) != 0 )
    {
      LOBYTE(v5) = 1;
      RaidUnitSetEnumerated(v10, v5);
      ObfReferenceObject((PVOID)v9[1]);
      if ( v7 > (unsigned int)v3 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
          goto LABEL_15;
        if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
          WPP_SF_DD(WPP_GLOBAL_Control->AttachedDevice, 43LL, &WPP_f9ccab431b9635edeca76e3554be04bb_Traceguids, v7, v3);
        break;
      }
      v11 = v7++;
      *(_QWORD *)&Pool[2 * v11 + 2] = v9[1];
      v12 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
      {
        v17 = 44LL;
        goto LABEL_36;
      }
    }
    else
    {
      RaidUnitSetEnumerated(v10, 0LL);
      v12 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
      {
        v17 = 42LL;
LABEL_36:
        WPP_SF_q(v12->AttachedDevice, v17, &WPP_f9ccab431b9635edeca76e3554be04bb_Traceguids, i - 7);
        continue;
      }
    }
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 45LL, &WPP_f9ccab431b9635edeca76e3554be04bb_Traceguids);
  }
LABEL_15:
  v13 = *(_QWORD **)(a1 + 200);
  while ( 2 )
  {
    if ( v13 != (_QWORD *)(a1 + 200) )
    {
      v18 = v13 - 7;
      v19 = v13 - 7;
      if ( (v13[49] & 4) != 0 )
      {
        LOBYTE(v5) = 1;
        RaidUnitSetEnumerated(v19, v5);
        ObfReferenceObject((PVOID)v18[1]);
        if ( v7 > (unsigned int)v3 )
        {
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
          {
            WPP_SF_DD(
              WPP_GLOBAL_Control->AttachedDevice,
              47LL,
              &WPP_f9ccab431b9635edeca76e3554be04bb_Traceguids,
              v7,
              v3);
          }
          break;
        }
        v22 = v7++;
        *(_QWORD *)&Pool[2 * v22 + 2] = v18[1];
        v20 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 5u )
        {
          goto LABEL_54;
        }
        v21 = 48LL;
      }
      else
      {
        RaidUnitSetEnumerated(v19, 0LL);
        v20 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 5u )
        {
          goto LABEL_54;
        }
        v21 = 46LL;
      }
      WPP_SF_q(v20->AttachedDevice, v21, &WPP_f9ccab431b9635edeca76e3554be04bb_Traceguids, v13 - 7);
LABEL_54:
      v13 = (_QWORD *)*v13;
      continue;
    }
    break;
  }
  KeReleaseInStackQueuedSpinLock(&v23);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  *Pool = v7;
  v14 = *(void **)(a1 + 4520);
  *a2 = Pool;
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0);
    *(_QWORD *)(a1 + 4520) = 0LL;
  }
  v15 = RaidAllocatePool(NonPagedPoolNx, Size, 0x52446152u, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 4520) = v15;
  if ( v15 )
  {
    memmove(v15, Pool, Size);
  }
  else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_q(WPP_GLOBAL_Control->AttachedDevice, 49LL, &WPP_f9ccab431b9635edeca76e3554be04bb_Traceguids, a1);
  }
LABEL_21:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    WPP_SF_qD(WPP_GLOBAL_Control->AttachedDevice, 50LL, &WPP_f9ccab431b9635edeca76e3554be04bb_Traceguids, a1, v4);
  }
  return v4;
}
