/*
 * XREFs of NtSubscribeWnfStateChange @ 0x140668330
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140668404 (ExpWnfSubscribeWnfStateChange.c)
 */

__int64 __fastcall NtSubscribeWnfStateChange(int a1, int a2, int a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdx
  int v10; // edi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v14 = 0LL;
  if ( a4 )
  {
    ProbeForWrite(a4, 8uLL, 1u);
    *a4 = 0LL;
  }
  v10 = ExpWnfSubscribeWnfStateChange((unsigned __int64)&v14 & -(__int64)(a4 != 0LL), 0, a1, a2, 0LL, 0LL, a3, 1);
  if ( v10 >= 0 && a4 )
    *a4 = v14;
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, v11, v12);
  return (unsigned int)v10;
}
