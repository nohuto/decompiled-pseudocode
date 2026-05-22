/*
 * XREFs of ?RejectClientConnection@AlpcPort@@UEAAJXZ @ 0x1800C14E0
 * Callers:
 *     ?Disconnect@AlpcPort@@UEAAXXZ @ 0x1800BFF40 (-Disconnect@AlpcPort@@UEAAXXZ.c)
 *     ?GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z @ 0x1800C0740 (-GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800313C4 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 */

__int64 __fastcall AlpcPort::RejectClientConnection(AlpcPort *this)
{
  char *v1; // rdi
  __int64 v2; // rbx
  char v4; // [rsp+40h] [rbp-18h]
  HANDLE hObject; // [rsp+60h] [rbp+8h] BYREF

  v1 = (char *)this + 88;
  *((_DWORD *)this + 22) = 2621440;
  hObject = 0LL;
  v2 = *((_QWORD *)this + 7);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &hObject,
    0LL);
  v4 = 0;
  NtAlpcAcceptConnectPort(&hObject, v2, 0LL, 0LL, 0LL, 0LL, v1, 0LL, v4);
  *(_OWORD *)v1 = 0LL;
  *((_OWORD *)v1 + 1) = 0LL;
  *((_QWORD *)v1 + 4) = 0LL;
  *((_QWORD *)v1 + 42) = 0LL;
  *((_WORD *)v1 + 1) = 40;
  *((_DWORD *)v1 + 84) = 1610612736;
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  return 0LL;
}
