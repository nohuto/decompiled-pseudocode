/*
 * XREFs of ?SyncLockForParallelMode@CLegacyRenderTarget@@UEAAXI@Z @ 0x180185270
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?GetOutstandingFrameCount@CLegacyRenderTarget@@UEBAIPEAI@Z @ 0x180184940 (-GetOutstandingFrameCount@CLegacyRenderTarget@@UEBAIPEAI@Z.c)
 */

void __fastcall CLegacyRenderTarget::SyncLockForParallelMode(CLegacyRenderTarget *this, unsigned int a2)
{
  __int64 v3; // rdx
  char *v4; // rcx
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  if ( a2 > (unsigned int)CLegacyRenderTarget::GetOutstandingFrameCount(this, &v5) )
  {
    v3 = *(int *)(*((_QWORD *)this - 8) + 12LL);
    v4 = (char *)this + v3 - 64;
    LOBYTE(v3) = 1;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v4 + 32LL))(v4, v3);
  }
}
