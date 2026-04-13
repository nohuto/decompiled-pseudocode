/*
 * XREFs of ?close_reset@?$resource_policy@PEAXP6AHPEAX@Z$1?CloseHandle@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@SAXPEAX@Z @ 0x1800487B4
 * Callers:
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x180059850 (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x180059904 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::resource_policy<void *,int (*)(void *),&int CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>::close_reset(
        HANDLE hObject)
{
  DWORD LastError; // ebx

  LastError = GetLastError();
  CloseHandle(hObject);
  SetLastError(LastError);
}
