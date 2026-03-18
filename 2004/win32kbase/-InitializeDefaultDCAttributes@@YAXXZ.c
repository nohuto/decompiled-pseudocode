/*
 * XREFs of ?InitializeDefaultDCAttributes@@YAXXZ @ 0x1C01408F8
 * Callers:
 *     InitializeGre @ 0x1C0296F90 (InitializeGre.c)
 * Callees:
 *     <none>
 */

void InitializeDefaultDCAttributes(void)
{
  WPP_MAIN_CB.DeviceQueue.1 = 0LL;
  WPP_MAIN_CB.Dpc.ProcessorHistory = 0LL;
  LODWORD(WPP_MAIN_CB.Dpc.DeferredContext) = 0;
  dword_1C024BF48 = 0;
  dword_1C024BF4C = 0;
  dword_1C024BF54 = 0;
  dword_1C024BF58 = 0;
  dword_1C024BF70 = 0;
  dword_1C024BF74 = 0;
  WPP_MAIN_CB.Reserved = (PVOID)0xFFFFFF00FFFFFFLL;
  dword_1C024BEA0 = 0xFFFFFF;
  dword_1C024BEA4 = 0xFFFFFF;
  dword_1C024BEE0 = -1;
  dword_1C024BEE4 = -1;
  qword_1C024BF1C = 0x100000001LL;
  qword_1C024BF2C = 0x100000001LL;
  LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) = 16;
  dword_1C024BEB0 = 1;
  dword_1C024BEB4 = 16843277;
  dword_1C024BEC0 = 2;
  dword_1C024BEC4 = 1;
  dword_1C024BEC8 = 1;
  dword_1C024BED0 = 0;
  qword_1C024BEF0 = 0LL;
  dword_1C024BF40 = 1;
  *(_OWORD *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink = _xmm;
  *(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong = 0LL;
  WPP_MAIN_CB.Dpc.DpcListEntry.Next = (struct _SINGLE_LIST_ENTRY *)0x3D8000000000004BLL;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)1031798784;
  *(PVOID *)((char *)&WPP_MAIN_CB.Dpc.DeferredContext + 4) = 0LL;
  HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument1) = 83;
  dword_1C024BF44 = 1065353216;
  dword_1C024BF50 = 1065353216;
  qword_1C024BF5C = 0LL;
  dword_1C024BF64 = 99;
  dword_1C024BF68 = 1098907648;
  dword_1C024BF6C = 1098907648;
  LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) = 1;
  dword_1C024BF34 = 6146;
  WPP_MAIN_CB.DeviceLock.Header.LockNV = 1;
}
