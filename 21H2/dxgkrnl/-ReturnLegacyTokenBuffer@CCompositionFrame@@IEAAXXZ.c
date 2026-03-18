/*
 * XREFs of ?ReturnLegacyTokenBuffer@CCompositionFrame@@IEAAXXZ @ 0x1C0008878
 * Callers:
 *     ?Release@CCompositionFrame@@UEAAJXZ @ 0x1C00085E0 (-Release@CCompositionFrame@@UEAAJXZ.c)
 * Callees:
 *     ?ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x1C00088A0 (-ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z.c)
 */

void __fastcall CCompositionFrame::ReturnLegacyTokenBuffer(CCompositionFrame *this)
{
  void *v1; // rdx

  v1 = (void *)*((_QWORD *)this + 13);
  if ( v1 )
  {
    CTokenManager::ReturnLegacyTokenBuffer(*((CTokenManager **)this + 24), v1);
    *((_QWORD *)this + 13) = 0LL;
  }
  *((_BYTE *)this + 112) = 0;
}
