/*
 * XREFs of ?OnDisplayStateChange@CCursorClip@@QEAAXXZ @ 0x1C0012820
 * Callers:
 *     ?_NotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1C000C574 (-_NotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 *     ?BindMouse@CInputConfig@@QEAAJU_LUID@@@Z @ 0x1C01AFC74 (-BindMouse@CInputConfig@@QEAAJU_LUID@@@Z.c)
 * Callees:
 *     ?GetUnionRect@Mouse@InputConfig@@SA?AUtagRECT@@XZ @ 0x1C0010360 (-GetUnionRect@Mouse@InputConfig@@SA-AUtagRECT@@XZ.c)
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C00126F4 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0033A90 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C009D788 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
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
  CCursorClip::UpdateClipRect((struct tagRECT *)v1, &v4);
  *((_BYTE *)v1 + 92) = **(_DWORD **)gpDispInfo > 1u;
  CPushLock::ReleaseLock((CCursorClip *)((char *)v1 + 32));
}
