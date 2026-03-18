/*
 * XREFs of ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C001D190
 * Callers:
 *     ?InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C001CED8 (-InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x1C001D060 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?Create@CRegion@@SAJAEBUtagRECT@@PEAPEAV1@@Z @ 0x1C0140AA0 (-Create@CRegion@@SAJAEBUtagRECT@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0RGNMEMOBJ@@QEAA@HH@Z @ 0x1C001D230 (--0RGNMEMOBJ@@QEAA@HH@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C003C850 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C00406D0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
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
