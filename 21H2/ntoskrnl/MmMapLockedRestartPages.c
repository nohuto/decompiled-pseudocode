/*
 * XREFs of MmMapLockedRestartPages @ 0x1408C4C20
 * Callers:
 *     <none>
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiMapMdlCommon @ 0x1403C8DE4 (MiMapMdlCommon.c)
 *     MiReserveDriverPtes @ 0x140760064 (MiReserveDriverPtes.c)
 */

__int64 __fastcall MmMapLockedRestartPages(_DWORD *a1, unsigned int a2, int a3, __int64 a4)
{
  char *AnyMultiplexedVm; // rax
  unsigned __int64 v7; // rdx
  _DWORD *v8; // r9

  if ( (a3 & 0xBFFFFFFF) != 0
    || (a4 & 0xFFFFFFFFFFDFFFFFuLL) != 0
    || !MiReserveDriverPtes((((a1[8] + a1[11]) & 0xFFF) + (unsigned __int64)(unsigned int)a1[10] + 4095) >> 12, a4, 0) )
  {
    return 0LL;
  }
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  return MiMapMdlCommon((__int64)a1, v7, (__int64)AnyMultiplexedVm, v8, a2);
}
