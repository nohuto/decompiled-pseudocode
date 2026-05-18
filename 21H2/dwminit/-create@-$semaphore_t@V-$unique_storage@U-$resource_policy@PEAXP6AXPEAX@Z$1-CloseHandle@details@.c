/*
 * XREFs of ?create@?$semaphore_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJJJPEBGKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x180006DF8
 * Callers:
 *     ?CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z @ 0x180003274 (-CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z.c)
 * Callees:
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180001CEC (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ??$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z @ 0x180007FC0 (--$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z.c)
 */

__int64 __fastcall wil::semaphore_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
        __int64 *a1,
        LONG a2,
        LONG a3,
        const WCHAR *a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v7; // edi
  wil::details *v8; // rcx
  HANDLE Semaphore; // rbp
  DWORD LastError; // ebx
  void (__fastcall *v12[3])(wil::details *, void *); // [rsp+30h] [rbp-18h] BYREF

  v7 = 0;
  Semaphore = CreateSemaphoreExW(0LL, a2, a3, a4, 0, 0x1F0003u);
  if ( Semaphore )
  {
    if ( *a1 )
    {
      a6 = *a1;
      LastError = GetLastError();
      v12[0] = wil::details::CloseHandle;
      wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(v12, &a6);
      SetLastError(LastError);
    }
    *a1 = (__int64)Semaphore;
  }
  else
  {
    return (unsigned int)wil::details::GetLastErrorFailHr(v8);
  }
  return v7;
}
