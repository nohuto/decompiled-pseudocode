/*
 * XREFs of RaidAdapterPassThrough @ 0x1C0078B8C
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C000B6F8 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C00065E4 (RaidAdapterFindUnit.c)
 *     RaidCompleteRequestEx @ 0x1C0008FD0 (RaidCompleteRequestEx.c)
 *     RaidRecordPassthroughData @ 0x1C0032A8C (RaidRecordPassthroughData.c)
 *     PortPassThroughExSendAsync @ 0x1C007D8C0 (PortPassThroughExSendAsync.c)
 *     PortPassThroughGetAddress @ 0x1C007DE34 (PortPassThroughGetAddress.c)
 */

__int64 __fastcall RaidAdapterPassThrough(__int64 a1, IRP *a2, char a3)
{
  __int64 Unit; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v8; // r8d
  int v9; // r8d
  int v10; // r10d
  int v11; // r11d
  struct _MDL *v13; // [rsp+30h] [rbp-18h]
  int v14; // [rsp+68h] [rbp+20h] BYREF

  v14 = 0;
  if ( (int)PortPassThroughGetAddress(a2, &v14, (char *)&v14 + 1, (char *)&v14 + 2) >= 0
    && (Unit = RaidAdapterFindUnit(a1, v14)) != 0 )
  {
    CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
    if ( CurrentStackLocation->MinorFunction || (*(_BYTE *)(Unit + 448) & 1) == 0 )
    {
      CurrentStackLocation->Control |= 1u;
      RaidRecordPassthroughData((__int64)a2);
      LOBYTE(v9) = a3;
      PortPassThroughExSendAsync(*(_QWORD *)(Unit + 8), (int)a2, v9, v11, v10, v13, Unit);
      return 259LL;
    }
    v8 = -1073741808;
  }
  else
  {
    v8 = -1073741810;
  }
  return RaidCompleteRequestEx(a2, 0, v8);
}
