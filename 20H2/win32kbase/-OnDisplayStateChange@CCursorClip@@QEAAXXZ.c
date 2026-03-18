/*
 * XREFs of ?OnDisplayStateChange@CCursorClip@@QEAAXXZ @ 0x1C000AEF0
 * Callers:
 *     ?_NotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1C000AE90 (-_NotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 *     ?BindMouse@CInputConfig@@QEAAJU_LUID@@@Z @ 0x1C01AD8F4 (-BindMouse@CInputConfig@@QEAAJU_LUID@@@Z.c)
 * Callees:
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C000AF64 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 *     ?GetUnionRect@Mouse@InputConfig@@SA?AUtagRECT@@XZ @ 0x1C000BEE8 (-GetUnionRect@Mouse@InputConfig@@SA-AUtagRECT@@XZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00614C8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00997E0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

void __fastcall CCursorClip::OnDisplayStateChange(CCursorClip *this)
{
  CCursorClip *v1; // rdi
  struct tagRECT *UnionRect; // rax
  struct tagRECT v3; // xmm0
  struct tagRECT v4; // [rsp+20h] [rbp-18h] BYREF

  v1 = gpCursorClip;
  CPushLock::AcquireLockExclusive((CCursorClip *)((char *)gpCursorClip + 32));
  *(_OWORD *)((char *)v1 + 56) = 0LL;
  UnionRect = InputConfig::Mouse::GetUnionRect(&v4);
  v3 = *UnionRect;
  *(struct tagRECT *)v1 = *UnionRect;
  v4 = v3;
  CCursorClip::UpdateClipRect(v1, &v4);
  *((_BYTE *)v1 + 92) = **(_DWORD **)gpDispInfo > 1u;
  CPushLock::ReleaseLock((CCursorClip *)((char *)v1 + 32));
}
