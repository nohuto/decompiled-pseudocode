/*
 * XREFs of ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1800114E8
 * Callers:
 *     ?CreateInstance@?$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z @ 0x1800111C0 (-CreateInstance@-$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z.c)
 *     ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x180054578 (--0CAtlBaseModule@ATL@@QEAA@XZ.c)
 *     ??0CAtlWinModule@ATL@@QEAA@XZ @ 0x180054620 (--0CAtlWinModule@ATL@@QEAA@XZ.c)
 *     ??0CAtlComModule@ATL@@QEAA@XZ @ 0x18005468C (--0CAtlComModule@ATL@@QEAA@XZ.c)
 *     ??0CComAutoCriticalSection@ATL@@QEAA@XZ @ 0x1800571D0 (--0CComAutoCriticalSection@ATL@@QEAA@XZ.c)
 *     ??0?$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@QEAA@XZ @ 0x1800633E8 (--0-$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@QEAA@XZ.c)
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCAPOWrapperSrv@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x180120D84 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCAPOWrapperSrv@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PE.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCAPOWrapperSrv@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x180120EB8 (-CreateInstance@-$CComCreator@V-$CComObject@VCAPOWrapperSrv@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPE.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObjectNoLock@VCComClassFactory@ATL@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x180120FF0 (-CreateInstance@-$CComCreator@V-$CComObjectNoLock@VCComClassFactory@ATL@@@ATL@@@ATL@@SAJPEAXAEBU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComCriticalSection::Init(struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSection(this);
  return 0LL;
}
