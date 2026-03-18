/*
 * XREFs of ??0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C002A224
 * Callers:
 *     ?GetCurrenRapidHPDState@RAPID_HPD_MANAGER@@QEAAX_NPEAW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAU_DXGK_RAPID_HPD_DIAG@@@Z @ 0x1C002A02C (-GetCurrenRapidHPDState@RAPID_HPD_MANAGER@@QEAAX_NPEAW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAU_DXG.c)
 *     ?ExtendExistingHPDPeriod@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_EXTENSION@@U_LUID@@@Z @ 0x1C0058354 (-ExtendExistingHPDPeriod@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_EXTENSION@@U_LUID@@@Z.c)
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z @ 0x1C0162184 (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z.c)
 *     DxgkOpenResourceFromNtHandleInternal @ 0x1C01EA090 (DxgkOpenResourceFromNtHandleInternal.c)
 *     DxgkWslQueryResourceInfoFromNtHandle @ 0x1C02DA760 (DxgkWslQueryResourceInfoFromNtHandle.c)
 * Callees:
 *     <none>
 */

DXGAUTOPUSHLOCKFASTSHARED *__fastcall DXGAUTOPUSHLOCKFASTSHARED::DXGAUTOPUSHLOCKFASTSHARED(
        DXGAUTOPUSHLOCKFASTSHARED *this,
        struct DXGPUSHLOCKFAST *a2)
{
  DXGAUTOPUSHLOCKFASTSHARED *result; // rax

  *(_QWORD *)this = a2;
  *((_BYTE *)this + 8) = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(a2, 0LL);
  result = this;
  *((_BYTE *)this + 8) = 1;
  return result;
}
