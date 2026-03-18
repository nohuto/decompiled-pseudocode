/*
 * XREFs of ZwQueryDefaultLocale @ 0x1403F3860
 * Callers:
 *     NtInitializeNlsFiles @ 0x14065CEE0 (NtInitializeNlsFiles.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryDefaultLocale(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
