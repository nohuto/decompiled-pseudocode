/*
 * XREFs of ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0063108
 * Callers:
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1C0063334 (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 *     UpdateGlobalCursorOwner @ 0x1C01B2130 (UpdateGlobalCursorOwner.c)
 * Callees:
 *     ?PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z @ 0x1C00458A0 (-PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z.c)
 *     ?OnGlobalCursorOwnerComputed@UpdatePointerGraphicDevice@CMouseProcessor@@QEAA_NXZ @ 0x1C005FEFC (-OnGlobalCursorOwnerComputed@UpdatePointerGraphicDevice@CMouseProcessor@@QEAA_NXZ.c)
 *     ApiSetEditionUpdateCursorOnMouseMove @ 0x1C0063274 (ApiSetEditionUpdateCursorOnMouseMove.c)
 *     CoalesceInputSourceMouseMoves @ 0x1C00633E0 (CoalesceInputSourceMouseMoves.c)
 *     EtwTraceWakePump @ 0x1C00635B0 (EtwTraceWakePump.c)
 *     IsPostIAMShellHookMessageExSupported @ 0x1C00AB4B8 (IsPostIAMShellHookMessageExSupported.c)
 *     IsSetPointerSupported @ 0x1C00CBD7C (IsSetPointerSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::UpdateGlobalCursorOwner(
        CMouseProcessor *this,
        const struct CInputDest *a2,
        const struct tagPOINT *a3,
        const struct tagINPUT_MESSAGE_SOURCE *a4)
{
  _QWORD *v7; // rbx
  _QWORD *updated; // rdi
  struct tagQ *v9; // rsi
  __int64 v10; // rbx
  int v11; // r9d
  __int64 v12; // r8

  if ( !*(_DWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  if ( *((_DWORD *)a2 + 23) == 2 )
    v7 = (_QWORD *)*((_QWORD *)a2 + 10);
  else
    v7 = 0LL;
  if ( v7 )
  {
    updated = (_QWORD *)ApiSetEditionUpdateCursorOnMouseMove(v7, *a3);
    v9 = *(struct tagQ **)(v7[2] + 424LL);
    if ( v9 != gpqCursor )
    {
      if ( gpqCursor )
      {
        if ( *((_QWORD *)gpqCursor + 13) )
        {
          CoalesceInputSourceMouseMoves(gpqCursor);
          EtwTraceWakePump(*(_QWORD *)(*((_QWORD *)gpqCursor + 13) + 16LL), 0LL, 512LL);
          *((_DWORD *)gpqCursor + 97) |= 0x20u;
          if ( qword_1C0257FD8 )
            qword_1C0257FD8(*(_QWORD *)(*((_QWORD *)gpqCursor + 13) + 16LL), 2LL, v12);
        }
        if ( updated && *updated != *v7 )
        {
          if ( (int)IsPostIAMShellHookMessageExSupported() >= 0 && qword_1C0258A50 )
            qword_1C0258A50(v7[3], 39LL, *v7);
          v10 = updated[3];
          v11 = *(_DWORD *)(v10 + 48);
          if ( (v11 & 0x5C0) != 0 )
          {
            CBaseProcessor::PostQEventWork((__int64)this, **(_QWORD **)(v10 + 184), 1, v11, *(int *)(v10 + 192), 1472LL);
            *(_DWORD *)(v10 + 48) &= 0xFFFFFA3F;
          }
        }
      }
      gpqCursor = v9;
      if ( qword_1C0258AC0 )
        qword_1C0258AC0();
      if ( CMouseProcessor::UpdatePointerGraphicDevice::OnGlobalCursorOwnerComputed((CMouseProcessor *)((char *)this + 3888))
        && (int)IsSetPointerSupported() >= 0 )
      {
        if ( qword_1C0258498 )
          qword_1C0258498(1LL);
      }
    }
  }
}
