/*
 * XREFs of ?LogPresentParams@OUTPUTDUPL_MGR@@AEAAJU_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@PEAU_D3DKMT_PRESENT_RGNS@@IPEAVAUTOEXPANDALLOCATION@@@Z @ 0x1C0321F6C
 * Callers:
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0323350 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3D.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C019F5D0 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C01E8B48 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C0321EF8 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::LogPresentParams(
        DXGDIAGNOSTICS **this,
        struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS a2,
        struct _D3DKMT_PRESENT_RGNS *a3,
        __int64 a4,
        const void **a5)
{
  size_t v8; // rdi
  int v9; // r12d
  UINT v10; // ebp
  char *Buffer; // rax
  char *v12; // rsi
  OUTPUTDUPL_MGR *v14; // rcx

  v8 = 16 * a3->DirtyRectCount;
  v9 = a4;
  v10 = 24 * a3->MoveRectCount;
  Buffer = (char *)AUTOEXPANDALLOCATION::GetBuffer(a5, v10 + v8 + 72, 0, a4);
  v12 = Buffer;
  if ( Buffer )
  {
    memset(Buffer, 0, 0x48uLL);
    OUTPUTDUPL_MGR::InitializePacketHeader(v14, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v12);
    *((struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS *)v12 + 14) = a2;
    *((_DWORD *)v12 + 1) = v10 + v8 + 72;
    *((_DWORD *)v12 + 12) = 2;
    *((_DWORD *)v12 + 13) = v9;
    *((_DWORD *)v12 + 15) = a3->DirtyRectCount;
    *((_DWORD *)v12 + 16) = a3->MoveRectCount;
    memmove(v12 + 72, a3->pDirtyRects, v8);
    memmove(&v12[(v8 & 0xFFFFFFFFFFFFFFF0uLL) + 72], a3->pMoveRects, v10);
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v12, 1);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(6LL, 1181LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to expand tmp buffer for present logging packet.",
      1181LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
