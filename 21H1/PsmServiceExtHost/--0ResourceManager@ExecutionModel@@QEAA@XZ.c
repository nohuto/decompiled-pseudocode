/*
 * XREFs of ??0ResourceManager@ExecutionModel@@QEAA@XZ @ 0x18004195C
 * Callers:
 *     ?CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@PEAPEAVResourceManager@1@@Z @ 0x180041A10 (-CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@P.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180035DB4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

ExecutionModel::ResourceManager *__fastcall ExecutionModel::ResourceManager::ResourceManager(
        ExecutionModel::ResourceManager *this)
{
  ExecutionModel::ResourceManager *result; // rax

  *(_QWORD *)this = &ExecutionModel::ResourceManager::`vftable'{for `ExecutionModel::IExternalResourceRegister'};
  *((_QWORD *)this + 1) = &ExecutionModel::ResourceManager::`vftable'{for `IModernResourceEnforcerCallback'};
  *((_DWORD *)this + 4) = 1;
  `vector constructor iterator'(
    (char *)this + 24,
    8LL,
    2LL,
    (void (__fastcall *)(char *))ATL::CComPtr<ExecutionModel::BaseResourceSet>::CComPtr<ExecutionModel::BaseResourceSet>);
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = (char *)this + 88;
  *((_QWORD *)this + 12) = (char *)this + 88;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_WORD *)this + 60) = 2048;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 21) = (char *)this + 168;
  *((_QWORD *)this + 22) = (char *)this + 168;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_WORD *)this + 100) = 2048;
  result = this;
  *((_DWORD *)this + 40) = 0;
  return result;
}
