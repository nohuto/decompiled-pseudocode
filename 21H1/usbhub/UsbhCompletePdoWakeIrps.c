/*
 * XREFs of UsbhCompletePdoWakeIrps @ 0x1C0001D70
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x1C000DC30 (UsbhFdoD0Worker_Action.c)
 * Callees:
 *     UsbhRefPdo @ 0x1C0002310 (UsbhRefPdo.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhCompletePdoWakeIrp @ 0x1C001507C (UsbhCompletePdoWakeIrp.c)
 *     UsbhUnlatchPdo @ 0x1C00171A0 (UsbhUnlatchPdo.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002DC78 (UsbhTrapFatal_Dbg.c)
 *     UsbhException @ 0x1C004A608 (UsbhException.c)
 */

__int64 __fastcall UsbhCompletePdoWakeIrps(__int64 a1)
{
  int v2; // r14d
  unsigned __int16 i; // bx
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rcx
  KIRQL v7; // bp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 result; // rax
  __int64 v14; // rbp
  int v15; // [rsp+48h] [rbp-40h]

  v2 = 0;
  for ( i = 1; ; ++i )
  {
    if ( !a1 )
      UsbhTrapFatal_Dbg(0LL, 0LL);
    v4 = *(_QWORD *)(a1 + 64);
    if ( !v4 )
LABEL_31:
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)v4 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v4);
    if ( i > *(unsigned __int8 *)(v4 + 2938) )
      break;
    v5 = 0LL;
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      v6 = *(_QWORD *)(v4 + 888)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v4 + 880)) & *(_DWORD *)(v4 + 884));
      *(_DWORD *)v6 = 1329877100;
      *(_QWORD *)(v6 + 16) = i;
      *(_QWORD *)(v6 + 8) = 0LL;
      *(_QWORD *)(v6 + 24) = 1885630295LL;
    }
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = 1413771367;
        *(_QWORD *)(v9 + 16) = i;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 24) = 0LL;
      }
    }
    if ( i )
    {
      v10 = *(_QWORD *)(a1 + 64);
      if ( !v10 )
        goto LABEL_31;
      if ( *(_DWORD *)v10 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v10);
      if ( i <= *(unsigned __int8 *)(v10 + 2938) )
      {
        v11 = *(_QWORD *)(v10 + 3056);
        if ( v11 )
        {
          v12 = 2928LL * i + v11 - 2928;
          if ( (UsbhLogMask & 8) != 0 )
          {
            v11 = *(_QWORD *)(v10 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
            *(_DWORD *)v11 = 1044672615;
            *(_QWORD *)(v11 + 8) = 0LL;
            *(_QWORD *)(v11 + 16) = i;
            *(_QWORD *)(v11 + 24) = v12;
          }
          if ( v12 )
          {
            v5 = *(_QWORD *)(v12 + 392);
            if ( v5 )
              v5 = UsbhRefPdo(v11, v5, 0LL, 1885630295LL);
          }
        }
      }
    }
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v7);
    if ( v5 )
    {
      v14 = PdoExt(v5);
      if ( (*(_DWORD *)(v14 + 1420) & 0x2000) != 0
        && (unsigned __int8)UsbhCompletePdoWakeIrp(a1, v5, 0LL)
        && (unsigned int)++v2 > 1 )
      {
        LOBYTE(v15) = 0;
        UsbhException(a1, 0, 97, 0, 0, 0, 0, usbfile_fdopwr_c, 3765, v15);
      }
      *(_DWORD *)(v14 + 1420) &= ~0x2000u;
      UsbhUnlatchPdo(a1, v5, 0LL, 1885630295LL);
    }
  }
  result = FdoExt(a1);
  *(_DWORD *)(result + 2560) &= ~0x4000000u;
  return result;
}
