/*
 * XREFs of HmgCheckDCForPrivateReferences @ 0x1C0008EB0
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C00C30E0 (-vCleanupDCs@@YAXK@Z.c)
 * Callees:
 *     HmgIsObjectOwnedByW32Pid @ 0x1C0008FC4 (HmgIsObjectOwnedByW32Pid.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C008B8AC (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 */

__int64 __fastcall HmgCheckDCForPrivateReferences(struct OBJECT **this, unsigned int a2)
{
  struct OBJECT *v4; // rax
  __int64 result; // rax

  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[17], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[18], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[19], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[11], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[139], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[146], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[20], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[145], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[21], a2) )
    return 1LL;
  v4 = DC::prgnRao((DC *)this);
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(v4, a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[62], a2) )
    return 1LL;
  result = HmgIsObjectOwnedByW32Pid(this[260], a2);
  if ( (_DWORD)result )
    return 1LL;
  return result;
}
