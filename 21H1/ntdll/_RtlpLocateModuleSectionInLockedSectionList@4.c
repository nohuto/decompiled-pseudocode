/*
 * XREFs of _RtlpLocateModuleSectionInLockedSectionList@4 @ 0x4B2A9A2E
 * Callers:
 *     _RtlLockModuleSection@4 @ 0x4B2A96A0 (_RtlLockModuleSection@4.c)
 *     _RtlUnlockModuleSection@4 @ 0x4B2A99B0 (_RtlUnlockModuleSection@4.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall RtlpLocateModuleSectionInLockedSectionList(unsigned int a1)
{
  _UNKNOWN **i; // edx

  for ( i = (_UNKNOWN **)RtlpLockedSectionList; i != &RtlpLockedSectionList; i = (_UNKNOWN **)*i )
  {
    if ( a1 >= (unsigned int)i[2] && (_UNKNOWN *)a1 < (_UNKNOWN *)((char *)i[3] + (int)i[2]) )
      return i;
  }
  return 0;
}
