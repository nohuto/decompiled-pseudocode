/*
 * XREFs of sub_1C0002A80 @ 0x1C0002A80
 * Callers:
 *     sub_1C0001B60 @ 0x1C0001B60 (sub_1C0001B60.c)
 * Callees:
 *     sub_1C0001010 @ 0x1C0001010 (sub_1C0001010.c)
 *     sub_1C0002990 @ 0x1C0002990 (sub_1C0002990.c)
 *     sub_1C0002A30 @ 0x1C0002A30 (sub_1C0002A30.c)
 *     sub_1C0002C60 @ 0x1C0002C60 (sub_1C0002C60.c)
 */

void __fastcall sub_1C0002A80(__int64 a1)
{
  char v2; // di
  unsigned __int64 v3; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  int v5; // eax
  int v6; // eax
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  v2 = 0;
  v3 = KeQueryInterruptTimePrecise(&v10);
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&DeviceObject.Queue.Wcb.DeviceObject);
  CurrentThread = KeGetCurrentThread();
  DeviceObject.Queue.Wcb.CurrentIrp = CurrentThread;
  if ( *(_QWORD *)(a1 + 80) )
  {
    sub_1C0002C60(a1 + 56);
    v2 = 1;
  }
  if ( *(_QWORD *)(a1 + 120) )
  {
    sub_1C0002C60(a1 + 96);
  }
  else if ( !v2 )
  {
    goto LABEL_5;
  }
  sub_1C0002990(v3);
LABEL_5:
  v5 = *(_DWORD *)(a1 + 184);
  if ( (v5 & 4) != 0 )
  {
    --dword_1C000726C;
    v7 = v5 & 0xFFFFFFFB;
    *(_DWORD *)(a1 + 184) = v7;
    if ( (v7 & 8) != 0 )
    {
      ++dword_1C0007264;
      *(_DWORD *)(a1 + 184) = v7 & 0xFFFFFFF5 | 2;
      sub_1C0002A30((__int64)CurrentThread);
      sub_1C0001010(a1, 1u);
    }
    else
    {
      sub_1C0001010(a1, 0);
      sub_1C0002A30(v8);
    }
  }
  v6 = *(_DWORD *)(a1 + 184);
  if ( (v6 & 2) != 0 )
  {
    *(_DWORD *)(a1 + 184) = v6 & 0xFFFFFFFD;
    sub_1C0001010(a1, 0);
    --dword_1C0007264;
    sub_1C0002A30(v9);
  }
  DeviceObject.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&DeviceObject.Queue.Wcb.DeviceObject, 0);
}
