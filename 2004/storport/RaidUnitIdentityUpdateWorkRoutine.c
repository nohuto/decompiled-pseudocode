/*
 * XREFs of RaidUnitIdentityUpdateWorkRoutine @ 0x1C0049DB0
 * Callers:
 *     <none>
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009F40 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C000C340 (RaUnitReleaseRemoveLock.c)
 *     RaidDeleteBusEnumerator @ 0x1C00160AC (RaidDeleteBusEnumerator.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C0016470 (RaidBusEnumeratorVisitUnit.c)
 *     memset @ 0x1C001DA00 (memset.c)
 *     WPP_SF_qqD @ 0x1C00326A0 (WPP_SF_qqD.c)
 *     RaidLogRequestComplete @ 0x1C0048DDC (RaidLogRequestComplete.c)
 */

void __fastcall RaidUnitIdentityUpdateWorkRoutine(PDEVICE_OBJECT DeviceObject, PIO_WORKITEM *Context)
{
  void *DeviceExtension; // rdi
  int v4; // [rsp+28h] [rbp-A0h]
  _QWORD v5[15]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v6[4]; // [rsp+A8h] [rbp-20h] BYREF

  DeviceExtension = DeviceObject->DeviceExtension;
  memset(v5, 0, sizeof(v5));
  v6[1] = v6;
  v6[0] = v6;
  v5[0] = *((_QWORD *)DeviceExtension + 3);
  RaidBusEnumeratorVisitUnit((__int64)v5, *((_DWORD *)DeviceExtension + 24));
  RaidDeleteBusEnumerator((__int64)v5);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    v4 = *((_DWORD *)Context[1] + 12);
    WPP_SF_qqD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x3Au,
      (__int64)&WPP_315ac634f457316aea96af95ee1292c6_Traceguids,
      DeviceExtension,
      Context[1],
      v4);
  }
  if ( (qword_1C0068350 & 0x10) != 0 )
    RaidLogRequestComplete(
      *((_QWORD *)DeviceExtension + 3),
      (__int64)Context[1],
      *(_QWORD *)(*((_QWORD *)Context[1] + 23) + 8LL));
  RaidCompleteRequestEx((PIRP)Context[1], 1, *((_DWORD *)Context[1] + 12));
  IoFreeWorkItem(*Context);
  ExFreePoolWithTag(Context, 0x49576152u);
  RaUnitReleaseRemoveLock((__int64)DeviceExtension);
}
