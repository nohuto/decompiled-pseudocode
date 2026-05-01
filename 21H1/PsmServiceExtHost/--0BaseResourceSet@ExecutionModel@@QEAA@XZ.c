/*
 * XREFs of ??0BaseResourceSet@ExecutionModel@@QEAA@XZ @ 0x180035D2C
 * Callers:
 *     ??0ExternalResourceSet@ExecutionModel@@AEAA@XZ @ 0x1800021BC (--0ExternalResourceSet@ExecutionModel@@AEAA@XZ.c)
 *     ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x180041F7C (-InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x1800420E4 (-InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180035DB4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

ExecutionModel::BaseResourceSet *__fastcall ExecutionModel::BaseResourceSet::BaseResourceSet(
        ExecutionModel::BaseResourceSet *this)
{
  ExecutionModel::BaseResourceSet *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_WORD *)this + 6) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = -1;
  *(_QWORD *)this = &ExecutionModel::BaseResourceSet::`vftable';
  *((_DWORD *)this + 9) = 1;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 5) = (char *)this + 40;
  *((_QWORD *)this + 6) = (char *)this + 40;
  *((_QWORD *)this + 8) = 0LL;
  `vector constructor iterator'(
    (char *)this + 72,
    0x18uLL,
    0x32uLL,
    (void *(*)(void *))ExecutionModel::_ResourceInfo::_ResourceInfo);
  *((_QWORD *)this + 159) = 0LL;
  result = this;
  *((_DWORD *)this + 320) = 0;
  *((_DWORD *)this + 321) = 0;
  *((_DWORD *)this + 322) = -1;
  return result;
}
