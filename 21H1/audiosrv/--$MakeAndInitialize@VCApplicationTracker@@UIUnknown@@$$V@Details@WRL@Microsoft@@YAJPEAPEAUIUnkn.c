/*
 * XREFs of ??$MakeAndInitialize@VCApplicationTracker@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800533CC
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VCApplicationTracker@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800534B0 (-CreateInstance@-$SimpleClassFactory@VCApplicationTracker@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown.c)
 * Callees:
 *     ??0CApplicationTracker@@QEAA@XZ @ 0x180053444 (--0CApplicationTracker@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006AB9C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CApplicationTracker,IUnknown,>(_QWORD *a1)
{
  CApplicationTracker *v2; // rax
  CApplicationTracker *v3; // rbx
  unsigned int v4; // edi

  *a1 = 0LL;
  v2 = (CApplicationTracker *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = CApplicationTracker::CApplicationTracker(v2);
    v4 = (**(__int64 (__fastcall ***)(CApplicationTracker *, GUID *, _QWORD *))v3)(
           v3,
           &GUID_00000000_0000_0000_c000_000000000046,
           a1);
    (*(void (__fastcall **)(CApplicationTracker *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
