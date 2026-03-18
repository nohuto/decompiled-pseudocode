/*
 * XREFs of SetWindowCompositionNCRenderingExiled @ 0x1C0062B40
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C0065FC0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     SetWindowCompositionInfo @ 0x1C0021614 (SetWindowCompositionInfo.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C0062F30 (DwmAsyncSetCompositionAttribute.c)
 *     _GetWindowCompositionInfo @ 0x1C006D108 (_GetWindowCompositionInfo.c)
 */

__int64 __fastcall SetWindowCompositionNCRenderingExiled(__int64 a1, _DWORD *a2)
{
  bool v2; // zf
  int v4; // esi
  unsigned int v5; // ebx
  __int64 v6; // rcx
  void *v7; // rax
  _OWORD v9[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  v2 = *a2 == 0;
  memset(v9, 0, sizeof(v9));
  v4 = !v2;
  v5 = -1073741816;
  v10 = 0LL;
  if ( (unsigned int)GetWindowCompositionInfo(a1, v9) )
  {
    if ( -(v9[0] & 1) == v4 )
      return 0;
    LODWORD(v9[0]) = v4 | v9[0] & 0xFFFFFFFE;
    if ( !(unsigned int)SetWindowCompositionInfo(a1, (__int64)v9) )
      return (unsigned int)-1073741801;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
      return 0;
    }
    else
    {
      v7 = (void *)ReferenceDwmApiPort(v6);
      return (unsigned int)DwmAsyncSetCompositionAttribute(v7);
    }
  }
  return v5;
}
