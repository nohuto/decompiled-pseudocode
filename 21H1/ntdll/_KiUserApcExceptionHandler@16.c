/*
 * XREFs of _KiUserApcExceptionHandler@16 @ 0x4B2F4CF0
 * Callers:
 *     <none>
 * Callees:
 *     _NtTestAlert@0 @ 0x4B2F4580 (_NtTestAlert@0.c)
 */

int __stdcall KiUserApcExceptionHandler(int a1, int a2, int a3, int a4)
{
  if ( (*(_BYTE *)(a1 + 4) & 6) != 0 )
    NtTestAlert();
  return 1;
}
