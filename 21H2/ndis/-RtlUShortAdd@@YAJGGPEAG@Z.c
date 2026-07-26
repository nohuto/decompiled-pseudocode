/*
 * XREFs of ?RtlUShortAdd@@YAJGGPEAG@Z @ 0x1C002801C
 * Callers:
 *     ndisAllocateConfigurationString @ 0x1C0027E6C (ndisAllocateConfigurationString.c)
 *     NdisOpenFile @ 0x1C00BD840 (NdisOpenFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUShortAdd(unsigned __int16 a1, __int16 a2, unsigned __int16 *a3)
{
  bool v3; // cf
  unsigned __int16 v4; // dx

  v3 = (unsigned __int16)(a2 + a1) < a1;
  if ( (unsigned __int16)(a2 + a1) < a1 )
    v4 = -1;
  else
    v4 = a2 + a1;
  *a3 = v4;
  return v3 ? 0xC0000095 : 0;
}
