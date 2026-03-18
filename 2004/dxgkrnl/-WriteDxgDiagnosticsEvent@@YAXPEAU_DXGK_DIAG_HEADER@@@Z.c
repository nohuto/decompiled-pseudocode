/*
 * XREFs of ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000AA2C
 * Callers:
 *     ?WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000A7DC (-WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     ?WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000A600 (-WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_CODE_POINT@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000AD70 (-WriteDxgDiagnosticsEvent_CODE_POINT@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     _tlgKeywordOn @ 0x1C000AE58 (_tlgKeywordOn.c)
 *     ?WriteDxgDiagnosticsEvent_QDC@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000AF28 (-WriteDxgDiagnosticsEvent_QDC@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_HPD@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C001A018 (-WriteDxgDiagnosticsEvent_HPD@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MONITOR_MGR@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C001A12C (-WriteDxgDiagnosticsEvent_MONITOR_MGR@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_SDC@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C001A17C (-WriteDxgDiagnosticsEvent_SDC@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@43333@Z @ 0x1C00449A0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U1@U1@U1@U1@@-$_tlgWriteTemplate@$.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperBinary@@@Z @ 0x1C0044B38 (--$Write@U-$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?WriteDxgDiagnosticsEvent_CCD_CONNECTEDSET_NOT_FOUND@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0044E5C (-WriteDxgDiagnosticsEvent_CCD_CONNECTEDSET_NOT_FOUND@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_COMMIT_VIDPN_FAILED@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0044EDC (-WriteDxgDiagnosticsEvent_COMMIT_VIDPN_FAILED@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_DRIVER_RECOMMEND_VIDPN@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0045014 (-WriteDxgDiagnosticsEvent_DRIVER_RECOMMEND_VIDPN@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0045094 (-WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0045114 (-WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE_EX2@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0045194 (-WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE_EX2@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS3@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0045214 (-WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS3@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0045294 (-WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_OUTPUTDUPL@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0045314 (-WriteDxgDiagnosticsEvent_OUTPUTDUPL@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_SDCDesktopCheckFailPacket@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00453D4 (-WriteDxgDiagnosticsEvent_SDCDesktopCheckFailPacket@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 */

void __fastcall WriteDxgDiagnosticsEvent(struct _DXGK_DIAG_HEADER *a1)
{
  __int64 v1; // rdx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  int v17; // edx
  int v18; // edx
  void *v20; // rdx
  __int64 v23; // rax
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  char v29; // al
  __int64 v30; // rdx
  __int64 v32; // rax
  char v33; // al
  __int64 v34; // rdx
  unsigned int v35; // r9d
  int v36; // ecx
  int v37; // r8d
  __int64 v38; // rdx
  int v39; // ecx
  int v40; // r8d
  int v41; // r9d
  int v42; // [rsp+60h] [rbp+27h] BYREF
  __int64 v43; // [rsp+68h] [rbp+2Fh] BYREF
  struct _DXGK_DIAG_HEADER *v44; // [rsp+70h] [rbp+37h] BYREF
  __int16 v45; // [rsp+78h] [rbp+3Fh]
  int v46; // [rsp+A0h] [rbp+67h] BYREF
  int v47; // [rsp+A8h] [rbp+6Fh] BYREF
  int v48; // [rsp+B0h] [rbp+77h] BYREF
  int v49; // [rsp+B8h] [rbp+7Fh] BYREF

  v1 = *(unsigned int *)a1;
  if ( (int)v1 <= 24 )
  {
    if ( (_DWORD)v1 == 24 )
    {
      WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE_EX2(a1);
      return;
    }
    if ( (int)v1 <= 9 )
    {
      if ( (_DWORD)v1 == 9 )
      {
        WriteDxgDiagnosticsEvent_CCD_CONNECTEDSET_NOT_FOUND(a1);
        return;
      }
      if ( !(_DWORD)v1 )
        goto LABEL_64;
      v1 = (unsigned int)(v1 - 1);
      if ( !(_DWORD)v1 )
        goto LABEL_64;
      v3 = v1 - 1;
      if ( !v3 )
      {
        WriteDxgDiagnosticsEvent_HPD(a1);
        return;
      }
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          v6 = v5 - 1;
          if ( v6 )
          {
            v7 = v6 - 1;
            if ( !v7 )
            {
              WriteDxgDiagnosticsEvent_CODE_POINT(a1);
              return;
            }
            v1 = (unsigned int)(v7 - 1);
            if ( (_DWORD)v1 == 1 )
            {
              WriteDxgDiagnosticsEvent_MONITOR_MGR(a1);
              return;
            }
            goto LABEL_64;
          }
          if ( (unsigned int)dword_1C00B0A20 <= 4 )
            return;
          if ( !(unsigned __int8)tlgKeywordOn(&dword_1C00B0A20, 0x200000000008LL) )
            return;
          if ( !(unsigned __int8)tlgKeywordOn(&dword_1C00B0A20, v14) )
            return;
          v20 = &unk_1C007F99C;
        }
        else
        {
          if ( (unsigned int)dword_1C00B0A20 <= 4 )
            return;
          if ( !(unsigned __int8)tlgKeywordOn(&dword_1C00B0A20, 0x200000000008LL) )
            return;
          if ( !(unsigned __int8)tlgKeywordOn(&dword_1C00B0A20, v15) )
            return;
          v20 = &unk_1C007F9C2;
        }
      }
      else
      {
        if ( (unsigned int)dword_1C00B0A20 <= 4 )
          return;
        if ( !(unsigned __int8)tlgKeywordOn(&dword_1C00B0A20, 0x200000000004LL) )
          return;
        if ( !(unsigned __int8)tlgKeywordOn(&dword_1C00B0A20, v16) )
          return;
        v20 = &unk_1C007F9E9;
      }
LABEL_63:
      v45 = *((_WORD *)a1 + 2);
      v46 = 5;
      v44 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperBinary>(
        v25,
        (_DWORD)v20,
        v26,
        v27,
        (__int64)&v46,
        (__int64)&v44);
      return;
    }
    if ( (int)v1 > 17 )
    {
      if ( (_DWORD)v1 == 18 )
      {
        WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE(a1);
        return;
      }
      if ( (_DWORD)v1 == 19 )
      {
        WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START(a1);
        return;
      }
      goto LABEL_64;
    }
    if ( (_DWORD)v1 == 17 )
      goto LABEL_64;
    if ( (_DWORD)v1 != 10 )
    {
      if ( (int)v1 > 14 )
      {
        if ( (_DWORD)v1 == 15 )
          WriteDxgDiagnosticsEvent_OUTPUTDUPL(a1);
        else
          WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS(a1);
        return;
      }
      goto LABEL_64;
    }
    goto LABEL_91;
  }
  if ( (int)v1 > 36 )
  {
    v8 = v1 - 37;
    if ( !v8 )
    {
      WriteDxgDiagnosticsEvent_COMMIT_VIDPN_FAILED(a1);
      return;
    }
    v9 = v8 - 1;
    if ( !v9 )
    {
      WriteDxgDiagnosticsEvent_SDC(a1);
      return;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      WriteDxgDiagnosticsEvent_QDC(a1);
      return;
    }
    v17 = v10 - 1;
    if ( !v17 )
    {
      WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS3(a1);
      return;
    }
    v18 = v17 - 1;
    if ( !v18 )
    {
      if ( (unsigned int)dword_1C00B0A20 > 4 )
      {
        v33 = tlgKeywordOn(&dword_1C00B0A20, 0x200000001000LL);
        if ( v33 && (unsigned __int8)tlgKeywordOn(&dword_1C00B0A20, v34) )
        {
          v45 = *((_WORD *)a1 + 2);
          v44 = a1;
          v46 = 6;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperBinary>(
            v36,
            (unsigned int)&unk_1C007F204,
            v37,
            v35,
            (__int64)&v46,
            (__int64)&v44);
          v35 = dword_1C00B0A20;
        }
        if ( v35 > 4
          && (unsigned __int8)tlgKeywordOn(&dword_1C00B0A20, 0x400000001000LL)
          && *((int *)a1 + 12) < 0
          && (unsigned __int8)tlgKeywordOn(&dword_1C00B0A20, v38) )
        {
          v46 = *((_DWORD *)a1 + 18);
          v47 = *((_DWORD *)a1 + 16);
          v48 = *((_DWORD *)a1 + 13);
          v43 = *((_QWORD *)a1 + 10);
          v44 = (struct _DXGK_DIAG_HEADER *)*((_QWORD *)a1 + 7);
          v49 = v41;
          v42 = 6;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v39,
            (unsigned int)&unk_1C007F195,
            v40,
            v41,
            (__int64)&v42,
            (__int64)&v44,
            (__int64)&v43,
            (__int64)&v49,
            (__int64)&v48,
            (__int64)&v47,
            (__int64)&v46);
        }
      }
      return;
    }
    v1 = (unsigned int)(v18 - 1);
    if ( (_DWORD)v1 )
    {
      v1 = (unsigned int)(v1 - 1);
      if ( !(_DWORD)v1 )
      {
        WriteDxgDiagnosticsEvent_SDCDesktopCheckFailPacket(a1);
        return;
      }
      if ( (_DWORD)v1 != 1 )
        goto LABEL_64;
    }
    goto LABEL_91;
  }
  if ( (_DWORD)v1 == 36 )
  {
    if ( (unsigned int)dword_1C00B0A20 > 4 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C00B0A20, 0x200000000800LL) )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C00B0A20, v12) )
        {
          v20 = &unk_1C007F230;
          goto LABEL_63;
        }
      }
    }
    return;
  }
  if ( (_DWORD)v1 == 25 )
  {
    if ( (unsigned int)dword_1C00B0A20 > 4 )
    {
      v29 = tlgKeywordOn(&dword_1C00B0A20, 0x200000000020LL);
      if ( v29 && (unsigned __int8)tlgKeywordOn(&dword_1C00B0A20, v30) )
      {
        v20 = &unk_1C007F373;
        goto LABEL_63;
      }
    }
    return;
  }
  if ( (int)v1 <= 26 )
    goto LABEL_64;
  if ( (int)v1 <= 29 )
  {
LABEL_91:
    v32 = WdLogNewEntry5_WdError(a1, v1);
    *(_QWORD *)(v32 + 24) = *(int *)a1;
    WdLogEvent5_WdError(v32);
    return;
  }
  switch ( (_DWORD)v1 )
  {
    case 0x1E:
      WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID(a1);
      return;
    case 0x20:
      if ( (unsigned int)dword_1C00B0A20 > 4 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C00B0A20, 0x200000000080LL) )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C00B0A20, v13) )
          {
            v20 = &unk_1C007F543;
            goto LABEL_63;
          }
        }
      }
      return;
    case 0x1F:
    case 0x21:
LABEL_64:
      v23 = WdLogNewEntry5_WdAssertion(a1, v1);
      *(_QWORD *)(v23 + 24) = *(int *)a1;
      WdLogEvent5_WdAssertion(v23);
      return;
    case 0x22:
      WriteDxgDiagnosticsEvent_DRIVER_RECOMMEND_VIDPN(a1);
      break;
    default:
      if ( (unsigned int)dword_1C00B0A20 > 4 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C00B0A20, 0x200000000040LL) )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C00B0A20, v11) )
          {
            v20 = &unk_1C007F30F;
            goto LABEL_63;
          }
        }
      }
      break;
  }
}
