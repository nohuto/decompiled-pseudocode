/*
 * XREFs of ?xxxCallTSFNotifyHook@@YGXPAUtagNOTIFY@@@Z @ 0x1556EF
 * Callers:
 *     ?xxxDoLocalTSFWork@@YGXKPAUtagWND@@JJKKPAUtagTHREADINFO@@K@Z @ 0x15572D (-xxxDoLocalTSFWork@@YGXKPAUtagWND@@JJKKPAUtagTHREADINFO@@K@Z.c)
 *     _xxxProcessTSFEvent@4 @ 0x155866 (_xxxProcessTSFEvent@4.c)
 * Callees:
 *     ??0?$CUnLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QAE@XZ @ 0x146E8 (--0-$CUnLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QAE@XZ.c)
 *     _fnHkINLPNOTIFYSTRUCT@24 @ 0x19309A (_fnHkINLPNOTIFYSTRUCT@24.c)
 */

void __thiscall xxxCallTSFNotifyHook(void *this)
{
  int v2; // ecx
  tagDomLock *v3; // [esp+8h] [ebp-8h] BYREF
  int v4; // [esp+Ch] [ebp-4h] BYREF

  v4 = 0;
  CUnLockDomainExclusiveInUserCrit<DLT_WINEVENT>::CUnLockDomainExclusiveInUserCrit<DLT_WINEVENT>(&v3);
  fnHkINLPNOTIFYSTRUCT(this, v2, *(_DWORD *)(_gpsi + 460), &v4);
  tagDomLock::LockExclusive(v3);
}
