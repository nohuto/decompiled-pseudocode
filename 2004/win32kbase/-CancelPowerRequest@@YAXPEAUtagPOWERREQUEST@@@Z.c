/*
 * XREFs of ?CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1C011F2E0
 * Callers:
 *     CleanupPowerRequestList @ 0x1C0063050 (CleanupPowerRequestList.c)
 * Callees:
 *     EtwTraceCompletePowerRequest @ 0x1C00646A0 (EtwTraceCompletePowerRequest.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C012AF50 (McTemplateK0pq_EtwWriteTransfer.c)
 */

void __fastcall CancelPowerRequest(struct tagPOWERREQUEST *a1, __int64 a2, __int64 a3)
{
  *((_DWORD *)a1 + 14) = -1073741823;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0pq_EtwWriteTransfer(a1, &CanceledPowerRequest, a3, a1, -1073741536);
  if ( *((_QWORD *)a1 + 8) )
  {
    EtwTraceCompletePowerRequest((__int64)a1, *((_DWORD *)a1 + 14), a3);
    Win32FreePool((__int64)a1);
  }
  else
  {
    KeSetEvent((PRKEVENT)((char *)a1 + 16), 1, 0);
  }
}
