/*
 * XREFs of _SetWatermarkStrings @ 0x1C012A190
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C000D548 (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall SetWatermarkStrings(__int64 a1)
{
  __int64 v2; // r9
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rbx
  __int64 v7; // rsi
  unsigned int *v8; // rdx
  __int64 v9; // rcx
  WCHAR *v10; // r8
  ULONG64 v11; // rdx
  _BYTE **v12; // rax
  struct _UNICODE_STRING *v13; // rbx
  unsigned __int64 Length; // rcx
  unsigned __int64 DeviceObject_low; // rax
  int v16; // [rsp+20h] [rbp-38h]
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-28h] BYREF
  int v18; // [rsp+68h] [rbp+10h]

  SourceString = 0LL;
  if ( PsGetCurrentProcessId() != (HANDLE)gpidLogon )
    return 0LL;
  v4 = 0;
  v5 = 1;
  while ( 1 )
  {
    v16 = v4;
    v6 = v4;
    if ( (unsigned __int64)v4 >= 1 )
      break;
    v7 = 2LL * v4;
    v8 = (unsigned int *)(a1 + 16LL * v4);
    if ( (unsigned __int64)v8 >= MmUserProbeAddress )
      v8 = (unsigned int *)MmUserProbeAddress;
    v9 = *v8;
    v18 = *v8;
    *(_DWORD *)&SourceString.Length = *v8;
    v10 = (WCHAR *)*((_QWORD *)v8 + 1);
    SourceString.Buffer = v10;
    if ( ((unsigned __int8)v10 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = (ULONG64)v10 + (unsigned __int16)v9 + 2;
    v12 = (_BYTE **)MmUserProbeAddress;
    if ( v11 < MmUserProbeAddress && (unsigned __int16)v9 <= HIWORD(v18) )
    {
      if ( (v9 & 1) != 0 )
        goto LABEL_14;
      if ( v11 > (unsigned __int64)v10 )
        goto LABEL_16;
    }
    if ( (v9 & 1) != 0 )
    {
LABEL_14:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v11, v10, v2);
      v12 = (_BYTE **)MmUserProbeAddress;
    }
    **v12 = 0;
LABEL_16:
    *((_QWORD *)&WPP_MAIN_CB.Queue.Wcb.CurrentIrp + v7) = (char *)&gWatermarkStrings + 256 * v6;
    v13 = (struct _UNICODE_STRING *)(&WPP_MAIN_CB.Queue.Wcb.DeviceObject + v7);
    v13->Length = 0;
    v13->MaximumLength = 256;
    RtlCopyUnicodeString(v13, &SourceString);
    Length = v13->Length;
    if ( Length >= (unsigned __int64)v13->MaximumLength - 2 )
      Length = *((unsigned __int16 *)&WPP_MAIN_CB.Queue.Wcb.DeviceObject + 4 * v7 + 1) - 2LL;
    *(_WORD *)(*((_QWORD *)&WPP_MAIN_CB.Queue.Wcb.CurrentIrp + v7) + 2 * (Length >> 1)) = 0;
    v4 = v16 + 1;
  }
  if ( *(_DWORD *)(gpsi + 2164LL) )
  {
    DeviceObject_low = 126LL;
    if ( LOWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject) <= 0x7Eu )
      DeviceObject_low = LOWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    gSafeModeStrLen = DeviceObject_low >> 1;
    if ( (int)RtlStringCchCopyNW(
                (char *)gwszSafeModeStr,
                64LL,
                (char *)WPP_MAIN_CB.Queue.Wcb.CurrentIrp,
                gSafeModeStrLen) < 0 )
      return 0;
  }
  return v5;
}
