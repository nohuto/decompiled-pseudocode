/*
 * XREFs of ?vUnLock@DEVLOCKBLTOBJ@@QAEXH@Z @ 0x1D48D3
 * Callers:
 *     _SimBitBlt@48 @ 0x1D49E6 (_SimBitBlt@48.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QAEHXZ @ 0x4E10E (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QAEHXZ.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QAEHXZ @ 0x5A9C8 (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QAEHXZ.c)
 *     ?vUnMap@DEVLOCKBLTOBJ@@QAEXXZ @ 0xAD81A (-vUnMap@DEVLOCKBLTOBJ@@QAEXXZ.c)
 *     ?vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QAEXXZ @ 0xADB6A (-vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QAEXXZ.c)
 */

void __thiscall DEVLOCKBLTOBJ::vUnLock(DEVLOCKBLTOBJ *this, int a2)
{
  int v3; // eax
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v6; // eax
  signed __int32 v7; // [esp+10h] [ebp-4h] BYREF

  v3 = *((_DWORD *)this + 10);
  if ( (v3 & 0x1000) != 0 )
  {
    DEVLOCKBLTOBJ::vUnMap(this);
    DEVLOCKBLTOBJ::vFlushSpriteUpdates(this);
    if ( (*((_DWORD *)this + 10) & 0x8000) != 0 )
    {
      DEVLOCKBLTOBJ::bDisposeTrgDco(this);
      v7 = 0;
      _InterlockedOr(&v7, 0);
      DEVLOCKBLTOBJ::bDisposeSrcDco(this);
      *((_DWORD *)this + 10) &= ~0x8000u;
    }
    else
    {
      DEVLOCKBLTOBJ::bDisposeSrcDco(this);
      v7 = 0;
      _InterlockedOr(&v7, 0);
      DEVLOCKBLTOBJ::bDisposeTrgDco(this);
    }
    GreDecLockCount();
    *((_DWORD *)this + 10) &= ~0x1000u;
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      *(_DWORD *)(ThreadWin32Thread + 176) = 0;
      *(_DWORD *)(ThreadWin32Thread + 172) = 0;
    }
  }
  else if ( (v3 & 0x800000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 10) &= ~0x800000u;
  }
  if ( *(_DWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", *(_DWORD *)this);
    GreReleaseSemaphoreInternal(*(_DWORD *)this);
    *(_DWORD *)this = 0;
    *((_DWORD *)this + 3) = 0;
  }
  if ( *((_DWORD *)this + 1) )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemSrc", *((_DWORD *)this + 1));
    GreReleaseSemaphoreInternal(*((_DWORD *)this + 1));
    *((_DWORD *)this + 1) = 0;
    *((_DWORD *)this + 4) = 0;
  }
  v6 = *((_DWORD *)this + 10);
  if ( (v6 & 8) != 0 )
    *((_DWORD *)this + 10) = v6 & 0xFFFFFFF7;
  if ( *((_DWORD *)this + 2) )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", *((_DWORD *)this + 2));
    GreReleaseSemaphoreInternal(*((_DWORD *)this + 2));
    *((_DWORD *)this + 2) = 0;
  }
}
