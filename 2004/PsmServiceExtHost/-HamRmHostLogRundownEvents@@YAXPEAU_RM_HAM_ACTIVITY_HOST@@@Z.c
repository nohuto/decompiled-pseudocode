/*
 * XREFs of ?HamRmHostLogRundownEvents@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007CF6C
 * Callers:
 *     ?HampManagerTracingControlCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x180044740 (-HampManagerTracingControlCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800063F8 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x180006444 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009D90 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x18002A1F0 (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x1800465DC (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@444AEBU?$_tlgWrapperByVal@$00@@5@Z @ 0x18007C41C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@U2@U-$_tlgWrap.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U4@U3@U4@U1@U1@U1@U3@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@656333533@Z @ 0x18007CD98 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByV.c)
 */

void __fastcall HamRmHostLogRundownEvents(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  struct _HAM_ACTIVITY *i; // rax
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // r10
  __int64 v11; // r11
  char v12; // al
  struct _HAM_ACTIVITY *v13; // rbx
  int v14; // [rsp+90h] [rbp-29h] BYREF
  int v15; // [rsp+94h] [rbp-25h] BYREF
  int v16; // [rsp+98h] [rbp-21h] BYREF
  __int64 v17; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v18; // [rsp+A8h] [rbp-11h] BYREF
  void *v19; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v20; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v21; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v22; // [rsp+C8h] [rbp+Fh] BYREF
  void *v23; // [rsp+D0h] [rbp+17h] BYREF
  void *v24; // [rsp+D8h] [rbp+1Fh] BYREF
  _QWORD v25[6]; // [rsp+E0h] [rbp+27h] BYREF
  char v26; // [rsp+120h] [rbp+67h] BYREF
  int v27; // [rsp+128h] [rbp+6Fh] BYREF
  int v28; // [rsp+130h] [rbp+77h] BYREF
  int v29; // [rsp+138h] [rbp+7Fh] BYREF

  HampHostAcquireLockExclusiveEx(a1, 0);
  RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v16, (union _RM_OPTIMIZATION_STATE *)&v29);
  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 8LL) )
  {
    v17 = *((_QWORD *)a1 + 100);
    v26 = *((_BYTE *)a1 + 648);
    v27 = *((_DWORD *)a1 + 160);
    v28 = v29;
    v14 = v16;
    v18 = *((_QWORD *)a1 - 4);
    v15 = *((_DWORD *)a1 + 140);
    v19 = (char *)a1 + 24;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
      v2,
      byte_1800A0B6C,
      v3,
      v4,
      &v19,
      (__int64)&v15,
      (__int64)&v18,
      (__int64)&v14,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v17);
  }
  for ( i = HampHostGetFirstActivity(a1); ; i = HampHostGetNextActivity(v13) )
  {
    v13 = i;
    if ( !i )
      break;
    v6 = *(_QWORD *)(*((_QWORD *)i + 11) + 16LL);
    if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 8LL) )
    {
      v19 = (void *)*((_QWORD *)v13 + 50);
      v18 = *((_QWORD *)v13 + 49);
      v21 = *((_QWORD *)v13 + 64);
      v12 = *((_BYTE *)v13 + 544) & 1;
      v15 = v9;
      v26 = v12;
      v14 = *((_DWORD *)v13 + 106);
      LOBYTE(v27) = *((_BYTE *)v13 + 549);
      LODWORD(v17) = *((_DWORD *)v13 + 28);
      v23 = (char *)v13 + 124;
      v24 = (char *)v13 + 252;
      v25[0] = *((_QWORD *)v13 + 5);
      v20 = v6;
      v22 = v11;
      LOBYTE(v28) = v10;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v7,
        byte_1800A081C,
        v8,
        v9,
        (__int64)v25,
        &v24,
        &v23,
        (__int64)&v17,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v14,
        (__int64)&v26,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v15,
        (__int64)&v18,
        (__int64)&v19);
    }
  }
  HampHostReleaseLockExclusiveEx(a1);
  RmHamHostActOnProcesses(
    (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64),
    0,
    1,
    (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))HampHostLogProcess,
    0LL);
}
