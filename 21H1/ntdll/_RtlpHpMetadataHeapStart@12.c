/*
 * XREFs of _RtlpHpMetadataHeapStart@12 @ 0x4B3794F4
 * Callers:
 *     _RtlpHpMetadataAlloc@20 @ 0x4B379349 (_RtlpHpMetadataAlloc@20.c)
 * Callees:
 *     _RtlRunOnceExecuteOnce@16 @ 0x4B2B0F70 (_RtlRunOnceExecuteOnce@16.c)
 */

NTSTATUS __thiscall RtlpHpMetadataHeapStart(_RTL_RUN_ONCE *this, char Parameter, int a3)
{
  if ( this->Value )
    return 0;
  else
    return RtlRunOnceExecuteOnce(this + 1, (PRTL_RUN_ONCE_INIT_FN)RtlpHpMetadataHeapCreate, &Parameter, 0);
}
