/*
 * XREFs of ObpReferenceSecurityDescriptor @ 0x1406547F0
 * Callers:
 *     ObpGetObjectSecurity @ 0x140654620 (ObpGetObjectSecurity.c)
 *     ObpAdjustCreatorAccessState @ 0x140657BB8 (ObpAdjustCreatorAccessState.c)
 *     ObQuerySecurityDescriptorInfo @ 0x140657F68 (ObQuerySecurityDescriptorInfo.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ObDereferenceSecurityDescriptor @ 0x1406544C0 (ObDereferenceSecurityDescriptor.c)
 */

unsigned __int64 __fastcall ObpReferenceSecurityDescriptor(__int64 a1)
{
  signed __int64 v2; // r8
  signed __int64 v3; // rax
  signed __int64 v4; // rbx
  unsigned int v5; // r8d
  unsigned __int64 v6; // rbx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  struct _KTHREAD *CurrentThread; // rax

  _m_prefetchw((const void *)(a1 + 40));
  v2 = *(_QWORD *)(a1 + 40);
  if ( (v2 & 0xF) != 0 )
  {
    do
    {
      v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v2 - 1, v2);
      if ( v2 == v3 )
        break;
      v2 = v3;
    }
    while ( (v3 & 0xF) != 0 );
  }
  v4 = v2;
  v5 = v2 & 0xF;
  v6 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v5 <= 1 && v6 )
  {
    if ( v5 == 1 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 - 24), 0xFuLL) <= 0 )
        __fastfail(0xEu);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx(a1 + 16, 0LL);
      v6 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 - 24), 0x10uLL) <= 0 )
        __fastfail(0xEu);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 16));
      KeAbPostRelease(a1 + 16);
      KeLeaveCriticalRegion();
    }
    _m_prefetchw((const void *)(a1 + 40));
    v8 = *(_QWORD *)(a1 + 40);
    while ( (v8 & 0xF) == 0 )
    {
      if ( v6 != (v8 & 0xFFFFFFFFFFFFFFF0uLL) )
        break;
      v9 = v8;
      v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v8 + 15, v8);
      if ( v9 == v8 )
        return v6;
    }
    ObDereferenceSecurityDescriptor(v6, 0xFu);
  }
  return v6;
}
