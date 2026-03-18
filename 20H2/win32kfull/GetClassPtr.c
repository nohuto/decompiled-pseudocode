/*
 * XREFs of GetClassPtr @ 0x1C00BA260
 * Callers:
 *     _GetClassInfoEx @ 0x1C00B9EB0 (_GetClassInfoEx.c)
 *     xxxFreeWindow @ 0x1C00D094C (xxxFreeWindow.c)
 *     _GetWOWClass @ 0x1C01E8A74 (_GetWOWClass.c)
 * Callees:
 *     _InnerGetClassPtr @ 0x1C00D2BFC (_InnerGetClassPtr.c)
 */

__int64 __fastcall GetClassPtr(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  unsigned __int16 v5; // bx
  __int64 result; // rax
  struct _LIST_ENTRY *Flink; // rdi

  v3 = a2 + 344;
  v5 = a1;
  result = InnerGetClassPtr(a1, a2 + 344, a3);
  if ( !result )
  {
    result = InnerGetClassPtr(v5, a2 + 352, 0LL);
    if ( !result )
    {
      Flink = WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink;
      result = InnerGetClassPtr(v5, v3, WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink);
      if ( !result )
        return InnerGetClassPtr(v5, a2 + 352, Flink);
    }
  }
  return result;
}
