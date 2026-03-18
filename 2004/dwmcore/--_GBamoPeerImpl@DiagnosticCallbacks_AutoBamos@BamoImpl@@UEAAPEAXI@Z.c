/*
 * XREFs of ??_GBamoPeerImpl@DiagnosticCallbacks_AutoBamos@BamoImpl@@UEAAPEAXI@Z @ 0x1801675B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800D3250 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 */

BamoImpl::DiagnosticCallbacks_AutoBamos::BamoPeerImpl *__fastcall BamoImpl::DiagnosticCallbacks_AutoBamos::BamoPeerImpl::`scalar deleting destructor'(
        BamoImpl::DiagnosticCallbacks_AutoBamos::BamoPeerImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v5; // di
  Microsoft::BamoImpl::BamoImplObject *v6; // rcx

  v5 = a2;
  v6 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 3);
  if ( v6 )
    Microsoft::BamoImpl::BamoImplObject::Release(v6, a2, a3, a4);
  if ( (v5 & 1) != 0 )
    operator delete(this);
  return this;
}
