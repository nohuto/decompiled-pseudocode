/*
 * XREFs of ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015DAF0
 * Callers:
 *     GreExcludeClipRect @ 0x1C0067A70 (GreExcludeClipRect.c)
 *     NtGdiSelectBitmap @ 0x1C00F7940 (NtGdiSelectBitmap.c)
 *     NtGdiSelectClipPath @ 0x1C01399C0 (NtGdiSelectClipPath.c)
 *     NtGdiOffsetClipRgn @ 0x1C014BFA0 (NtGdiOffsetClipRgn.c)
 *     EngMarkBandingSurface @ 0x1C0153250 (EngMarkBandingSurface.c)
 *     GreExtSelectClipRgnInternal @ 0x1C015E358 (GreExtSelectClipRgnInternal.c)
 *     NtGdiFlattenPath @ 0x1C02AC850 (NtGdiFlattenPath.c)
 *     NtGdiWidenPath @ 0x1C02AD010 (NtGdiWidenPath.c)
 *     NtGdiResizePalette @ 0x1C02B6CA0 (NtGdiResizePalette.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D1B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

__int64 __fastcall TraceLoggingWriteUnsupportedGdiUsage(int a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp-71h] BYREF
  __int64 v5; // [rsp+38h] [rbp-69h] BYREF
  __int64 v6; // [rsp+40h] [rbp-61h] BYREF
  __int64 v7; // [rsp+48h] [rbp-59h] BYREF
  __int64 v8; // [rsp+50h] [rbp-51h] BYREF
  __int64 v9; // [rsp+58h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+60h] [rbp-41h] BYREF
  int *v11; // [rsp+80h] [rbp-21h]
  __int64 v12; // [rsp+88h] [rbp-19h]
  __int64 *v13; // [rsp+90h] [rbp-11h]
  __int64 v14; // [rsp+98h] [rbp-9h]
  __int64 *v15; // [rsp+A0h] [rbp-1h]
  __int64 v16; // [rsp+A8h] [rbp+7h]
  __int64 *v17; // [rsp+B0h] [rbp+Fh]
  __int64 v18; // [rsp+B8h] [rbp+17h]
  __int64 *v19; // [rsp+C0h] [rbp+1Fh]
  __int64 v20; // [rsp+C8h] [rbp+27h]
  __int64 *v21; // [rsp+D0h] [rbp+2Fh]
  __int64 v22; // [rsp+D8h] [rbp+37h]

  if ( (unsigned int)dword_1C032A3F8 > 5 && (qword_1C032A408 & 0x400000000000LL) != 0 )
  {
    result = qword_1C032A410 & 0x400000000000LL;
    if ( (qword_1C032A410 & 0x400000000000LL) == qword_1C032A410 )
    {
      v4 = a1;
      v7 = a3;
      v21 = &v5;
      v8 = a2;
      v19 = &v6;
      v22 = 8LL;
      v17 = &v7;
      v20 = 8LL;
      v15 = &v8;
      v13 = &v9;
      v11 = &v4;
      v18 = 8LL;
      v16 = 8LL;
      v14 = 8LL;
      v5 = 0LL;
      v6 = 0LL;
      v9 = 0x2000000LL;
      v12 = 4LL;
      return tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C032A3F8, (int)&dword_1C02F2B32, 0, 0, 8u, &v10);
    }
  }
  return result;
}
