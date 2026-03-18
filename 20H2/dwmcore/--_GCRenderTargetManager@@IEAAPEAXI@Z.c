/*
 * XREFs of ??_GCRenderTargetManager@@IEAAPEAXI@Z @ 0x180154E7C
 * Callers:
 *     ?Create@CRenderTargetManager@@KAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800DA36C (-Create@CRenderTargetManager@@KAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801548C0 (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     ??1CRenderTargetManager@@IEAA@XZ @ 0x180154D04 (--1CRenderTargetManager@@IEAA@XZ.c)
 */

CRenderTargetManager *__fastcall CRenderTargetManager::`scalar deleting destructor'(CRenderTargetManager *this)
{
  CRenderTargetManager::~CRenderTargetManager(this);
  operator delete(this);
  return this;
}
