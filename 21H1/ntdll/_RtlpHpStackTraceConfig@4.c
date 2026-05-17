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

int __thiscall RtlpHpStackTraceConfig(int this)
{
  int v1; // ebx
  int v2; // esi
  int v4[18]; // [esp+8h] [ebp-48h] BYREF

  v1 = *(unsigned __int16 *)(this + 2);
  v2 = *(_DWORD *)(this + 4);
  if ( v2 == -1 )
  {
    if ( (v1 & 1) != 0 )
      RtlpHpStackTraceEnable();
    else
      RtlpHpStackTraceDisable();
    return 0;
  }
  else
  {
    memset(v4, 0, sizeof(v4));
    v4[5] = 0x10000000;
    v4[15] = v1;
    return RtlpHeapPerformCrossProcessQuery(v2, v4);
  }
}
