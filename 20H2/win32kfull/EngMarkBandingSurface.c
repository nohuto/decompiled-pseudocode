/*
 * XREFs of EngMarkBandingSurface @ 0x1C0153250
 * Callers:
 *     NtGdiEngMarkBandingSurface @ 0x1C01531A0 (NtGdiEngMarkBandingSurface.c)
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C012B0F8 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?Feature_Servicing_GdiTelemetry_37785927__private_IsEnabled@@YAHXZ @ 0x1C015DA88 (-Feature_Servicing_GdiTelemetry_37785927__private_IsEnabled@@YAHXZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015DAF0 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

BOOL __stdcall EngMarkBandingSurface(HSURF hsurf)
{
  char v1; // dl
  __int64 v2; // rax
  BOOL v3; // edi
  __int64 v4; // rbx
  int v5; // eax
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v1 = 5;
  v2 = HmgShareLockCheckIgnoreStockBit(hsurf, v1);
  v3 = 0;
  v7 = v2;
  v4 = v2;
  if ( v2 )
  {
    v5 = *(_DWORD *)(v2 + 112);
    if ( (v5 & 0x200000) != 0 )
    {
      v3 = 1;
      *(_DWORD *)(v4 + 112) = v5 | 0x2000000;
    }
    else if ( (unsigned int)Feature_Servicing_GdiTelemetry_37785927__private_IsEnabled() )
    {
      TraceLoggingWriteUnsupportedGdiUsage(2LL, *(unsigned int *)(v4 + 112), 0LL);
    }
  }
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v7);
  return v3;
}
