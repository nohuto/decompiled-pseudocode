/*
 * XREFs of EngAssociateSurface @ 0x1C00ADC20
 * Callers:
 *     ?StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00ADBC0 (-StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C004AA4C (--1EPALOBJ@@QEAA@XZ.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C0078140 (HmgShareLockCheckIgnoreStockBit.c)
 *     ?Feature_Servicing_GdiTelemetry_37785927__private_IsEnabled@@YAHXZ @ 0x1C00CF614 (-Feature_Servicing_GdiTelemetry_37785927__private_IsEnabled@@YAHXZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C00CF684 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

BOOL __stdcall EngAssociateSurface(HSURF hsurf, HDEV hdev, FLONG flHooks)
{
  BOOL v3; // edi
  FLONG v4; // esi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  v4 = flHooks & 0xFFFFB7EF;
  if ( hdev )
  {
    v6 = HmgShareLockCheckIgnoreStockBit((unsigned int)hsurf, 5);
    v9 = v6;
    v7 = v6;
    if ( v6 )
    {
      if ( (*(_DWORD *)(v6 + 112) & 0x200000) != 0 )
      {
        *(_QWORD *)(v6 + 136) = 0LL;
        v3 = 1;
        *(_QWORD *)(v6 + 48) = hdev;
        *(_QWORD *)(v6 + 40) = *((_QWORD *)hdev + 225);
        *(_DWORD *)(v6 + 112) |= v4;
      }
      else if ( (unsigned int)Feature_Servicing_GdiTelemetry_37785927__private_IsEnabled() )
      {
        TraceLoggingWriteUnsupportedGdiUsage(3LL, *(unsigned int *)(v7 + 112), 0LL);
      }
    }
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v9);
  }
  return v3;
}
