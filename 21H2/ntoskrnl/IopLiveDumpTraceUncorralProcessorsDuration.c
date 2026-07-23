/*
 * XREFs of IopLiveDumpTraceUncorralProcessorsDuration @ 0x14050A354
 * Callers:
 *     IopLiveDumpUncorralProcessors @ 0x1409AE518 (IopLiveDumpUncorralProcessors.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     IopLiveDumpIsTracingEnabled @ 0x140508C5C (IopLiveDumpIsTracingEnabled.c)
 */

char IopLiveDumpTraceUncorralProcessorsDuration(const GUID *a1, ...)
{
  int v2; // eax
  _DWORD *v3; // rcx
  const EVENT_DESCRIPTOR *v4; // rdx
  __int64 v6; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v7; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v8; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v9; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-A0h] BYREF
  va_list v11; // [rsp+78h] [rbp-90h]
  int v12; // [rsp+80h] [rbp-88h]
  int v13; // [rsp+84h] [rbp-84h]
  va_list v14; // [rsp+88h] [rbp-80h]
  int v15; // [rsp+90h] [rbp-78h]
  int v16; // [rsp+94h] [rbp-74h]
  va_list v17; // [rsp+98h] [rbp-70h]
  int v18; // [rsp+A0h] [rbp-68h]
  int v19; // [rsp+A4h] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+A8h] [rbp-60h] BYREF
  __int64 *v21; // [rsp+C8h] [rbp-40h]
  int v22; // [rsp+D0h] [rbp-38h]
  int v23; // [rsp+D4h] [rbp-34h]
  __int64 *v24; // [rsp+D8h] [rbp-30h]
  int v25; // [rsp+E0h] [rbp-28h]
  int v26; // [rsp+E4h] [rbp-24h]
  __int64 *v27; // [rsp+E8h] [rbp-20h]
  int v28; // [rsp+F0h] [rbp-18h]
  int v29; // [rsp+F4h] [rbp-14h]
  __int64 *v30; // [rsp+F8h] [rbp-10h]
  int v31; // [rsp+100h] [rbp-8h]
  int v32; // [rsp+104h] [rbp-4h]
  __int64 v33; // [rsp+140h] [rbp+38h] BYREF
  va_list va; // [rsp+140h] [rbp+38h]
  __int64 v35; // [rsp+148h] [rbp+40h] BYREF
  va_list va1; // [rsp+148h] [rbp+40h]
  __int64 v37; // [rsp+150h] [rbp+48h] BYREF
  va_list va2; // [rsp+150h] [rbp+48h]
  __int64 v39; // [rsp+158h] [rbp+50h] BYREF
  va_list va3; // [rsp+158h] [rbp+50h]
  va_list va4; // [rsp+160h] [rbp+58h] BYREF

  va_start(va4, a1);
  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v33 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v35 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v37 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v39 = va_arg(va4, _QWORD);
  LOBYTE(v2) = IopLiveDumpIsTracingEnabled();
  if ( (_BYTE)v2 )
  {
    if ( !v3[104] )
    {
      v2 = v3[78];
      if ( (v2 & 1) != 0 )
      {
        UserData.Reserved = 0;
        v13 = 0;
        v4 = (const EVENT_DESCRIPTOR *)LIVEDUMP_EVENT_SIZING_WORKFLOW_SYSTEM_QUISCED_UNCORRAL_PROCESSORS;
        v16 = 0;
        v19 = 0;
        va_copy((va_list)UserData.Ptr, va);
        va_copy(v11, va1);
        va_copy(v14, va2);
        va_copy(v17, va3);
        if ( (v3[20] & 1) == 0 )
          v4 = &LIVEDUMP_EVENT_CAPTURE_PAGES_WORKFLOW_SYSTEM_QUISCED_UNCORRAL_PROCESSORS;
        UserData.Size = 8;
        v12 = 8;
        v15 = 8;
        v18 = 8;
        LOBYTE(v2) = EtwWriteEx(IopLiveDumpEtwRegHandle, v4, 0LL, 0, 0LL, 0LL, 4u, &UserData);
        if ( (unsigned int)dword_140C044D8 > 5 )
        {
          LOBYTE(v2) = tlgKeywordOn((__int64)&dword_140C044D8, 0x200000000000LL);
          if ( (_BYTE)v2 )
          {
            v23 = 0;
            v26 = 0;
            v29 = 0;
            v32 = 0;
            v6 = v33;
            v21 = &v6;
            v7 = v35;
            v24 = &v7;
            v8 = v37;
            v27 = &v8;
            v9 = v39;
            v30 = &v9;
            v22 = 8;
            v25 = 8;
            v28 = 8;
            v31 = 8;
            LOBYTE(v2) = tlgWriteTransfer_EtwWriteTransfer(
                           (__int64)&dword_140C044D8,
                           (unsigned __int8 *)byte_140024ED8,
                           a1 + 54,
                           a1 + 53,
                           6u,
                           &v20);
          }
        }
      }
    }
  }
  return v2;
}
