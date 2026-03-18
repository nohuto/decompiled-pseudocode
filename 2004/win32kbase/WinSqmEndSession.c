/*
 * XREFs of WinSqmEndSession @ 0x1C0060F98
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C01224A0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     WinSqmEventWrite @ 0x1C0058F70 (WinSqmEventWrite.c)
 *     ?UnregisterWinSqmProvider@@YAKXZ @ 0x1C006103C (-UnregisterWinSqmProvider@@YAKXZ.c)
 *     WinSqmEventEnabled @ 0x1C0061348 (WinSqmEventEnabled.c)
 *     ?IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z @ 0x1C00613A0 (-IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 */

NTSTATUS WinSqmEndSession()
{
  struct _GUID *v0; // rbx
  int v1; // esi
  NTSTATUS result; // eax
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
      *(_QWORD *)&v5 = &unk_1C02507E0;
      UserData.Ptr = (ULONGLONG)Data4;
      UserData.Size = 16;
      *((_QWORD *)&v5 + 1) = 4LL;
      result = WinSqmEventWrite(&SQM_END_SESSION, 2u, &UserData);
    }
    if ( v1 )
    {
      Win32FreePool(v0);
      return UnregisterWinSqmProvider();
    }
  }
  return result;
}
