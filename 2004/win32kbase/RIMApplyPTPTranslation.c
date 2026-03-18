/*
 * XREFs of RIMApplyPTPTranslation @ 0x1C0166868
 * Callers:
 *     rimTransformGeometry @ 0x1C017DDFC (rimTransformGeometry.c)
 * Callees:
 *     ?TransformPTPLogicalUnitsToPhysical@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z @ 0x1C01661EC (-TransformPTPLogicalUnitsToPhysical@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMApplyPTPTranslation(struct tagHID_POINTER_DEVICE_INFO *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r9
  __int64 v7; // r9
  unsigned int v8; // ecx
  unsigned int v9; // eax
  struct tagPOINT v10; // [rsp+48h] [rbp+28h] BYREF

  if ( *((_DWORD *)a1 + 6) != 7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  TransformPTPLogicalUnitsToPhysical(a1, *(struct tagPOINT *)(a2 + 4), (struct tagPOINT *)(a2 + 120), a4);
  *(_QWORD *)(a2 + 104) = *(_QWORD *)(a2 + 120);
  TransformPTPLogicalUnitsToPhysical(a1, *(struct tagPOINT *)(a2 + 12), (struct tagPOINT *)(a2 + 32), v6);
  v8 = *(_DWORD *)(a2 + 24);
  if ( v8 )
  {
    v9 = *(_DWORD *)(a2 + 28);
    if ( v9 )
    {
      v10 = 0LL;
      TransformPTPLogicalUnitsToPhysical(a1, (struct tagPOINT)__PAIR64__(v9, v8), &v10, v7);
      *(struct tagPOINT *)(a2 + 40) = v10;
    }
  }
}
