/*
 * XREFs of ?Create@CSharedReadPrimitiveColorMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C01F2CF0
 * Callers:
 *     CreateSharedReadPrimitiveColorMarshaler @ 0x1C01F2F20 (CreateSharedReadPrimitiveColorMarshaler.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0059680 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3740 (memset.c)
 */

__int64 __fastcall DirectComposition::CSharedReadPrimitiveColorMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CSharedReadPrimitiveColorMarshaler **a2)
{
  struct DirectComposition::CSharedReadPrimitiveColorMarshaler *v4; // rax
  struct DirectComposition::CSharedReadPrimitiveColorMarshaler *v5; // rbx
  int v6; // edi

  v4 = (struct DirectComposition::CSharedReadPrimitiveColorMarshaler *)Win32AllocPoolWithQuotaZInit(
                                                                         0x48uLL,
                                                                         0x65704344u);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x48uLL);
    *((_DWORD *)v5 + 5) = 1;
    *(_QWORD *)v5 = &DirectComposition::CSharedReadInteractionMarshaler::`vftable';
    *((_DWORD *)v5 + 10) = 205;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(struct DirectComposition::CSharedReadPrimitiveColorMarshaler *, const struct DirectComposition::CSharedSystemResource *))(*(_QWORD *)v5 + 224LL))(
           v5,
           a1);
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(struct DirectComposition::CSharedReadPrimitiveColorMarshaler *, __int64))(*(_QWORD *)v5 + 80LL))(
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
