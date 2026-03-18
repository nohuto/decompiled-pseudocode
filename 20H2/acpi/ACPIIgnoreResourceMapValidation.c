/*
 * XREFs of ACPIIgnoreResourceMapValidation @ 0x1C005D8B4
 * Callers:
 *     ACPIRangeValidatePciResources @ 0x1C002B020 (ACPIRangeValidatePciResources.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001D52C (WPP_RECORDER_SF_.c)
 */

char __fastcall ACPIIgnoreResourceMapValidation(struct _IO_RESOURCE_DESCRIPTOR *a1)
{
  char v1; // bl
  __int64 *v2; // rax
  unsigned __int64 v4; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v5; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  v1 = 0;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( (__int64 *)AcpiIgnoreResourceMapValidationList != &AcpiIgnoreResourceMapValidationList )
  {
    RtlIoDecodeMemIoResource(a1, &v6, &v5, &v4);
    v2 = (__int64 *)AcpiIgnoreResourceMapValidationList;
    if ( (__int64 *)AcpiIgnoreResourceMapValidationList != &AcpiIgnoreResourceMapValidationList )
    {
      while ( v2[2] != v5 || v2[3] != v4 )
      {
        v2 = (__int64 *)*v2;
        if ( v2 == &AcpiIgnoreResourceMapValidationList )
          return v1;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0x16u,
          0xEu,
          (__int64)&WPP_95ceafb9c956380d4634093f153ba036_Traceguids);
      return 1;
    }
  }
  return v1;
}
