/*
 * XREFs of ZwSetInformationObject @ 0x1403F2EB0
 * Callers:
 *     CmpCmdHiveClose @ 0x14065B1C8 (CmpCmdHiveClose.c)
 *     CmpCreateHive @ 0x140688850 (CmpCreateHive.c)
 *     CmpFlushBackupHive @ 0x14086FC00 (CmpFlushBackupHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
