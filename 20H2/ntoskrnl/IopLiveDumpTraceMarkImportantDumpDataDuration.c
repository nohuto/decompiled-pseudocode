/*
 * XREFs of IopLiveDumpTraceMarkImportantDumpDataDuration @ 0x140507DC8
 * Callers:
 *     IopLiveDumpMarkImportantDumpData @ 0x1409AFB58 (IopLiveDumpMarkImportantDumpData.c)
 * Callees:
 *     EtwWriteEx @ 0x14020E0B0 (EtwWriteEx.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140244AF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140244C78 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     IopLiveDumpIsTracingEnabled @ 0x140506EF0 (IopLiveDumpIsTracingEnabled.c)
 */

char __fastcall IopLiveDumpTraceMarkImportantDumpDataDuration(const GUID *a1, __int64 a2)
{
  int v3; // eax
  _DWORD *v4; // rcx
  const EVENT_DESCRIPTOR *v5; // rdx
  __int64 v7; // [rsp+40h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+58h] [rbp+1Fh] BYREF
  __int64 *v10; // [rsp+78h] [rbp+3Fh]
  int v11; // [rsp+80h] [rbp+47h]
  int v12; // [rsp+84h] [rbp+4Bh]
  __int64 v13; // [rsp+A8h] [rbp+6Fh] BYREF

  v13 = a2;
  LOBYTE(v3) = IopLiveDumpIsTracingEnabled();
  if ( (_BYTE)v3 )
  {
    if ( !v4[104] )
    {
      v3 = v4[78];
      if ( (v3 & 1) != 0 )
      {
        UserData.Reserved = 0;
        UserData.Ptr = (ULONGLONG)&v13;
        v5 = (const EVENT_DESCRIPTOR *)LIVEDUMP_EVENT_SIZING_WORKFLOW_SYSTEM_QUISCED_MARK_IMPORTANT_DUMP_DATA;
        if ( (v4[20] & 1) == 0 )
          v5 = &LIVEDUMP_EVENT_CAPTURE_PAGES_WORKFLOW_SYSTEM_QUISCED_MARK_IMPORTANT_DUMP_DATA;
        UserData.Size = 8;
        LOBYTE(v3) = EtwWriteEx(IopLiveDumpEtwRegHandle, v5, 0LL, 0, 0LL, 0LL, 1u, &UserData);
        if ( (unsigned int)dword_140C04498 > 5 )
        {
          LOBYTE(v3) = tlgKeywordOn((__int64)&dword_140C04498, 0x200000000000LL);
          if ( (_BYTE)v3 )
          {
            v12 = 0;
            v7 = v13;
            v11 = 8;
            v10 = &v7;
            LOBYTE(v3) = tlgWriteTransfer_EtwWriteTransfer(
                           (__int64)&dword_140C04498,
                           (unsigned __int8 *)byte_140023BC0,
                           a1 + 54,
                           a1 + 53,
                           3u,
                           &v9);
          }
        }
      }
    }
  }
  return v3;
}
