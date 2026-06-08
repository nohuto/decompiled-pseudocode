/*
 * XREFs of ConnectHwpInterrupt @ 0x1C0006770
 * Callers:
 *     <none>
 * Callees:
 *     IsHgsInterruptSupported @ 0x1C0001E78 (IsHgsInterruptSupported.c)
 *     IsHwpNativeInterruptSupported @ 0x1C0001EF0 (IsHwpNativeInterruptSupported.c)
 *     WPP_RECORDER_SF_D @ 0x1C0003658 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0003718 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00047F0 (_guard_dispatch_icall_nop.c)
 *     IsHwpHighestInterruptSupported @ 0x1C0006E08 (IsHwpHighestInterruptSupported.c)
 */

__int64 __fastcall ConnectHwpInterrupt(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdx
  bool v3; // r8
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  int v6; // ebx
  unsigned __int64 v7; // rax
  int v9; // [rsp+28h] [rbp-10h]
  unsigned __int64 v10; // [rsp+40h] [rbp+8h]
  unsigned __int64 v11; // [rsp+40h] [rbp+8h]
  unsigned __int64 v12; // [rsp+40h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 88);
  if ( v1 && (*(_DWORD *)(v1 + 4) & 0x1000) != 0 )
  {
    BYTE6(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) = IsHwpNativeInterruptSupported();
    BYTE5(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) = IsHwpHighestInterruptSupported();
    v3 = IsHgsInterruptSupported() && qword_1C001C6C8 && (unsigned __int8)qword_1C001C6C8();
    HIBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) = v3;
    if ( *(_WORD *)((char *)&WPP_MAIN_CB.Queue.Wcb.CurrentIrp + 5) )
    {
      v4 = __readmsr(0x773u);
      v10 = v4;
      if ( BYTE6(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
      {
        LODWORD(v4) = v4 & 0xFFFFFFFC;
        LODWORD(v10) = v4;
      }
      if ( BYTE5(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
        LODWORD(v10) = v4 & 0xFFFFFFFB;
      __writemsr(0x773u, v10);
      v5 = __readmsr(0x777u);
      v11 = v5;
      if ( BYTE6(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
      {
        LODWORD(v5) = v5 & 0xFFFFFFFA;
        LODWORD(v11) = v5;
      }
      if ( BYTE5(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
        LODWORD(v11) = v5 & 0xFFFFFFF7;
      v2 = HIDWORD(v11);
      __writemsr(0x777u, v11);
    }
    if ( v3 )
    {
      v12 = __readmsr(0x1B2u) & 0xFFFFFFFFFDFFFFFFuLL;
      v2 = HIDWORD(v12);
      __writemsr(0x1B2u, v12);
    }
    v6 = ((__int64 (__fastcall *)(__int64 (__fastcall *)(), unsigned __int64))HalPrivateDispatchTable[117])(
           HwpInterruptService,
           v2);
    if ( v6 >= 0 )
    {
      if ( HIBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
      {
        v7 = __readmsr(0x1B1u);
        if ( (v7 & 0x4000000) != 0 )
          ((void (__fastcall *)(__int64))qword_1C001C6D0)(433LL);
      }
      return 0;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = v6;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0xEu,
        (__int64)&WPP_109e1df2f5153e84e07b233eef2999a9_Traceguids,
        v9);
    }
  }
  else
  {
    v6 = -1073741637;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        3u,
        0xDu,
        (__int64)&WPP_109e1df2f5153e84e07b233eef2999a9_Traceguids);
  }
  return (unsigned int)v6;
}
