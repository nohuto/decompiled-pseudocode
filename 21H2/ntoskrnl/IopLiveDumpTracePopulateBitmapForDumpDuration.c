/*
 * XREFs of IopLiveDumpTracePopulateBitmapForDumpDuration @ 0x14050A018
 * Callers:
 *     IopLiveDumpPopulateBitmapForDump @ 0x1409AE0F8 (IopLiveDumpPopulateBitmapForDump.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     IopLiveDumpIsTracingEnabled @ 0x140508C5C (IopLiveDumpIsTracingEnabled.c)
 */

char __fastcall IopLiveDumpTracePopulateBitmapForDumpDuration(const GUID *a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  _DWORD *v5; // rcx
  const EVENT_DESCRIPTOR *v6; // rdx
  __int64 v8; // [rsp+48h] [rbp-29h] BYREF
  __int64 v9; // [rsp+50h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-19h] BYREF
  __int64 *v11; // [rsp+68h] [rbp-9h]
  int v12; // [rsp+70h] [rbp-1h]
  int v13; // [rsp+74h] [rbp+3h]
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+78h] [rbp+7h] BYREF
  __int64 *v15; // [rsp+98h] [rbp+27h]
  int v16; // [rsp+A0h] [rbp+2Fh]
  int v17; // [rsp+A4h] [rbp+33h]
  __int64 *v18; // [rsp+A8h] [rbp+37h]
  int v19; // [rsp+B0h] [rbp+3Fh]
  int v20; // [rsp+B4h] [rbp+43h]
  __int64 v21; // [rsp+E0h] [rbp+6Fh] BYREF
  __int64 v22; // [rsp+E8h] [rbp+77h] BYREF

  v22 = a3;
  v21 = a2;
  LOBYTE(v4) = IopLiveDumpIsTracingEnabled();
  if ( (_BYTE)v4 )
  {
    if ( !v5[104] )
    {
      v4 = v5[78];
      if ( (v4 & 1) != 0 )
      {
        UserData.Reserved = 0;
        v13 = 0;
        v6 = (const EVENT_DESCRIPTOR *)LIVEDUMP_EVENT_SIZING_WORKFLOW_SYSTEM_QUISCED_POPULATE_BITMAP_FOR_DUMP;
        UserData.Ptr = (ULONGLONG)&v21;
        v11 = &v22;
        if ( (v5[20] & 1) == 0 )
          v6 = &LIVEDUMP_EVENT_CAPTURE_PAGES_WORKFLOW_SYSTEM_QUISCED_POPULATE_BITMAP_FOR_DUMP;
        UserData.Size = 8;
        v12 = 8;
        LOBYTE(v4) = EtwWriteEx(IopLiveDumpEtwRegHandle, v6, 0LL, 0, 0LL, 0LL, 2u, &UserData);
        if ( (unsigned int)dword_140C044D8 > 5 )
        {
          LOBYTE(v4) = tlgKeywordOn((__int64)&dword_140C044D8, 0x200000000000LL);
          if ( (_BYTE)v4 )
          {
            v17 = 0;
            v20 = 0;
            v8 = v21;
            v16 = 8;
            v15 = &v8;
            v9 = v22;
            v18 = &v9;
            v19 = 8;
            LOBYTE(v4) = tlgWriteTransfer_EtwWriteTransfer(
                           (__int64)&dword_140C044D8,
                           (unsigned __int8 *)&word_140024BEE,
                           a1 + 54,
                           a1 + 53,
                           4u,
                           &v14);
          }
        }
      }
    }
  }
  return v4;
}
