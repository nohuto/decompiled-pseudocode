/*
 * XREFs of ??0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18002D978
 * Callers:
 *     ??$CreateServer@VDataProviderRegistrarConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVDataProviderRegistrarConnection@@@Z @ 0x18002D890 (--$CreateServer@VDataProviderRegistrarConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMe.c)
 *     ??0DiagnosticCallbacksManager@@QEAA@XZ @ 0x18002DD74 (--0DiagnosticCallbacksManager@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

Microsoft::BamoImpl::BaseBamoConnectionImpl *__fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::BaseBamoConnectionImpl(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        struct Microsoft::Bamo::BaseBamoConnection *a2)
{
  *(_QWORD *)this = &Microsoft::BamoImpl::BaseBamoConnectionImpl::`vftable';
  *((_DWORD *)this + 2) = 1;
  *((_DWORD *)this + 10) = 1;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_BYTE *)this + 120) = 0;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 9) = 0x10000;
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  return this;
}
