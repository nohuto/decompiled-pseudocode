/*
 * XREFs of ?PopTarget@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z @ 0x18007B780
 * Callers:
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18007B6A8 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18007B89C (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EndDraw@CD2DContext@@AEAAJXZ @ 0x18007BEE4 (-EndDraw@CD2DContext@@AEAAJXZ.c)
 *     ??_GCD2DTarget@@QEAAPEAXI@Z @ 0x1800AF624 (--_GCD2DTarget@@QEAAPEAXI@Z.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x1800B1470 (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::PopTarget(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        struct IDeviceTarget **a3)
{
  int v5; // edx
  CD2DTarget *v6; // rsi
  unsigned int v7; // edx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rcx
  CD2DTarget *v15; // rbp

  if ( a3 )
    *a3 = 0LL;
  CD2DContext::FlushDrawList(this);
  v5 = *((_DWORD *)this + 100);
  v6 = 0LL;
  if ( v5 )
  {
    v7 = v5 - 1;
    v6 = *(CD2DTarget **)(*((_QWORD *)this + 47) + 8LL * v7);
  }
  else
  {
    v7 = -1;
  }
  *((_DWORD *)this + 100) = v7;
  if ( v7 )
  {
    v13 = v7 - 1;
    v15 = *(CD2DTarget **)(*((_QWORD *)this + 47) + 8 * v13);
    if ( a3 )
    {
      v11 = *((_QWORD *)v15 + 3);
      *a3 = (struct IDeviceTarget *)v11;
      v12 = *(int *)(*(_QWORD *)(v11 + 8) + 4LL) + v11 + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    }
    if ( *((_BYTE *)this + 485) )
      CD2DTarget::ApplyState(v15, this);
    v10 = *((_DWORD *)this + 278);
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v10, 0x2D0u, 0LL);
  }
  else
  {
    v8 = CD2DContext::EndDraw(this);
    v10 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x2D8u, 0LL);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(**((_QWORD **)v6 + 3) + 8LL))(*((_QWORD **)v6 + 3)) )
    {
      *((_QWORD *)this + 59) = v6;
      return CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this - 16, v10, 0);
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 31) + 56LL))(*((_QWORD *)this + 31), 0LL, 0LL);
  }
  if ( v6 )
    CD2DTarget::`scalar deleting destructor'(v6, v7);
  return CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this - 16, v10, 0);
}
