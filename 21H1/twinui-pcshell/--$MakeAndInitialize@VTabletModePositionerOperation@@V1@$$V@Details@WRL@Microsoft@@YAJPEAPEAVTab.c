/*
 * XREFs of ??$MakeAndInitialize@VTabletModePositionerOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTabletModePositionerOperation@@@Z @ 0x1803E7DDC
 * Callers:
 *     ?TabletModePositionerOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803E9220 (-TabletModePositionerOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x180128D64 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ??0TabletModePositionerOperation@@QEAA@XZ @ 0x1803E7F1C (--0TabletModePositionerOperation@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TabletModePositionerOperation,TabletModePositionerOperation,>(
        TabletModePositionerOperation **a1)
{
  TabletModePositionerOperation *v2; // rax
  int inited; // edi
  TabletModePositionerOperation *v4; // rbx
  TabletModePositionerOperation *v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = (TabletModePositionerOperation *)operator new(0xF0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = TabletModePositionerOperation::TabletModePositionerOperation(v2);
    v6 = v4;
    inited = CObjectWithThreadUseDetection::InitApartmentId((TabletModePositionerOperation *)((char *)v4 + 192));
    if ( inited >= 0 )
    {
      if ( v4 )
        (*(void (__fastcall **)(TabletModePositionerOperation *))(*(_QWORD *)v4 + 8LL))(v4);
      *a1 = v4;
      inited = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)inited;
}
