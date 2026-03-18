/*
 * XREFs of ??_GCRenderTargetManager@@IEAAPEAXI@Z @ 0x180156CCC
 * Callers:
 *     ?Create@CRenderTargetManager@@KAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180029B04 (-Create@CRenderTargetManager@@KAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180156718 (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ??1CRenderTargetManager@@IEAA@XZ @ 0x180156B5C (--1CRenderTargetManager@@IEAA@XZ.c)
 */

CRenderTargetManager *__fastcall CRenderTargetManager::`scalar deleting destructor'(CRenderTargetManager *this)
{
  CRenderTargetManager::~CRenderTargetManager(this);
  operator delete(this);
  return this;
}
