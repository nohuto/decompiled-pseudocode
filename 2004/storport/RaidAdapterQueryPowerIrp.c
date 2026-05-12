/*
 * XREFs of RaidAdapterQueryPowerIrp @ 0x1C0011404
 * Callers:
 *     RaidAdapterPowerIrp @ 0x1C0010C68 (RaidAdapterPowerIrp.c)
 * Callees:
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C0011508 (RaidAdapterQuerySystemPowerIrp.c)
 *     WPP_SF_qqs @ 0x1C0041680 (WPP_SF_qqs.c)
 *     WPP_SF_qqsD @ 0x1C0041720 (WPP_SF_qqsD.c)
 */

NTSTATUS __fastcall RaidAdapterQueryPowerIrp(__int64 a1, IRP *a2, int a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int Options; // ebp
  const char *v7; // r14
  _IO_STACK_LOCATION *v8; // rax
  NTSTATUS SystemPowerIrp; // eax
  int v10; // edi
  const char *v12; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart >= 6 )
  {
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                               + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    return PoCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), a2);
  }
  Options = CurrentStackLocation->Parameters.Create.Options;
  v7 = "System";
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    v12 = "System";
    if ( Options )
      v12 = "Device";
    WPP_SF_qqs(WPP_GLOBAL_Control->AttachedDevice, 13, a3, a1, (char)a2, (__int64)v12);
  }
  if ( !Options )
  {
    SystemPowerIrp = RaidAdapterQuerySystemPowerIrp(a1, a2);
    goto LABEL_7;
  }
  if ( Options == 1 )
  {
    v8 = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v8[-1].MajorFunction = *(_OWORD *)&v8->MajorFunction;
    *(_OWORD *)&v8[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v8->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v8[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v8->Parameters.SetQuota + 6);
    v8[-1].FileObject = v8->FileObject;
    v8[-1].Control = 0;
    SystemPowerIrp = PoCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), a2);
LABEL_7:
    v10 = SystemPowerIrp;
    goto LABEL_8;
  }
  v10 = -1073741823;
LABEL_8:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( Options )
      v7 = "Device";
    WPP_SF_qqsD(WPP_GLOBAL_Control->AttachedDevice, 14, a3, a1, (char)a2, (__int64)v7, v10);
  }
  return v10;
}
