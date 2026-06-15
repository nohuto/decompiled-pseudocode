/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140014630
 * Callers:
 *     _lambda_469503bf6dae88a4a10e2b9fb17df9f1_::operator() @ 0x14001412C (_lambda_469503bf6dae88a4a10e2b9fb17df9f1_--operator().c)
 *     ?ParseCommandLine@CAudioDGModule@@QEAA_NPEBGPEAJ@Z @ 0x1400144C0 (-ParseCommandLine@CAudioDGModule@@QEAA_NPEBGPEAJ@Z.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x140014B24 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x140015540 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x1400313A8 (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 *     ?CreateCrossProcessEvent@CStandardCrossProcessEventManager@@UEAAJPEAPEAUICrossProcessEvent@@@Z @ 0x14003E950 (-CreateCrossProcessEvent@CStandardCrossProcessEventManager@@UEAAJPEAPEAUICrossProcessEvent@@@Z.c)
 *     ?InitializeEvents@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJXZ @ 0x14004EC78 (-InitializeEvents@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x14001B52C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        wil::details **a1,
        wil::details *a2)
{
  wil::details *v2; // rsi
  DWORD LastError; // ebx
  void *v6; // rdx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    wil::details::CloseHandle(v2, v6);
    SetLastError(LastError);
  }
  *a1 = a2;
}
