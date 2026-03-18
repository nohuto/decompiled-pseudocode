/*
 * XREFs of ??_ECInteractionTrackerBindingManagerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D0B10
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

DirectComposition::CInteractionTrackerBindingManagerMarshaler *__fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::`vector deleting destructor'(
        DirectComposition::CInteractionTrackerBindingManagerMarshaler *this,
        char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 9);
  if ( v4 )
    Win32FreePool(v4);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
