/*
 * XREFs of IopLiveDumpTraceCaptureDumpDataBufferingDuration @ 0x1405038E0
 * Callers:
 *     IopLiveDumpStartDumpDataBuffering @ 0x1409AA6E8 (IopLiveDumpStartDumpDataBuffering.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14026C434 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14026C5B4 (_tlgKeywordOn.c)
 *     EtwWriteEx @ 0x1402934F0 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1405034E0 (IopLiveDumpIsTracingEnabled.c)
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
        if ( (unsigned int)dword_140C04498 > 5 )
        {
          LOBYTE(v2) = tlgKeywordOn((__int64)&dword_140C04498, 0x200000000000LL);
          if ( (_BYTE)v2 )
          {
            v5 = *v4;
            v12 = 0;
            v7 = v5;
            v11 = 8;
            v10 = &v7;
            LOBYTE(v2) = tlgWriteTransfer_EtwWriteTransfer(
                           (__int64)&dword_140C04498,
                           (unsigned __int8 *)&word_14002398E,
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
