/*
 * XREFs of KiUserApcHandler @ 0x1800A12D0
 * Callers:
 *     <none>
 * Callees:
 *     ZwTestAlert @ 0x1800A0E30 (ZwTestAlert.c)
 */

__int64 __fastcall KiUserApcHandler(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 4) & 0x66) != 0 )
    ZwTestAlert();
  return 1LL;
}
