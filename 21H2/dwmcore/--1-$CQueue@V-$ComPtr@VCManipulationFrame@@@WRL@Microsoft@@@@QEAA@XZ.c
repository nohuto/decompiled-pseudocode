/*
 * XREFs of ??1?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@QEAA@XZ @ 0x1801002C8
 * Callers:
 *     _dynamic_atexit_destructor_for__CManipulationManager::s_InputQueue__ @ 0x18010D740 (_dynamic_atexit_destructor_for__CManipulationManager--s_InputQueue__.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCVector3Force@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EA9A4 (-InternalRelease@-$ComPtr@VCVector3Force@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Remove@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA?AV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@_NPEAI@Z @ 0x18017EC70 (-Remove@-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA-AV-$ComPtr@VCManipulation.c)
 */

void __fastcall CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::~CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  bool v4; // bl
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  do
  {
    LOBYTE(a3) = 1;
    CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Remove(a1, &v5, a3, 0LL);
    v4 = v5 != 0;
    Microsoft::WRL::ComPtr<CVector3Force>::InternalRelease(&v5);
  }
  while ( v4 );
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
}
