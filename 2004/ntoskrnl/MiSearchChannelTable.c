/*
 * XREFs of MiSearchChannelTable @ 0x140542430
 * Callers:
 *     MiPageToChannel @ 0x140317238 (MiPageToChannel.c)
 *     MiRestrictRangeToNode @ 0x1403A8BD0 (MiRestrictRangeToNode.c)
 *     MxPageAlwaysHot @ 0x140A3F200 (MxPageAlwaysHot.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

_QWORD *__fastcall MiSearchChannelTable(ULONG_PTR BugCheckParameter2)
{
  int v1; // edx
  _QWORD *result; // rax
  int v4; // r9d
  int v5; // eax
  _QWORD *v6; // rcx

  v1 = dword_140C4DC94;
  if ( dword_140C4DC90 > (unsigned int)dword_140C4DC94
    || (result = (char *)qword_140C4DCD0 + 16 * dword_140C4DC90, BugCheckParameter2 < *result)
    || dword_140C4DC90 != dword_140C4DC94 && BugCheckParameter2 >= result[2] )
  {
    v4 = 0;
    if ( dword_140C4DC94 < 0 )
LABEL_13:
      KeBugCheckEx(0x1Au, 0x6202uLL, BugCheckParameter2, 0LL, 0LL);
    while ( 1 )
    {
      v5 = (v4 + v1) >> 1;
      v6 = (char *)qword_140C4DCD0 + 16 * v5;
      if ( BugCheckParameter2 >= *v6 )
      {
        if ( v5 == dword_140C4DC94 || BugCheckParameter2 < v6[2] )
        {
          dword_140C4DC90 = (v4 + v1) >> 1;
          return (char *)qword_140C4DCD0 + 16 * v5;
        }
        v4 = v5 + 1;
      }
      else
      {
        if ( !v5 )
          KeBugCheckEx(0x1Au, 0x6200uLL, BugCheckParameter2, (ULONG_PTR)v6, 0LL);
        v1 = v5 - 1;
      }
      if ( v1 < v4 )
        goto LABEL_13;
    }
  }
  return result;
}
