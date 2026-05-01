/*
 * XREFs of ??$MakeAndInitialize@VPWSLayoutParser@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPWSLayoutParser@@@Z @ 0x180226744
 * Callers:
 *     ?PWSLayoutParser_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180226BAC (-PWSLayoutParser_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0PWSLayoutParser@@QEAA@XZ @ 0x1802267F4 (--0PWSLayoutParser@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@PWSLayoutParser@@QEAAJXZ @ 0x1802276CC (-RuntimeClassInitialize@PWSLayoutParser@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PWSLayoutParser,PWSLayoutParser,>(PWSLayoutParser **a1)
{
  PWSLayoutParser *v2; // rax
  int v3; // edi
  PWSLayoutParser *v4; // rbx
  PWSLayoutParser *v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h]

  *a1 = 0LL;
  v2 = (PWSLayoutParser *)operator new(0xA8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = PWSLayoutParser::PWSLayoutParser(v2);
    v6 = v4;
    v7 = 0LL;
    v3 = PWSLayoutParser::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
    {
      if ( v4 )
        (*(void (__fastcall **)(PWSLayoutParser *))(*(_QWORD *)v4 + 8LL))(v4);
      *a1 = v4;
      v3 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
