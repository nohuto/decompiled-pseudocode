/*
 * XREFs of TraceLoggingUnregister_EtwUnregister @ 0x14087E354
 * Callers:
 *     VrpRegistryUnload @ 0x14087E430 (VrpRegistryUnload.c)
 *     IopInitializePlugPlayServices @ 0x140A4AB7C (IopInitializePlugPlayServices.c)
 * Callees:
 *     EtwUnregister @ 0x140748B40 (EtwUnregister.c)
 */

NTSTATUS __fastcall TraceLoggingUnregister_EtwUnregister(__int64 a1)
{
  REGHANDLE v2; // rcx

  v2 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  return EtwUnregister(v2);
}
