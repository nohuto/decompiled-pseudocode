/*
 * XREFs of ??0CApplicationManager@@IEAA@XZ @ 0x180020880
 * Callers:
 *     ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x18000AC2C (-RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

CApplicationManager *__fastcall CApplicationManager::CApplicationManager(CApplicationManager *this)
{
  CApplicationManager *result; // rax

  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CApplicationManager::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 32), 0, 0);
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 10;
  InitializeSRWLock((PSRWLOCK)this + 15);
  result = this;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 10;
  return result;
}
