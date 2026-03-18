/*
 * XREFs of ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C007092C
 * Callers:
 *     ?UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C0070DE0 (-UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0071C3C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C0072114 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C00723BC (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C010BD70 (-UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C0132AC0 (NtGdiFONTOBJ_pifi.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1C0143E34 (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     ?UMPDDrvQueryPerBandInfo@@YAKPEAU_SURFOBJ@@PEAU_PERBANDINFO@@@Z @ 0x1C0149A40 (-UMPDDrvQueryPerBandInfo@@YAKPEAU_SURFOBJ@@PEAU_PERBANDINFO@@@Z.c)
 *     ?CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z @ 0x1C0292D70 (-CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z.c)
 *     ?UMPDDrvDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z @ 0x1C02A8BD0 (-UMPDDrvDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z.c)
 *     ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C02A91D0 (-UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?UMPDDrvIcmCheckBitmapBits@@YAHPEAUDHPDEV__@@PEAXPEAU_SURFOBJ@@PEAE@Z @ 0x1C02A9830 (-UMPDDrvIcmCheckBitmapBits@@YAHPEAUDHPDEV__@@PEAXPEAU_SURFOBJ@@PEAE@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1C02AA480 (-UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ?UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z @ 0x1C02AA640 (-UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z.c)
 *     ?UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z @ 0x1C02AAA30 (-UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z.c)
 *     ?UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z @ 0x1C02AADE0 (-UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z.c)
 *     ?bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z @ 0x1C02ABF90 (-bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C02B09B8 (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 *     NtGdiEngComputeGlyphSet @ 0x1C02B16F0 (NtGdiEngComputeGlyphSet.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C02B3500 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiFONTOBJ_pfdg @ 0x1C02B3640 (NtGdiFONTOBJ_pfdg.c)
 *     NtGdiPATHOBJ_bEnum @ 0x1C02B3AB0 (NtGdiPATHOBJ_bEnum.c)
 *     NtGdiSTROBJ_bGetAdvanceWidths @ 0x1C02B4180 (NtGdiSTROBJ_bGetAdvanceWidths.c)
 * Callees:
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C0071EF0 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?GrowUMPDHeap@UMPDOBJ@@AEAAHPEAU_UMPDHEAP@@K@Z @ 0x1C01419D0 (-GrowUMPDHeap@UMPDOBJ@@AEAAHPEAU_UMPDHEAP@@K@Z.c)
 *     ?CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ @ 0x1C0154670 (-CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

void *__fastcall UMPDOBJ::_AllocUserMem(UMPDOBJ *this, unsigned int a2, int a3)
{
  size_t v5; // rbx
  void *v6; // rdi
  __int64 v7; // rdx
  UMPDOBJ *v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // rax
  __int64 v12; // r8
  unsigned int v13; // edx
  void *KernelPtr; // rax
  __int64 ThreadWin32Thread; // rdi
  __int64 v16; // rcx
  struct _UMPDHEAP *UMPDHeap; // rax

  if ( a2 + 7 < a2 )
    return 0LL;
  v5 = (a2 + 7) & 0xFFFFFFF8;
  v6 = 0LL;
  if ( *((_DWORD *)this + 106) && *((_DWORD *)this + 102) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
  {
    v11 = *((_QWORD *)this + 49);
    if ( v11 )
    {
      v12 = *(unsigned int *)(v11 + 48);
      v13 = v12 + v5;
      if ( (int)v12 + (int)v5 >= (unsigned int)v12 && (unsigned __int64)v13 <= *(_QWORD *)(v11 + 24) )
      {
        v6 = (void *)(v12 + *(_QWORD *)(v11 + 16) - *(_QWORD *)(v11 + 40));
        *(_DWORD *)(v11 + 48) = v13;
      }
    }
    goto LABEL_8;
  }
  if ( *((_DWORD *)this + 106) && !*((_QWORD *)this + 7) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v16 = *(_QWORD *)(ThreadWin32Thread + 56);
    if ( v16 )
    {
      *(_DWORD *)(v16 + 24) = 0;
      *((_QWORD *)this + 7) = v16;
    }
    else
    {
      UMPDHeap = UMPDOBJ::CreateUMPDHeap(0LL);
      *((_QWORD *)this + 7) = UMPDHeap;
      *(_QWORD *)(ThreadWin32Thread + 56) = UMPDHeap;
    }
  }
  v7 = *((_QWORD *)this + 7);
  if ( !v7 )
    return 0LL;
  if ( !*(_QWORD *)v7 )
    return 0LL;
  v8 = (UMPDOBJ *)(*(_QWORD *)(v7 + 16) - *(unsigned int *)(v7 + 24));
  if ( (unsigned int)v5 > (unsigned __int64)v8 && !(unsigned int)UMPDOBJ::GrowUMPDHeap(v8, (struct _UMPDHEAP *)v7, v5) )
    return 0LL;
  v9 = *((_QWORD *)this + 7);
  v6 = (void *)(*(_QWORD *)v9 + *(unsigned int *)(v9 + 24));
  *(_DWORD *)(v9 + 24) += v5;
LABEL_8:
  if ( v6 )
  {
    if ( a3 )
    {
      KernelPtr = UMPDOBJ::GetKernelPtr(this, v6);
      memset(KernelPtr, 0, v5);
    }
  }
  return v6;
}
