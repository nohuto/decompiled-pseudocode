/*
 * XREFs of ?DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z @ 0x1C01751D8
 * Callers:
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C0175A38 (rimDispatchAutoRepeatCompleteFrame.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0176404 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimProcessCompleteFrame @ 0x1C01766A8 (rimProcessCompleteFrame.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@555@Z @ 0x1C0174B24 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@@-$_t.c)
 */

char __fastcall InputTraceLogging::RIM::DispatchFrame(__int64 a1, __int64 a2, int a3)
{
  _UNKNOWN **v3; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // ebx
  const char *v13; // rax
  int v15; // [rsp+68h] [rbp-19h] BYREF
  int v16; // [rsp+6Ch] [rbp-15h] BYREF
  __int64 v17; // [rsp+70h] [rbp-11h] BYREF
  __int64 v18; // [rsp+78h] [rbp-9h] BYREF
  __int64 v19; // [rsp+80h] [rbp-1h] BYREF
  __int64 v20; // [rsp+88h] [rbp+7h] BYREF
  __int64 v21; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v22; // [rsp+98h] [rbp+17h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+A0h] [rbp+1Fh] BYREF
  __int64 *v24; // [rsp+C0h] [rbp+3Fh]
  int v25; // [rsp+C8h] [rbp+47h]
  int v26; // [rsp+CCh] [rbp+4Bh]
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+5Fh] BYREF

  v3 = &retaddr;
  if ( a3 == 1 && (unsigned int)dword_1C0246A70 > 4 )
  {
    LOBYTE(v3) = tlgKeywordOn((__int64)&dword_1C0246A70, 256LL);
    if ( (_BYTE)v3 )
    {
      v26 = 0;
      v24 = &v18;
      v18 = a1;
      v25 = 8;
      LOBYTE(v3) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_1C0246A70,
                     (unsigned __int8 *)dword_1C0217AB4,
                     0LL,
                     0LL,
                     3u,
                     &v23);
    }
  }
  if ( *(_DWORD *)(a2 + 24) )
    v3 = *(_UNKNOWN ***)(a2 + 120);
  if ( (unsigned int)dword_1C0246A70 > 4 )
  {
    LOBYTE(v3) = tlgKeywordOn((__int64)&dword_1C0246A70, 256LL);
    if ( (_BYTE)v3 )
    {
      v9 = *(_QWORD *)(a1 + 472);
      v10 = *(_QWORD *)(a2 + 40);
      v11 = *(unsigned __int16 *)(v9 + 16);
      v15 = *(unsigned __int16 *)(v9 + 18);
      LODWORD(v17) = *(_DWORD *)(a2 + 84);
      v16 = v11;
      LODWORD(v18) = v7;
      if ( a3 )
      {
        v12 = a3 - 1;
        if ( v12 )
        {
          if ( v12 == 1 )
            v13 = "Queued";
          else
            v13 = "UNKNOWN";
        }
        else
        {
          v13 = "AutoRepeat";
        }
      }
      else
      {
        v13 = "Immediate";
      }
      v19 = (__int64)v13;
      v20 = v10;
      v21 = v8;
      v22 = a1;
      LOBYTE(v3) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                     (__int64)&dword_1C0246A70,
                     byte_1C0217A3A,
                     v7,
                     v8,
                     (__int64)&v22,
                     (__int64)&v21,
                     (__int64)&v20,
                     (void **)&v19,
                     (__int64)&v18,
                     (__int64)&v17,
                     (__int64)&v16,
                     (__int64)&v15);
    }
  }
  return (char)v3;
}
