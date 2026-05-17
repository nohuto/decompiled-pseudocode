/*
 * XREFs of _RtlpHpEnvGetEnvHandleFromParams@4 @ 0x4B370871
 * Callers:
 *     _RtlCreateHeap@24 @ 0x4B2C0F40 (_RtlCreateHeap@24.c)
 * Callees:
 *     <none>
 */

int __thiscall RtlpHpEnvGetEnvHandleFromParams(int this)
{
  unsigned int v1; // eax
  int v3; // [esp+0h] [ebp-8h]

  v3 = RtlpHpEnvHandle;
  _BitScanReverse(&v1, *(_DWORD *)(this + 12));
  BYTE1(v3) = v1;
  if ( *(_DWORD *)(this + 16) != -1 )
    BYTE2(v3) = *(_BYTE *)(this + 16) + 1;
  return v3;
}
