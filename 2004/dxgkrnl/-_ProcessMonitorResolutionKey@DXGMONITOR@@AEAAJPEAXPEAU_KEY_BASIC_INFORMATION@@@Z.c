/*
 * XREFs of ?_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C0187870
 * Callers:
 *     ?_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C01875FC (-_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00027E4 (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ParseResolutionKeyName @ 0x1C0187A8C (ParseResolutionKeyName.c)
 *     ?IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C01881A0 (-IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z.c)
 *     ParseFreqRangeValue @ 0x1C02F50F8 (ParseFreqRangeValue.c)
 */

__int64 __fastcall DXGMONITOR::_ProcessMonitorResolutionKey(
        DXGMONITOR *this,
        void *a2,
        struct _KEY_BASIC_INFORMATION *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  unsigned __int16 v11; // r14
  void *v12; // r12
  PVOID v13; // rsi
  ULONG Length; // r15d
  __int64 v15; // rdx
  __int64 v16; // rcx
  NTSTATUS v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // ebx
  __int64 v23; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  char v28; // bl
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v34; // rbx
  UINT v35; // ecx
  UINT v36; // eax
  UINT v37; // ecx
  UINT v38; // eax
  UINT v39; // eax
  int valid; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rsi
  DXGMONITOR *v45; // rbx
  DXGMONITOR **v46; // rcx
  __int64 v47; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-69h] BYREF
  UINT v49; // [rsp+34h] [rbp-65h] BYREF
  UINT v50; // [rsp+38h] [rbp-61h] BYREF
  UINT v51; // [rsp+3Ch] [rbp-5Dh] BYREF
  UINT v52; // [rsp+40h] [rbp-59h] BYREF
  UINT v53; // [rsp+44h] [rbp-55h] BYREF
  void *KeyHandle; // [rsp+48h] [rbp-51h] BYREF
  _WORD v55[2]; // [rsp+50h] [rbp-49h] BYREF
  int v56; // [rsp+54h] [rbp-45h]
  WCHAR *Name; // [rsp+58h] [rbp-41h]
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-39h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-29h] BYREF
  WCHAR SourceString[8]; // [rsp+A0h] [rbp+7h] BYREF

  v55[0] = a3->NameLength;
  v55[1] = v55[0];
  KeyHandle = 0LL;
  v56 = 0;
  v49 = 0;
  Name = a3->Name;
  v50 = 0;
  if ( !(unsigned __int8)ParseResolutionKeyName(v55, &v49, &v50) )
  {
    v25 = WdLogNewEntry5_WdError(v6, v5);
    goto LABEL_33;
  }
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v55;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = a2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v10 = v7;
  if ( v7 < 0 )
  {
    v26 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v26 + 24) = v10;
LABEL_23:
    WdLogEvent5_WdError(v26);
    goto LABEL_17;
  }
  wcscpy(SourceString, L"ModeX");
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  LODWORD(v10) = -1073741801;
  v11 = 1;
  while ( 1 )
  {
    v12 = KeyHandle;
    v13 = 0LL;
    SourceString[4] = v11 + 48;
    Length = 1024;
    do
    {
      if ( v13 )
        operator delete[](v13);
      v13 = operator new[](Length, 0x4D677844u, PagedPool);
      if ( v13 )
      {
        ResultLength = 0;
        v17 = ZwQueryValueKey(v12, &DestinationString, KeyValuePartialInformation, v13, Length, &ResultLength);
        Length = ResultLength;
        v22 = v17;
      }
      else
      {
        v27 = WdLogNewEntry5_WdError(v16, v15);
        WdLogEvent5_WdError(v27);
        v22 = -1073741801;
      }
    }
    while ( v22 == -2147483643 || v22 == -1073741789 );
    if ( v22 < 0 )
    {
      if ( v13 )
        operator delete[](v13);
      v23 = WdLogNewEntry5_WdTrace(v19, v18, v20, v21);
      *(_QWORD *)(v23 + 24) = v11;
      *(_QWORD *)(v23 + 32) = v22;
      goto LABEL_15;
    }
    ResultLength = 0;
    v51 = 0;
    v52 = 0;
    v53 = 0;
    v28 = ParseFreqRangeValue(
            (_DWORD)v13,
            (unsigned int)&ResultLength,
            (unsigned int)&v51,
            (unsigned int)&v52,
            (__int64)&v53);
    operator delete[](v13);
    if ( !v28 )
      break;
    v31 = (struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)operator new[](0x40uLL, 0x4D677844u, PagedPool);
    v34 = v31;
    if ( !v31 )
    {
      v26 = WdLogNewEntry5_WdError(v33, v32);
      goto LABEL_23;
    }
    v31->RangeLimits.MinVSyncFreq.Numerator = ResultLength;
    v35 = v51;
    v31->Origin = D3DKMDT_MCO_SPECIFICCAP_REGISTRYOVERRIDE;
    v31->ConstraintType = D3DKMDT_MFRC_ACTIVESIZE;
    v36 = v49;
    v34->RangeLimits.MaxVSyncFreq.Numerator = v35;
    v37 = v52;
    v34->Constraint.ActiveSize.cx = v36;
    v38 = v50;
    v34->RangeLimits.MinHSyncFreq.Numerator = v37;
    v34->Constraint.ActiveSize.cy = v38;
    v39 = v53;
    v34->RangeLimits.MinVSyncFreq.Denominator = 1;
    v34->RangeLimits.MaxVSyncFreq.Denominator = 1;
    v34->RangeLimits.MinHSyncFreq.Denominator = 1;
    v34->RangeLimits.MaxHSyncFreq.Numerator = v39;
    v34->RangeLimits.MaxHSyncFreq.Denominator = 1;
    valid = IsValidFrequencyRange(v34);
    v44 = valid;
    if ( valid < 0 )
    {
      v47 = WdLogNewEntry5_WdWarning(v42, v41, v43);
      *(_QWORD *)(v47 + 24) = v44;
      WdLogEvent5_WdWarning(v47);
      operator delete(v34);
    }
    else
    {
      v45 = (DXGMONITOR *)&v34[1];
      v46 = (DXGMONITOR **)*((_QWORD *)this + 34);
      if ( *v46 != (DXGMONITOR *)((char *)this + 264) )
        __fastfail(3u);
      *(_QWORD *)v45 = (char *)this + 264;
      *((_QWORD *)v45 + 1) = v46;
      *v46 = v45;
      *((_QWORD *)this + 34) = v45;
      ++*((_DWORD *)this + 64);
      ++*((_DWORD *)this + 33);
    }
LABEL_15:
    if ( ++v11 >= 9u )
    {
      LODWORD(v10) = 0;
      goto LABEL_17;
    }
  }
  v25 = WdLogNewEntry5_WdError(v30, v29);
  *(_QWORD *)(v25 + 24) = v11;
LABEL_33:
  WdLogEvent5_WdError(v25);
  LODWORD(v10) = -1073741823;
LABEL_17:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v10;
}
