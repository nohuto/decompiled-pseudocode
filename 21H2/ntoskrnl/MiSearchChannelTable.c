/*
 * XREFs of MiSearchChannelTable @ 0x140547B40
 * Callers:
 *     MiPageToChannel @ 0x140309E58 (MiPageToChannel.c)
 *     MiRestrictRangeToNode @ 0x1403B1630 (MiRestrictRangeToNode.c)
 *     MxPageAlwaysHot @ 0x140A45FC0 (MxPageAlwaysHot.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

_QWORD *__fastcall MiSearchChannelTable(ULONG_PTR BugCheckParameter2)
{
  int v1; // edx
  _QWORD *result; // rax
  int v4; // r9d
  int v5; // eax
  _QWORD *v6; // rcx

  v1 = dword_140C4DED4;
  if ( dword_140C4DED0 > (unsigned int)dword_140C4DED4
    || (result = (char *)qword_140C4DF10 + 16 * dword_140C4DED0, BugCheckParameter2 < *result)
    || dword_140C4DED0 != dword_140C4DED4 && BugCheckParameter2 >= result[2] )
  {
    v4 = 0;
    if ( dword_140C4DED4 < 0 )
LABEL_13:
      KeBugCheckEx(0x1Au, 0x6202uLL, BugCheckParameter2, 0LL, 0LL);
    while ( 1 )
    {
      v5 = (v4 + v1) >> 1;
      v6 = (char *)qword_140C4DF10 + 16 * v5;
      if ( BugCheckParameter2 >= *v6 )
      {
        if ( v5 == dword_140C4DED4 || BugCheckParameter2 < v6[2] )
        {
          dword_140C4DED0 = (v4 + v1) >> 1;
          return (char *)qword_140C4DF10 + 16 * v5;
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
