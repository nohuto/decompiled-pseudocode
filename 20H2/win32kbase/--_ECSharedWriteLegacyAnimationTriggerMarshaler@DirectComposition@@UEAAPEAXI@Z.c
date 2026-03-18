/*
 * XREFs of ??_ECSharedWriteLegacyAnimationTriggerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00043B0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 */

DirectComposition::CSharedWriteLegacyAnimationTriggerMarshaler *__fastcall DirectComposition::CSharedWriteLegacyAnimationTriggerMarshaler::`vector deleting destructor'(
        DirectComposition::CSharedWriteLegacyAnimationTriggerMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSharedWriteLegacyAnimationTriggerMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
