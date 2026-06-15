/*
 * XREFs of sub_180008690 @ 0x180008690
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_18002880C @ 0x18002880C (sub_18002880C.c)
 *     sub_18002B8A0 @ 0x18002B8A0 (sub_18002B8A0.c)
 */

__int64 __fastcall sub_180008690(__int64 a1, DWORD a2, _QWORD *a3)
{
  unsigned int v3; // edi
  __int64 v6; // rdx
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  *a3 = 0LL;
  EnterCriticalSection(&CriticalSection);
  if ( !(unsigned int)sub_18002880C(a2) )
  {
    v6 = *(_QWORD *)(v9 + 336);
    if ( !v6 )
    {
      LeaveCriticalSection(&CriticalSection);
      return (unsigned int)-2147467259;
    }
    sub_18002B8A0(&v9, v6, -1LL);
    if ( v9 )
    {
      *a3 = v9;
    }
    else
    {
      v3 = -2147024882;
      sub_180003AB0(
        retaddr,
        962,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        -2147024882);
    }
  }
  LeaveCriticalSection(&CriticalSection);
  return v3;
}
