/*
 * XREFs of ZwQueryInstallUILanguage @ 0x1403FAB90
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x1407A32B0 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryInstallUILanguage(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
