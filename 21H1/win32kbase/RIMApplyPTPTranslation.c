/*
 * XREFs of RIMApplyPTPTranslation @ 0x1C016CBB8
 * Callers:
 *     rimTransformGeometry @ 0x1C0183AFC (rimTransformGeometry.c)
 * Callees:
 *     ?TransformPTPLogicalUnitsToPhysical@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z @ 0x1C016C53C (-TransformPTPLogicalUnitsToPhysical@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMApplyPTPTranslation(struct tagHID_POINTER_DEVICE_INFO *a1, __int64 a2)
{
  unsigned int v4; // ecx
  unsigned int v5; // eax
  struct tagPOINT v6; // [rsp+48h] [rbp+28h] BYREF

  if ( *((_DWORD *)a1 + 6) != 7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  TransformPTPLogicalUnitsToPhysical(a1, *(struct tagPOINT *)(a2 + 4), (struct tagPOINT *)(a2 + 120));
  *(_QWORD *)(a2 + 104) = *(_QWORD *)(a2 + 120);
  TransformPTPLogicalUnitsToPhysical(a1, *(struct tagPOINT *)(a2 + 12), (struct tagPOINT *)(a2 + 32));
  v4 = *(_DWORD *)(a2 + 24);
  if ( v4 )
  {
    v5 = *(_DWORD *)(a2 + 28);
    if ( v5 )
    {
      v6 = 0LL;
      TransformPTPLogicalUnitsToPhysical(a1, (struct tagPOINT)__PAIR64__(v5, v4), &v6);
      *(struct tagPOINT *)(a2 + 40) = v6;
    }
  }
}
