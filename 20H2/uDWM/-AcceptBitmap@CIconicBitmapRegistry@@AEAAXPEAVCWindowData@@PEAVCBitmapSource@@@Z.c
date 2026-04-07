/*
 * XREFs of ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x180088B9C
 * Callers:
 *     ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x180088D38 (-BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z.c)
 * Callees:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x18001431C (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x18001468C (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z @ 0x1800264E0 (-AddMultipleAndSet@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x1800447E8 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?IsWindowTab@@YA_NPEAVCWindowData@@@Z @ 0x180055CAC (-IsWindowTab@@YA_NPEAVCWindowData@@@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x180084CB0 (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     ?Find@?$DynArray@PEAUHMONITOR__@@$0A@@@QEAAHAEBQEAUHMONITOR__@@@Z @ 0x18008901C (-Find@-$DynArray@PEAUHMONITOR__@@$0A@@@QEAAHAEBQEAUHMONITOR__@@@Z.c)
 *     ?SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z @ 0x1800895B0 (-SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x18009A414 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 */

void __fastcall CIconicBitmapRegistry::AcceptBitmap(
        CWindowIconic ****this,
        struct CWindowData *a2,
        struct CBitmapSource *a3)
{
  __int64 v3; // rsi
  __int64 v6; // rcx
  CWindowIconic *v7; // rcx
  CWindowData *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v3 = *((_QWORD *)a2 + 47);
  *((_BYTE *)a2 + 610) &= ~0x20u;
  CIconicBitmapRegistry::RequestBitmap((CIconicBitmapRegistry *)this, (HWND *)v8, 0);
  if ( !IsWindowTab(v8) )
  {
    if ( (unsigned int)(*((_DWORD *)this + 10) + *((_DWORD *)this + 20) + *((_DWORD *)this + 21)) > *((_DWORD *)this + 2) )
      CIconicBitmapRegistry::ClearBitmap((CIconicBitmapRegistry *)this, *this[2]);
    if ( !v3 && !(unsigned int)DynArray<HMONITOR__ *,0>::Find(this + 2, &v8) )
      DynArray<CWindowData *,0>::AddMultipleAndSet((__int64)(this + 2), &v8);
  }
  CWindowData::SetIconicBitmap(v8, a3);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qp_EtwEventWriteTransfer(v6, (__int64)&UdwmManageIconicThumbnail_Info, 0LL, *((_QWORD *)v8 + 5));
  v7 = (CWindowIconic *)*((_QWORD *)v8 + 53);
  if ( v7 )
  {
    CWindowIconic::SetBitmap(v7, *((struct CBitmapSource **)v8 + 47), (*((_BYTE *)v8 + 610) & 8) != 0, 1);
    if ( !v3 )
      CWindowIconic::OnRepresentationTypeUpdated(*((CWindowIconic **)v8 + 53));
  }
}
