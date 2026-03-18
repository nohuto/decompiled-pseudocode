/*
 * XREFs of NtSubscribeWnfStateChange @ 0x14079AD30
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x14079982C (ExpWnfSubscribeWnfStateChange.c)
 */

__int64 __fastcall NtSubscribeWnfStateChange(__int64 *a1, int a2, int a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v9; // edi
  __int64 v11; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = 0LL;
  if ( a4 )
  {
    ProbeForWrite(a4, 8uLL, 1u);
    *a4 = 0LL;
  }
  v9 = ExpWnfSubscribeWnfStateChange((unsigned __int64)&v11 & -(__int64)(a4 != 0LL), 0LL, a1, a2, 0LL, 0LL, a3, 1);
  if ( v9 >= 0 && a4 )
    *a4 = v11;
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v9;
}
