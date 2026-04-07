/*
 * XREFs of ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x180026914
 * Callers:
 *     ?InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z @ 0x18000702C (-InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180026264 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?WindowCanHaveIconicBitmapChanged@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z @ 0x18003E558 (-WindowCanHaveIconicBitmapChanged@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x1800892BC (-AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 *     ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x180089AC4 (-ProcessTick@CIconicBitmapRegistry@@QEAAJXZ.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x1800144A4 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x1800447F8 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?IsLivePreview@@YA_NPEAVCWindowData@@@Z @ 0x180055728 (-IsLivePreview@@YA_NPEAVCWindowData@@@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x180085510 (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     ?SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z @ 0x180089CD0 (-SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z.c)
 */

void __fastcall CIconicBitmapRegistry::ClearBitmap(CIconicBitmapRegistry *this, CWindowIconic **a2)
{
  CWindowIconic *v4; // rdi
  __int64 v5; // rcx
  struct CWindowData *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = (struct CWindowData *)a2;
  if ( IsLivePreview((struct CWindowData *)a2) )
  {
    *((_BYTE *)this + 88) = 0;
    v4 = (CWindowIconic *)*((_QWORD *)this + 12);
LABEL_7:
    if ( v4 )
      CWindowIconic::SetBitmap(v4, 0LL, 0, 1);
    return;
  }
  if ( (unsigned int)DynArray<CWindowData *,0>::Remove((__int64 *)this + 2, &v6) || a2[47] )
  {
    CWindowData::SetIconicBitmap((CWindowData *)a2, 0LL);
    v4 = a2[53];
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp_EtwEventWriteTransfer(v5, &UdwmManageIconicThumbnail_Info, 2LL);
    goto LABEL_7;
  }
}
