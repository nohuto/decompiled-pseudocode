/*
 * XREFs of ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C00CF684
 * Callers:
 *     EngAssociateSurface @ 0x1C00ADC20 (EngAssociateSurface.c)
 *     GreIntersectClipRect @ 0x1C00C29C0 (GreIntersectClipRect.c)
 *     GreRestoreDCInternal @ 0x1C00D0920 (GreRestoreDCInternal.c)
 *     GreSelectPalette @ 0x1C014ACB0 (GreSelectPalette.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 */

void TraceLoggingWriteUnsupportedGdiUsage()
{
  __int64 v0; // r8
  __int64 v1; // r9
  int v2; // r10d
  int v3; // [rsp+30h] [rbp-71h] BYREF
  __int64 v4; // [rsp+38h] [rbp-69h] BYREF
  __int64 v5; // [rsp+40h] [rbp-61h] BYREF
  __int64 v6; // [rsp+48h] [rbp-59h] BYREF
  __int64 v7; // [rsp+50h] [rbp-51h] BYREF
  __int64 v8; // [rsp+58h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+60h] [rbp-41h] BYREF
  int *v10; // [rsp+80h] [rbp-21h]
  __int64 v11; // [rsp+88h] [rbp-19h]
  __int64 *v12; // [rsp+90h] [rbp-11h]
  __int64 v13; // [rsp+98h] [rbp-9h]
  __int64 *v14; // [rsp+A0h] [rbp-1h]
  __int64 v15; // [rsp+A8h] [rbp+7h]
  __int64 *v16; // [rsp+B0h] [rbp+Fh]
  __int64 v17; // [rsp+B8h] [rbp+17h]
  __int64 *v18; // [rsp+C0h] [rbp+1Fh]
  __int64 v19; // [rsp+C8h] [rbp+27h]
  __int64 *v20; // [rsp+D0h] [rbp+2Fh]
  __int64 v21; // [rsp+D8h] [rbp+37h]

  if ( (unsigned int)dword_1C0243250 > 5 && tlgKeywordOn((__int64)&dword_1C0243250, 0x400000000000LL) )
  {
    v6 = v0;
    v7 = v1;
    v20 = &v4;
    v21 = 8LL;
    v18 = &v5;
    v19 = 8LL;
    v16 = &v6;
    v17 = 8LL;
    v14 = &v7;
    v12 = &v8;
    v10 = &v3;
    v15 = 8LL;
    v13 = 8LL;
    v4 = 0LL;
    v5 = 0LL;
    v8 = 0x2000000LL;
    v3 = v2;
    v11 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0243250, (unsigned __int8 *)dword_1C02131A2, 0LL, 0LL, 8u, &v9);
  }
}
