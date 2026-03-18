/*
 * XREFs of IopLiveDumpTraceCaptureDumpDataBufferingDuration @ 0x140503290
 * Callers:
 *     IopLiveDumpStartDumpDataBuffering @ 0x1409A9888 (IopLiveDumpStartDumpDataBuffering.c)
 * Callees:
 *     EtwWriteEx @ 0x140256C70 (EtwWriteEx.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402D5DD4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402D5F54 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     IopLiveDumpIsTracingEnabled @ 0x140502E90 (IopLiveDumpIsTracingEnabled.c)
 */

char __fastcall IopLiveDumpTraceCaptureDumpDataBufferingDuration(const GUID *a1)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 *v4; // rdi
  __int64 v5; // rax
  __int64 v7; // [rsp+40h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+58h] [rbp-40h] BYREF
  __int64 *v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+80h] [rbp-18h]
  int v12; // [rsp+84h] [rbp-14h]

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
        if ( (unsigned int)dword_140C04458 > 5 )
        {
          LOBYTE(v2) = tlgKeywordOn((__int64)&dword_140C04458, 0x200000000000LL);
          if ( (_BYTE)v2 )
          {
            v5 = *v4;
            v12 = 0;
            v7 = v5;
            v11 = 8;
            v10 = &v7;
            LOBYTE(v2) = tlgWriteTransfer_EtwWriteTransfer(
                           (__int64)&dword_140C04458,
                           (unsigned __int8 *)&dword_140023894,
                           a1 + 54,
                           a1 + 53,
                           3u,
                           &v9);
          }
        }
      }
    }
  }
  return v2;
}
