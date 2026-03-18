/*
 * XREFs of ZwSetInformationObject @ 0x1403F8CF0
 * Callers:
 *     CmpCreateHive @ 0x1405DDED8 (CmpCreateHive.c)
 *     CmpCmdHiveClose @ 0x1406A2FD8 (CmpCmdHiveClose.c)
 *     CmpFlushBackupHive @ 0x140873704 (CmpFlushBackupHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
