/*
 * XREFs of DpiFdoRebootWorkItem @ 0x1C02C7130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DpiFdoRebootWorkItem(_QWORD *IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  _QWORD *v8; // rax

  v4 = (unsigned int)Context;
  IoFreeWorkItem(IoWorkItem);
  if ( NtShutdownSystem(ShutdownReboot) < 0 )
  {
    v7 = IoObject[8];
    v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, v5);
    v8[5] = v4;
    v8[3] = 275LL;
    v8[4] = 25LL;
    v8[6] = *(unsigned int *)(v7 + 1124);
    v8[7] = *(unsigned int *)(v7 + 1128);
    WdLogEvent5_WdCriticalError(v8);
  }
}
