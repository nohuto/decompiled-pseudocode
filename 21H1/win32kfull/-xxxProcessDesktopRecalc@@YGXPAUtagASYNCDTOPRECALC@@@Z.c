/*
 * XREFs of ?xxxProcessDesktopRecalc@@YGXPAUtagASYNCDTOPRECALC@@@Z @ 0x150D2
 * Callers:
 *     _xxxProcessEventMessage@8 @ 0x13A0E (_xxxProcessEventMessage@8.c)
 * Callees:
 *     _xxxDeferWindowPosAndCheckPoint@28 @ 0x14AF0 (_xxxDeferWindowPosAndCheckPoint@28.c)
 *     _xxxComputeProposedPerMonRect@12 @ 0x15354 (_xxxComputeProposedPerMonRect@12.c)
 *     _FindOldMonitor@12 @ 0x153AA (_FindOldMonitor@12.c)
 *     _xxxNotifyMonitorChanged@16 @ 0x26F18 (_xxxNotifyMonitorChanged@16.c)
 *     _IsNonImmersiveBand@4 @ 0x2D3DC (_IsNonImmersiveBand@4.c)
 *     _InternalBeginDeferWindowPos@4 @ 0x32DC2 (_InternalBeginDeferWindowPos@4.c)
 *     ?EqualRectInl@@YGKPBUtagRECT@@0@Z @ 0x334C0 (-EqualRectInl@@YGKPBUtagRECT@@0@Z.c)
 *     _xxxEndDeferWindowPosEx@8 @ 0x34486 (_xxxEndDeferWindowPosEx@8.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __thiscall xxxProcessDesktopRecalc(_DWORD *this)
{
  int v2; // edx
  int v3; // esi
  _DWORD *v4; // edi
  int v5; // eax
  int v6; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int Prop; // edx
  int v10; // edx
  int v11; // eax
  _DWORD *v12; // edi
  PKTHREAD v13; // eax
  int v14; // eax
  int v15; // eax
  _DWORD *v16; // esi
  int v17; // ecx
  int v18; // edi
  PKTHREAD v19; // eax
  int v20; // eax
  int OldMonitor; // eax
  int v22; // eax
  PKTHREAD v23; // eax
  int v24; // eax
  const struct tagRECT *v25; // [esp+0h] [ebp-50h]
  const struct tagRECT *v26; // [esp+4h] [ebp-4Ch]
  _DWORD v27[3]; // [esp+10h] [ebp-40h] BYREF
  int v28; // [esp+1Ch] [ebp-34h]
  int v29; // [esp+20h] [ebp-30h] BYREF
  int v30; // [esp+24h] [ebp-2Ch]
  int v31; // [esp+28h] [ebp-28h]
  int v32; // [esp+2Ch] [ebp-24h]
  int v33; // [esp+30h] [ebp-20h]
  _DWORD *v34; // [esp+34h] [ebp-1Ch]
  int v35; // [esp+38h] [ebp-18h]
  int v36; // [esp+3Ch] [ebp-14h] BYREF
  int v37; // [esp+40h] [ebp-10h]
  int v38; // [esp+44h] [ebp-Ch]
  int v39; // [esp+48h] [ebp-8h]

  if ( this )
  {
    v3 = InternalBeginDeferWindowPos(this[2]);
    v35 = v3;
    if ( v3 )
    {
      v29 = 0;
      v30 = 0;
      v31 = 0;
      PushW32ThreadLock(v3, &v29, DestroySMWP);
      v32 = 0;
      if ( (int)this[2] > 0 )
      {
        v4 = this + 3;
        v34 = this + 3;
        while ( 1 )
        {
          LOBYTE(v2) = 1;
          v33 = *v4;
          v5 = HMValidateHandleNoSecure(v33, v2);
          v6 = v5;
          if ( v5 )
          {
            v28 = *(_DWORD *)(v5 + 20);
            if ( *(char *)(v28 + 16) >= 0 && IsNonImmersiveBand(v5) && EqualRectInl(v25, v26) )
            {
              v27[2] = 0;
              CurrentThread = KeGetCurrentThread();
              ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
              v27[0] = *(_DWORD *)(ThreadWin32Thread + 228);
              *(_DWORD *)(ThreadWin32Thread + 228) = v27;
              v27[1] = v6;
              HMLockObject(v6);
              Prop = _GetProp(1);
              if ( v35 )
              {
                v35 = xxxDeferWindowPosAndCheckPoint(
                        v35,
                        v6,
                        (struct tagRECT *)*this,
                        (struct tagWND *)(*(_DWORD *)(v6 + 20) + 52),
                        Prop,
                        this[1],
                        0);
                if ( !v35 )
                {
                  v23 = KeGetCurrentThread();
                  v24 = W32GetThreadWin32Thread(v23);
                  *(_DWORD *)(v24 + 8) = v29;
                }
              }
              ThreadUnlock1();
              LOBYTE(v10) = 1;
              v6 = HMValidateHandleNoSecure(v33, v10);
              if ( !v6 )
                goto LABEL_34;
            }
            v36 = 0;
            v37 = 0;
            v38 = 0;
            v39 = 0;
            if ( (*(_DWORD *)(*(_DWORD *)(v6 + 20) + 184) & 0xF) != 2
              || (*(_DWORD *)(*(_DWORD *)(v6 + 8) + 352) & 0x2000000) != 0
              || !xxxComputeProposedPerMonRect(v6, *this, &v36) )
            {
              v4 = v34;
LABEL_34:
              *v4 = 0;
              goto LABEL_18;
            }
            LOBYTE(v2) = 1;
            v11 = HMValidateHandleNoSecure(v33, v2);
            v4 = v34;
            if ( !v11 )
              goto LABEL_34;
            v12 = v34 + 1;
            v34[1] = v36;
            *++v12 = v37;
            *++v12 = v38;
            v12[1] = v39;
            v4 = v34;
          }
LABEL_18:
          v4 += 5;
          v34 = v4;
          if ( ++v32 >= this[2] )
          {
            v3 = v35;
            break;
          }
        }
      }
      if ( v3 )
      {
        v13 = KeGetCurrentThread();
        v14 = W32GetThreadWin32Thread(v13);
        *(_DWORD *)(v14 + 8) = v29;
        xxxEndDeferWindowPosEx(v3, 0);
      }
    }
    v15 = 0;
    v35 = 0;
    if ( (int)this[2] > 0 )
    {
      v16 = this + 4;
      do
      {
        v17 = *(v16 - 1);
        if ( v17 )
        {
          LOBYTE(v2) = 1;
          v18 = HMValidateHandleNoSecure(v17, v2);
          if ( v18 )
          {
            v31 = 0;
            v19 = KeGetCurrentThread();
            v20 = W32GetThreadWin32Thread(v19);
            v29 = *(_DWORD *)(v20 + 228);
            *(_DWORD *)(v20 + 228) = &v29;
            v30 = v18;
            HMLockObject(v18);
            OldMonitor = FindOldMonitor(0);
            if ( OldMonitor < 0 )
              v22 = 0;
            else
              v22 = *(unsigned __int16 *)(40 * OldMonitor + *this + 36);
            xxxNotifyMonitorChanged(v18, v16, 0, v22);
            ThreadUnlock1();
          }
          v15 = v35;
        }
        ++v15;
        v16 += 5;
        v35 = v15;
      }
      while ( v15 < this[2] );
    }
    Win32FreePool(*this);
    Win32FreePool(this);
  }
}
