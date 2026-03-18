/*
 * XREFs of ?Create@CSharedCompositionDistantLightMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0041DF0
 * Callers:
 *     CreateSharedCompositionDistantLightMarshaler @ 0x1C0041DB0 (CreateSharedCompositionDistantLightMarshaler.c)
 * Callees:
 *     ?InitializeFromSharedResource@CSharedCompositionDistantLightMarshaler@DirectComposition@@IEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C004206C (-InitializeFromSharedResource@CSharedCompositionDistantLightMarshaler@DirectComposition@@IEAAJPE.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C008F2E0 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 */

__int64 __fastcall DirectComposition::CSharedCompositionDistantLightMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CSharedCompositionDistantLightMarshaler **a2)
{
  DirectComposition::CSharedCompositionDistantLightMarshaler *v4; // rax
  DirectComposition::CSharedCompositionDistantLightMarshaler *v5; // rbx
  int v6; // edi

  v4 = (DirectComposition::CSharedCompositionDistantLightMarshaler *)Win32AllocPoolWithQuotaZInit(0x90uLL);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x90uLL);
    *((_DWORD *)v5 + 5) = 1;
    *(_QWORD *)v5 = &DirectComposition::CSharedCompositionDistantLightMarshaler::`vftable';
    *((_DWORD *)v5 + 10) = 31;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = DirectComposition::CSharedCompositionDistantLightMarshaler::InitializeFromSharedResource(v5, a1);
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(DirectComposition::CSharedCompositionDistantLightMarshaler *, __int64))(*(_QWORD *)v5 + 80LL))(
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
