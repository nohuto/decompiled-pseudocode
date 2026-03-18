/*
 * XREFs of ?IsBufferingOutput@CInteractionProcessor@@QEAA_NW4InputType@@@Z @ 0x18022C668
 * Callers:
 *     ?IsBufferingOutput@CInteraction@@UEAA_NW4InputType@@@Z @ 0x1801C7A90 (-IsBufferingOutput@CInteraction@@UEAA_NW4InputType@@@Z.c)
 *     ?IsBufferingOutput@CInteractionRoot@@UEAA_NW4InputType@@@Z @ 0x180232D70 (-IsBufferingOutput@CInteractionRoot@@UEAA_NW4InputType@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7D50 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x18022C3A4 (-GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrappe.c)
 */

char __fastcall CInteractionProcessor::IsBufferingOutput(CInteractionProcessor *a1, int a2)
{
  char v2; // bl
  int v3; // edi
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v3 = a2;
  if ( !a2 )
    v3 = *((_DWORD *)a1 + 197);
  v6 = 0LL;
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v6);
  CInteractionProcessor::GetInteractionContext(a1, v3, &v6);
  if ( v6 )
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 112LL))(v6);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v6);
  return v2;
}
