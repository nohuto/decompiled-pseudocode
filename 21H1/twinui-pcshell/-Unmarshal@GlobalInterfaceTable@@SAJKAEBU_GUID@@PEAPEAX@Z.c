/*
 * XREFs of ?Unmarshal@GlobalInterfaceTable@@SAJKAEBU_GUID@@PEAPEAX@Z @ 0x18011D3C8
 * Callers:
 *     ?GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800690B0 (-GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_32debc2fc80ca1e0059f85a00ba9919c___::Run @ 0x18013C970 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_32debc2fc80ca1e0059f85a00ba9919c___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?s_Retrieve@GlobalInterfaceTable@@CAJXZ @ 0x18011DF90 (-s_Retrieve@GlobalInterfaceTable@@CAJXZ.c)
 */

__int64 __fastcall GlobalInterfaceTable::Unmarshal(unsigned int a1, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax

  *a3 = 0LL;
  result = GlobalInterfaceTable::s_Retrieve();
  if ( (int)result >= 0 )
    return ((__int64 (__fastcall *)(struct IGlobalInterfaceTable *, _QWORD, const struct _GUID *, void **))GlobalInterfaceTable::s_pGlobalInterfaceTable->lpVtbl->GetInterfaceFromGlobal)(
             GlobalInterfaceTable::s_pGlobalInterfaceTable,
             a1,
             a2,
             a3);
  return result;
}
