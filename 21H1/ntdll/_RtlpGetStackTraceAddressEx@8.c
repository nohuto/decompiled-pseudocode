/*
 * XREFs of _RtlpGetStackTraceAddressEx@8 @ 0x4B2AFCB0
 * Callers:
 *     _RtlCheckHeldCriticalSections@8 @ 0x4B2E8510 (_RtlCheckHeldCriticalSections@8.c)
 *     _RtlpGetStackTraceAddress@4 @ 0x4B369150 (_RtlpGetStackTraceAddress@4.c)
 * Callees:
 *     <none>
 */

int __stdcall RtlpGetStackTraceAddressEx(unsigned __int16 a1, unsigned __int16 a2)
{
  unsigned int v2; // ecx

  v2 = a1 + (a2 << 16);
  if ( RtlpStackTraceDatabase && v2 && v2 <= RtlpStackTraceDatabase[24].Value )
    return *(_DWORD *)(RtlpStackTraceDatabase[25].Value - 4 * v2);
  else
    return 0;
}
