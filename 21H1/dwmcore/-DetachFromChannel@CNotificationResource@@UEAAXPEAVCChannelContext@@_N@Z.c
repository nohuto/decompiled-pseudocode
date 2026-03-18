/*
 * XREFs of ?DetachFromChannel@CNotificationResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1800BA910
 * Callers:
 *     ?DetachFromChannel@CWindowNode@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1800BA8C0 (-DetachFromChannel@CWindowNode@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DetachFromChannel@CCaptureRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18018BA90 (-DetachFromChannel@CCaptureRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DetachFromChannel@CInteractionTracker@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801CCFB0 (-DetachFromChannel@CInteractionTracker@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ?RemoveResourceDebugInfo@CAnimationLoggingManager@@QEAAXPEAVCResource@@@Z @ 0x1800BA9A8 (-RemoveResourceDebugInfo@CAnimationLoggingManager@@QEAAXPEAVCResource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CNotificationResource::DetachFromChannel(CNotificationResource *this, struct CChannelContext *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx

  v4 = *((_QWORD *)this + 6);
  if ( (struct CChannelContext *)v4 == a2 )
  {
    if ( v4 )
      v5 = *(_DWORD *)(v4 + 68);
    else
      v5 = 0;
    if ( v5 )
    {
      v6 = *((unsigned int *)this + 14);
      if ( (_DWORD)v6 )
      {
        if ( v4 )
          v7 = *(unsigned int *)(v4 + 68);
        else
          v7 = 0LL;
        v8 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1080LL) + 32LL);
        (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v8 + 80LL))(v8, v7, v6, 0LL);
        v4 = *((_QWORD *)this + 6);
      }
    }
    *((_DWORD *)this + 14) = 0;
  }
  if ( a2 == (struct CChannelContext *)v4 )
  {
    if ( (*((_BYTE *)this + 32) & 0x10) != 0 )
      CAnimationLoggingManager::RemoveResourceDebugInfo(*(CAnimationLoggingManager **)(v4 + 56), this);
    *((_QWORD *)this + 6) = 0LL;
  }
}
