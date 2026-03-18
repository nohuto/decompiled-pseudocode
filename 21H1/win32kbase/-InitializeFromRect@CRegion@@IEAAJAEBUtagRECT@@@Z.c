/*
 * XREFs of ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C0075EA8
 * Callers:
 *     ?InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C0074628 (-InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x1C00747B0 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?Create@CRegion@@SAJAEBUtagRECT@@PEAPEAV1@@Z @ 0x1C01492D0 (-Create@CRegion@@SAJAEBUtagRECT@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0RGNMEMOBJ@@QEAA@HH@Z @ 0x1C0075FA0 (--0RGNMEMOBJ@@QEAA@HH@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C007F140 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C008BC60 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 */

__int64 __fastcall CRegion::InitializeFromRect(CRegion *this, struct _RECTL *a2)
{
  unsigned int v4; // edi
  REGION *v5; // rbx
  struct _RECTL v7; // [rsp+20h] [rbp-28h] BYREF
  REGION *v8; // [rsp+30h] [rbp-18h] BYREF
  int v9; // [rsp+38h] [rbp-10h]

  v4 = -1073741801;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v8, 0, 1);
  v5 = v8;
  if ( v8 )
  {
    v7 = *a2;
    RGNOBJ::vSet((RGNOBJ *)&v8, &v7);
    v4 = 0;
    *((_QWORD *)this + 2) = v5;
    *((_DWORD *)this + 3) = 2;
  }
  if ( v9 == 1 )
    REGION::vDeleteREGION(v5);
  return v4;
}
