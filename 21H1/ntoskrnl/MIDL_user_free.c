/*
 * XREFs of MIDL_user_free @ 0x14097BA90
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x140752F94 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfaceSetState @ 0x1407B90FC (PiSwIrpInterfaceSetState.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __stdcall MIDL_user_free(void *a1)
{
  ExFreePoolWithTag(a1, 0x6370726Bu);
}
