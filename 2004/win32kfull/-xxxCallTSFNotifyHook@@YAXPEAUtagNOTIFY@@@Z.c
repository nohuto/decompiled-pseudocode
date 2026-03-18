/*
 * XREFs of ?xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z @ 0x1C0006A1C
 * Callers:
 *     ?xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x1C0006748 (-xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 *     xxxProcessTSFEvent @ 0x1C00068E4 (xxxProcessTSFEvent.c)
 * Callees:
 *     fnHkINLPNOTIFYSTRUCT @ 0x1C0006A80 (fnHkINLPNOTIFYSTRUCT.c)
 *     ??0?$CUnLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C009160C (--0-$CUnLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ.c)
 */

void __fastcall xxxCallTSFNotifyHook(struct tagNOTIFY *a1)
{
  int v2; // edx
  int v3; // r9d
  int v4; // [rsp+40h] [rbp+8h] BYREF
  tagDomLock *v5; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  CUnLockDomainExclusiveInUserCrit<DLT_WINEVENT>::CUnLockDomainExclusiveInUserCrit<DLT_WINEVENT>(&v5);
  fnHkINLPNOTIFYSTRUCT(*((_DWORD *)a1 + 7), v2, (_DWORD)a1, v3, *(_QWORD *)(gpsi + 856LL), (__int64)&v4);
  tagDomLock::LockExclusive(v5);
}
