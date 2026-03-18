/*
 * XREFs of NtGdiSelectBitmap @ 0x1C00F7940
 * Callers:
 *     <none>
 * Callees:
 *     ?bValid@SURFREF@@QEBAHXZ @ 0x1C00A5340 (-bValid@SURFREF@@QEBAHXZ.c)
 *     ?Feature_Servicing_GdiTelemetry_37785927__private_IsEnabled@@YAHXZ @ 0x1C015DA88 (-Feature_Servicing_GdiTelemetry_37785927__private_IsEnabled@@YAHXZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015DAF0 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02AD17C (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C02AD1A4 (--1MDCOBJ@@QEAA@XZ.c)
 */

HBITMAP __fastcall NtGdiSelectBitmap(HDC a1, HBITMAP a2)
{
  HBITMAP v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rcx
  unsigned int v6; // eax
  _QWORD v8[3]; // [rsp+30h] [rbp-18h] BYREF

  MDCOBJ::MDCOBJ((MDCOBJ *)v8, a1);
  v3 = 0LL;
  if ( SURFREF::bValid((SURFREF *)v8) )
  {
    v4 = *(unsigned __int16 *)(v8[0] + 12LL);
    if ( (unsigned __int16)v4 <= 1u )
    {
      v3 = hbmSelectBitmapInternal((struct XDCOBJ *)v8, a2, 0, 0, 0);
    }
    else if ( (unsigned int)Feature_Servicing_GdiTelemetry_37785927__private_IsEnabled() )
    {
      v5 = *(_QWORD *)(v8[0] + 48LL);
      if ( v5 )
        v6 = *(_DWORD *)(v5 + 40);
      else
        v6 = 0;
      TraceLoggingWriteUnsupportedGdiUsage(1LL, v6, v4);
    }
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v8);
  return v3;
}
