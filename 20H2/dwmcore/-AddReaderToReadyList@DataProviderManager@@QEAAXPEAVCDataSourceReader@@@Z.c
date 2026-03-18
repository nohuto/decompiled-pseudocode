/*
 * XREFs of ?AddReaderToReadyList@DataProviderManager@@QEAAXPEAVCDataSourceReader@@@Z @ 0x18016469C
 * Callers:
 *     ?ProcessSetLookupId@CDataSourceReader@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DATASOURCEREADER_SETLOOKUPID@@@Z @ 0x1801BE350 (-ProcessSetLookupId@CDataSourceReader@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DATASOURCEREADER_S.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18014C964 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Emplace_reallocate@PEBVCVisual@@@?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@QEAAPEAPEBVCVisual@@QEAPEBV2@$$QEAPEBV2@@Z @ 0x180164308 (--$_Emplace_reallocate@PEBVCVisual@@@-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@@std@@@std@.c)
 */

void __fastcall DataProviderManager::AddReaderToReadyList(
        DataProviderManager *this,
        struct CDataSourceReader *a2,
        __int64 a3,
        const char *a4)
{
  _QWORD *v4; // rax
  __int64 *v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CDataSourceReader *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  if ( (*((_BYTE *)a2 + 72) & 1) != 0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1AA,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
      a4);
    __debugbreak();
  }
  v4 = (_QWORD *)*((_QWORD *)this + 14);
  v5 = (__int64 *)((char *)this + 104);
  if ( (_QWORD *)v5[2] == v4 )
  {
    std::vector<CVisual const *>::_Emplace_reallocate<CVisual const *>(v5, v4, &v7);
    a2 = v7;
  }
  else
  {
    *v4 = a2;
    v5[1] += 8LL;
  }
  *((_BYTE *)a2 + 72) |= 2u;
}
