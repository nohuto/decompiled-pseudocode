/*
 * XREFs of ApiSetEditionIsPointerQueuedMessageCoalescable @ 0x1C01C8A24
 * Callers:
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C0188C3C (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     EditionIsPointerQueuedMessageCoalescable @ 0x1C01F7A20 (EditionIsPointerQueuedMessageCoalescable.c)
 */

__int64 __fastcall ApiSetEditionIsPointerQueuedMessageCoalescable(
        _OWORD *a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        int a6)
{
  int v8; // r14d
  unsigned int IsPointerQueuedMessageCoalescable; // ebx
  int v11; // eax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  _OWORD v18[7]; // [rsp+30h] [rbp-88h] BYREF

  v8 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      272,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  IsPointerQueuedMessageCoalescable = 0;
  if ( qword_1C02536E8 )
    v11 = qword_1C02536E8();
  else
    v11 = -1073741637;
  if ( v11 >= 0 )
  {
    v12 = a1[1];
    v18[0] = *a1;
    v18[2] = a1[2];
    v13 = a1[4];
    v18[1] = v12;
    v14 = a1[3];
    v18[4] = v13;
    v15 = a1[6];
    v18[3] = v14;
    v16 = a1[5];
    v18[6] = v15;
    v18[5] = v16;
    IsPointerQueuedMessageCoalescable = EditionIsPointerQueuedMessageCoalescable((unsigned int)v18, v8, a3, a4, a5, a6);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      273,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return IsPointerQueuedMessageCoalescable;
}
