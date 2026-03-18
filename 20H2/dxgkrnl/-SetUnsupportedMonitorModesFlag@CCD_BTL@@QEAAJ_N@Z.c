/*
 * XREFs of ?SetUnsupportedMonitorModesFlag@CCD_BTL@@QEAAJ_N@Z @ 0x1C02EC0EC
 * Callers:
 *     DxgkSetGlobalRawmodeFlag @ 0x1C0296EE0 (DxgkSetGlobalRawmodeFlag.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A6AC (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 */

__int64 __fastcall CCD_BTL::SetUnsupportedMonitorModesFlag(CCD_BTL *this, unsigned __int8 a2)
{
  int v3; // edi
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+90h] [rbp+20h] BYREF
  int Data; // [rsp+98h] [rbp+28h] BYREF

  KeyHandle = 0LL;
  v3 = a2;
  DxgkLogCodePointPacket(0x29u, *((_BYTE *)this + 144) != 0, a2, 0, 0LL);
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  *((_BYTE *)this + 144) = v3;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey(&KeyHandle, 0x40000000u, &ObjectAttributes);
  v7 = v4;
  if ( v4 < 0
    || (Data = v3,
        RtlInitUnicodeString(&DestinationString, L"UnsupportedMonitorModesAllowed"),
        v7 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u),
        ZwClose(KeyHandle),
        (int)v7 < 0) )
  {
    v8 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v8 + 24) = v7;
    WdLogEvent5_WdError(v8);
  }
  return (unsigned int)v7;
}
