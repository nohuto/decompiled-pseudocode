/*
 * XREFs of ?PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z @ 0x1C001A984
 * Callers:
 *     ?PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z @ 0x1C001A928 (-PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z.c)
 *     ?PowerRuntimeComponentIdleStateCallback_Thread@DXGADAPTER@@QEAAXXZ @ 0x1C02BCA28 (-PowerRuntimeComponentIdleStateCallback_Thread@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?DdiSetPowerComponentFState@DXGADAPTER@@QEAAJKK@Z @ 0x1C001AAD8 (-DdiSetPowerComponentFState@DXGADAPTER@@QEAAJKK@Z.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C0044CF4 (McTemplateK0pt_EtwWriteTransfer.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0044D64 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     DxgkNotifySharedPowerGraphicsFStateTransition @ 0x1C00540C8 (DxgkNotifySharedPowerGraphicsFStateTransition.c)
 *     ?RecordEnteringIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C0056CF4 (-RecordEnteringIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 *     ?RecordLeavingIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C0056DD4 (-RecordLeavingIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::PowerRuntimeComponentIdleStateCallback_Worker(
        DXGADAPTER *this,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  __int64 v5; // r14
  unsigned int v6; // ebp
  __int64 v8; // rdi
  char v9; // r13
  char v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rcx

  v5 = a2;
  v6 = a3;
  if ( *((_DWORD *)this + 50) == 1 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0pqq_EtwWriteTransfer(
        (_DWORD)this,
        (unsigned int)&Dxgk_SetPowerComponentFState,
        a3,
        (_DWORD)this,
        a2,
        a3);
    v8 = *((_QWORD *)this + 362) + 520 * v5;
    if ( !a4 && *(_BYTE *)(v8 + 360) )
    {
      v9 = 0;
    }
    else
    {
      v9 = 1;
      if ( (*((int *)this + 606) >= 0x2000 || *((_BYTE *)this + 2724)) && *(_DWORD *)(v8 + 208) == 3 )
      {
        v10 = 0;
      }
      else
      {
        v10 = 1;
        *(_DWORD *)(v8 + 344) = v6;
      }
      *(_BYTE *)(v8 + 359) = 1;
      if ( v6 )
      {
        v11 = *(_QWORD *)(v8 + 512);
        if ( v11 )
          DXGPOWERSTATISTICSTRANSITIONENGINE::RecordEnteringIdleFState((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v11 + 136));
      }
      if ( v10 )
        DXGADAPTER::DdiSetPowerComponentFState(this, *(_DWORD *)(v8 + 4), v6);
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0pt_EtwWriteTransfer(&DxgkControlGuid_Context, &Dxgk_SetPowerComponentFStateEnd, a3, this, v5);
    if ( (*(_DWORD *)(v8 + 216) & 2) == 0 )
    {
      *(_BYTE *)(v8 + 359) = 0;
      if ( !a4 )
        PoFxCompleteIdleState(*((_QWORD *)this + 363), (unsigned int)v5);
      if ( v9 )
      {
        if ( !v6 )
        {
          v12 = *(_QWORD *)(v8 + 512);
          if ( v12 )
            DXGPOWERSTATISTICSTRANSITIONENGINE::RecordLeavingIdleFState((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v12 + 136));
        }
        if ( *(_DWORD *)(v8 + 208) == 7 )
          DxgkNotifySharedPowerGraphicsFStateTransition(this, *(_DWORD *)(v8 + 4), v6, 0);
      }
    }
  }
  else if ( !a4 )
  {
    PoFxCompleteIdleState(*((_QWORD *)this + 363), a2);
  }
}
