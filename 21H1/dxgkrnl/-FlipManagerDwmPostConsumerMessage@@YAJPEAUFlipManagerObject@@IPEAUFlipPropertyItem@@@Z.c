/*
 * XREFs of ?FlipManagerDwmPostConsumerMessage@@YAJPEAUFlipManagerObject@@IPEAUFlipPropertyItem@@@Z @ 0x1C00686F0
 * Callers:
 *     ?PostFlipManagerProcessSummary@CTokenManager@@IEAAJPEAUFlipManagerTokenObject@@_KW4FlipPresentProcessResult@@@Z @ 0x1C0062008 (-PostFlipManagerProcessSummary@CTokenManager@@IEAAJPEAUFlipManagerTokenObject@@_KW4FlipPresentPr.c)
 *     ?Retire@CFlipContentToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C006DEA0 (-Retire@CFlipContentToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@@Z.c)
 * Callees:
 *     ??$CreateFlipPropertySetWorker@VCFlipConsumerMessage@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipConsumerMessage@@@Z @ 0x1C0065A68 (--$CreateFlipPropertySetWorker@VCFlipConsumerMessage@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlip.c)
 *     ?ConsumerPostMessage@FlipManagerObject@@QEAAJPEAVCFlipConsumerMessage@@@Z @ 0x1C00666E8 (-ConsumerPostMessage@FlipManagerObject@@QEAAJPEAVCFlipConsumerMessage@@@Z.c)
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x1C0066AD0 (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 */

__int64 __fastcall FlipManagerDwmPostConsumerMessage(
        struct FlipManagerObject *this,
        __int64 a2,
        struct FlipPropertyItem *a3)
{
  int v4; // edi
  CFlipPropertySetBase *v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v4 = CreateFlipPropertySetWorker<CFlipConsumerMessage>(2u, (char *)a3, 0, &v6);
  if ( v4 >= 0 )
    v4 = FlipManagerObject::ConsumerPostMessage(this, v6);
  if ( v6 )
    CFlipPropertySetBase::Release(v6);
  return (unsigned int)v4;
}
