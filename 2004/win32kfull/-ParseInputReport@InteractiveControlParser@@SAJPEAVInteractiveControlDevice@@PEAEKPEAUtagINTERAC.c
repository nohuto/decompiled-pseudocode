/*
 * XREFs of ?ParseInputReport@InteractiveControlParser@@SAJPEAVInteractiveControlDevice@@PEAEKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C025D5E0
 * Callers:
 *     ?ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z @ 0x1C0259A94 (-ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01D5148 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1C025C79C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgP.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4444@Z @ 0x1C025C86C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_t.c)
 *     ?FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@@Z @ 0x1C025D2C0 (-FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@@Z.c)
 *     ?GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x1C025D550 (-GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@.c)
 */

__int64 __fastcall InteractiveControlParser::ParseInputReport(
        struct InteractiveControlDevice *a1,
        PCHAR Report,
        ULONG ReportLength,
        struct tagINTERACTIVECTRL_INFO *a4)
{
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r9
  int v6; // r14d
  int v7; // r13d
  struct InteractiveControlDevice *v9; // r12
  struct InteractiveControlDevice *v10; // rax
  struct InteractiveControlDevice *v11; // rbx
  struct InteractiveControlDevice *v12; // r15
  int v13; // ecx
  NTSTATUS v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  NTSTATUS Usages; // eax
  __int64 v19; // rcx
  NTSTATUS ScaledUsageValue; // eax
  ULONG v21; // eax
  __int16 v22; // cx
  int v23; // eax
  int ScaledComponentValue; // eax
  int v25; // r8d
  int v26; // eax
  int v27; // r9d
  int v28; // eax
  int v29; // r9d
  int v30; // ecx
  __int16 v31; // ax
  int v32; // eax
  bool v33; // bl
  __int64 v34; // rcx
  ULONG v36; // [rsp+50h] [rbp-49h]
  ULONG UsageValue; // [rsp+54h] [rbp-45h] BYREF
  CHAR *v38; // [rsp+58h] [rbp-41h]
  struct _HIDP_PREPARSED_DATA *v39; // [rsp+60h] [rbp-39h]
  ULONG UsageLength; // [rsp+68h] [rbp-31h] BYREF
  int v41; // [rsp+6Ch] [rbp-2Dh] BYREF
  ULONG v42; // [rsp+70h] [rbp-29h] BYREF
  int v43; // [rsp+74h] [rbp-25h] BYREF
  int v44; // [rsp+78h] [rbp-21h] BYREF
  const char *v45; // [rsp+80h] [rbp-19h] BYREF
  __int64 v46; // [rsp+88h] [rbp-11h] BYREF
  __int64 v47; // [rsp+90h] [rbp-9h] BYREF
  USHORT UsageList[4]; // [rsp+98h] [rbp-1h] BYREF
  __int16 v49; // [rsp+A0h] [rbp+7h]

  v36 = ReportLength;
  v46 = 0LL;
  v38 = Report;
  PreparsedData = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)a1 + 32);
  v6 = 0;
  v39 = PreparsedData;
  v7 = 0;
  UsageLength = 5;
  *(_OWORD *)a4 = 0LL;
  *((_QWORD *)a4 + 2) = 0LL;
  *((_DWORD *)a4 + 6) = 0;
  v9 = (struct InteractiveControlDevice *)*((_QWORD *)a1 + 23);
  *(_QWORD *)UsageList = 0LL;
  v49 = 0;
  if ( v9 == (struct InteractiveControlDevice *)((char *)a1 + 184) )
    return (unsigned int)v6;
  v10 = (struct InteractiveControlDevice *)((char *)a1 + 184);
  do
  {
    UsageValue = 0;
    v11 = v9;
    v12 = v9;
    v9 = *(struct InteractiveControlDevice **)v9;
    if ( *((_DWORD *)v11 + 25) )
      continue;
    v13 = *((_DWORD *)v11 + 4);
    if ( ((v13 - 1) & 0xFFFFFFF9) != 0 || v13 == 3 )
    {
      ScaledUsageValue = HidP_GetScaledUsageValue(
                           HidP_Input,
                           *((_WORD *)v11 + 12),
                           *((_WORD *)v11 + 15),
                           *((_WORD *)v11 + 40),
                           (PLONG)&UsageValue,
                           PreparsedData,
                           Report,
                           ReportLength);
      v17 = UsageValue;
      v6 = ScaledUsageValue;
    }
    else if ( v13 == 1 )
    {
      v14 = HidP_GetUsageValue(
              HidP_Input,
              *((_WORD *)v12 + 12),
              *((_WORD *)v12 + 15),
              *((_WORD *)v11 + 40),
              &UsageValue,
              PreparsedData,
              Report,
              ReportLength);
      v17 = UsageValue;
      v6 = v14;
      if ( (signed int)UsageValue < *((_DWORD *)v11 + 16) || (signed int)UsageValue > *((_DWORD *)v11 + 17) )
        v6 = -2146369535;
    }
    else
    {
      UsageLength = 5;
      Usages = HidP_GetUsages(
                 HidP_Input,
                 *((_WORD *)v12 + 12),
                 *((_WORD *)v12 + 15),
                 UsageList,
                 &UsageLength,
                 PreparsedData,
                 Report,
                 ReportLength);
      v19 = 0LL;
      v6 = Usages;
      if ( UsageLength )
      {
        v15 = *((unsigned __int16 *)v12 + 40);
        while ( UsageList[v19] != (_WORD)v15 )
        {
          v19 = (unsigned int)(v19 + 1);
          if ( (unsigned int)v19 >= UsageLength )
            goto LABEL_14;
        }
        v17 = 1LL;
        UsageValue = 1;
      }
      else
      {
LABEL_14:
        v17 = UsageValue;
      }
    }
    if ( v6 < 0 )
    {
      if ( v6 != -2146369535 && (unsigned int)dword_1C032B2F8 > 2 )
      {
        v41 = *((unsigned __int16 *)a1 + 40);
        v42 = v36;
        v43 = *((_DWORD *)v11 + 4);
        v45 = "InteractiveControlParser::ParseInputReport -> HidP_GetUsageValue failed.";
        v44 = v6;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v17,
          byte_1C02F323A,
          v15,
          v16,
          (void **)&v45,
          (__int64)&v44,
          (__int64)&v43,
          (__int64)&v42,
          (__int64)&v41);
      }
      v6 = 0;
      goto LABEL_53;
    }
    switch ( *((_DWORD *)v11 + 4) )
    {
      case 1:
        if ( *((_WORD *)v11 + 12) == 1 )
        {
          v31 = *((_WORD *)v11 + 40);
          if ( v31 == 48 )
          {
            LODWORD(v46) = v17;
LABEL_51:
            *((_DWORD *)a4 + 5) |= *((_DWORD *)v11 + 24);
            goto LABEL_52;
          }
          if ( v31 == 49 )
          {
            HIDWORD(v46) = v17;
            goto LABEL_51;
          }
        }
LABEL_52:
        v7 = 1;
        goto LABEL_53;
      case 3:
        if ( (_DWORD)v17 )
        {
          if ( *((_DWORD *)v11 + 28) )
          {
            ScaledComponentValue = InteractiveControlParser::GetScaledComponentValue(v11, v17);
            v25 = *((_DWORD *)v11 + 26);
            v26 = v25 + ScaledComponentValue;
            v27 = *((_DWORD *)v11 + 27);
            *((_DWORD *)v11 + 26) = v26;
            v28 = v26 / v27;
            v29 = v28 * v27;
            *((_DWORD *)a4 + 6) = v29;
            if ( (v25 ^ *((_DWORD *)v11 + 26)) < 0 )
            {
              v30 = *((_DWORD *)v12 + 27);
              if ( *((int *)v11 + 26) <= 0 )
                *((_DWORD *)a4 + 6) = v29 - v30;
              else
                *((_DWORD *)a4 + 6) = v29 + v30;
            }
            *((_DWORD *)a4 + 6) = v28 * *((_DWORD *)v11 + 27);
            *((_DWORD *)v11 + 26) -= v28 * *((_DWORD *)v11 + 27);
          }
          else if ( (unsigned int)dword_1C032B2F8 > 2 )
          {
            v23 = *((_DWORD *)v11 + 27);
            v43 = 0;
            v44 = v23;
            v42 = *((_DWORD *)v11 + 26);
            v47 = (__int64)"InteractiveControlParser::ParseInputReport -> Invalid component configuration";
            v41 = 3;
            LODWORD(v45) = v6;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v17,
              byte_1C02F31BE,
              v15,
              v16,
              (void **)&v47,
              (__int64)&v45,
              (__int64)&v41,
              (__int64)&v42,
              (__int64)&v43,
              (__int64)&v44);
          }
        }
        goto LABEL_53;
      case 5:
      case 7:
        if ( (_DWORD)v17 )
          *((_DWORD *)a4 + 5) |= *((_DWORD *)v11 + 24);
        goto LABEL_53;
    }
    if ( *((_DWORD *)v11 + 4) == 8 && (_DWORD)v17 )
    {
      *((_DWORD *)a4 + 5) |= *((_DWORD *)v11 + 24);
      v21 = InteractiveControlParser::GetScaledComponentValue(v11, v17);
      UsageValue = v21;
      if ( *((_DWORD *)a1 + 43) == 1 )
      {
        *((_DWORD *)a1 + 55) = v21;
      }
      else
      {
        v22 = *((_WORD *)v11 + 40);
        if ( v22 == 72 )
        {
          *((_DWORD *)a1 + 55) = v21;
          goto LABEL_53;
        }
        if ( v22 != 73 )
          goto LABEL_53;
      }
      *((_DWORD *)a1 + 56) = v21;
    }
LABEL_53:
    PreparsedData = v39;
    v10 = (struct InteractiveControlDevice *)((char *)a1 + 184);
    Report = v38;
    ReportLength = v36;
  }
  while ( v9 != v10 );
  if ( v7 )
  {
    if ( !*((_QWORD *)a1 + 30) )
    {
      v32 = *((_DWORD *)a1 + 62);
      v33 = 0;
      if ( v32 == 100 )
      {
        if ( (unsigned int)dword_1C032B2F8 > 3 )
        {
          v47 = (__int64)"No mapped digitizer found for positional data. Attempting to rematch...";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
            (__int64)&dword_1C032B2F8,
            byte_1C02F318E,
            0LL,
            0LL,
            (void **)&v47);
        }
        v33 = (int)InteractiveControlParser::FindDigitizerForDevice(a1) >= 0;
        *((_DWORD *)a1 + 62) = 0;
        v32 = 0;
      }
      if ( !v33 )
      {
        *((_DWORD *)a4 + 5) &= ~2u;
        v32 = *((_DWORD *)a1 + 62);
        v7 = 0;
      }
      *((_DWORD *)a1 + 62) = v32 + 1;
    }
    if ( v7 )
    {
      v34 = *((_QWORD *)a1 + 30);
      if ( v34 )
        RIMTransformCoordinatesFromDigitizer(v34, &v46, (char *)a4 + 12, (char *)a4 + 4);
    }
  }
  return (unsigned int)v6;
}
