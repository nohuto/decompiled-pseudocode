/*
 * XREFs of ?Create@CHostVisualMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C003A5C4
 * Callers:
 *     CreateHostVisualMarshaler @ 0x1C003A570 (CreateHostVisualMarshaler.c)
 * Callees:
 *     ?InitializeFromSharedResource@CHostVisualMarshaler@DirectComposition@@QEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C003A660 (-InitializeFromSharedResource@CHostVisualMarshaler@DirectComposition@@QEAAJPEBVCSharedSystemReso.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0098B90 (Win32AllocPoolWithQuotaZInit.c)
 *     ??0CVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C009A814 (--0CVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3880 (memset.c)
 */

__int64 __fastcall DirectComposition::CHostVisualMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CHostVisualMarshaler **a2)
{
  __int64 v4; // rax
  DirectComposition::CVisualMarshaler *v5; // rbx
  int v6; // edi

  v4 = Win32AllocPoolWithQuotaZInit(0x180uLL);
  v5 = (DirectComposition::CVisualMarshaler *)v4;
  if ( v4 )
  {
    memset((void *)(v4 + 8), 0, 0x178uLL);
    DirectComposition::CVisualMarshaler::CVisualMarshaler(v5);
    *(_QWORD *)v5 = &DirectComposition::CHostVisualMarshaler::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = DirectComposition::CHostVisualMarshaler::InitializeFromSharedResource(v5, a1);
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(DirectComposition::CVisualMarshaler *, __int64))(*(_QWORD *)v5 + 80LL))(v5, 1LL);
      v5 = 0LL;
    }
    else
    {
      *((_DWORD *)v5 + 4) |= 2u;
      *((_DWORD *)v5 + 94) |= 1u;
    }
  }
  else
  {
    v6 = -1073741801;
  }
  *a2 = v5;
  return (unsigned int)v6;
}
