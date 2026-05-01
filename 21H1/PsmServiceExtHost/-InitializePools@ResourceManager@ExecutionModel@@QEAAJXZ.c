/*
 * XREFs of ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x180041F7C
 * Callers:
 *     ?Initialize@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@@Z @ 0x180041A9C (-Initialize@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnfo.c)
 * Callees:
 *     ??0BaseResourceSet@ExecutionModel@@QEAA@XZ @ 0x180035D2C (--0BaseResourceSet@ExecutionModel@@QEAA@XZ.c)
 *     ?RmpGetIoPoolSize@@YAKPEA_K@Z @ 0x180041E04 (-RmpGetIoPoolSize@@YAKPEA_K@Z.c)
 *     ?SetMainPoolSizes@ResourceManager@ExecutionModel@@QEAAX_K@Z @ 0x180041E6C (-SetMainPoolSizes@ResourceManager@ExecutionModel@@QEAAX_K@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180041F28 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?Attach@?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@QEAAXPEAVBaseResourceSet@ExecutionModel@@@Z @ 0x180042044 (-Attach@-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@QEAAXPEAVBaseResourceSet@ExecutionM.c)
 *     ?InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x1800420E4 (-InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180046068 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046540 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::InitializePools(ExecutionModel::ResourceManager *this)
{
  ExecutionModel::BaseResourceSet *v2; // rax
  char *v3; // rdi
  __int64 result; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = (ExecutionModel::BaseResourceSet *)operator new(0x510uLL);
  if ( v2 )
    v2 = ExecutionModel::BaseResourceSet::BaseResourceSet(v2);
  v3 = (char *)this + 32;
  ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::Attach((char *)this + 32, v2);
  if ( !*((_QWORD *)this + 4) )
    return 2147942414LL;
  result = RmpGetIoPoolSize(&v6);
  if ( (_DWORD)result )
  {
    if ( (int)result > 0 )
      return (unsigned __int16)result | 0x80070000;
  }
  else
  {
    v5 = v6;
    *(_DWORD *)(*(_QWORD *)v3 + 1280LL) = 2;
    *(_DWORD *)(*(_QWORD *)v3 + 16LL) = 1;
    *(_QWORD *)(*(_QWORD *)v3 + 24LL) = this;
    ExecutionModel::ResourceManager::SetMainPoolSizes(this, v5);
    if ( *((_QWORD *)this + 3) )
      ATL::AtlComPtrAssign((struct IUnknown **)this + 3, 0LL);
    result = ExecutionModel::ResourceManager::InitResourcesFromRegisteredDlls(this);
    if ( (int)result >= 0 )
    {
      (*(void (__fastcall **)(ExecutionModel::ResourceManager *, __int64, __int64))(*(_QWORD *)this + 24LL))(
        this,
        27LL,
        0xFFFFFFFFLL);
      return 0LL;
    }
  }
  return result;
}
