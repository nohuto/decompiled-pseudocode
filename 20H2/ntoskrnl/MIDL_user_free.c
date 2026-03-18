/*
 * XREFs of MIDL_user_free @ 0x140982C00
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x140746F1C (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfaceSetState @ 0x1407CAAFC (PiSwIrpInterfaceSetState.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __stdcall MIDL_user_free(void *a1)
{
  ExFreePoolWithTag(a1, 0x6370726Bu);
}
