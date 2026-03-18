/*
 * XREFs of GreDxgkPreSessionDisconnected @ 0x1C011FEE8
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C011F7E0 (xxxRemoteDisconnect.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0098FF0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0099034 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GreDxgkPreSessionDisconnected(char a1)
{
  __int64 v2; // rcx
  DYNAMICMODECHANGESHARELOCK *v3; // rcx
  char v4; // [rsp+38h] [rbp+10h] BYREF

  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v4);
  LOBYTE(v2) = a1;
  ((void (__fastcall *)(__int64))gDxgkInterface[46])(v2);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v3);
}
