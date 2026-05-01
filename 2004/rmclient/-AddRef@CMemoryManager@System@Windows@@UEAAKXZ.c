/*
 * XREFs of ?AddRef@CMemoryManager@System@Windows@@UEAAKXZ @ 0x180008690
 * Callers:
 *     ?AddRef@CMemoryManager@System@Windows@@W7EAAKXZ @ 0x18000ABB0 (-AddRef@CMemoryManager@System@Windows@@W7EAAKXZ.c)
 *     ?AddRef@CMemoryManager@System@Windows@@WCI@EAAKXZ @ 0x18000ABC0 (-AddRef@CMemoryManager@System@Windows@@WCI@EAAKXZ.c)
 *     ?AddRef@CMemoryManager@System@Windows@@WDA@EAAKXZ @ 0x18000ABD0 (-AddRef@CMemoryManager@System@Windows@@WDA@EAAKXZ.c)
 *     ?AddRef@CMemoryManager@System@Windows@@WDI@EAAKXZ @ 0x18000ABE0 (-AddRef@CMemoryManager@System@Windows@@WDI@EAAKXZ.c)
 *     ?AddRef@CMemoryManager@System@Windows@@WEA@EAAKXZ @ 0x18000ABF0 (-AddRef@CMemoryManager@System@Windows@@WEA@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18000A970 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18000AB50 (_guard_dispatch_icall_nop.c)
 */

unsigned int __fastcall Windows::System::CMemoryManager::AddRef(
        Windows::System::CMemoryManager *this,
        volatile int *a2)
{
  unsigned int result; // eax
  __int64 v3; // r10
  unsigned int v4; // ebx

  result = Microsoft::WRL::Details::SafeUnknownIncrementReference(
             (Windows::System::CMemoryManager *)((char *)this + 108),
             a2);
  v4 = result;
  if ( (*(_BYTE *)(v3 + 128) & 4) == 0 && result == 2 )
  {
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    return v4;
  }
  return result;
}
