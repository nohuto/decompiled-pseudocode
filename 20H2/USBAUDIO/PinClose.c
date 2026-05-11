/*
 * XREFs of PinClose @ 0x1C0024900
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0001258 (WPP_RECORDER_SF_q.c)
 *     PinRemovePinFromList @ 0x1C000232C (PinRemovePinFromList.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PinClose(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v4; // ebx

  v2 = a1[2];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      8u,
      0x11u,
      (__int64)&WPP_84ce55fa46883e648a4ace57328fee0f_Traceguids,
      a1);
  --*(_DWORD *)(*(_QWORD *)(v2 + 32) + 140LL);
  v4 = (*(__int64 (__fastcall **)(_QWORD *))(*(_QWORD *)(*(_QWORD *)(v2 + 144) + 128LL) + 8LL))(a1);
  PinRemovePinFromList(a1);
  return v4;
}
