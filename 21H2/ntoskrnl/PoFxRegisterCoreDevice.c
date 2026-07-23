/*
 * XREFs of PoFxRegisterCoreDevice @ 0x1407B4B60
 * Callers:
 *     HalpDmaInitPowerManagement @ 0x1403BB250 (HalpDmaInitPowerManagement.c)
 *     HalpInterruptInitPowerManagement @ 0x1403BDF40 (HalpInterruptInitPowerManagement.c)
 *     HalpTimerInitPowerManagement @ 0x1403BE05C (HalpTimerInitPowerManagement.c)
 *     PoFxRegisterDebugger @ 0x140A74A68 (PoFxRegisterDebugger.c)
 * Callees:
 *     PopFxInsertDevice @ 0x1403BE3C4 (PopFxInsertDevice.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopFxRegisterDeviceWorker @ 0x1407B507C (PopFxRegisterDeviceWorker.c)
 *     PopFxConvertV1Components @ 0x1407B5C9C (PopFxConvertV1Components.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PoFxRegisterCoreDevice(__int64 a1, __int64 a2, _QWORD *a3)
{
  void *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  _QWORD v12[10]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD *v13; // [rsp+B0h] [rbp+8h] BYREF

  memset(v12, 0, sizeof(v12));
  v6 = 0LL;
  v13 = 0LL;
  if ( a1 && *(_DWORD *)a2 == 1 && *(_QWORD *)(a2 + 24) )
  {
    v7 = PopFxConvertV1Components(a2 + 48, *(unsigned int *)(a2 + 4));
    v6 = (void *)v7;
    if ( !v7 )
    {
      v10 = -1073741670;
      goto LABEL_9;
    }
    v12[0] = *(_QWORD *)(a2 + 8);
    v12[1] = *(_QWORD *)(a2 + 16);
    v12[2] = *(_QWORD *)(a2 + 32);
    v12[6] = *(_QWORD *)(a2 + 24);
    v10 = PopFxRegisterDeviceWorker(
            0,
            a1,
            (unsigned int)v12,
            v7,
            *(_DWORD *)(a2 + 4),
            *(_QWORD *)(a2 + 40),
            0,
            0LL,
            (__int64)&v13);
    if ( v10 < 0 )
    {
      v13 = 0LL;
    }
    else
    {
      PopFxInsertDevice(v9, v8, v13);
      v10 = 0;
    }
  }
  else
  {
    v10 = -1073741811;
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4D584650u);
LABEL_9:
  *a3 = v13;
  return (unsigned int)v10;
}
