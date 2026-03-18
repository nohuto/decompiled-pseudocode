/*
 * XREFs of ?SendHapticFeedbackOutput@SimpleHapticsController@@QAEJABU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1B4F4C
 * Callers:
 *     ?SendHapticFeedbackOutput@InteractiveControlDevice@@QAEJABU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1B269C (-SendHapticFeedbackOutput@InteractiveControlDevice@@QAEJABU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@@Z @ 0x1AD82B (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U3@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$01@@ABU?$_tlgWrapperByVal@$03@@55@Z @ 0x1B4044 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U3@@-$_tlgWriteTe.c)
 */

NTSTATUS __thiscall SimpleHapticsController::SendHapticFeedbackOutput(SimpleHapticsController *this, ULONG *UsageValue)
{
  ULONG *v2; // ebx
  unsigned int v4; // ecx
  NTSTATUS v5; // edi
  int v6; // eax
  unsigned int v7; // edx
  int v8; // eax
  int v9; // ecx
  void *v11; // [esp-10h] [ebp-34h]
  ULONG v12; // [esp-Ch] [ebp-30h]
  union _LARGE_INTEGER ByteOffset; // [esp+Ch] [ebp-18h] BYREF
  _BYTE *v14; // [esp+14h] [ebp-10h] BYREF
  ULONG v15; // [esp+18h] [ebp-Ch] BYREF
  ULONG v16; // [esp+1Ch] [ebp-8h] BYREF
  ULONG v17; // [esp+20h] [ebp-4h]

  v2 = UsageValue;
  v4 = 0;
  v5 = 0;
  v17 = 0;
  if ( (unsigned int)dword_2662D0 > 4 )
  {
    v16 = UsageValue[3];
    v15 = UsageValue[2];
    v14 = (_BYTE *)UsageValue[1];
    HIWORD(UsageValue) = *(_WORD *)UsageValue;
    ByteOffset.HighPart = (LONG)"SimpleHapticsController::GetReportInfo entry";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      0,
      byte_25758D,
      0,
      0,
      (const char **)&ByteOffset.HighPart,
      (int)&UsageValue + 2,
      (int)&v14,
      (int)&v15,
      (int)&v16);
    v4 = 0;
  }
  if ( *((_WORD *)this + 18) && (v14 = (_BYTE *)*((_DWORD *)this + 8)) != 0 && *((_DWORD *)this + 3) )
  {
    v6 = v2[2];
    if ( v6 <= 0 )
      UsageValue = 0;
    else
      UsageValue = (ULONG *)(v6 - 1);
    v7 = *(unsigned __int16 *)v2;
    if ( v7 > 2 )
    {
      ByteOffset.HighPart = *((_DWORD *)this + 12);
      if ( !ByteOffset.HighPart )
        goto LABEL_14;
      v8 = *((_DWORD *)this + 11);
      while ( *(_WORD *)v8 != (_WORD)v7 )
      {
        ++v4;
        v8 += 8;
        if ( v4 >= ByteOffset.HighPart )
          goto LABEL_14;
      }
      if ( !v8 )
      {
LABEL_14:
        v5 = -1073741811;
        goto LABEL_22;
      }
      v9 = v2[3];
      if ( v9 > 0 )
        v17 = v9 + *(_DWORD *)(v8 + 4);
    }
    *v14 = 1;
    if ( HidP_SetUsageValue(
           HidP_Output,
           0xEu,
           0,
           0x21u,
           *(unsigned __int16 *)v2,
           *((PHIDP_PREPARSED_DATA *)this + 2),
           *((PCHAR *)this + 8),
           *((unsigned __int16 *)this + 18)) >= 0 )
    {
      HidP_SetUsageValue(
        HidP_Output,
        0xEu,
        0,
        0x24u,
        (ULONG)UsageValue,
        *((PHIDP_PREPARSED_DATA *)this + 2),
        *((PCHAR *)this + 8),
        *((unsigned __int16 *)this + 18));
      HidP_SetUsageValue(
        HidP_Output,
        0xEu,
        0,
        0x25u,
        v17,
        *((PHIDP_PREPARSED_DATA *)this + 2),
        *((PCHAR *)this + 8),
        *((unsigned __int16 *)this + 18));
      HidP_SetUsageValue(
        HidP_Output,
        0xEu,
        0,
        0x23u,
        v2[1],
        *((PHIDP_PREPARSED_DATA *)this + 2),
        *((PCHAR *)this + 8),
        *((unsigned __int16 *)this + 18));
      v12 = *((unsigned __int16 *)this + 18);
      v11 = (void *)*((_DWORD *)this + 8);
      ByteOffset.QuadPart = 0LL;
      v5 = ZwWriteFile(*((HANDLE *)this + 3), 0, 0, 0, (PIO_STATUS_BLOCK)((char *)this + 20), v11, v12, &ByteOffset, 0);
      if ( v5 >= 0 )
      {
        *((_DWORD *)this + 5) = 0;
        *((_DWORD *)this + 6) = 0;
        v5 = ZwFlushBuffersFile(*((HANDLE *)this + 3), (PIO_STATUS_BLOCK)((char *)this + 20));
      }
    }
  }
  else
  {
    v5 = -1073740701;
  }
LABEL_22:
  if ( (unsigned int)dword_2662D0 > 4 )
  {
    UsageValue = (ULONG *)v5;
    ByteOffset.HighPart = (LONG)"SimpleHapticsController::SendHapticFeedbackOutput exit";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (int)&dword_2662D0,
      byte_2574E6,
      v4,
      v4,
      (const char **)&ByteOffset.HighPart,
      (int)&UsageValue);
  }
  return v5;
}
