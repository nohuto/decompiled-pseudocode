/*
 * XREFs of ACPIDockIrpQueryID @ 0x1C00AACA0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDebugGetIrpText @ 0x1C0001908 (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsdLqss @ 0x1C000859C (WPP_RECORDER_SF_qsdLqss.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C000E14C (WPP_RECORDER_SF_qqss.c)
 *     ACPIGet @ 0x1C0010180 (ACPIGet.c)
 *     WPP_RECORDER_SF_qsdqss @ 0x1C0029A54 (WPP_RECORDER_SF_qsdqss.c)
 *     ACPIInitUnicodeString @ 0x1C009257C (ACPIInitUnicodeString.c)
 *     ACPIInitMultiString @ 0x1C00AEEA0 (ACPIInitMultiString.c)
 */

__int64 __fastcall ACPIDockIrpQueryID(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  __int64 CurrentStackLocation; // rcx
  const char *v5; // r15
  char v6; // di
  _QWORD *v7; // rbx
  unsigned __int8 v8; // dl
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  char *IrpText; // rax
  __int64 v14; // rdx
  const char *v15; // r8
  char v16; // r10
  const char *v17; // r11
  int v18; // esi
  __int64 v19; // rcx
  char *v20; // rax
  const char *v21; // r8
  __int64 v23; // rcx
  __int64 v24; // rax
  const char *v25; // r15
  const char *v26; // rcx
  wchar_t *Buffer; // rax
  const char *v28; // rdx
  __int64 v29; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int8 v31; // [rsp+B8h] [rbp+48h]
  char v32; // [rsp+C0h] [rbp+50h]
  wchar_t *v33; // [rsp+C8h] [rbp+58h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  CurrentStackLocation = (__int64)a2->Tail.Overlay.CurrentStackLocation;
  v5 = (const char *)&unk_1C006FB8B;
  v6 = 0;
  v33 = 0LL;
  v7 = (_QWORD *)DeviceExtension;
  v8 = *(_BYTE *)(CurrentStackLocation + 1);
  DestinationString = 0LL;
  v9 = *(_DWORD *)(CurrentStackLocation + 8);
  v31 = v8;
  v32 = v9;
  if ( !v9 )
  {
    v28 = (const char *)v7[76];
    goto LABEL_31;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v18 = ACPIInitMultiString(&DestinationString, "ACPI\\DockDevice", v7[77], "ACPI\\DockDevice", 0LL);
    if ( v18 >= 0 )
    {
      DestinationString.Buffer[((unsigned __int64)DestinationString.MaximumLength >> 1) - 1] = 0;
      v29 = -1LL;
      do
        ++v29;
      while ( DestinationString.Buffer[v29] );
      DestinationString.Buffer[(unsigned int)v29] = 38;
    }
    goto LABEL_32;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
LABEL_8:
    v18 = -1073741637;
LABEL_9:
    a2->IoStatus.Information = 0LL;
    goto LABEL_10;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    v28 = (const char *)v7[77];
LABEL_31:
    v18 = ACPIInitUnicodeString(&DestinationString, v28);
    goto LABEL_32;
  }
  if ( v12 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      IrpText = ACPIDebugGetIrpText(CurrentStackLocation, v8);
      WPP_RECORDER_SF_qsdqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v14,
        (__int64)v15,
        0x15u,
        (__int64)&WPP_6625d3923c543510b1fa3235c3eeddfe_Traceguids,
        (char)a2,
        IrpText,
        v32,
        v16,
        v17,
        v15);
    }
    goto LABEL_8;
  }
  v23 = v7[23];
  if ( v23 )
  {
    v18 = ACPIGet(v23, 1145656671, 532502, 0LL, 0, 0LL, 0LL, (__int64)&v33, 0LL);
    if ( v18 >= 0 )
    {
      Buffer = v33;
      DestinationString.Buffer = v33;
      goto LABEL_34;
    }
LABEL_32:
    if ( v18 < 0 )
      goto LABEL_9;
    Buffer = DestinationString.Buffer;
LABEL_34:
    a2->IoStatus.Information = (unsigned __int64)Buffer;
LABEL_10:
    a2->IoStatus.Status = v18;
    IofCompleteRequest(a2, 0);
    if ( v7 )
    {
      v6 = (char)v7;
      if ( (v7[1] & 0x200000000000LL) != 0 )
        v5 = (const char *)v7[76];
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = ACPIDebugGetIrpText(v19, v31);
      WPP_RECORDER_SF_qsdLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        (__int64)v21,
        0x16u,
        (__int64)&WPP_6625d3923c543510b1fa3235c3eeddfe_Traceguids,
        (char)a2,
        v20,
        v32,
        v18,
        v6,
        v5,
        v21);
    }
    return (unsigned int)v18;
  }
  v24 = v7[1];
  v25 = (const char *)&unk_1C006FB8B;
  v26 = (const char *)&unk_1C006FB8B;
  if ( (v24 & 0x200000000000LL) != 0 )
  {
    v25 = (const char *)v7[76];
    if ( (v24 & 0x400000000000LL) != 0 )
      v26 = (const char *)v7[77];
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
      v25,
      v26);
  a2->IoStatus.Status = -1073741823;
  IofCompleteRequest(a2, 0);
  return 3221225473LL;
}
