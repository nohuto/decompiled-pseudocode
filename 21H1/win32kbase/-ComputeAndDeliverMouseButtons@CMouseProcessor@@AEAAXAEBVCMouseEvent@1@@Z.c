/*
 * XREFs of ?ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C005F280
 * Callers:
 *     <none>
 * Callees:
 *     ??0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecialization@1@PEBVCMouseEvent@1@@Z @ 0x1C005F154 (--0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecializatio.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C005FFC0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x1C0064C84 (ApiSetEditionForegroundQAccessibleToMouseProducer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::ComputeAndDeliverMouseButtons(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2)
{
  __int64 v2; // rax
  unsigned int v5; // ebx
  unsigned int v6; // ebp
  unsigned int i; // esi
  BOOL v8; // r9d
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // [rsp+30h] [rbp-58h] BYREF
  int v12; // [rsp+38h] [rbp-50h]
  _BYTE v13[48]; // [rsp+40h] [rbp-48h] BYREF

  v2 = *((_QWORD *)a2 + 1);
  v5 = *(_WORD *)(v2 + 28) & 0xF3FF;
  if ( !v5 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
    v2 = *((_QWORD *)a2 + 1);
  }
  v6 = *(unsigned __int16 *)(v2 + 30);
  for ( i = 1; v5; i *= 2 )
  {
    if ( (v5 & 3) != 0 )
    {
      if ( (v5 & 1) != 0 )
      {
        v8 = gbClientDoubleClickSupport && (v6 & 1) != 0;
        CMouseProcessor::CButtonEvent::CButtonEvent((__int64)v13, i, 1, v8, (__int64)a2);
        CMouseProcessor::ProcessMouseButton(this, (const struct CMouseProcessor::CButtonEvent *)v13);
      }
      if ( (v5 & 2) != 0 )
      {
        CMouseProcessor::CButtonEvent::CButtonEvent((__int64)v13, i, 2, 0, (__int64)a2);
        CMouseProcessor::ProcessMouseButton(this, (const struct CMouseProcessor::CButtonEvent *)v13);
      }
      v9 = *((_QWORD *)a2 + 1);
      if ( (*(_BYTE *)(v9 + 112) & 1) == 0 && *(_DWORD *)(v9 + 108) != 1 )
      {
        v10 = *(_DWORD *)(v9 + 140);
        v11 = *(_QWORD *)(v9 + 132);
        v12 = v10;
        if ( !(unsigned int)ApiSetEditionForegroundQAccessibleToMouseProducer(&v11, a2, 0LL) )
          break;
      }
    }
    v5 >>= 2;
    v6 >>= 2;
  }
}
