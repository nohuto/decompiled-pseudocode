/*
 * XREFs of ACPIDockIrpQueryID @ 0x1C00ABC10
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002980 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C00029E4 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsdLqss @ 0x1C0002A04 (WPP_RECORDER_SF_qsdLqss.c)
 *     ACPIGet @ 0x1C0003AB0 (ACPIGet.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C001E028 (WPP_RECORDER_SF_qqss.c)
 *     WPP_RECORDER_SF_qsdqss @ 0x1C002B34C (WPP_RECORDER_SF_qsdqss.c)
 *     ACPIInitUnicodeString @ 0x1C0099A50 (ACPIInitUnicodeString.c)
 *     ACPIInitMultiString @ 0x1C00AF9B4 (ACPIInitMultiString.c)
 */

__int64 __fastcall ACPIDockIrpQueryID(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  const char *v5; // r15
  char v6; // di
  _QWORD *v7; // rbx
  unsigned __int8 MinorFunction; // dl
  unsigned int Length; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  char *v13; // rax
  __int64 v14; // rdx
  const char *v15; // r8
  char v16; // r10
  const char *v17; // r11
  int v18; // esi
  __int64 *v19; // rcx
  __int64 v20; // rax
  const char *v21; // r15
  const char *v22; // rcx
  const char *v24; // rdx
  __int64 v25; // rcx
  char *IrpText; // rax
  const char *v27; // r8
  __int64 v28; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int8 v30; // [rsp+B8h] [rbp+48h]
  char v31; // [rsp+C0h] [rbp+50h]
  wchar_t *v32; // [rsp+C8h] [rbp+58h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = byte_1C00701BA;
  v6 = 0;
  v32 = 0LL;
  v7 = (_QWORD *)DeviceExtension;
  MinorFunction = CurrentStackLocation->MinorFunction;
  DestinationString = 0LL;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v30 = MinorFunction;
  v31 = Length;
  if ( !Length )
  {
    v24 = (const char *)v7[71];
    goto LABEL_32;
  }
  v10 = Length - 1;
  if ( !v10 )
  {
    v18 = ACPIInitMultiString(&DestinationString, "ACPI\\DockDevice", v7[72], "ACPI\\DockDevice", 0LL);
    if ( v18 >= 0 )
    {
      DestinationString.Buffer[((unsigned __int64)DestinationString.MaximumLength >> 1) - 1] = 0;
      v28 = -1LL;
      do
        ++v28;
      while ( DestinationString.Buffer[v28] );
      DestinationString.Buffer[(unsigned int)v28] = 38;
    }
LABEL_33:
    if ( v18 >= 0 )
    {
      a2->IoStatus.Information = (unsigned __int64)DestinationString.Buffer;
LABEL_21:
      a2->IoStatus.Status = v18;
      IofCompleteRequest(a2, 0);
      if ( v7 )
      {
        v6 = (char)v7;
        if ( (v7[1] & 0x200000000000LL) != 0 )
          v5 = (const char *)v7[71];
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        IrpText = ACPIDebugGetIrpText(v25, v30);
        WPP_RECORDER_SF_qsdLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          (__int64)v27,
          0x16u,
          (__int64)&WPP_6625d3923c543510b1fa3235c3eeddfe_Traceguids,
          (char)a2,
          IrpText,
          v31,
          v18,
          v6,
          v5,
          v27);
      }
      return (unsigned int)v18;
    }
LABEL_20:
    a2->IoStatus.Information = 0LL;
    goto LABEL_21;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v18 = -1073741637;
    goto LABEL_20;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    v24 = (const char *)v7[72];
LABEL_32:
    v18 = ACPIInitUnicodeString(&DestinationString, v24);
    goto LABEL_33;
  }
  if ( v12 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = ACPIDebugGetIrpText(0x200000000000LL, MinorFunction);
      WPP_RECORDER_SF_qsdqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v14,
        (__int64)v15,
        0x15u,
        (__int64)&WPP_6625d3923c543510b1fa3235c3eeddfe_Traceguids,
        (char)a2,
        v13,
        v31,
        v16,
        v17,
        v15);
    }
    v18 = -1073741637;
    goto LABEL_33;
  }
  v19 = (__int64 *)v7[23];
  if ( v19 )
  {
    v18 = ACPIGet(v19, 1145656671, 532502, 0LL, 0, 0LL, 0LL, (__int64)&v32, 0LL);
    if ( v18 >= 0 )
      DestinationString.Buffer = v32;
    goto LABEL_33;
  }
  v20 = v7[1];
  v21 = byte_1C00701BA;
  v22 = byte_1C00701BA;
  if ( (v20 & 0x200000000000LL) != 0 )
  {
    v21 = (const char *)v7[71];
    if ( (v20 & 0x400000000000LL) != 0 )
      v22 = (const char *)v7[72];
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x12u,
      0x14u,
      (__int64)&WPP_6625d3923c543510b1fa3235c3eeddfe_Traceguids,
      (char)a2,
      (char)v7,
      v21,
      v22);
  a2->IoStatus.Status = -1073741823;
  IofCompleteRequest(a2, 0);
  return 3221225473LL;
}
