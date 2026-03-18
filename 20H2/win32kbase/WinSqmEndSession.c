/*
 * XREFs of WinSqmEndSession @ 0x1C0071CF4
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0120150 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ?UnregisterWinSqmProvider@@YAKXZ @ 0x1C0071D98 (-UnregisterWinSqmProvider@@YAKXZ.c)
 *     WinSqmEventEnabled @ 0x1C00720A8 (WinSqmEventEnabled.c)
 *     ?IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z @ 0x1C0072100 (-IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z.c)
 *     WinSqmEventWrite @ 0x1C00B8C30 (WinSqmEventWrite.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 */

int WinSqmEndSession()
{
  struct _GUID *v0; // rbx
  int v1; // esi
  int result; // eax
  void *Data4; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+30h] [rbp-28h]

  v0 = gSqmSession;
  v1 = 0;
  UserData = 0LL;
  result = (_DWORD)gSqmSession - 1;
  v5 = 0LL;
  if ( (unsigned __int64)&gSqmSession[-1].Data4[7] <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( (unsigned int)IsExtendedWinSqmHandle(gSqmSession) )
    {
      Data4 = v0[1].Data4;
      v1 = 1;
    }
    else
    {
      Data4 = v0;
    }
    result = WinSqmEventEnabled(&SQM_END_SESSION, Data4);
    if ( result )
    {
      UserData.Reserved = 0;
      *(_QWORD *)&v5 = &unk_1C024E7E0;
      UserData.Ptr = (ULONGLONG)Data4;
      UserData.Size = 16;
      *((_QWORD *)&v5 + 1) = 4LL;
      result = WinSqmEventWrite(&SQM_END_SESSION, 2u, &UserData);
    }
    if ( v1 )
    {
      Win32FreePool((__int64)v0);
      return UnregisterWinSqmProvider();
    }
  }
  return result;
}
