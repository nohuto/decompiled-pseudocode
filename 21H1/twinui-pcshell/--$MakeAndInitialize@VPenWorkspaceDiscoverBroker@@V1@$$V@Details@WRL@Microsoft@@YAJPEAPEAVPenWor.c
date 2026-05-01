/*
 * XREFs of ??$MakeAndInitialize@VPenWorkspaceDiscoverBroker@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPenWorkspaceDiscoverBroker@@@Z @ 0x1801F6E74
 * Callers:
 *     ?RuntimeClassInitialize@PenWorkspaceDiscoverBrokerFactory@@QEAAJXZ @ 0x1801F91E8 (-RuntimeClassInitialize@PenWorkspaceDiscoverBrokerFactory@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??0PenWorkspaceDiscoverBroker@@QEAA@XZ @ 0x1801F7570 (--0PenWorkspaceDiscoverBroker@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@PenWorkspaceDiscoverBroker@@QEAAJXZ @ 0x1801F919C (-RuntimeClassInitialize@PenWorkspaceDiscoverBroker@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PenWorkspaceDiscoverBroker,PenWorkspaceDiscoverBroker,>(
        PenWorkspaceDiscoverBroker **a1)
{
  PenWorkspaceDiscoverBroker *v2; // rax
  int v3; // edi
  PenWorkspaceDiscoverBroker *v4; // rbx
  PenWorkspaceDiscoverBroker *v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h]

  *a1 = 0LL;
  v2 = (PenWorkspaceDiscoverBroker *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = PenWorkspaceDiscoverBroker::PenWorkspaceDiscoverBroker(v2);
    v6 = v4;
    v7 = 0LL;
    v3 = PenWorkspaceDiscoverBroker::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
    {
      if ( v4 )
        (*(void (__fastcall **)(PenWorkspaceDiscoverBroker *))(*(_QWORD *)v4 + 8LL))(v4);
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
