/*
 * XREFs of ?Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ @ 0x1800031C0
 * Callers:
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180007244 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x1800077F0 (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ??$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z @ 0x180007FC0 (--$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z.c)
 */

void __fastcall wil::details_abi::SemaphoreValue::Destroy(wil::details_abi::SemaphoreValue *this)
{
  DWORD LastError; // eax
  DWORD v3; // ebx
  DWORD v4; // eax
  DWORD v5; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  void (__fastcall *v7)(wil::details *, void *); // [rsp+38h] [rbp+10h] BYREF

  if ( *(_QWORD *)this )
  {
    v6 = *(_QWORD *)this;
    LastError = GetLastError();
    v7 = wil::details::CloseHandle;
    v3 = LastError;
    wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(&v7, &v6);
    SetLastError(v3);
  }
  *(_QWORD *)this = 0LL;
  if ( *((_QWORD *)this + 1) )
  {
    v6 = *((_QWORD *)this + 1);
    v4 = GetLastError();
    v7 = wil::details::CloseHandle;
    v5 = v4;
    wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(&v7, &v6);
    SetLastError(v5);
  }
  *((_QWORD *)this + 1) = 0LL;
}
