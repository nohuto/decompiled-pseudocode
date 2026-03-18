/*
 * XREFs of _KeGetCurrentThread@0 @ 0xED867
 * Callers:
 *     _RawInputThread@4 @ 0xD57F4 (_RawInputThread@4.c)
 *     _AcquireMagInputLock@0 @ 0x178DBA (_AcquireMagInputLock@0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
PKTHREAD __stdcall KeGetCurrentThread()
{
  return __imp__KeGetCurrentThread@0();
}
