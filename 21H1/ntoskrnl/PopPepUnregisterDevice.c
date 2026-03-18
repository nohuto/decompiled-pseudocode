/*
 * XREFs of PopPepUnregisterDevice @ 0x14079C578
 * Callers:
 *     PopFxUnregisterDevice @ 0x14079C1FC (PopFxUnregisterDevice.c)
 * Callees:
 *     PopPepProcessEvent @ 0x14023C01C (PopPepProcessEvent.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     DbgPrintEx @ 0x14037C640 (DbgPrintEx.c)
 *     PopPepUpdateIdleStateRefCount @ 0x14039D344 (PopPepUpdateIdleStateRefCount.c)
 *     PopPepRemoveDevice @ 0x1403B984C (PopPepRemoveDevice.c)
 *     PopPepWaitForDeviceRelease @ 0x1403B9AB4 (PopPepWaitForDeviceRelease.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall PopPepUnregisterDevice(__int64 *P)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  int v4; // ecx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-18h]

  DbgPrintEx(0x92u, 3u, "PopPep: unregister device (0x%p)\n", P);
  v2 = 0;
  PopPepProcessEvent((__int64)P, 0LL, 6u, 5u, (__int64)Timeout, 0LL);
  KeWaitForSingleObject(P + 5, Executive, 0, 0, 0LL);
  PopPepWaitForDeviceRelease((__int64)P);
  PopPepRemoveDevice(P);
  v3 = *((int *)P + 42);
  v4 = 0;
  if ( (_DWORD)v3 != 4 )
    v4 = *((_DWORD *)P + v3 + 35);
  PopPepUpdateIdleStateRefCount(v4, 0, 0);
  if ( *((_DWORD *)P + 45) )
  {
    do
      PopPepUpdateIdleStateRefCount(*(_DWORD *)(P[25 * v2++ + 47] + 16), 0, 0);
    while ( v2 < *((_DWORD *)P + 45) );
  }
  ExFreePoolWithTag(P, 0x54706550u);
}
