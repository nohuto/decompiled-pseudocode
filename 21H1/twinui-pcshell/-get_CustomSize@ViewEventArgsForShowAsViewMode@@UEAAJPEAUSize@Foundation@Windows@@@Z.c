/*
 * XREFs of ?get_CustomSize@ViewEventArgsForShowAsViewMode@@UEAAJPEAUSize@Foundation@Windows@@@Z @ 0x18008AA80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewEventArgsForShowAsViewMode::get_CustomSize(
        ViewEventArgsForShowAsViewMode *this,
        struct Windows::Foundation::Size *a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)a2 = *(_QWORD *)((char *)this + 68);
  return result;
}
