/*
 * XREFs of VslpFlushBufferArrayEntryCallback @ 0x1404F8A00
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     VslpSkInitializeBuffer @ 0x14088D7B8 (VslpSkInitializeBuffer.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall VslpFlushBufferArrayEntryCallback(__int64 a1, __int64 a2, unsigned int *a3)
{
  signed __int64 *v3; // rbx

  v3 = (signed __int64 *)VslpEventLog;
  if ( VslpEventLog )
  {
    VslpSkInitializeBuffer(*((_QWORD *)a3 + 1), *((unsigned int *)VslpEventLog + 1), *a3);
    _bittestandset64(&v3[((unsigned __int64)*a3 >> 6) + 3], *a3 & 0x3F);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&VslpBufferFlushRundown);
    ExFreePoolWithTag(a3, 0x54736D56u);
  }
}
