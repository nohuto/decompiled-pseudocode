/*
 * XREFs of ?GetInputSink@ShellGesturesTarget@@UEBAPEAXXZ @ 0x18017EF10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall ShellGesturesTarget::GetInputSink(ShellGesturesTarget *this)
{
  __int64 v1; // rdx
  void *result; // rax

  v1 = *((_QWORD *)this + 2);
  result = 0LL;
  if ( v1 )
    return *(void **)v1;
  return result;
}
