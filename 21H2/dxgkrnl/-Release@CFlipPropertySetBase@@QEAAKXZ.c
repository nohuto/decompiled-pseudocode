/*
 * XREFs of ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x1C007A178
 * Callers:
 *     NtFlipObjectAddContent @ 0x1C007A2F0 (NtFlipObjectAddContent.c)
 *     NtFlipObjectAddPoolBuffer @ 0x1C007A440 (NtFlipObjectAddPoolBuffer.c)
 *     NtFlipObjectConsumerAcquirePresent @ 0x1C007A5D0 (NtFlipObjectConsumerAcquirePresent.c)
 *     NtFlipObjectConsumerPostMessage @ 0x1C007AA00 (NtFlipObjectConsumerPostMessage.c)
 *     NtFlipObjectQueryNextMessageToProducer @ 0x1C007B410 (NtFlipObjectQueryNextMessageToProducer.c)
 *     NtFlipObjectReadNextMessageToProducer @ 0x1C007B500 (NtFlipObjectReadNextMessageToProducer.c)
 *     NtFlipObjectSetContent @ 0x1C007B7F0 (NtFlipObjectSetContent.c)
 *     ?FlipManagerCreateProducerTokenInitInfo@@YAJPEAX_N_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenInitInfo@@@Z @ 0x1C007BBEC (-FlipManagerCreateProducerTokenInitInfo@@YAJPEAX_N_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenI.c)
 *     ?PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z @ 0x1C007E1AC (-PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z.c)
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C007E968 (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ??1CFlipResource@@MEAA@XZ @ 0x1C007ED60 (--1CFlipResource@@MEAA@XZ.c)
 *     ?Clear@CBackchannelManager@@QEAAXXZ @ 0x1C0080E58 (-Clear@CBackchannelManager@@QEAAXXZ.c)
 *     ?SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x1C0081710 (-SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 *     ??1CFlipPresentUpdate@@UEAA@XZ @ 0x1C0081758 (--1CFlipPresentUpdate@@UEAA@XZ.c)
 *     ?SetFlipPropertySet@CFlipPresentUpdate@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x1C0081910 (-SetFlipPropertySet@CFlipPresentUpdate@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFlipPropertySetBase::Release(CFlipPropertySetBase *this)
{
  bool v1; // zf
  unsigned int v2; // ebx

  v1 = (*((_DWORD *)this + 2))-- == 1;
  v2 = *((_DWORD *)this + 2);
  if ( v1 )
    (**(void (__fastcall ***)(CFlipPropertySetBase *, __int64))this)(this, 1LL);
  return v2;
}
