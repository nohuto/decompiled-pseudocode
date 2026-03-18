/*
 * XREFs of ?IsCurrentThreadAppContainer@DXGPROCESS@@SA_NXZ @ 0x1C0336B00
 * Callers:
 *     ?AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z @ 0x1C02F37F4 (-AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C001C71C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ?OpenCurrentThreadToken@DXGPROCESS@@SAJPEAPEAX@Z @ 0x1C0336BF0 (-OpenCurrentThreadToken@DXGPROCESS@@SAJPEAPEAX@Z.c)
 */

bool DXGPROCESS::IsCurrentThreadAppContainer(void)
{
  NTSTATUS v0; // eax
  int v1; // ecx
  bool v2; // bl
  int TokenInformation; // [rsp+40h] [rbp+8h] BYREF
  ULONG ReturnLength; // [rsp+48h] [rbp+10h] BYREF
  HANDLE TokenHandle; // [rsp+50h] [rbp+18h] BYREF

  TokenHandle = 0LL;
  TokenInformation = 1;
  if ( (int)DXGPROCESS::OpenCurrentThreadToken(&TokenHandle) < 0 )
  {
    v1 = TokenInformation;
  }
  else
  {
    ReturnLength = 0;
    v0 = ZwQueryInformationToken(TokenHandle, TokenIsAppContainer, &TokenInformation, 4u, &ReturnLength);
    v1 = TokenInformation;
    if ( v0 < 0 )
      v1 = 1;
    TokenInformation = v1;
  }
  v2 = v1 != 0;
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&TokenHandle);
  return v2;
}
