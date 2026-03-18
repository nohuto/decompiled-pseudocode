/*
 * XREFs of IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration @ 0x1405033D0
 * Callers:
 *     IopLiveDumpGenerateIptSecondaryData @ 0x1409A89D8 (IopLiveDumpGenerateIptSecondaryData.c)
 * Callees:
 *     EtwWriteEx @ 0x140256C70 (EtwWriteEx.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402D5DD4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402D5F54 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     IopLiveDumpIsTracingEnabled @ 0x140502E90 (IopLiveDumpIsTracingEnabled.c)
 */

char __fastcall IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration(const GUID *a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rcx
  __int64 v6; // [rsp+40h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+58h] [rbp+1Fh] BYREF
  __int64 *v9; // [rsp+78h] [rbp+3Fh]
  int v10; // [rsp+80h] [rbp+47h]
  int v11; // [rsp+84h] [rbp+4Bh]
  __int64 v12; // [rsp+A8h] [rbp+6Fh] BYREF

  v12 = a2;
  LOBYTE(v3) = IopLiveDumpIsTracingEnabled();
  if ( (_BYTE)v3 )
  {
    if ( !*(_DWORD *)(v4 + 416) )
    {
      v3 = *(_DWORD *)(v4 + 312);
      if ( (v3 & 1) != 0 )
      {
        UserData.Reserved = 0;
        UserData.Ptr = (ULONGLONG)&v12;
        UserData.Size = 8;
        LOBYTE(v3) = EtwWriteEx(
                       IopLiveDumpEtwRegHandle,
                       &LIVEDUMP_EVENT_CAPTURE_PAGES_WORKFLOW_SYSTEM_QUISCED_GENERATE_IPT_SECONDARY_DATA,
                       0LL,
                       0,
                       0LL,
                       0LL,
                       1u,
                       &UserData);
        if ( (unsigned int)dword_140C04458 > 5 )
        {
          LOBYTE(v3) = tlgKeywordOn((__int64)&dword_140C04458, 0x200000000000LL);
          if ( (_BYTE)v3 )
          {
            v11 = 0;
            v6 = v12;
            v10 = 8;
            v9 = &v6;
            LOBYTE(v3) = tlgWriteTransfer_EtwWriteTransfer(
                           (__int64)&dword_140C04458,
                           (unsigned __int8 *)&word_140023916,
                           a1 + 54,
                           a1 + 53,
                           3u,
                           &v8);
          }
        }
      }
    }
  }
  return v3;
}
