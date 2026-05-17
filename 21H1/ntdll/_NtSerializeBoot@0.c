/*
 * XREFs of _NtSerializeBoot@0 @ 0x4B2F41E0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtSerializeBoot()
{
  return Wow64SystemServiceCall();
}
