/*
 * XREFs of ??$make_unique@VCPreComputeContext@@$$V$0A@@std@@YA?AV?$unique_ptr@VCPreComputeContext@@U?$default_delete@VCPreComputeContext@@@std@@@0@XZ @ 0x18001A564
 * Callers:
 *     ?Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z @ 0x18008F144 (-Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z.c)
 * Callees:
 *     ??0CPreComputeContext@@QEAA@XZ @ 0x1800308A0 (--0CPreComputeContext@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 */

CPreComputeContext **__fastcall std::make_unique<CPreComputeContext,,0>(CPreComputeContext **a1)
{
  void *v2; // rdi
  CPreComputeContext *v3; // rax

  v2 = operator new(0x798uLL);
  v3 = 0LL;
  if ( v2 )
  {
    memset_0(v2, 0, 0x798uLL);
    v3 = CPreComputeContext::CPreComputeContext((CPreComputeContext *)v2);
  }
  *a1 = v3;
  return a1;
}
