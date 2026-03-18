/*
 * XREFs of _GreSetPointer@16 @ 0x771C2
 * Callers:
 *     _zzzUpdateCursorImage@0 @ 0x745FA (_zzzUpdateCursorImage@0.c)
 *     _GreHidePointer@4 @ 0xB02B2 (_GreHidePointer@4.c)
 *     ?SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0xB1576 (-SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     _lambda_6c4cf59062ee11be64fa445dfc5ba57a_::operator() @ 0x1D10D1 (_lambda_6c4cf59062ee11be64fa445dfc5ba57a_--operator().c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?vCacheSetPointer@@YGXPAU_CURSINFO@@KKK@Z @ 0x7739E (-vCacheSetPointer@@YGXPAU_CURSINFO@@KKK@Z.c)
 *     ?vSetPointer@@YGXPAUHDEV__@@PAU_CURSINFO@@KKK@Z @ 0x77F4E (-vSetPointer@@YGXPAUHDEV__@@PAU_CURSINFO@@KKK@Z.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 */

int __fastcall GreSetPointer(int a1, HDEV a2, struct _CURSINFO *a3, unsigned int a4)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // ebx
  int v6; // edi
  _DWORD *HDEV; // eax
  unsigned int v8; // eax
  unsigned int v9; // edx
  int v10; // ecx
  _DWORD *v12; // eax
  HDEV v13; // edi
  int v14; // ebx
  _DWORD *v15; // ecx
  int v16; // edx
  int v17; // eax
  int v18; // esi
  unsigned int v19; // [esp+0h] [ebp-38h]
  unsigned int v20; // [esp+0h] [ebp-38h]
  unsigned int v21; // [esp+4h] [ebp-34h]
  unsigned int v22; // [esp+4h] [ebp-34h]
  int v23; // [esp+Ch] [ebp-2Ch]
  _DWORD *v24; // [esp+10h] [ebp-28h] BYREF
  HDEV v25; // [esp+14h] [ebp-24h]
  int v26; // [esp+18h] [ebp-20h]
  int v27; // [esp+1Ch] [ebp-1Ch]
  _DWORD *v28; // [esp+20h] [ebp-18h]
  int v29; // [esp+24h] [ebp-14h]
  int v30; // [esp+28h] [ebp-10h]
  int v31; // [esp+2Ch] [ebp-Ch]
  int v32; // [esp+30h] [ebp-8h]
  int v33; // [esp+34h] [ebp-4h] BYREF

  v26 = 0;
  v25 = a2;
  v27 = a1;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v32 = ThreadWin32Thread;
  LOBYTE(v30) = 0;
  v6 = _ghsemDynamicModeChange;
  v31 = _ghsemDynamicModeChange;
  GreAcquireSemaphoreSharedInternal(_ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", _ghsemDynamicModeChange);
  HDEV = (_DWORD *)UserGetHDEV();
  if ( HDEV )
  {
    v24 = HDEV;
    if ( ThreadWin32Thread )
    {
      v8 = *(_DWORD *)(ThreadWin32Thread + 180) & 0xFFFFFFFE;
      v30 = (int)(*(_DWORD *)(ThreadWin32Thread + 180) << 31) >> 31;
      *(_DWORD *)(ThreadWin32Thread + 180) = v8;
    }
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v24) )
    {
      GreAcquireSemaphore(_ghsemGreLock);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", _ghsemGreLock, 2);
    }
    v33 = v24[10];
    GreAcquireSemaphore(v33);
    vCacheSetPointer(a3, a4, v19, v21);
    if ( gulCachedPointerRefs )
    {
      v23 = 1;
      bCachedSetPointerRefs = 1;
      if ( (v9 & 0x20) != 0 )
      {
        v9 |= 0x40u;
        v26 = 1;
        v25 = (HDEV)v9;
      }
    }
    else
    {
      v23 = 0;
    }
    v10 = v24[6];
    if ( ((unsigned int)&loc_20000 & v10) != 0 )
    {
      v12 = (_DWORD *)v24[277];
      v13 = v25;
      v14 = v26;
      v15 = (_DWORD *)*v12;
      v16 = v12[2];
      v17 = v23;
      v28 = v15;
      v29 = v16;
      do
      {
        v18 = v15[9];
        if ( !v17 || (*(_DWORD *)(v18 + 1416) & 0x2000) != 0 || (*(_BYTE *)(v18 + 24) & 4) != 0 || v14 )
        {
          GreAcquireSemaphore(*(_DWORD *)(v18 + 40));
          EtwTraceGreLockAcquireSemaphoreExclusive(L"poThis.hsemPointer()", *(_DWORD *)(v18 + 40), 4);
          vSetPointer(v13, a3, a4, v20, v22);
          EtwTraceGreLockReleaseSemaphore(L"poThis.hsemPointer()", *(_DWORD *)(v18 + 40));
          GreReleaseSemaphoreInternal(*(_DWORD *)(v18 + 40));
          v15 = v28;
          v17 = v23;
          v16 = v29;
        }
        v15 = (_DWORD *)*v15;
        --v16;
        v28 = v15;
        v29 = v16;
      }
      while ( v16 );
      v6 = v31;
      ThreadWin32Thread = v32;
    }
    else if ( !v23 || (v24[354] & 0x2000) != 0 || (v10 & 4) != 0 || v26 )
    {
      vSetPointer((HDEV)v9, a3, a4, v20, v22);
    }
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v24) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", _ghsemGreLock);
      GreReleaseSemaphoreInternal(_ghsemGreLock);
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v33);
    if ( ThreadWin32Thread )
      *(_DWORD *)(ThreadWin32Thread + 180) ^= (*(_DWORD *)(ThreadWin32Thread + 180) ^ (unsigned __int8)v30) & 1;
  }
  EtwTraceGreLockReleaseSemaphore(L"hsem", v6);
  return GreReleaseSemaphoreInternal(v6);
}
