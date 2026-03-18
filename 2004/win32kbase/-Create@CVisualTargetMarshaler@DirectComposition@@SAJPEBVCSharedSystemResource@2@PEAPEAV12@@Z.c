/*
 * XREFs of ?Create@CVisualTargetMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C003D868
 * Callers:
 *     CreateVisualTargetMarshaler @ 0x1C003D810 (CreateVisualTargetMarshaler.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0098B90 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3880 (memset.c)
 */

__int64 __fastcall DirectComposition::CVisualTargetMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CVisualTargetMarshaler **a2)
{
  struct DirectComposition::CVisualTargetMarshaler *v4; // rax
  struct DirectComposition::CVisualTargetMarshaler *v5; // rbx
  int v6; // edi

  v4 = (struct DirectComposition::CVisualTargetMarshaler *)Win32AllocPoolWithQuotaZInit(0x50uLL);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x50uLL);
    *((_DWORD *)v5 + 5) = 1;
    *(_QWORD *)v5 = &DirectComposition::CVisualTargetMarshaler::`vftable';
    *((_DWORD *)v5 + 10) = 205;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(struct DirectComposition::CVisualTargetMarshaler *, const struct DirectComposition::CSharedSystemResource *))(*(_QWORD *)v5 + 224LL))(
           v5,
           a1);
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(struct DirectComposition::CVisualTargetMarshaler *, __int64))(*(_QWORD *)v5 + 80LL))(
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
