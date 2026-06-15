/*
 * XREFs of ?LinkToLeftDisplayNode@CDisplayNode@@QEAAJPEAV1@@Z @ 0x140042164
 * Callers:
 *     ?LinkDisplayNodes@@YAXAEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@0@Z @ 0x14004204C (-LinkDisplayNodes@@YAXAEAV-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDispl.c)
 * Callees:
 *     ?AddHead@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCStreamInstance@@@Z @ 0x140036D30 (-AddHead@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAA.c)
 */

__int64 __fastcall CDisplayNode::LinkToLeftDisplayNode(CDisplayNode *this, struct CDisplayNode *a2, __int64 a3)
{
  unsigned int v3; // ebx
  CDisplayNode *v4; // rdi
  struct CDisplayNode *v5; // rsi
  __int64 result; // rax
  ATL::CAtlException *v8; // rbx
  __int64 v9; // r8
  ATL::CAtlException *v10; // rbx
  ATL::CAtlException *v11; // [rsp+20h] [rbp-28h] BYREF
  ATL::CAtlException *v12; // [rsp+28h] [rbp-20h] BYREF
  CDisplayNode *v13; // [rsp+50h] [rbp+8h] BYREF
  struct CDisplayNode *v14; // [rsp+58h] [rbp+10h] BYREF
  int v15; // [rsp+60h] [rbp+18h]

  v14 = a2;
  v13 = this;
  try
  {
    v5 = a2;
    v4 = this;
    ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::AddHead(
      (__int64 *)this + 1,
      (__int64)&v14,
      a3);
  }
  catch ( ATL::CAtlException *v11 )
  {
    v8 = v11;
    if ( *(_DWORD *)v11 == -1073741571 )
      _o__resetstkoflw();
    v15 = *(_DWORD *)v8;
    v3 = v15;
    if ( v15 >= 0 )
    {
      v4 = v13;
      v5 = v14;
      goto LABEL_17;
    }
LABEL_4:
    result = v3;
  }
LABEL_17:
  try
  {
    v3 = 0;
    v13 = v4;
    ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::AddHead(
      (__int64 *)v5 + 7,
      (__int64)&v13,
      v9);
  }
  catch ( ATL::CAtlException *v12 )
  {
    v10 = v12;
    if ( *(_DWORD *)v12 == -1073741571 )
      _o__resetstkoflw();
    v3 = *(_DWORD *)v10;
    goto LABEL_4;
  }
  goto LABEL_4;
}
