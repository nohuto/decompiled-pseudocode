/*
 * XREFs of ?Create@CSharedManipulationTransformMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0096B00
 * Callers:
 *     CreateSharedManipulationTransformMarshaler @ 0x1C0096AC0 (CreateSharedManipulationTransformMarshaler.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C008F2E0 (Win32AllocPoolWithQuotaZInit.c)
 *     ?InitializeFromSharedResource@CSharedManipulationTransformMarshaler@DirectComposition@@QEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C0096B98 (-InitializeFromSharedResource@CSharedManipulationTransformMarshaler@DirectComposition@@QEAAJPEBV.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 */

__int64 __fastcall DirectComposition::CSharedManipulationTransformMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CSharedManipulationTransformMarshaler **a2)
{
  DirectComposition::CSharedManipulationTransformMarshaler *v4; // rax
  DirectComposition::CSharedManipulationTransformMarshaler *v5; // rbx
  int v6; // edi

  v4 = (DirectComposition::CSharedManipulationTransformMarshaler *)Win32AllocPoolWithQuotaZInit(0x88uLL, 0x626D4344u);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x88uLL);
    *((_DWORD *)v5 + 5) = 1;
    *(_QWORD *)v5 = &DirectComposition::CSharedManipulationTransformMarshaler::`vftable';
    *((_DWORD *)v5 + 10) = 103;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = DirectComposition::CSharedManipulationTransformMarshaler::InitializeFromSharedResource(v5, a1);
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(DirectComposition::CSharedManipulationTransformMarshaler *, __int64))(*(_QWORD *)v5 + 80LL))(
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
