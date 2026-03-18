/*
 * XREFs of ?LogData@VIDMM_PURGE_TELEMETRY@@QEAAXXZ @ 0x1C00C0FBC
 * Callers:
 *     ?NotifyShutdown@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00B30C4 (-NotifyShutdown@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?LogBucket@VIDMM_PURGE_TELEMETRY@@AEAAXPEBUVIDMM_PURGE_TELEMETRY_BUCKET@@_K@Z @ 0x1C00C0EC0 (-LogBucket@VIDMM_PURGE_TELEMETRY@@AEAAXPEBUVIDMM_PURGE_TELEMETRY_BUCKET@@_K@Z.c)
 */

void __fastcall VIDMM_PURGE_TELEMETRY::LogData(VIDMM_PURGE_TELEMETRY *this)
{
  __int64 v2; // rbp
  char *v3; // rsi
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r12

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)this + 3112, 0LL);
  v2 = 0x2000000LL;
  v3 = (char *)this + 1032;
  v4 = 0x160000000LL;
  v5 = 1207959552LL;
  v6 = 32LL;
  do
  {
    VIDMM_PURGE_TELEMETRY::LogBucket(this, (const struct VIDMM_PURGE_TELEMETRY_BUCKET *)(v3 - 1024));
    VIDMM_PURGE_TELEMETRY::LogBucket(this, (const struct VIDMM_PURGE_TELEMETRY_BUCKET *)v3);
    VIDMM_PURGE_TELEMETRY::LogBucket(this, (const struct VIDMM_PURGE_TELEMETRY_BUCKET *)(v3 + 1024));
    v2 += 0x2000000LL;
    v5 += 0x8000000LL;
    v4 += 0x20000000LL;
    v3 += 32;
    --v6;
  }
  while ( v6 );
  VIDMM_PURGE_TELEMETRY::LogBucket(this, (VIDMM_PURGE_TELEMETRY *)((char *)this + 3080));
  ExReleasePushLockSharedEx((char *)this + 3112, 0LL);
  KeLeaveCriticalRegion();
}
