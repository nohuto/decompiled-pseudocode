/*
 * XREFs of ??_G?$EventInvocationContext@$00@details@wil@@UEAAPEAXI@Z @ 0x18023EE90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$EventInvocationContext@$00@details@wil@@UEAA@XZ @ 0x18023E844 (--1-$EventInvocationContext@$00@details@wil@@UEAA@XZ.c)
 */

_QWORD *__fastcall wil::details::EventInvocationContext<1>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  wil::details::EventInvocationContext<1>::~EventInvocationContext<1>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x70);
  return a1;
}
