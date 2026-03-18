/*
 * XREFs of _GreClientRgnUpdated@4 @ 0x384C8
 * Callers:
 *     ?zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z @ 0x2B94A (-zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z.c)
 *     _zzzLockDisplayAreaAndInvalidateDCCache@12 @ 0x3536C (_zzzLockDisplayAreaAndInvalidateDCCache@12.c)
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     ?bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z @ 0xA0A28 (-bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z.c)
 *     _zzzUpdateLayeredWindow@40 @ 0xBABAE (_zzzUpdateLayeredWindow@40.c)
 *     ?vForceClientRgnUpdate@@YGXXZ @ 0x1E6558 (-vForceClientRgnUpdate@@YGXXZ.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?vSetClip@EWNDOBJ@@QAEXPAVREGION@@VERECTL@@@Z @ 0x1E68E5 (-vSetClip@EWNDOBJ@@QAEXPAVREGION@@VERECTL@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall GreClientRgnUpdated(int a1)
{
  char v1; // bl
  struct TRACKOBJ *i; // ebx
  int v3; // ecx
  int v4; // ecx
  _DWORD *v5; // esi
  int v6; // eax
  int v7; // edi
  int j; // esi
  int v9; // edx
  signed __int32 v10; // ecx
  _DWORD *v11; // esi
  _DWORD *v12; // eax
  int v13; // edx
  int v14; // esi
  int v15; // eax
  int v16; // [esp+5Ch] [ebp-2Ch] BYREF
  struct TRACKOBJ *v17; // [esp+60h] [ebp-28h]
  int v18; // [esp+64h] [ebp-24h] BYREF
  _DWORD *v19; // [esp+68h] [ebp-20h]
  _DWORD *v20; // [esp+6Ch] [ebp-1Ch]
  int v21; // [esp+70h] [ebp-18h]
  int v22; // [esp+74h] [ebp-14h] BYREF
  _DWORD v23[2]; // [esp+78h] [ebp-10h] BYREF
  _DWORD v24[2]; // [esp+80h] [ebp-8h] BYREF

  v1 = a1;
  v21 = a1;
  GreAcquireSemaphore(_ghsemVisRgnUniqueness);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemVisRgnUniqueness", _ghsemVisRgnUniqueness, 10);
  ++giVisRgnUniqueness;
  EtwTraceGreLockReleaseSemaphore(L"ghsemVisRgnUniqueness", _ghsemVisRgnUniqueness);
  GreReleaseSemaphoreInternal(_ghsemVisRgnUniqueness);
  if ( (v1 & 1) != 0 )
  {
    v22 = _ghsemWndobj;
    GreAcquireSemaphore(_ghsemWndobj);
    for ( i = gpto; ; i = (struct TRACKOBJ *)*((_DWORD *)i + 1) )
    {
      v17 = i;
      if ( !i )
        break;
      v3 = *((_DWORD *)i + 6);
      if ( v3 < 0 )
      {
        v4 = v3 & 0x7FFFFFFF;
        *((_DWORD *)i + 6) = v4;
        if ( (v4 & 0x12) == 0x12 )
        {
          v5 = (_DWORD *)*((_DWORD *)i + 3);
          if ( v5 )
          {
            do
            {
              v6 = v5[35];
              if ( v6 >= 0 )
              {
                v16 = v5[38];
                GreAcquireSemaphore(v16);
                (*((void (__stdcall **)(_DWORD *, int))i + 5))(v5, 2);
                SEMOBJ::vUnlock((SEMOBJ *)&v16);
              }
              else
              {
                v5[35] = v6 & 0x7FFFFFFF;
              }
              v5 = (_DWORD *)v5[32];
            }
            while ( v5 );
            v4 = *((_DWORD *)i + 6);
          }
        }
        if ( (v4 & 0xC) != 0 )
        {
          v7 = *((_DWORD *)i + 2);
          v16 = v7;
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v24, 0, 1);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v24);
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v23, 0, 1);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v23);
          if ( v24[0] && v23[0] )
          {
            v19 = (_DWORD *)(v7 + 28);
            RGNOBJ::vSet((RGNOBJ *)v23, (struct _RECTL *)(v7 + 28));
            for ( j = *((_DWORD *)i + 3); j; j = *(_DWORD *)(j + 128) )
            {
              v18 = *(_DWORD *)(j + 48);
              if ( RGNOBJ::iCombine((RGNOBJ *)v24, (struct RGNOBJ *)v23, (struct RGNOBJ *)&v18, 4) )
                RGNOBJ::vSwap((RGNOBJ *)v23, (struct RGNOBJ *)v24);
            }
            if ( (*((_BYTE *)i + 24) & 4) != 0 )
            {
              v18 = *(_DWORD *)(v7 + 48);
              v20 = (_DWORD *)(v7 + 48);
              if ( RGNOBJ::iCombine((RGNOBJ *)v24, (struct RGNOBJ *)v23, (struct RGNOBJ *)&v18, 4) )
              {
                RGNOBJ::vSwap((RGNOBJ *)(v7 + 48), (struct RGNOBJ *)v24);
                v9 = *(_DWORD *)(v7 + 48);
                v10 = _InterlockedExchangeAdd((volatile signed __int32 *)REGION::ulUniqueREGION, 1u);
                v11 = v19;
                v12 = v20;
                *(_DWORD *)(v9 + 20) = v10 + 1;
                v7 = v16;
                EWNDOBJ::vSetClip(v16, *v12, *v11, v11[1], v11[2], v11[3]);
                if ( !ERECTL::bEmpty((ERECTL *)(v7 + 4)) )
                  (*((void (__stdcall **)(int, int))i + 5))(v7, 4);
              }
            }
            RGNOBJ::vSwap((RGNOBJ *)(v7 + 48), (struct RGNOBJ *)v23);
            v13 = *(_DWORD *)(v7 + 48);
            *(_DWORD *)(v13 + 20) = _InterlockedIncrement((volatile signed __int32 *)REGION::ulUniqueREGION);
            v14 = v16;
            EWNDOBJ::vSetClip(
              v16,
              *(_DWORD *)(v7 + 48),
              *(_DWORD *)(v7 + 28),
              *(_DWORD *)(v7 + 32),
              *(_DWORD *)(v7 + 36),
              *(_DWORD *)(v7 + 40));
            i = v17;
            if ( (*((_BYTE *)v17 + 24) & 8) != 0 )
              (*((void (__stdcall **)(int, int))v17 + 5))(v14, 8);
          }
          RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v23);
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v23);
          if ( v23[1] == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v23);
          RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v24);
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v24);
          if ( v24[1] == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v24);
        }
        (*((void (__stdcall **)(_DWORD, int))i + 5))(0, 16);
        v15 = *((_DWORD *)i + 6);
        if ( (v15 & 0x40) != 0 )
        {
          if ( (v21 & 2) != 0 )
          {
            *((_DWORD *)i + 6) = v15 | 0x4000000;
          }
          else
          {
            (*((void (__stdcall **)(_DWORD, int))i + 5))(0, 64);
            *((_DWORD *)i + 6) &= ~0x4000000u;
          }
        }
      }
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v22);
  }
}
