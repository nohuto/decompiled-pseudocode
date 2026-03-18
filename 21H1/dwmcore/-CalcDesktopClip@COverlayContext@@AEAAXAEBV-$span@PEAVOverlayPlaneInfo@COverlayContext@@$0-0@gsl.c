/*
 * XREFs of ?CalcDesktopClip@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAVCRegion@@@Z @ 0x18008B108
 * Callers:
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N@Z @ 0x18008AF48 (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV-$span@PEAVOverlayPlaneInfo@COverlayCont.c)
 * Callees:
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x1800284CC (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800765F4 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180077E4C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BBA38 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_J@Z @ 0x18017E554 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 */

_DWORD *__fastcall COverlayContext::CalcDesktopClip(
        _QWORD *a1,
        int *a2,
        const struct FastRegion::Internal::CRgnData **a3)
{
  int *v5; // rax
  int v6; // r11d
  int v7; // ebx
  int v8; // r9d
  int v9; // r10d
  _DWORD *result; // rax
  int v11; // ebx
  const struct FastRegion::Internal::CRgnData *v12; // rdx
  _DWORD *v13; // r8
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rax
  const struct FastRegion::Internal::CRgnData *v17[10]; // [rsp+20h] [rbp-78h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]

  v5 = (int *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 152LL))(*a1);
  v6 = *v5;
  v7 = v5[2];
  v8 = v5[1];
  v9 = v5[3];
  if ( *v5 >= v7 || v8 >= v9 )
  {
    result = *a3;
    *(_DWORD *)*a3 = 0;
  }
  else
  {
    v12 = *a3;
    v13 = (_DWORD *)((char *)*a3 + 28);
    *(_DWORD *)v12 = 2;
    *v13 = v6;
    v13[1] = v7;
    *((_DWORD *)v12 + 1) = v6;
    *((_DWORD *)v12 + 4) = (_DWORD)v13 - ((_DWORD)v12 + 12);
    result = (_DWORD *)((char *)v12 + 20);
    *((_DWORD *)v12 + 2) = v7;
    *((_DWORD *)v12 + 3) = v8;
    *((_DWORD *)v12 + 6) = (_DWORD)v13 - ((_DWORD)v12 + 20) + 8;
    *((_DWORD *)v12 + 5) = v9;
  }
  v11 = *a2;
  while ( --v11 >= 0 )
  {
    v14 = gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a2, v11);
    FastRegion::CRegion::CRegion((FastRegion::CRegion *)v17, (const struct tagRECT *)(*(_QWORD *)v14 + 68LL));
    v15 = FastRegion::CRegion::Subtract(a3, v17);
    if ( v15 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v15, retaddr);
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v17);
    result = (_DWORD *)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a2, v11);
    if ( !*(_BYTE *)(*(_QWORD *)result + 179LL) )
    {
      v16 = gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a2, v11);
      result = (_DWORD *)FastRegion::CRegion::Union(
                           a3,
                           *(const struct FastRegion::Internal::CRgnData ***)(*(_QWORD *)v16 + 160LL));
      if ( (int)result < 0 )
        ModuleFailFastForHRESULT((unsigned int)result, retaddr);
    }
  }
  return result;
}
