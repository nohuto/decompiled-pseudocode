/*
 * XREFs of ?vClearRenderState@DEVLOCKOBJ@@QAEXXZ @ 0xAAFAA
 * Callers:
 *     _DEVLOCKOBJ_bDisposeTrgDcoWrap@4 @ 0x5A8B0 (_DEVLOCKOBJ_bDisposeTrgDcoWrap@4.c)
 *     ?bDisposeTrgDcoWorker@DEVLOCKOBJ@@QAEHXZ @ 0x5A8D8 (-bDisposeTrgDcoWorker@DEVLOCKOBJ@@QAEHXZ.c)
 *     _GreGetRandomRgn@12 @ 0x5D7A0 (_GreGetRandomRgn@12.c)
 *     _DEVLOCKOBJ_bPrepareTrgDcoWrap@8 @ 0x838D0 (_DEVLOCKOBJ_bPrepareTrgDcoWrap@8.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?bValid@DLODCOBJ@@QAE_NXZ @ 0x5A95C (-bValid@DLODCOBJ@@QAE_NXZ.c)
 *     ?vClearRendering@DC@@QAEXXZ @ 0x5FB80 (-vClearRendering@DC@@QAEXXZ.c)
 *     ??0DCVISRGNSHARELOCK@@QAE@XZ @ 0xAB032 (--0DCVISRGNSHARELOCK@@QAE@XZ.c)
 */

void __thiscall DEVLOCKOBJ::vClearRenderState(DEVLOCKOBJ *this)
{
  DC **v2; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  char v5; // [esp+Bh] [ebp-1h] BYREF

  v2 = (DC **)((char *)this + 20);
  if ( DLODCOBJ::bValid((DEVLOCKOBJ *)((char *)this + 20))
    && (*((_DWORD *)this + 3) & 0x1000) != 0
    && (*((_DWORD *)*v2 + 6) & 0x200) != 0 )
  {
    DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v5);
    if ( !*((_DWORD *)this + 9) )
      DC::vClearRendering(*v2);
    if ( (*((_DWORD *)*v2 + 6) & 0x4000) == 0 )
    {
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        *(_DWORD *)(ThreadWin32Thread + 180) &= ~1u;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", _ghsemDCVisRgn);
    GreReleaseSemaphoreInternal(_ghsemDCVisRgn);
  }
}
