/*
 * XREFs of ?CleanPossibleDirtyInputSinkList@CComposition@@QEAAJXZ @ 0x180043750
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x1800407A0 (-PreRender@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?CleanPossibleDirtyInputSinkList@CInputSinkContext@@QEAAJAEBV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x1800BFD08 (-CleanPossibleDirtyInputSinkList@CInputSinkContext@@QEAAJAEBV-$vector@PEAVCVisual@@V-$allocator@.c)
 */

__int64 __fastcall CComposition::CleanPossibleDirtyInputSinkList(CComposition *this)
{
  __int64 v1; // rdx
  __int64 v3; // rcx
  unsigned int v4; // edi
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rcx
  _QWORD v9[2]; // [rsp+38h] [rbp-39h] BYREF
  __int64 v10; // [rsp+48h] [rbp-29h]
  __int64 v11; // [rsp+58h] [rbp-19h] BYREF
  char v12; // [rsp+60h] [rbp-11h]
  __int64 v13; // [rsp+68h] [rbp-9h]
  int v14; // [rsp+74h] [rbp+3h]
  __int128 v15; // [rsp+78h] [rbp+7h]
  __int64 v16; // [rsp+8Ch] [rbp+1Bh]
  __int64 v17; // [rsp+94h] [rbp+23h]
  void *lpMem; // [rsp+A0h] [rbp+2Fh]
  int v19; // [rsp+A8h] [rbp+37h]

  v1 = *((_QWORD *)this + 147);
  v11 = 0LL;
  v12 = 0;
  v3 = *((_QWORD *)this + 146);
  v4 = 0;
  v13 = 0LL;
  v17 = 0LL;
  lpMem = 0LL;
  v19 = 0;
  v16 = 0LL;
  v14 = 0;
  v15 = 0LL;
  while ( (v1 - v3) >> 3 )
  {
    v6 = *((_QWORD *)this + 148);
    v9[0] = v3;
    v9[1] = v1;
    v10 = v6;
    *((_QWORD *)this + 146) = 0LL;
    *((_QWORD *)this + 147) = 0LL;
    *((_QWORD *)this + 148) = 0LL;
    v7 = CInputSinkContext::CleanPossibleDirtyInputSinkList(&v11, v9);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xDFCu, 0LL);
      if ( v9[0] )
        std::_Deallocate<16,0>(v9[0], (v10 - v9[0]) & 0xFFFFFFFFFFFFFFF8uLL);
      break;
    }
    if ( v9[0] )
      std::_Deallocate<16,0>(v9[0], (v10 - v9[0]) & 0xFFFFFFFFFFFFFFF8uLL);
    v1 = *((_QWORD *)this + 147);
    v3 = *((_QWORD *)this + 146);
  }
  operator delete(lpMem);
  return v4;
}
