/*
 * XREFs of _GreSetClientRgn@12 @ 0x1E7093
 * Callers:
 *     _InvalidateGDIWindows@4 @ 0x1541C8 (_InvalidateGDIWindows@4.c)
 * Callees:
 *     ??1RGNOBJAPI@@QAE@XZ @ 0x24D20 (--1RGNOBJAPI@@QAE@XZ.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ?bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z @ 0x53E36 (-bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?bEqual@ERECTL@@QBEHABV1@@Z @ 0x1E64D2 (-bEqual@ERECTL@@QBEHABV1@@Z.c)
 *     ?bValid@EWNDOBJ@@QBEHXZ @ 0x1E6503 (-bValid@EWNDOBJ@@QBEHXZ.c)
 *     ?vSetClip@EWNDOBJ@@QAEXPAVREGION@@VERECTL@@@Z @ 0x1E68E5 (-vSetClip@EWNDOBJ@@QAEXPAVREGION@@VERECTL@@@Z.c)
 */

void __fastcall GreSetClientRgn(_DWORD *a1, HRGN a2, int *a3)
{
  bool v5; // zf
  int v6; // ecx
  _DWORD *v7; // eax
  int v8; // edx
  int v9; // ecx
  BOOL v10; // edi
  int v11; // edx
  int v12; // edx
  int v13; // eax
  int v14; // [esp+10h] [ebp-44h] BYREF
  int v15; // [esp+14h] [ebp-40h]
  int v16; // [esp+18h] [ebp-3Ch]
  int v17; // [esp+1Ch] [ebp-38h]
  _DWORD v18[3]; // [esp+20h] [ebp-34h] BYREF
  _DWORD v19[2]; // [esp+2Ch] [ebp-28h] BYREF
  struct _POINTL v20; // [esp+34h] [ebp-20h] BYREF
  int v21; // [esp+3Ch] [ebp-18h] BYREF
  int v22; // [esp+40h] [ebp-14h] BYREF
  int v23; // [esp+44h] [ebp-10h] BYREF
  int v24; // [esp+48h] [ebp-Ch] BYREF
  _DWORD v25[2]; // [esp+4Ch] [ebp-8h] BYREF

  if ( a2 )
  {
    if ( EWNDOBJ::bValid((EWNDOBJ *)a1) )
    {
      GreSetRegionOwner(a2, 0);
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v18, a2, 0);
      if ( v18[0] )
      {
        v5 = (a1[35] & 0x100) == 0;
        v25[0] = a1[12];
        v14 = *a3;
        v15 = a3[1];
        v16 = a3[2];
        v17 = a3[3];
        if ( v5 )
        {
          v6 = *(_DWORD *)(a1[33] + 16);
          v7 = *(_DWORD **)(v6 + 28);
          if ( v7 )
          {
            if ( v6 == v7[455] )
            {
              v8 = v7[459];
              v20.x = -v8;
              v9 = v7[460];
              v20.y = -v9;
              if ( v8 || v9 )
              {
                RGNOBJ::bOffset((RGNOBJ *)v18, &v20);
                ERECTL::bOffsetAdd((ERECTL *)&v14, &v20, 0);
              }
            }
          }
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v21);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v21);
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v23);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v23);
          if ( v21 )
          {
            if ( v23 )
            {
              RGNOBJ::vSet((RGNOBJ *)&v23, (struct _RECTL *)(a1[33] + 28));
              RGNOBJ::bCopy((RGNOBJ *)&v21, (struct RGNOBJ *)v18);
              RGNOBJAPI::iCombine((RGNOBJAPI *)v18, (struct RGNOBJ *)&v21, (struct RGNOBJ *)&v23, 1);
              if ( RGNOBJ::iCombine((RGNOBJ *)&v21, (struct RGNOBJ *)v18, (struct RGNOBJ *)&v23, 1) )
                RGNOBJAPI::bSwap((RGNOBJAPI *)v18, (struct RGNOBJ *)&v21);
            }
          }
          RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v23);
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v23);
          if ( v24 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v23);
          RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v21);
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v21);
          if ( v22 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v21);
        }
        if ( RGNOBJ::bEqual((RGNOBJ *)v25, (struct RGNOBJ *)v18)
          && ERECTL::bEqual((ERECTL *)(a1 + 7), (const struct ERECTL *)&v14) )
        {
          RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v18);
        }
        else
        {
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v19);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v19);
          v10 = 0;
          if ( (a1[35] & 0x200) != 0 && v19[0] )
            v10 = RGNOBJ::bCopy((RGNOBJ *)v19, (struct RGNOBJ *)v18) != 0;
          v22 = _ghsemWndobj;
          GreAcquireSemaphore(_ghsemWndobj);
          v24 = a1[38];
          GreAcquireSemaphore(v24);
          if ( v10 )
          {
            a3 = (int *)a1[37];
            if ( a3 )
            {
              RGNOBJ::vSwap((RGNOBJ *)v19, (struct RGNOBJ *)&a3);
              a1[37] = a3;
            }
          }
          if ( (a1[35] & 1) != 0 )
          {
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v20, 0, 1);
            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v20);
            if ( v20.x )
            {
              if ( RGNOBJ::iCombine((RGNOBJ *)&v20, (struct RGNOBJ *)v18, (struct RGNOBJ *)v25, 4) )
              {
                RGNOBJ::vSwap((RGNOBJ *)(a1 + 12), (struct RGNOBJ *)&v20);
                v11 = a1[12];
                *(_DWORD *)(v11 + 20) = _InterlockedIncrement((volatile signed __int32 *)REGION::ulUniqueREGION);
                EWNDOBJ::vSetClip((int)a1, (struct REGION *)a1[12], v14, v15, v16, v17);
                if ( !ERECTL::bEmpty((ERECTL *)(a1 + 1)) )
                  (*(void (__stdcall **)(_DWORD *, int))(a1[33] + 20))(a1, 1);
              }
            }
            RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v20);
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
            if ( v20.y == 1 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
          }
          RGNOBJAPI::bSwap((RGNOBJAPI *)v18, (struct RGNOBJ *)(a1 + 12));
          v12 = a1[12];
          *(_DWORD *)(v12 + 20) = _InterlockedIncrement((volatile signed __int32 *)REGION::ulUniqueREGION);
          EWNDOBJ::vSetClip((int)a1, (struct REGION *)a1[12], v14, v15, v16, v17);
          RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v18);
          v13 = a1[35];
          if ( (v13 & 2) != 0 )
          {
            (*(void (__stdcall **)(_DWORD *, int))(a1[33] + 20))(a1, 2);
            v13 = a1[35];
          }
          a1[35] = v13 | 0x80000000;
          *(_DWORD *)(a1[33] + 24) |= 0x80000000;
          SEMOBJ::vUnlock((SEMOBJ *)&v24);
          SEMOBJ::vUnlock((SEMOBJ *)&v22);
          RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v19);
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v19);
          if ( v19[1] == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v19);
        }
      }
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v18);
    }
    else
    {
      bDeleteRegion(a2);
    }
  }
}
