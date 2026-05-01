/*
 * XREFs of ?ArHamCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z @ 0x1800838A0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     CemRcObjectDereference @ 0x180027240 (CemRcObjectDereference.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180063484 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@53@Z @ 0x1800836E4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U3@U1@@-$_tl.c)
 *     ?ArActClearChangeInProgress@@YAXPEAU_AR_ACTIVITY@@@Z @ 0x180083F70 (-ArActClearChangeInProgress@@YAXPEAU_AR_ACTIVITY@@@Z.c)
 *     ?ArActClose@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x180083FDC (-ArActClose@@YAJPEAU_AR_ACTIVITY@@@Z.c)
 *     ?ArActRestart@@YAJPEAU_AR_ACTIVITY@@W4_AR_STATE_CHANGE_EVENT@@@Z @ 0x180084130 (-ArActRestart@@YAJPEAU_AR_ACTIVITY@@W4_AR_STATE_CHANGE_EVENT@@@Z.c)
 *     ?ArActWaitNoChangeInProgress@@YAXPEAU_AR_ACTIVITY@@@Z @ 0x1800841A0 (-ArActWaitNoChangeInProgress@@YAXPEAU_AR_ACTIVITY@@@Z.c)
 */

void __fastcall ArHamCallback(struct _HAM_ACTIVITY_CALLBACK_PAYLOAD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rsi
  int v4; // ecx
  char v5; // r12
  unsigned __int64 v6; // rbx
  int v7; // ecx
  int v8; // ecx
  int v9; // r14d
  unsigned __int64 v10; // rdi
  char v11; // bl
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // [rsp+58h] [rbp-9h] BYREF
  _BYTE v19[3]; // [rsp+59h] [rbp-8h] BYREF
  int v20; // [rsp+5Ch] [rbp-5h] BYREF
  __int64 v21; // [rsp+60h] [rbp-1h] BYREF
  __int64 v22; // [rsp+68h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+70h] [rbp+Fh] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(v2, (unsigned __int8 *)dword_1800A242A, 0LL, 0LL, 2u, &v23);
  v3 = *((_QWORD *)a1 + 1);
  v4 = *((_DWORD *)a1 + 4);
  v5 = *(_BYTE *)(v3 + 52);
  v6 = *(_QWORD *)(v3 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( !v4 )
    goto LABEL_17;
  v7 = v4 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( !v8 )
    {
      ArActWaitNoChangeInProgress(*((struct _AR_ACTIVITY **)a1 + 1));
      v9 = ArActClose((struct _AR_ACTIVITY *)v3);
      ArActClearChangeInProgress((struct _AR_ACTIVITY *)v3);
      goto LABEL_18;
    }
    if ( v8 != 1 )
    {
      v9 = -1073741811;
      goto LABEL_18;
    }
LABEL_17:
    v9 = 0;
    goto LABEL_18;
  }
  ArActWaitNoChangeInProgress(*((struct _AR_ACTIVITY **)a1 + 1));
  v9 = HamStopActivity(*(_QWORD *)((*(_QWORD *)(v3 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + 72), *(_QWORD *)(v3 + 40));
  if ( v9 >= 0 )
  {
    *(_BYTE *)(v3 + 52) = 0;
    v9 = 0;
  }
  ArActClearChangeInProgress((struct _AR_ACTIVITY *)v3);
  if ( v9 >= 0 )
  {
    v10 = v6 + 48;
    RtlAcquireSRWLockShared(v6 + 48);
    v11 = *(_BYTE *)(v6 + 64);
    RtlReleaseSRWLockShared(v10);
    if ( (v11 & 1) == 0 )
    {
      ArActWaitNoChangeInProgress((struct _AR_ACTIVITY *)v3);
      v9 = ArActRestart(v3);
      ArActClearChangeInProgress((struct _AR_ACTIVITY *)v3);
      if ( (unsigned int)dword_1800B3218 <= 4 )
        goto LABEL_21;
      if ( tlgKeywordOn((__int64)&dword_1800B3218, 64LL) )
      {
        v21 = *(_QWORD *)(v3 + 40);
        v20 = v9;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          v12,
          byte_1800A2480,
          v13,
          v14,
          (__int64)&v20,
          (__int64)&v21);
      }
    }
  }
LABEL_18:
  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 8LL) )
  {
    v20 = *((_DWORD *)a1 + 4);
    v19[0] = *(_BYTE *)(v3 + 52);
    v22 = *(_QWORD *)a1;
    v18 = v5;
    LODWORD(v21) = v9;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
      v15,
      byte_1800A23D8,
      v16,
      v17,
      (__int64)&v21,
      (__int64)&v22,
      (__int64)v19,
      (__int64)&v18,
      (__int64)&v20);
  }
LABEL_21:
  if ( *((_DWORD *)a1 + 4) == 3 )
    CemRcObjectDereference((_QWORD *)v3);
}
