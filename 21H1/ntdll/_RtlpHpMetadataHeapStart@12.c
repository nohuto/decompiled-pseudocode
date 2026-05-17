/*
 * XREFs of _RtlpHpMetadataHeapStart@12 @ 0x4B3794F4
 * Callers:
 *     _RtlpHpMetadataAlloc@20 @ 0x4B379349 (_RtlpHpMetadataAlloc@20.c)
 * Callees:
 *     _RtlRunOnceExecuteOnce@16 @ 0x4B2B0F70 (_RtlRunOnceExecuteOnce@16.c)
 */

int __thiscall RtlpHpMetadataHeapStart(_DWORD *this, char a2, int a3)
{
  if ( *this )
    return 0;
  else
    return RtlRunOnceExecuteOnce(
             (int)(this + 1),
             (int (__stdcall *)(int, int, int))RtlpHpMetadataHeapCreate,
             (int)&a2,
             0);
}
