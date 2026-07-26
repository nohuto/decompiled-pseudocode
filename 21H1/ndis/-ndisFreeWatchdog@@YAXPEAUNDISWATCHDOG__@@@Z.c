/*
 * XREFs of ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00FE040
 * Callers:
 *     <none>
 * Callees:
 *     ?WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z @ 0x1C000AF04 (-WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FE260 (--1KLockHolder@@QEAA@XZ.c)
 *     ?Disarm@NdisWatchdogState@@QEAAXXZ @ 0x1C00FE2BC (-Disarm@NdisWatchdogState@@QEAAXXZ.c)
 */

void __fastcall ndisFreeWatchdog(struct NDISWATCHDOG__ *a1)
{
  struct NDISWATCHDOG__ *v1; // rax
  struct NDISWATCHDOG__ *v2; // rbx
  struct NDISWATCHDOG__ *v3; // rdx
  struct NDISWATCHDOG__ **v4; // rcx
  KLockHolder v5; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 != (struct NDISWATCHDOG__ *)-1LL )
  {
    v1 = WatchdogFromHandle(a1);
    v2 = v1;
    if ( v1 )
    {
      NdisWatchdogState::Disarm((NdisWatchdogState *)v1);
      v5.m_Lock = (KPushLockBase *)&g_ndisWatchdogLock;
      KeEnterCriticalRegion();
      v5.m_Region.m_Entered = 1;
      ExAcquirePushLockExclusiveEx(&g_ndisWatchdogLock, 0LL);
      v5.m_State = Exclusive;
      v3 = (struct NDISWATCHDOG__ *)*((_QWORD *)v2 + 34);
      if ( *((struct NDISWATCHDOG__ **)v3 + 1) != v2 + 68
        || (v4 = (struct NDISWATCHDOG__ **)*((_QWORD *)v2 + 35), *v4 != v2 + 68) )
      {
        __fastfail(3u);
      }
      *v4 = v3;
      *((_QWORD *)v3 + 1) = v4;
      KLockHolder::~KLockHolder(&v5);
      ExFreePoolWithTag(v2, 0x7377444Eu);
    }
  }
}
