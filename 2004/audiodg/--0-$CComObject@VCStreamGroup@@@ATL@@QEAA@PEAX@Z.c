/*
 * XREFs of ??0?$CComObject@VCStreamGroup@@@ATL@@QEAA@PEAX@Z @ 0x140011F0C
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCStreamGroup@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140011FA4 (-CreateInstance@-$CComCreator@V-$CComObject@VCStreamGroup@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX.c)
 * Callees:
 *     ??0CSubmixImpl@@QEAA@XZ @ 0x14001041C (--0CSubmixImpl@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComObject<CStreamGroup>::CComObject<CStreamGroup>(__int64 a1)
{
  *(_DWORD *)(a1 + 344) = 0;
  *(_OWORD *)(a1 + 352) = 0LL;
  *(_OWORD *)(a1 + 368) = 0LL;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_BYTE *)(a1 + 392) = 0;
  CSubmixImpl::CSubmixImpl((CSubmixImpl *)(a1 + 24));
  *(_QWORD *)a1 = &ATL::CComObject<CStreamGroup>::`vftable'{for `IStreamGroup'};
  *(_QWORD *)(a1 + 8) = &ATL::CComObject<CStreamGroup>::`vftable'{for `IStreamGroupInternal'};
  *(_QWORD *)(a1 + 16) = &ATL::CComObject<CStreamGroup>::`vftable'{for `IFastRundown'};
  *(_QWORD *)(a1 + 24) = &ATL::CComObject<CStreamGroup>::`vftable'{for `CSubmixImpl'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
