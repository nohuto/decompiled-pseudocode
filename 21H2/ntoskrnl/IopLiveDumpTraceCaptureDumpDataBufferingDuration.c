/*
 * XREFs of IopLiveDumpTraceCaptureDumpDataBufferingDuration @ 0x14055ABF4
 * Callers:
 *     IopLiveDumpStartDumpDataBuffering @ 0x140A67994 (IopLiveDumpStartDumpDataBuffering.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14020A9C4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402A2000 (_tlgKeywordOn.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     IopLiveDumpIsTracingEnabled @ 0x14055A67C (IopLiveDumpIsTracingEnabled.c)
 */

char __fastcall IopLiveDumpTraceCaptureDumpDataBufferingDuration(const GUID *a1)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 *v4; // rdi
  __int64 v6; // [rsp+40h] [rbp-19h] BYREF
  __int64 v7; // [rsp+48h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+60h] [rbp+7h] BYREF
  __int64 *v10; // [rsp+80h] [rbp+27h]
  int v11; // [rsp+88h] [rbp+2Fh]
  int v12; // [rsp+8Ch] [rbp+33h]
  __int64 *v13; // [rsp+90h] [rbp+37h]
  int v14; // [rsp+98h] [rbp+3Fh]
  int v15; // [rsp+9Ch] [rbp+43h]

  LOBYTE(v2) = IopLiveDumpIsTracingEnabled();
  if ( (_BYTE)v2 )
  {
    if ( !*(_DWORD *)(v3 + 416) )
    {
      v2 = *(_DWORD *)(v3 + 312);
      if ( (v2 & 1) != 0 )
      {
        UserData.Reserved = 0;
        v4 = (__int64 *)(v3 + 536);
        UserData.Ptr = v3 + 536;
        UserData.Size = 8;
        LOBYTE(v2) = EtwWriteEx(
                       IopLiveDumpEtwRegHandle,
                       &LIVEDUMP_EVENT_CAPTURE_PAGES_WORKFLOW_SYSTEM_QUISCED_DUMP_DATA_BUFFERING,
                       0LL,
                       0,
                       0LL,
                       0LL,
                       1u,
                       &UserData);
        if ( (unsigned int)dword_140C064E0 > 5 )
        {
          LOBYTE(v2) = tlgKeywordOn((__int64)&dword_140C064E0, 0x400000000000LL);
          if ( (_BYTE)v2 )
          {
            v12 = 0;
            v15 = 0;
            v10 = &v6;
            v7 = *v4;
            v6 = 0x1000000LL;
            v13 = &v7;
            v11 = 8;
            v14 = 8;
            LOBYTE(v2) = tlgWriteTransfer_EtwWriteTransfer(
                           (__int64)&dword_140C064E0,
                           (unsigned __int8 *)byte_14002B141,
                           a1 + 60,
                           a1 + 59,
                           4u,
                           &v9);
          }
        }
      }
    }
  }
  return v2;
}
