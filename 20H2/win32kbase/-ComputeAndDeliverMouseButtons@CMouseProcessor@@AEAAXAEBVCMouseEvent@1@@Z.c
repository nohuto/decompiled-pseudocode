/*
 * XREFs of ?ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C00A6840
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C00302C4 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x1C0035484 (ApiSetEditionForegroundQAccessibleToMouseProducer.c)
 *     ??0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecialization@1@PEBVCMouseEvent@1@@Z @ 0x1C00A694C (--0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecializatio.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::ComputeAndDeliverMouseButtons(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  unsigned int v7; // ebx
  unsigned int v8; // ebp
  unsigned int i; // esi
  _BOOL8 v10; // r9
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // [rsp+30h] [rbp-58h] BYREF
  int v14; // [rsp+38h] [rbp-50h]
  _BYTE v15[48]; // [rsp+40h] [rbp-48h] BYREF

  v4 = *((_QWORD *)a2 + 1);
  v7 = *(_WORD *)(v4 + 28) & 0xF3FF;
  if ( !v7 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
    v4 = *((_QWORD *)a2 + 1);
  }
  v8 = *(unsigned __int16 *)(v4 + 30);
  for ( i = 1; v7; i *= 2 )
  {
    if ( (v7 & 3) != 0 )
    {
      if ( (v7 & 1) != 0 )
      {
        v10 = gbClientDoubleClickSupport && (v8 & 1) != 0;
        CMouseProcessor::CButtonEvent::CButtonEvent(v15, i, 1LL, v10, a2);
        CMouseProcessor::ProcessMouseButton(this, (const struct CMouseProcessor::CButtonEvent *)v15);
      }
      if ( (v7 & 2) != 0 )
      {
        CMouseProcessor::CButtonEvent::CButtonEvent(v15, i, 2LL, 0LL, a2);
        CMouseProcessor::ProcessMouseButton(this, (const struct CMouseProcessor::CButtonEvent *)v15);
      }
      v11 = *((_QWORD *)a2 + 1);
      if ( (*(_BYTE *)(v11 + 112) & 1) == 0 && *(_DWORD *)(v11 + 108) != 1 )
      {
        v12 = *(_DWORD *)(v11 + 140);
        v13 = *(_QWORD *)(v11 + 132);
        v14 = v12;
        if ( !(unsigned int)ApiSetEditionForegroundQAccessibleToMouseProducer(
                              (PDEVICE_OBJECT)&v13,
                              (__int64)a2,
                              0LL,
                              a4) )
          break;
      }
    }
    v7 >>= 2;
    v8 >>= 2;
  }
}
