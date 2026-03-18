/*
 * XREFs of VfDisableHalVerifier @ 0x14059BAC8
 * Callers:
 *     IoWriteCrashDump @ 0x1404FD880 (IoWriteCrashDump.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x1404FF7BC (IopWriteCapsuleTriageDumpToFirmware.c)
 *     VfAllocateCrashDumpRegisters @ 0x1409C7D80 (VfAllocateCrashDumpRegisters.c)
 *     VfNotifyOfHibernate @ 0x1409C9B7C (VfNotifyOfHibernate.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *VfDisableHalVerifier()
{
  struct _LIST_ENTRY *i; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *result; // rax

  if ( ViVerifyDma )
  {
    ViVerifyDma = 0;
    for ( i = ViAdapterList.Flink; &ViAdapterList != i; i = i->Flink )
    {
      Flink = i[1].Flink;
      if ( Flink )
      {
        result = i[3].Flink;
        Flink->Blink = result;
      }
    }
  }
  return result;
}
