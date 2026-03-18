/*
 * XREFs of ?InitializeDefaultDCAttributes@@YAXXZ @ 0x1C0146C48
 * Callers:
 *     InitializeGre @ 0x1C029CF90 (InitializeGre.c)
 * Callees:
 *     <none>
 */

void InitializeDefaultDCAttributes(void)
{
  WPP_MAIN_CB.DeviceQueue.1 = 0LL;
  WPP_MAIN_CB.Dpc.ProcessorHistory = 0LL;
  LODWORD(WPP_MAIN_CB.Dpc.DeferredContext) = 0;
  dword_1C0251F38 = 0;
  dword_1C0251F3C = 0;
  dword_1C0251F44 = 0;
  dword_1C0251F48 = 0;
  dword_1C0251F60 = 0;
  dword_1C0251F64 = 0;
  WPP_MAIN_CB.Reserved = (PVOID)0xFFFFFF00FFFFFFLL;
  dword_1C0251E90 = 0xFFFFFF;
  dword_1C0251E94 = 0xFFFFFF;
  dword_1C0251ED0 = -1;
  dword_1C0251ED4 = -1;
  qword_1C0251F0C = 0x100000001LL;
  qword_1C0251F1C = 0x100000001LL;
  LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) = 16;
  dword_1C0251EA0 = 1;
  dword_1C0251EA4 = 16843277;
  dword_1C0251EB0 = 2;
  dword_1C0251EB4 = 1;
  dword_1C0251EB8 = 1;
  dword_1C0251EC0 = 0;
  qword_1C0251EE0 = 0LL;
  dword_1C0251F30 = 1;
  *(_OWORD *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink = _xmm;
  *(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong = 0LL;
  WPP_MAIN_CB.Dpc.DpcListEntry.Next = (struct _SINGLE_LIST_ENTRY *)0x3D8000000000004BLL;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)1031798784;
  *(PVOID *)((char *)&WPP_MAIN_CB.Dpc.DeferredContext + 4) = 0LL;
  HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument1) = 83;
  dword_1C0251F34 = 1065353216;
  dword_1C0251F40 = 1065353216;
  qword_1C0251F4C = 0LL;
  dword_1C0251F54 = 99;
  dword_1C0251F58 = 1098907648;
  dword_1C0251F5C = 1098907648;
  LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) = 1;
  dword_1C0251F24 = 6146;
  WPP_MAIN_CB.DeviceLock.Header.LockNV = 1;
}
