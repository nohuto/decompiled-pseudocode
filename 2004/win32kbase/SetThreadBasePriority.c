/*
 * XREFs of SetThreadBasePriority @ 0x1C0047160
 * Callers:
 *     SetThreadPriority @ 0x1C0046DC0 (SetThreadPriority.c)
 *     ?DeclareThreadAsInput@CInputThread@@QEAA_NXZ @ 0x1C0046E30 (-DeclareThreadAsInput@CInputThread@@QEAA_NXZ.c)
 *     ?IVWorkerThread@@YAXPEAX@Z @ 0x1C01B2B60 (-IVWorkerThread@@YAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall SetThreadBasePriority(PETHREAD Thread, int a2)
{
  __int128 v5; // [rsp+20h] [rbp-38h]
  __int128 SystemInformation; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+40h] [rbp-18h]
  int v8; // [rsp+44h] [rbp-14h]

  v8 = 0;
  *(_QWORD *)&v5 = PsGetThreadProcessId(Thread);
  v7 = a2;
  *((_QWORD *)&v5 + 1) = PsGetThreadId(Thread);
  SystemInformation = v5;
  return ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, &SystemInformation, 0x18uLL);
}
