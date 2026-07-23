/*
 * XREFs of _ZwThawRegistry@0 @ 0x4B2F4590
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS ZwThawRegistry(void)
{
  return Wow64SystemServiceCall();
}
