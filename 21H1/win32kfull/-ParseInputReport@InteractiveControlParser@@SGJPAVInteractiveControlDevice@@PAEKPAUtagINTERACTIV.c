/*
 * XREFs of ?ParseInputReport@InteractiveControlParser@@SGJPAVInteractiveControlDevice@@PAEKPAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1B5FB3
 * Callers:
 *     ?ParseInputReport@InteractiveControlInput@@QAEJPAEK@Z @ 0x1B325B (-ParseInputReport@InteractiveControlInput@@QAEJPAEK@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@@Z @ 0x1439C9 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@444@Z @ 0x1AD944 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6GJPBU_tlgPr.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@4444@Z @ 0x1B5587 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A6GJPBU_tl.c)
 *     ?FindDigitizerForDevice@InteractiveControlParser@@CGJPAVInteractiveControlDevice@@@Z @ 0x1B5C93 (-FindDigitizerForDevice@InteractiveControlParser@@CGJPAVInteractiveControlDevice@@@Z.c)
 *     ?GetScaledComponentValue@InteractiveControlParser@@SGJPAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x1B5F36 (-GetScaledComponentValue@InteractiveControlParser@@SGJPAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z.c)
 */

int __userpurge InteractiveControlParser::ParseInputReport@<eax>(
        CHAR *a1@<edx>,
        int a2@<ecx>,
        struct InteractiveControlDevice *ReportLength,
        unsigned __int8 *a4,
        unsigned int a5,
        struct tagINTERACTIVECTRL_INFO *a6)
{
  unsigned __int8 *v7; // esi
  int v8; // edx
  struct _HIDP_PREPARSED_DATA *v9; // eax
  _DWORD *v10; // ecx
  _DWORD *v11; // edi
  bool v12; // zf
  int v13; // eax
  NTSTATUS Usages; // edx
  LONG v15; // ecx
  int v16; // edi
  NTSTATUS v17; // eax
  int v18; // eax
  LONG v19; // eax
  int v20; // eax
  char v21; // cl
  int v22; // ecx
  int v23; // eax
  int ScaledComponentValue; // eax
  int v25; // esi
  int v26; // eax
  int v27; // ecx
  int v28; // edx
  int v29; // eax
  bool v30; // sf
  int v31; // ecx
  int v32; // eax
  int v33; // eax
  int v34; // ecx
  NTSTATUS v36; // [esp+Ch] [ebp-54h] BYREF
  LONG v37; // [esp+10h] [ebp-50h] BYREF
  LONG v38; // [esp+14h] [ebp-4Ch]
  const char *v39; // [esp+18h] [ebp-48h] BYREF
  NTSTATUS v40; // [esp+1Ch] [ebp-44h] BYREF
  int v41; // [esp+20h] [ebp-40h] BYREF
  _DWORD *v42; // [esp+24h] [ebp-3Ch]
  PHIDP_PREPARSED_DATA PreparsedData; // [esp+28h] [ebp-38h]
  PCHAR Report; // [esp+2Ch] [ebp-34h]
  unsigned __int8 *v45; // [esp+30h] [ebp-30h]
  ULONG UsageLength; // [esp+34h] [ebp-2Ch] BYREF
  int v47; // [esp+38h] [ebp-28h] BYREF
  int v48; // [esp+3Ch] [ebp-24h] BYREF
  char v49; // [esp+43h] [ebp-1Dh]
  LONG UsageValue; // [esp+44h] [ebp-1Ch] BYREF
  int v51; // [esp+48h] [ebp-18h]
  int v52; // [esp+4Ch] [ebp-14h] BYREF
  USHORT UsageList[2]; // [esp+50h] [ebp-10h] BYREF
  int v54; // [esp+54h] [ebp-Ch]
  __int16 v55; // [esp+58h] [ebp-8h]

  Report = a1;
  v7 = a4;
  v8 = 0;
  v37 = 0;
  v9 = *(struct _HIDP_PREPARSED_DATA **)(a2 + 196);
  v38 = 0;
  PreparsedData = v9;
  v45 = a4;
  *(_DWORD *)UsageList = 0;
  v52 = 0;
  v54 = 0;
  UsageLength = 5;
  v51 = 0;
  v55 = 0;
  memset(a4, 0, 0x1Cu);
  v10 = *(_DWORD **)(a2 + 148);
  v42 = v10;
  if ( v10 == (_DWORD *)(a2 + 148) )
    return 0;
  do
  {
    v11 = v10;
    UsageValue = 0;
    v47 = (int)v10;
    v12 = v10[23] == 0;
    v42 = (_DWORD *)*v42;
    if ( !v12 )
      goto LABEL_32;
    v13 = v10[2];
    if ( v13 == 5 || v13 == 7 )
    {
      UsageLength = 5;
      Usages = HidP_GetUsages(
                 HidP_Input,
                 *((_WORD *)v10 + 8),
                 *((_WORD *)v10 + 11),
                 UsageList,
                 &UsageLength,
                 PreparsedData,
                 Report,
                 (ULONG)ReportLength);
      v18 = 0;
      v52 = Usages;
      if ( !UsageLength )
        goto LABEL_7;
      while ( UsageList[v18] != *(_WORD *)(v47 + 72) )
      {
        if ( ++v18 >= UsageLength )
          goto LABEL_7;
      }
      v15 = 1;
      UsageValue = 1;
    }
    else
    {
      if ( v13 != 1 )
      {
        Usages = HidP_GetScaledUsageValue(
                   HidP_Input,
                   *((_WORD *)v10 + 8),
                   *((_WORD *)v10 + 11),
                   *((_WORD *)v10 + 36),
                   &UsageValue,
                   PreparsedData,
                   Report,
                   (ULONG)ReportLength);
        v52 = Usages;
LABEL_7:
        v15 = UsageValue;
        goto LABEL_8;
      }
      v17 = HidP_GetUsageValue(
              HidP_Input,
              *((_WORD *)v10 + 8),
              *((_WORD *)v10 + 11),
              *((_WORD *)v10 + 36),
              (PULONG)&UsageValue,
              PreparsedData,
              Report,
              (ULONG)ReportLength);
      v15 = UsageValue;
      Usages = v17;
      v52 = v17;
      if ( UsageValue < v11[14] || UsageValue > v11[15] )
      {
        Usages = -2146369535;
        v52 = -2146369535;
      }
    }
LABEL_8:
    if ( Usages >= 0 )
    {
      if ( v11[2] != 1 )
      {
        if ( v11[2] == 3 )
        {
          if ( v15 )
          {
            if ( v11[26] )
            {
              ScaledComponentValue = InteractiveControlParser::GetScaledComponentValue(v11, v15);
              v25 = v11[24];
              v26 = v25 + ScaledComponentValue;
              v27 = v11[25];
              v11[24] = v26;
              v48 = v27;
              v28 = v26 / v27;
              v29 = v26 / v27 * v27;
              *((_DWORD *)v45 + 6) = v29;
              v48 = v11[24];
              v30 = (v25 ^ v48) < 0;
              v7 = v45;
              if ( v30 )
              {
                v31 = *(_DWORD *)(v47 + 100);
                if ( v48 <= 0 )
                  v32 = v29 - v31;
                else
                  v32 = v31 + v29;
                *((_DWORD *)v45 + 6) = v32;
              }
              *((_DWORD *)v7 + 6) = v28 * v11[25];
              v11[24] -= v28 * v11[25];
            }
            else if ( (unsigned int)dword_2662F8 > 2 )
            {
              v39 = (const char *)v11[25];
              v23 = v11[24];
              v40 = 0;
              v41 = v23;
              v36 = Usages;
              v47 = 3;
              v48 = (int)"InteractiveControlParser::ParseInputReport -> Invalid component configuration";
              _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                v15,
                byte_2576A6,
                v15,
                v15,
                (const char **)&v48,
                (int)&v36,
                (int)&v47,
                (int)&v41,
                (int)&v40,
                (int)&v39);
            }
          }
          goto LABEL_31;
        }
        if ( v11[2] == 5 || v11[2] == 7 )
        {
          if ( v15 )
            *((_DWORD *)v7 + 5) |= v11[22];
          goto LABEL_31;
        }
        if ( v11[2] == 8 && v15 )
        {
          *((_DWORD *)v7 + 5) |= v11[22];
          v19 = InteractiveControlParser::GetScaledComponentValue(v11, v15);
          UsageValue = v19;
          if ( *(_DWORD *)(a2 + 140) == 1 )
          {
            *(_DWORD *)(a2 + 172) = v19;
          }
          else
          {
            v22 = *((unsigned __int16 *)v11 + 36);
            if ( v22 == 72 )
            {
              *(_DWORD *)(a2 + 172) = v19;
              goto LABEL_31;
            }
            if ( v22 != 73 )
              goto LABEL_31;
          }
          *(_DWORD *)(a2 + 176) = v19;
        }
LABEL_31:
        v8 = v51;
LABEL_32:
        v16 = v52;
        goto LABEL_33;
      }
      v8 = 1;
      if ( *((_WORD *)v11 + 8) == 1 )
      {
        v33 = *((unsigned __int16 *)v11 + 36);
        if ( v33 == 48 )
        {
          v37 = v15;
LABEL_62:
          *((_DWORD *)v7 + 5) |= v11[22];
          goto LABEL_63;
        }
        if ( v33 == 49 )
        {
          v38 = v15;
          goto LABEL_62;
        }
      }
LABEL_63:
      v51 = 1;
      goto LABEL_32;
    }
    if ( Usages != -2146369535 && (unsigned int)dword_2662F8 > 2 )
    {
      v47 = *(unsigned __int16 *)(a2 + 48);
      v52 = (int)ReportLength;
      v41 = v11[2];
      v40 = Usages;
      v39 = "InteractiveControlParser::ParseInputReport -> HidP_GetUsageValue failed.";
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v15,
        byte_257722,
        v15,
        v15,
        &v39,
        (int)&v40,
        (int)&v41,
        (int)&v52,
        (int)&v47);
    }
    v8 = v51;
    v16 = 0;
    v52 = 0;
LABEL_33:
    v10 = v42;
  }
  while ( v42 != (_DWORD *)(a2 + 148) );
  if ( v8 )
  {
    if ( !*(_DWORD *)(a2 + 188) )
    {
      v20 = *(_DWORD *)(a2 + 192);
      v21 = 0;
      v49 = 0;
      if ( v20 == 100 )
      {
        if ( (unsigned int)dword_2662F8 > 3 )
        {
          v48 = (int)"No mapped digitizer found for positional data. Attempting to rematch...";
          _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
            (int)&dword_2662F8,
            byte_257676,
            0,
            0,
            (const char **)&v48);
        }
        if ( InteractiveControlParser::FindDigitizerForDevice((_DWORD *)a2) < 0 )
          v21 = v49;
        else
          v21 = 1;
        *(_DWORD *)(a2 + 192) = 0;
        v20 = 0;
        v8 = v51;
      }
      if ( !v21 )
      {
        *((_DWORD *)v7 + 5) &= ~2u;
        v8 = 0;
        v20 = *(_DWORD *)(a2 + 192);
      }
      *(_DWORD *)(a2 + 192) = v20 + 1;
    }
    if ( v8 )
    {
      v34 = *(_DWORD *)(a2 + 188);
      if ( v34 )
        RIMTransformCoordinatesFromDigitizer(v34, &v37, v7 + 12, v7 + 4);
    }
  }
  return v16;
}
