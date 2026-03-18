/*
 * XREFs of ?Create@CSharedCompositionSpotLightMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C004EB90
 * Callers:
 *     CreateSharedCompositionSpotLightMarshaler @ 0x1C004EB50 (CreateSharedCompositionSpotLightMarshaler.c)
 * Callees:
 *     ?InitializeFromSharedResource@CSharedCompositionSpotLightMarshaler@DirectComposition@@IEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C004EC28 (-InitializeFromSharedResource@CSharedCompositionSpotLightMarshaler@DirectComposition@@IEAAJPEBVC.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0098B90 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3880 (memset.c)
 */

__int64 __fastcall DirectComposition::CSharedCompositionSpotLightMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CSharedCompositionSpotLightMarshaler **a2)
{
  DirectComposition::CSharedCompositionSpotLightMarshaler *v4; // rax
  DirectComposition::CSharedCompositionSpotLightMarshaler *v5; // rbx
  int v6; // edi

  v4 = (DirectComposition::CSharedCompositionSpotLightMarshaler *)Win32AllocPoolWithQuotaZInit(0xD0uLL);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0xD0uLL);
    *((_DWORD *)v5 + 5) = 1;
    *(_QWORD *)v5 = &DirectComposition::CSharedCompositionSpotLightMarshaler::`vftable';
    *((_DWORD *)v5 + 10) = 38;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = DirectComposition::CSharedCompositionSpotLightMarshaler::InitializeFromSharedResource(v5, a1);
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(DirectComposition::CSharedCompositionSpotLightMarshaler *, __int64))(*(_QWORD *)v5 + 80LL))(
        v5,
        1LL);
      v5 = 0LL;
    }
  }
  else
  {
    v6 = -1073741801;
  }
  *a2 = v5;
  return (unsigned int)v6;
}
