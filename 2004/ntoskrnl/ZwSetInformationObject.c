/*
 * XREFs of ZwSetInformationObject @ 0x1403F4140
 * Callers:
 *     CmpCreateHive @ 0x14063ACD0 (CmpCreateHive.c)
 *     CmpCmdHiveClose @ 0x140643988 (CmpCmdHiveClose.c)
 *     CmpFlushBackupHive @ 0x14086DC18 (CmpFlushBackupHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
