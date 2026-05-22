/*
 * XREFs of ?AttachDevice@MPCRawInputProvider@@QEAAJW4InputType@@PEAK@Z @ 0x18008A63C
 * Callers:
 *     ??0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z @ 0x18008B648 (--0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z.c)
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18002149C (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B028 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@ULegacyDeviceInfo@@@std@@@?$vector@V?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@ULegacyDeviceInfo@@@1@QEAV21@AEBV21@@Z @ 0x180089D24 (--$_Emplace_reallocate@AEBV-$shared_ptr@ULegacyDeviceInfo@@@std@@@-$vector@V-$shared_ptr@ULegacy.c)
 *     ??$make_shared@ULegacyDeviceInfo@@$$V@std@@YA?AV?$shared_ptr@ULegacyDeviceInfo@@@0@XZ @ 0x18008A0D4 (--$make_shared@ULegacyDeviceInfo@@$$V@std@@YA-AV-$shared_ptr@ULegacyDeviceInfo@@@0@XZ.c)
 *     ?AttachDeviceImpl@MPCRawInputProvider@@AEAAXAEBV?$shared_ptr@ULegacyDeviceInfo@@@std@@@Z @ 0x18008A774 (-AttachDeviceImpl@MPCRawInputProvider@@AEAAXAEBV-$shared_ptr@ULegacyDeviceInfo@@@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCRawInputProvider::AttachDevice(__int64 a1, int a2, _DWORD *a3)
{
  int v6; // eax
  _QWORD *v7; // rdx
  _DWORD *v9; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v10; // [rsp+28h] [rbp-10h]

  std::make_shared<LegacyDeviceInfo,>(&v9);
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 32LL))(*(_QWORD *)(a1 + 16));
  *v9 = v6;
  v9[1] = a2;
  if ( GetCurrentThreadId() == *(_DWORD *)(a1 + 88) && *(_BYTE *)(a1 + 80) )
  {
    MPCRawInputProvider::AttachDeviceImpl(a1, &v9);
  }
  else
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
    v7 = *(_QWORD **)(a1 + 144);
    if ( *(_QWORD **)(a1 + 152) == v7 )
    {
      std::vector<std::shared_ptr<LegacyDeviceInfo>>::_Emplace_reallocate<std::shared_ptr<LegacyDeviceInfo> const &>(
        (__int64 *)(a1 + 136),
        (__int64)v7,
        &v9);
    }
    else
    {
      *v7 = 0LL;
      v7[1] = 0LL;
      if ( v10 )
        _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
      *v7 = v9;
      v7[1] = v10;
      *(_QWORD *)(a1 + 144) += 16LL;
    }
    wil::details::SetEvent(*(wil::details **)(a1 + 72), v7);
    if ( a1 != -96 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
  }
  *a3 = *v9;
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  return 0LL;
}
