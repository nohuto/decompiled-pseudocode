/*
 * XREFs of ?vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z @ 0x1C0278EC0
 * Callers:
 *     SimBitBlt @ 0x1C0279018 (SimBitBlt.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0274364 (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0274408 (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C0274478 (-vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ?vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C0274540 (-vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 */

void __fastcall DEVLOCKBLTOBJ::vUnLock(DEVLOCKBLTOBJ *this)
{
  int v1; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  signed __int32 v16[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *((_DWORD *)this + 18);
  if ( (v1 & 0x1000) != 0 )
  {
    DEVLOCKBLTOBJ::vUnMap(this);
    DEVLOCKBLTOBJ::vFlushSpriteUpdates(this);
    if ( (*((_DWORD *)this + 18) & 0x8000) != 0 )
    {
      DEVLOCKBLTOBJ::bDisposeTrgDco(this, v3, v4, v5);
      _InterlockedOr(v16, 0);
      DEVLOCKBLTOBJ::bDisposeSrcDco(this, v6, v7, v8);
      *((_DWORD *)this + 18) &= ~0x8000u;
    }
    else
    {
      DEVLOCKBLTOBJ::bDisposeSrcDco(this, v3, v4, v5);
      _InterlockedOr(v16, 0);
      DEVLOCKBLTOBJ::bDisposeTrgDco(this, v9, v10, v11);
    }
    GreDecLockCount();
    *((_DWORD *)this + 18) &= ~0x1000u;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      *(_QWORD *)(ThreadWin32Thread + 320) = 0LL;
      *(_QWORD *)(ThreadWin32Thread + 312) = 0LL;
    }
  }
  else if ( (v1 & 0x800000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 18) &= ~0x800000u;
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", *(_QWORD *)this);
    GreReleaseSemaphoreInternal(*(_QWORD *)this);
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 3) = 0LL;
  }
  v13 = *((_QWORD *)this + 1);
  if ( v13 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemSrc", v13);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
  }
  v14 = *((_DWORD *)this + 18);
  if ( (v14 & 8) != 0 )
    *((_DWORD *)this + 18) = v14 & 0xFFFFFFF7;
  v15 = *((_QWORD *)this + 2);
  if ( v15 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v15);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 2));
    *((_QWORD *)this + 2) = 0LL;
  }
}
