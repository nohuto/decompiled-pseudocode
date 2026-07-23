/*
 * XREFs of MIDL_user_free @ 0x140980500
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x14074D2D8 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfaceSetState @ 0x1407CEF2C (PiSwIrpInterfaceSetState.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __stdcall MIDL_user_free(void *a1)
{
  ExFreePoolWithTag(a1, 0x6370726Bu);
}
