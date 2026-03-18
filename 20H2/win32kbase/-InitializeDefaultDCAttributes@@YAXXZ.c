/*
 * XREFs of ?InitializeDefaultDCAttributes@@YAXXZ @ 0x1C00910D8
 * Callers:
 *     InitializeGre @ 0x1C0293010 (InitializeGre.c)
 * Callees:
 *     <none>
 */

void InitializeDefaultDCAttributes(void)
{
  WPP_MAIN_CB.DeviceQueue.1 = 0LL;
  WPP_MAIN_CB.Dpc.ProcessorHistory = 0LL;
  LODWORD(WPP_MAIN_CB.Dpc.DeferredContext) = 0;
  dword_1C0249F48 = 0;
  dword_1C0249F4C = 0;
  dword_1C0249F54 = 0;
  dword_1C0249F58 = 0;
  dword_1C0249F70 = 0;
  dword_1C0249F74 = 0;
  WPP_MAIN_CB.Reserved = (PVOID)0xFFFFFF00FFFFFFLL;
  dword_1C0249EA0 = 0xFFFFFF;
  dword_1C0249EA4 = 0xFFFFFF;
  dword_1C0249EE0 = -1;
  dword_1C0249EE4 = -1;
  qword_1C0249F1C = 0x100000001LL;
  qword_1C0249F2C = 0x100000001LL;
  LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) = 16;
  dword_1C0249EB0 = 1;
  dword_1C0249EB4 = 16843277;
  dword_1C0249EC0 = 2;
  dword_1C0249EC4 = 1;
  dword_1C0249EC8 = 1;
  dword_1C0249ED0 = 0;
  qword_1C0249EF0 = 0LL;
  dword_1C0249F40 = 1;
  *(_OWORD *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink = _xmm;
  *(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong = 0LL;
  WPP_MAIN_CB.Dpc.DpcListEntry.Next = (struct _SINGLE_LIST_ENTRY *)0x3D8000000000004BLL;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)1031798784;
  *(PVOID *)((char *)&WPP_MAIN_CB.Dpc.DeferredContext + 4) = 0LL;
  HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument1) = 83;
  dword_1C0249F44 = 1065353216;
  dword_1C0249F50 = 1065353216;
  qword_1C0249F5C = 0LL;
  dword_1C0249F64 = 99;
  dword_1C0249F68 = 1098907648;
  dword_1C0249F6C = 1098907648;
  LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) = 1;
  dword_1C0249F34 = 6146;
  WPP_MAIN_CB.DeviceLock.Header.LockNV = 1;
}
