/*
 * XREFs of ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1800114E8
 * Callers:
 *     ?CreateInstance@?$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z @ 0x1800111C0 (-CreateInstance@-$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z.c)
 *     ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x180054678 (--0CAtlBaseModule@ATL@@QEAA@XZ.c)
 *     ??0CAtlWinModule@ATL@@QEAA@XZ @ 0x180054720 (--0CAtlWinModule@ATL@@QEAA@XZ.c)
 *     ??0CAtlComModule@ATL@@QEAA@XZ @ 0x18005478C (--0CAtlComModule@ATL@@QEAA@XZ.c)
 *     ??0CComAutoCriticalSection@ATL@@QEAA@XZ @ 0x1800572D0 (--0CComAutoCriticalSection@ATL@@QEAA@XZ.c)
 *     ??0?$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@QEAA@XZ @ 0x1800634E8 (--0-$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@QEAA@XZ.c)
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCAPOWrapperSrv@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x180120E44 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCAPOWrapperSrv@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PE.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCAPOWrapperSrv@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x180120F78 (-CreateInstance@-$CComCreator@V-$CComObject@VCAPOWrapperSrv@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPE.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObjectNoLock@VCComClassFactory@ATL@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1801210B0 (-CreateInstance@-$CComCreator@V-$CComObjectNoLock@VCComClassFactory@ATL@@@ATL@@@ATL@@SAJPEAXAEBU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComCriticalSection::Init(struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSection(this);
  return 0LL;
}
