/*
 * XREFs of TraceLoggingUnregister_EtwUnregister @ 0x14087F644
 * Callers:
 *     VrpRegistryUnload @ 0x14087F720 (VrpRegistryUnload.c)
 *     IopInitializePlugPlayServices @ 0x140A505F8 (IopInitializePlugPlayServices.c)
 * Callees:
 *     EtwUnregister @ 0x14074CF60 (EtwUnregister.c)
 */

NTSTATUS __fastcall TraceLoggingUnregister_EtwUnregister(__int64 a1)
{
  REGHANDLE v2; // rcx

  v2 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  return EtwUnregister(v2);
}
