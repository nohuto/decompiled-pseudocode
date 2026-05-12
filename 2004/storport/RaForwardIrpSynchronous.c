/*
 * XREFs of RaForwardIrpSynchronous @ 0x1C0013C60
 * Callers:
 *     RaidAdapterDeviceUsageNotificationIrp @ 0x1C0013B9C (RaidAdapterDeviceUsageNotificationIrp.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C002EF6C (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C0076D18 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1C0077B5C (RaidAdapterRemoveDeviceIrp.c)
 * Callees:
 *     RaSendIrpSynchronous @ 0x1C000FE20 (RaSendIrpSynchronous.c)
 */

__int64 __fastcall RaForwardIrpSynchronous(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 result; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  result = RaSendIrpSynchronous(a1, a2);
  if ( (int)result >= 0 )
    return (unsigned int)a2->IoStatus.Status;
  return result;
}
