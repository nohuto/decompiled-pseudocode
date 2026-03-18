/*
 * XREFs of ?_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z @ 0x1F40D8
 * Callers:
 *     ?CacheGlyphBits@UMPDOBJ@@QAEPAU_GLYPHBITS@@PAU2@@Z @ 0x1F38D2 (-CacheGlyphBits@UMPDOBJ@@QAEPAU_GLYPHBITS@@PAU2@@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAXKPAX@Z @ 0x1F3EFC (-ThunkDDIOBJ@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAXKPAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QAEHPAPAXK@Z @ 0x1F3FEA (-ThunkMemBlock@UMPDOBJ@@QAEHPAPAXK@Z.c)
 *     ?pxlo@UMPDOBJ@@QAEHPAPAU_XLATEOBJ@@@Z @ 0x1F467B (-pxlo@UMPDOBJ@@QAEHPAPAU_XLATEOBJ@@@Z.c)
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 *     ?UMPDDrvDitherColor@@YGKPAUDHPDEV__@@KKPAK@Z @ 0x20B5B6 (-UMPDDrvDitherColor@@YGKPAUDHPDEV__@@KKPAK@Z.c)
 *     ?UMPDDrvEnablePDEV@@YGPAUDHPDEV__@@PAU_devicemodeW@@PAGKPAPAUHSURF__@@KPAKKPAUtagDEVINFO@@PAUHDEV__@@1PAX@Z @ 0x20B9D7 (-UMPDDrvEnablePDEV@@YGPAUDHPDEV__@@PAU_devicemodeW@@PAGKPAPAUHSURF__@@KPAKKPAUtagDEVINFO@@PAUHDE.c)
 *     ?UMPDDrvEscape@@YGKPAU_SURFOBJ@@KKPAXK1@Z @ 0x20C1E1 (-UMPDDrvEscape@@YGKPAU_SURFOBJ@@KKPAXK1@Z.c)
 *     ?UMPDDrvFontManagement@@YGKPAU_SURFOBJ@@PAU_FONTOBJ@@KKPAXK2@Z @ 0x20C60A (-UMPDDrvFontManagement@@YGKPAU_SURFOBJ@@PAU_FONTOBJ@@KKPAXK2@Z.c)
 *     ?UMPDDrvIcmCheckBitmapBits@@YGHPAUDHPDEV__@@PAXPAU_SURFOBJ@@PAE@Z @ 0x20CC14 (-UMPDDrvIcmCheckBitmapBits@@YGHPAUDHPDEV__@@PAXPAU_SURFOBJ@@PAE@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YGHPAUDHPDEV__@@PAU_FONTOBJ@@KPAKPAXK@Z @ 0x20D7AC (-UMPDDrvQueryAdvanceWidths@@YGHPAUDHPDEV__@@PAU_FONTOBJ@@KPAKPAXK@Z.c)
 *     ?UMPDDrvQueryDeviceSupport@@YGHPAU_SURFOBJ@@PAU_XLATEOBJ@@PAU_XFORMOBJ@@KKPAXK3@Z @ 0x20D90D (-UMPDDrvQueryDeviceSupport@@YGHPAU_SURFOBJ@@PAU_XLATEOBJ@@PAU_XFORMOBJ@@KKPAXK3@Z.c)
 *     ?UMPDDrvQueryFont@@YGPAU_IFIMETRICS@@PAUDHPDEV__@@KKPAK@Z @ 0x20DBEF (-UMPDDrvQueryFont@@YGPAU_IFIMETRICS@@PAUDHPDEV__@@KKPAK@Z.c)
 *     ?UMPDDrvQueryFontTree@@YGPAXPAUDHPDEV__@@KKKPAK@Z @ 0x20DF1E (-UMPDDrvQueryFontTree@@YGPAXPAUDHPDEV__@@KKKPAK@Z.c)
 *     ?UMPDDrvQueryPerBandInfo@@YGKPAU_SURFOBJ@@PAU_PERBANDINFO@@@Z @ 0x20E10C (-UMPDDrvQueryPerBandInfo@@YGKPAU_SURFOBJ@@PAU_PERBANDINFO@@@Z.c)
 *     ?bSendLargeBitmap@UMPDOBJ@@QAEHPAU_SURFOBJ@@PAH@Z @ 0x20FDCC (-bSendLargeBitmap@UMPDOBJ@@QAEHPAU_SURFOBJ@@PAH@Z.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YGHPAU_STROBJ@@PAKPAPAU_GLYPHPOS@@H@Z @ 0x21643D (-NtGdiSTROBJ_bEnumInternal@@YGHPAU_STROBJ@@PAKPAPAU_GLYPHPOS@@H@Z.c)
 *     _NtGdiEngComputeGlyphSet@12 @ 0x217A62 (_NtGdiEngComputeGlyphSet@12.c)
 *     _NtGdiFONTOBJ_pQueryGlyphAttrs@8 @ 0x21A080 (_NtGdiFONTOBJ_pQueryGlyphAttrs@8.c)
 *     _NtGdiFONTOBJ_pfdg@4 @ 0x21A194 (_NtGdiFONTOBJ_pfdg@4.c)
 *     _NtGdiFONTOBJ_pifi@4 @ 0x21A29C (_NtGdiFONTOBJ_pifi@4.c)
 *     _NtGdiPATHOBJ_bEnum@8 @ 0x21A730 (_NtGdiPATHOBJ_bEnum@8.c)
 *     _NtGdiSTROBJ_bGetAdvanceWidths@16 @ 0x21ACC8 (_NtGdiSTROBJ_bGetAdvanceWidths@16.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?CreateUMPDHeap@UMPDOBJ@@AAEPAU_UMPDHEAP@@XZ @ 0x1F39C5 (-CreateUMPDHeap@UMPDOBJ@@AAEPAU_UMPDHEAP@@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QAEPAXPAX@Z @ 0x1F3BE3 (-GetKernelPtr@UMPDOBJ@@QAEPAXPAX@Z.c)
 *     ?GrowUMPDHeap@UMPDOBJ@@AAEHPAU_UMPDHEAP@@K@Z @ 0x1F3C92 (-GrowUMPDHeap@UMPDOBJ@@AAEHPAU_UMPDHEAP@@K@Z.c)
 *     ?bSandboxedClient@UMPDOBJ@@QAEHXZ @ 0x1F4402 (-bSandboxedClient@UMPDOBJ@@QAEHXZ.c)
 *     ?HeapAlloc@PROXYPORT@@QAEPAXK@Z @ 0x21072B (-HeapAlloc@PROXYPORT@@QAEPAXK@Z.c)
 */

char *__thiscall UMPDOBJ::_AllocUserMem(UMPDOBJ *this, char *a2, int a3)
{
  unsigned int v4; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // ebx
  int v7; // ecx
  struct _UMPDHEAP *UMPDHeap; // eax
  UMPDOBJ *v9; // ecx
  _DWORD *v10; // edx
  int v11; // ecx
  char *KernelPtr; // eax
  unsigned int v14; // [esp+0h] [ebp-2Ch]
  unsigned int *v15; // [esp+4h] [ebp-28h]
  unsigned int v16; // [esp+10h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+14h] [ebp-18h]

  v16 = 0;
  if ( (ULongAdd(3, (unsigned int)a2, (int *)&v16, v14, v15) & 0x80000000) != 0 )
    return 0;
  v4 = v16 & 0xFFFFFFFC;
  a2 = 0;
  if ( UMPDOBJ::bSandboxedClient(this) )
  {
    if ( *((_DWORD *)this + 52) )
    {
      a2 = (char *)*((_DWORD *)this + 52);
      a2 = (char *)PROXYPORT::HeapAlloc((PROXYPORT *)&a2, v4);
    }
    goto LABEL_15;
  }
  if ( *((_DWORD *)this + 58) && !*((_DWORD *)this + 9) )
  {
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v7 = *(_DWORD *)(ThreadWin32Thread + 28);
    if ( v7 )
    {
      *(_DWORD *)(v7 + 12) = 0;
      *((_DWORD *)this + 9) = v7;
    }
    else
    {
      UMPDHeap = UMPDOBJ::CreateUMPDHeap(0);
      *((_DWORD *)this + 9) = UMPDHeap;
      *(_DWORD *)(ThreadWin32Thread + 28) = UMPDHeap;
    }
  }
  v9 = (UMPDOBJ *)*((_DWORD *)this + 9);
  if ( !v9
    || !*(_DWORD *)v9
    || v4 > *((_DWORD *)v9 + 2) - *((_DWORD *)v9 + 3) && !UMPDOBJ::GrowUMPDHeap(v9, (unsigned int)v9, v4) )
  {
    return 0;
  }
  v10 = (_DWORD *)*((_DWORD *)this + 9);
  v11 = v10[3];
  a2 = (char *)(v11 + *v10);
  v10[3] = v11 + v4;
LABEL_15:
  if ( a2 )
  {
    if ( a3 )
    {
      ms_exc.registration.TryLevel = 0;
      KernelPtr = UMPDOBJ::GetKernelPtr(this, a2);
      memset(KernelPtr, 0, v4);
      ms_exc.registration.TryLevel = -2;
    }
  }
  return a2;
}
