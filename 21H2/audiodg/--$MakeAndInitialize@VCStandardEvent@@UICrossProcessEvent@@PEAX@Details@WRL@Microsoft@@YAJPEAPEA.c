/*
 * XREFs of ??$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessEvent@@$$QEAPEAX@Z @ 0x1400134D4
 * Callers:
 *     ?ProcessingComplete@CCrossProcessBaseServerEndpoint@@UEAAXXZ @ 0x140013590 (-ProcessingComplete@CCrossProcessBaseServerEndpoint@@UEAAXXZ.c)
 *     ?CreateCrossProcessEvent@CStandardCrossProcessEventManager@@UEAAJPEAPEAUICrossProcessEvent@@@Z @ 0x1400491B0 (-CreateCrossProcessEvent@CStandardCrossProcessEventManager@@UEAAJPEAPEAUICrossProcessEvent@@@Z.c)
 *     ?CreateFromMetadataBlob@CStandardCrossProcessEventManager@@UEAAJPEAUCP_EVENT_METADATA_BLOB@@PEAPEAUICrossProcessEvent@@@Z @ 0x1400492D0 (-CreateFromMetadataBlob@CStandardCrossProcessEventManager@@UEAAJPEAUCP_EVENT_METADATA_BLOB@@PEAP.c)
 *     ?IsProperlyInitialized@CCrossProcessBaseServerEndpoint@@MEAAJXZ @ 0x14005D960 (-IsProperlyInitialized@CCrossProcessBaseServerEndpoint@@MEAAJXZ.c)
 *     ?SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ @ 0x14006D3FC (-SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D6AC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CStandardEvent,ICrossProcessEvent,void *>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v6; // rcx
  unsigned int v7; // edi

  *a1 = 0LL;
  v4 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v6 = Microsoft::WRL::Details::ModuleBase::module_;
    *((_DWORD *)v4 + 3) = 1;
    *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ICrossProcessEvent>::`vftable';
    if ( v6 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v6 + 8LL))(v6);
    *v5 = &CStandardEvent::`vftable';
    v5[2] = 0LL;
    v5[2] = *a2;
    v7 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*v5)(v5, &GUID_189fdfb0_8b12_4d87_af0b_30194b800cd6, a1);
    (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v7;
}
