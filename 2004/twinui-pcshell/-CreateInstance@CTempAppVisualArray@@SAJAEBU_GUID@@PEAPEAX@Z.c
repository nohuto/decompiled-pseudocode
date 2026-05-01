/*
 * XREFs of ?CreateInstance@CTempAppVisualArray@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x18042A158
 * Callers:
 *     ?AddTempAppVisualsToLayoutOperation@WindowArrangementView@@AEAAJPEAUIAppLayoutOperationBuilder@@@Z @ 0x18040D36C (-AddTempAppVisualsToLayoutOperation@WindowArrangementView@@AEAAJPEAUIAppLayoutOperationBuilder@@.c)
 *     ?GetSimpleTempAppVisualArray@CDropFeedback@@UEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x180422DF0 (-GetSimpleTempAppVisualArray@CDropFeedback@@UEAAJPEAPEAUITemporaryAppVisualArray@@@Z.c)
 *     ?_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x180427658 (-_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003CC50 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopRegistryHelpers@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180305E10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopR.c)
 *     ??0CTempAppVisualArray@@QEAA@XZ @ 0x180429CA0 (--0CTempAppVisualArray@@QEAA@XZ.c)
 */

__int64 __fastcall CTempAppVisualArray::CreateInstance(const struct _GUID *a1, CTempAppVisualArray **a2)
{
  CTempAppVisualArray *v3; // rbx
  CTempAppVisualArray *v4; // rax
  volatile int *v5; // rdx
  _DWORD *v6; // rcx
  _DWORD *v7; // rcx
  unsigned int v8; // edi

  *a2 = 0LL;
  v3 = 0LL;
  v4 = (CTempAppVisualArray *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4
    && (*(_OWORD *)v4 = 0LL,
        *((_OWORD *)v4 + 1) = 0LL,
        *((_OWORD *)v4 + 2) = 0LL,
        (v3 = CTempAppVisualArray::CTempAppVisualArray(v4)) != 0LL) )
  {
    *a2 = 0LL;
    if ( InlineIsEqualGUID(&GUID_c8b22b16_aa16_4dc8_8a95_5affc3bc78bd, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a2 = v3;
      (*(void (__fastcall **)(CTempAppVisualArray *))(*(_QWORD *)v3 + 8LL))(v3);
      v8 = 0;
    }
    else if ( InlineIsEqualGUID(v6, v6) || InlineIsEqualGUID(v7, &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9) )
    {
      *a2 = v3;
      v8 = 0;
      (*(void (__fastcall **)(CTempAppVisualArray *))(*(_QWORD *)v3 + 8LL))(v3);
    }
    else
    {
      v8 = -2147467262;
    }
  }
  else
  {
    v8 = -2147024882;
  }
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVirtualDesktopRegistryHelpers>::Release(
      (__int64)v3,
      v5);
  return v8;
}
