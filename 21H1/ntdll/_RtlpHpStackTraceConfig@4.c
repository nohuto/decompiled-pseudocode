/*
 * XREFs of _RtlpHpStackTraceConfig@4 @ 0x4B36E268
 * Callers:
 *     _RtlSetHeapInformation@16 @ 0x4B2ECAF0 (_RtlSetHeapInformation@16.c)
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpHeapPerformCrossProcessQuery@8 @ 0x4B358165 (_RtlpHeapPerformCrossProcessQuery@8.c)
 *     _RtlpHpStackTraceDisable@0 @ 0x4B36E2C6 (_RtlpHpStackTraceDisable@0.c)
 *     _RtlpHpStackTraceEnable@0 @ 0x4B36E304 (_RtlpHpStackTraceEnable@0.c)
 */

NTSTATUS __thiscall RtlpHpStackTraceConfig(int this)
{
  void *v1; // ebx
  void *v2; // esi
  size_t v4; // [esp-4h] [ebp-54h]
  HANDLE v5[18]; // [esp+8h] [ebp-48h] BYREF

  v1 = (void *)*(unsigned __int16 *)(this + 2);
  v2 = *(void **)(this + 4);
  if ( v2 == (void *)-1 )
  {
    if ( ((unsigned __int8)v1 & 1) != 0 )
      RtlpHpStackTraceEnable();
    else
      RtlpHpStackTraceDisable();
    return 0;
  }
  else
  {
    LODWORD(v4) = 72;
    memset(v5, 0, v4);
    v5[5] = (HANDLE)0x10000000;
    v5[15] = v1;
    return RtlpHeapPerformCrossProcessQuery(v2, v5);
  }
}
