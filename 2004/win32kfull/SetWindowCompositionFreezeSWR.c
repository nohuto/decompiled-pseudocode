/*
 * XREFs of SetWindowCompositionFreezeSWR @ 0x1C011AF44
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C0065FC0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     SetWindowCompositionInfo @ 0x1C0021614 (SetWindowCompositionInfo.c)
 *     PostIAMShellHookMessageEx @ 0x1C0058320 (PostIAMShellHookMessageEx.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C0062F30 (DwmAsyncSetCompositionAttribute.c)
 *     _GetWindowCompositionInfo @ 0x1C006D108 (_GetWindowCompositionInfo.c)
 */

__int64 __fastcall SetWindowCompositionFreezeSWR(__int64 *a1, __int128 *a2, __int64 a3)
{
  int v3; // ebp
  int v5; // edi
  unsigned int v7; // ebx
  __int64 v8; // rcx
  void *v9; // rax
  _OWORD v11[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]

  v3 = *(_DWORD *)a2;
  memset(v11, 0, sizeof(v11));
  v5 = v3 != 0;
  v12 = 0LL;
  v7 = -1073741816;
  if ( (unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)v11, a3) )
  {
    if ( -__CFSHR__(v11[0], 13) == v5 )
    {
      return 0;
    }
    else
    {
      LODWORD(v11[0]) = v11[0] & 0xFFFFEFFF | (v5 << 12);
      if ( (unsigned int)SetWindowCompositionInfo((__int64)a1, (__int64)v11) )
      {
        if ( (unsigned int)IsWindowDesktopComposed(a1) )
        {
          v9 = (void *)ReferenceDwmApiPort(v8);
          v7 = DwmAsyncSetCompositionAttribute(v9, *a1, 20, a2);
        }
        else
        {
          v7 = 0;
        }
        if ( !v3 )
          PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 0x24u, *a1);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return v7;
}
