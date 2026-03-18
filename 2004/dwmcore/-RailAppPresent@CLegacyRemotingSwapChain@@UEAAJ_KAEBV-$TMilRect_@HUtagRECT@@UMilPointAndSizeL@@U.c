/*
 * XREFs of ?RailAppPresent@CLegacyRemotingSwapChain@@UEAAJ_KAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180250320
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18003F2EC (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180041B60 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180044474 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x180045534 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?Flush@CD3DDevice@@QEAAXXZ @ 0x1800D6458 (-Flush@CD3DDevice@@QEAAXXZ.c)
 *     ?CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1800E0DE0 (-CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z.c)
 *     ?UpdateSectionBits@CLegacyRemotingSwapChain@@IEAAJXZ @ 0x1800E0E98 (-UpdateSectionBits@CLegacyRemotingSwapChain@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E3ABC (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CLegacyRemotingSwapChain::RailAppPresent(__int64 a1, __int64 a2, const struct tagRECT *a3)
{
  HRGN v6; // rdi
  unsigned int v7; // ebx
  int v8; // eax
  _DWORD *v9; // rax
  int updated; // eax
  __int64 v11; // rcx
  signed int v12; // ebx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  signed int LastError; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  HRGN hrgn; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v21[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h]
  int v23; // [rsp+50h] [rbp-B0h]
  int v24; // [rsp+54h] [rbp-ACh]
  __int64 v25; // [rsp+58h] [rbp-A8h]
  int v26; // [rsp+88h] [rbp-78h]
  __int64 v27; // [rsp+90h] [rbp-70h]
  HRGN v28; // [rsp+98h] [rbp-68h]
  LONG left; // [rsp+A8h] [rbp-58h]
  LONG top; // [rsp+ACh] [rbp-54h]
  struct tagRECT v31; // [rsp+D0h] [rbp-30h] BYREF
  void *v32[10]; // [rsp+E0h] [rbp-20h] BYREF
  const void *retaddr; // [rsp+168h] [rbp+68h]

  v6 = 0LL;
  hrgn = 0LL;
  memset_0(v21, 0, 0x90uLL);
  v7 = 1;
  CD3DDevice::Flush(*(CD3DDevice **)(a1 + 24));
  v8 = a3->right - a3->left;
  v25 = 0LL;
  v23 = v8;
  v24 = a3->bottom - a3->top;
  v9 = *(_DWORD **)(a1 + 72);
  v22 = a2;
  if ( !*v9 )
    goto LABEL_13;
  updated = CLegacyRemotingSwapChain::UpdateSectionBits((FastRegion::Internal::CRgnData **)(a1 - 56));
  v12 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, updated, 0x105u, 0LL);
    goto LABEL_21;
  }
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v32, a3);
  v13 = FastRegion::CRegion::Intersect(
          (const struct FastRegion::Internal::CRgnData **)(a1 + 72),
          (const struct FastRegion::Internal::CRgnData **)v32);
  if ( v13 < 0 )
    ModuleFailFastForHRESULT(v13, retaddr);
  v31.left = 0;
  v31.top = 0;
  FastRegion::CRegion::GetBoundingRect((LONG **)(a1 + 72), &v31);
  v14 = CRegion::CreateHRGN((int **)(a1 + 72), &hrgn);
  v12 = v14;
  if ( v14 >= 0 )
  {
    SetLastError(0);
    v6 = hrgn;
    if ( !OffsetRgn(hrgn, -a3->left, -a3->top) )
    {
      LastError = GetLastError();
      v12 = LastError;
      if ( LastError > 0 )
        v12 = (unsigned __int16)LastError | 0x80070000;
      if ( v12 >= 0 )
        v12 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v12, 0x114u, 0LL);
      FastRegion::CRegion::FreeMemory(v32);
      goto LABEL_19;
    }
    left = v31.left;
    v7 = 2;
    top = v31.top;
    v26 = 2;
    v27 = a2;
    v28 = v6;
    FastRegion::CRegion::FreeMemory(v32);
LABEL_13:
    v12 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, _QWORD))(**(_QWORD **)(a1 + 64) + 56LL))(
            *(_QWORD *)(a1 + 64),
            v21,
            v7);
    if ( ((v12 + 2147467263) & 0xFFFFFFFB) != 0 )
    {
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v12, 0x129u, 0LL);
    }
    else
    {
      v12 = -2003304307;
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2003304307, 0x125u, 0LL);
    }
    goto LABEL_19;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x110u, 0LL);
  FastRegion::CRegion::FreeMemory(v32);
  v6 = hrgn;
LABEL_19:
  if ( v6 )
    DeleteObject(v6);
LABEL_21:
  **(_DWORD **)(a1 + 72) = 0;
  return (unsigned int)v12;
}
