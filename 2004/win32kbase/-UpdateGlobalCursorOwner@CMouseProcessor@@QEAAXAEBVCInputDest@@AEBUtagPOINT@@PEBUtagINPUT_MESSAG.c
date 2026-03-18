/*
 * XREFs of ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C006DFDC
 * Callers:
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1C006E208 (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 *     UpdateGlobalCursorOwner @ 0x1C01AC3D0 (UpdateGlobalCursorOwner.c)
 * Callees:
 *     ?PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z @ 0x1C00535B0 (-PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z.c)
 *     IsPostIAMShellHookMessageExSupported @ 0x1C0062A28 (IsPostIAMShellHookMessageExSupported.c)
 *     ?OnGlobalCursorOwnerComputed@UpdatePointerGraphicDevice@CMouseProcessor@@QEAA_NXZ @ 0x1C006BC7C (-OnGlobalCursorOwnerComputed@UpdatePointerGraphicDevice@CMouseProcessor@@QEAA_NXZ.c)
 *     ApiSetEditionUpdateCursorOnMouseMove @ 0x1C006E148 (ApiSetEditionUpdateCursorOnMouseMove.c)
 *     CoalesceInputSourceMouseMoves @ 0x1C006E2B0 (CoalesceInputSourceMouseMoves.c)
 *     EtwTraceWakePump @ 0x1C006E480 (EtwTraceWakePump.c)
 *     IsSetPointerSupported @ 0x1C00CC62C (IsSetPointerSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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

  if ( !*(_DWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
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
          if ( qword_1C0252018 )
            qword_1C0252018(*(_QWORD *)(*((_QWORD *)gpqCursor + 13) + 16LL), 2LL);
        }
        if ( updated && *updated != *v7 )
        {
          if ( (int)IsPostIAMShellHookMessageExSupported() >= 0 && qword_1C0252A90 )
            qword_1C0252A90(v7[3], 39LL, *v7);
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
      if ( qword_1C0252B00 )
        qword_1C0252B00();
      if ( CMouseProcessor::UpdatePointerGraphicDevice::OnGlobalCursorOwnerComputed((CMouseProcessor *)((char *)this + 3816))
        && (int)IsSetPointerSupported() >= 0 )
      {
        if ( qword_1C02524D8 )
          qword_1C02524D8(1LL);
      }
    }
  }
}
