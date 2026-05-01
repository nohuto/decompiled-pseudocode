/*
 * XREFs of ?CrmpRegistrationContextCleanup@@YAXPEAU_CRMP_REGISTRATION_CONTEXT@@@Z @ 0x1800012E8
 * Callers:
 *     CrmUnregister @ 0x1800012B0 (CrmUnregister.c)
 *     CrmRegister @ 0x180003AB0 (CrmRegister.c)
 * Callees:
 *     <none>
 */

void __fastcall CrmpRegistrationContextCleanup(struct _CRMP_REGISTRATION_CONTEXT *a1)
{
  if ( *((_QWORD *)a1 + 1) )
    NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 1u, 0LL);
}
