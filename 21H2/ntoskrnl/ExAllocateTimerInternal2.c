/*
 * XREFs of ExAllocateTimerInternal2 @ 0x14026E680
 * Callers:
 *     ExAllocateTimer @ 0x14026E650 (ExAllocateTimer.c)
 *     ExAllocateTimerInternal @ 0x1405B6270 (ExAllocateTimerInternal.c)
 * Callees:
 *     ExpExTimerAttributesAreValid @ 0x14029A570 (ExpExTimerAttributesAreValid.c)
 *     KiInitializeTimer2 @ 0x14029A5CC (KiInitializeTimer2.c)
 *     KeInitializeIRTimer @ 0x140380F30 (KeInitializeIRTimer.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

unsigned __int64 __fastcall ExAllocateTimerInternal2(__int64 a1, __int64 a2, _WORD *a3, unsigned int a4)
{
  ULONG_PTR v5; // rdi
  _WORD *PoolWithTag; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  _WORD v12[20]; // [rsp+30h] [rbp-28h] BYREF

  v5 = a4;
  if ( !(unsigned __int8)ExpExTimerAttributesAreValid(a4) || ((v5 & 2) != 0) != (a3 != 0LL) )
    KeBugCheckEx(0xC7u, 9uLL, 0LL, v5, 0LL);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xA0uLL, 0x6D547845u);
  v9 = (unsigned __int64)PoolWithTag;
  if ( PoolWithTag )
  {
    if ( (v5 & 2) != 0 )
    {
      v12[0] = *a3;
      v12[1] = a3[1];
      KeInitializeIRTimer((_DWORD)PoolWithTag, a1, a2, (unsigned int)v12, v5);
    }
    else
    {
      PoolWithTag[1] = 0;
      KiInitializeTimer2(PoolWithTag, a1, a2, (unsigned int)v5);
    }
    *(_QWORD *)(v9 + 136) = KiWaitNever ^ __ROR8__(v9 ^ _byteswap_uint64(KiWaitAlways), KiWaitNever);
    v10 = KiWaitNever ^ __ROR8__(v9 ^ _byteswap_uint64(KiWaitAlways), KiWaitNever);
    *(_BYTE *)(v9 + 152) = ExpTimerFreedCookie;
    *(_QWORD *)(v9 + 144) = v10;
  }
  return v9;
}
