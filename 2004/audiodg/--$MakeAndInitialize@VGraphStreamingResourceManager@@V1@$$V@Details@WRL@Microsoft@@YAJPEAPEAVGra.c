/*
 * XREFs of ??$MakeAndInitialize@VGraphStreamingResourceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGraphStreamingResourceManager@@@Z @ 0x140017F20
 * Callers:
 *     ?CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140017EAC (-CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 * Callees:
 *     ??0GraphStreamingResourceManager@@QEAA@XZ @ 0x14000B4E0 (--0GraphStreamingResourceManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D34C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<GraphStreamingResourceManager,GraphStreamingResourceManager,>(
        GraphStreamingResourceManager **a1)
{
  unsigned int v2; // ebx
  GraphStreamingResourceManager *v3; // rax
  GraphStreamingResourceManager *v4; // rax
  GraphStreamingResourceManager *v5; // rdi

  v2 = 0;
  *a1 = 0LL;
  v3 = (GraphStreamingResourceManager *)operator new(0x120uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v4 = GraphStreamingResourceManager::GraphStreamingResourceManager(v3);
    v5 = v4;
    if ( v4 )
      (*(void (__fastcall **)(GraphStreamingResourceManager *))(*(_QWORD *)v4 + 8LL))(v4);
    *a1 = v5;
    if ( v5 )
      (*(void (__fastcall **)(GraphStreamingResourceManager *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
