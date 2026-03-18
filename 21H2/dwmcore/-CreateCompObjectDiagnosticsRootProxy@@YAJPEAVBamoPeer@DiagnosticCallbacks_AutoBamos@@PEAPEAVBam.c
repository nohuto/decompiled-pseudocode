/*
 * XREFs of ?CreateCompObjectDiagnosticsRootProxy@@YAJPEAVBamoPeer@DiagnosticCallbacks_AutoBamos@@PEAPEAVBamoCompObjectDiagnosticsRootProxy@@@Z @ 0x1801BEDB8
 * Callers:
 *     ?Materialize_BamoCompObjectDiagnosticsRootProxy@BamoPeerImpl@DiagnosticCallbacks_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x1801972F8 (-Materialize_BamoCompObjectDiagnosticsRootProxy@BamoPeerImpl@DiagnosticCallbacks_AutoBamos@BamoI.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CreateCompObjectDiagnosticsRootProxy(
        struct DiagnosticCallbacks_AutoBamos::BamoPeer *a1,
        struct BamoCompObjectDiagnosticsRootProxy **a2)
{
  unsigned int v3; // ebx
  _QWORD *v4; // rax
  __int64 v5; // rcx

  v3 = 0;
  v4 = operator new(0x30uLL);
  if ( v4 )
  {
    v4[3] = 0LL;
    *((_DWORD *)v4 + 6) = 0;
    v4[4] = 0LL;
    v4[2] = &BamoImpl::BamoCompObjectDiagnosticsRootProxyImpl::`vftable';
    v4[5] = 0LL;
    *v4 = &CompObjectDiagnosticsRootProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
    v4[1] = &CompObjectDiagnosticsRootProxy::`vftable'{for `ICompObjectDiagnosticsRootProxy'};
    *a2 = (struct BamoCompObjectDiagnosticsRootProxy *)v4;
  }
  else
  {
    v3 = -2147024882;
    *a2 = 0LL;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0LL, -2147024882, 0x1Au);
  }
  return v3;
}
