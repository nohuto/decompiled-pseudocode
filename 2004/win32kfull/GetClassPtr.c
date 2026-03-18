/*
 * XREFs of GetClassPtr @ 0x1C001E2B0
 * Callers:
 *     _GetClassInfoEx @ 0x1C001E340 (_GetClassInfoEx.c)
 *     xxxFreeWindow @ 0x1C008B600 (xxxFreeWindow.c)
 *     _GetWOWClass @ 0x1C01E9704 (_GetWOWClass.c)
 * Callees:
 *     _InnerGetClassPtr @ 0x1C008D8DC (_InnerGetClassPtr.c)
 */

__int64 __fastcall GetClassPtr(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int16 v4; // bx
  __int64 result; // rax

  v2 = a2 + 344;
  v4 = a1;
  result = InnerGetClassPtr(a1, a2 + 344);
  if ( !result )
  {
    result = InnerGetClassPtr(v4, a2 + 352);
    if ( !result )
    {
      result = InnerGetClassPtr(v4, v2);
      if ( !result )
        return InnerGetClassPtr(v4, a2 + 352);
    }
  }
  return result;
}
