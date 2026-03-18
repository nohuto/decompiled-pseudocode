/*
 * XREFs of ?Create@CSharedReadTransformMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C00A0B84
 * Callers:
 *     CreateSharedReadTransformMarshaler @ 0x1C00A0B40 (CreateSharedReadTransformMarshaler.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0059680 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3740 (memset.c)
 */

__int64 __fastcall DirectComposition::CSharedReadTransformMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CSharedReadTransformMarshaler **a2)
{
  struct DirectComposition::CSharedReadTransformMarshaler *v4; // rax
  struct DirectComposition::CSharedReadTransformMarshaler *v5; // rbx
  int v6; // edi

  v4 = (struct DirectComposition::CSharedReadTransformMarshaler *)Win32AllocPoolWithQuotaZInit(0x48uLL, 0x756D4344u);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x48uLL);
    *((_DWORD *)v5 + 5) = 1;
    *(_QWORD *)v5 = &DirectComposition::CSharedReadTransformMarshaler::`vftable';
    *((_DWORD *)v5 + 10) = 205;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(struct DirectComposition::CSharedReadTransformMarshaler *, const struct DirectComposition::CSharedSystemResource *))(*(_QWORD *)v5 + 224LL))(
           v5,
           a1);
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(struct DirectComposition::CSharedReadTransformMarshaler *, __int64))(*(_QWORD *)v5 + 80LL))(
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
