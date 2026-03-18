/*
 * XREFs of SetWindowCompositionFreezeSWR @ 0x1C011BB44
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C008F0E0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     PostIAMShellHookMessageEx @ 0x1C0013F00 (PostIAMShellHookMessageEx.c)
 *     _GetWindowCompositionInfo @ 0x1C0048CE4 (_GetWindowCompositionInfo.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C008EFF0 (DwmAsyncSetCompositionAttribute.c)
 *     SetWindowCompositionInfo @ 0x1C00C8264 (SetWindowCompositionInfo.c)
 */

__int64 __fastcall SetWindowCompositionFreezeSWR(__int64 *a1, __int128 *a2)
{
  int v2; // ebp
  int v4; // edi
  unsigned int v6; // ebx
  __int64 v7; // rcx
  void *v8; // rax
  _OWORD v10[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  v2 = *(_DWORD *)a2;
  memset(v10, 0, sizeof(v10));
  v4 = v2 != 0;
  v11 = 0LL;
  v6 = -1073741816;
  if ( (unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)v10) )
  {
    if ( -__CFSHR__(v10[0], 13) == v4 )
    {
      return 0;
    }
    else
    {
      LODWORD(v10[0]) = v10[0] & 0xFFFFEFFF | (v4 << 12);
      if ( (unsigned int)SetWindowCompositionInfo((__int64)a1, (__int64)v10) )
      {
        if ( (unsigned int)IsWindowDesktopComposed(a1) )
        {
          v8 = (void *)ReferenceDwmApiPort(v7);
          v6 = DwmAsyncSetCompositionAttribute(v8, *a1, 20, a2);
        }
        else
        {
          v6 = 0;
        }
        if ( !v2 )
          PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 0x24u, *a1);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return v6;
}
