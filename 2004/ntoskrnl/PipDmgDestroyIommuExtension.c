/*
 * XREFs of PipDmgDestroyIommuExtension @ 0x140754020
 * Callers:
 *     PiDmaGuardProcessPostRemove @ 0x14073222C (PiDmaGuardProcessPostRemove.c)
 *     PiDmaGuardProcessNewDeviceNode @ 0x140753730 (PiDmaGuardProcessNewDeviceNode.c)
 * Callees:
 *     PiIommuFreeExtension @ 0x1407542E4 (PiIommuFreeExtension.c)
 */

__int64 __fastcall PipDmgDestroyIommuExtension(__int64 a1)
{
  ULONG_PTR v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 720);
  if ( v2 )
  {
    result = PiIommuFreeExtension(v2);
    *(_QWORD *)(a1 + 720) = 0LL;
  }
  return result;
}
