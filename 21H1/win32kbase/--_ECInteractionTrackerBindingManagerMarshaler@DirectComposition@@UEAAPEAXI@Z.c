/*
 * XREFs of ??_ECInteractionTrackerBindingManagerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D6A90
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

DirectComposition::CInteractionTrackerBindingManagerMarshaler *__fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::`vector deleting destructor'(
        DirectComposition::CInteractionTrackerBindingManagerMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  char v4; // di
  __int64 v5; // rcx

  v4 = a2;
  v5 = *((_QWORD *)this + 9);
  if ( v5 )
    Win32FreePool(v5, a2, a3);
  if ( (v4 & 1) != 0 )
    Win32FreePool((__int64)this, a2, a3);
  return this;
}
