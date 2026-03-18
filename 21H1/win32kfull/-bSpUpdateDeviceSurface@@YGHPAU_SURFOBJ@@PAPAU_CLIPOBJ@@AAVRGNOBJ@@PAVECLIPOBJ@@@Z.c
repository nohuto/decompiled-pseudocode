/*
 * XREFs of ?bSpUpdateDeviceSurface@@YGHPAU_SURFOBJ@@PAPAU_CLIPOBJ@@AAVRGNOBJ@@PAVECLIPOBJ@@@Z @ 0xE8A7A
 * Callers:
 *     ??0ENUMUNDERLAYS@@QAE@PAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z @ 0x66EB0 (--0ENUMUNDERLAYS@@QAE@PAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ?prgnVisSnap@DC@@QBEPAVREGION@@XZ @ 0x53684 (-prgnVisSnap@DC@@QBEPAVREGION@@XZ.c)
 *     ?iComplexity@RGNOBJ@@QBEJXZ @ 0x5A892 (-iComplexity@RGNOBJ@@QBEJXZ.c)
 */

int __userpurge bSpUpdateDeviceSurface@<eax>(
        int *a1@<edx>,
        LONG a2@<ecx>,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ **a4,
        struct RGNOBJ *a5,
        struct ECLIPOBJ *a6)
{
  int v7; // ebx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // edi
  int result; // eax
  unsigned int v11; // ecx
  DC **v12; // edx
  DC *v13; // eax
  struct REGION *v14; // eax
  int v15; // eax
  _DWORD v16[2]; // [esp+Ch] [ebp-28h] BYREF
  int v17; // [esp+14h] [ebp-20h]
  struct _POINTL v18; // [esp+18h] [ebp-1Ch] BYREF
  DC **v19; // [esp+20h] [ebp-14h]
  struct REGION *v20; // [esp+24h] [ebp-10h] BYREF
  struct RGNOBJ *v21; // [esp+28h] [ebp-Ch]
  int v22; // [esp+2Ch] [ebp-8h] BYREF
  int *v23; // [esp+30h] [ebp-4h]

  v23 = a1;
  v18.y = a2;
  v7 = 1;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  result = 1;
  if ( ThreadWin32Thread && (*(_BYTE *)(ThreadWin32Thread + 180) & 1) != 0 && *(_WORD *)(a2 + 48) == 1 )
  {
    GreAcquireSemaphoreSharedInternal(_ghsemVisRgnUniqueness);
    EtwTraceGreLockAcquireSemaphoreShared(L"hsem", _ghsemVisRgnUniqueness);
    v11 = *(_DWORD *)(ThreadWin32Thread + 188);
    if ( v11 == giVisRgnUniquenessStable )
    {
LABEL_6:
      EtwTraceGreLockReleaseSemaphore(L"hsem", _ghsemVisRgnUniqueness);
      GreReleaseSemaphoreInternal(_ghsemVisRgnUniqueness);
      if ( v7 || !v23 || !*v23 )
        return v7;
      GreAcquireSemaphoreSharedInternal(_ghsemVisRgnPublish);
      EtwTraceGreLockAcquireSemaphoreShared(L"hsem", _ghsemVisRgnPublish);
      v12 = *(DC ***)(ThreadWin32Thread + 172);
      v19 = v12;
      if ( !v12 )
      {
        EtwTraceGreLockReleaseSemaphore(L"hsem", _ghsemVisRgnPublish);
        GreReleaseSemaphoreInternal(_ghsemVisRgnPublish);
        return 1;
      }
      v17 = *v23;
      v13 = *v12;
      v21 = v17 != 0 ? (struct RGNOBJ *)(v17 + 48) : 0;
      v22 = *((_DWORD *)v13 + 287);
      v14 = DC::prgnVisSnap(*v12);
      v20 = v14;
      if ( v22 && v14 )
      {
        if ( RGNOBJ::bEqual((RGNOBJ *)&v20, (struct RGNOBJ *)&v22) )
        {
LABEL_36:
          v7 = 1;
          goto LABEL_35;
        }
        if ( a3->dhsurf )
        {
          if ( a3->dhsurf != *(DHSURF *)v21 )
          {
            if ( RGNOBJ::bCopy((RGNOBJ *)a3, (struct RGNOBJ *)&v22) )
            {
              RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v16);
              RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v16);
              if ( v16[0] )
              {
                if ( ((unsigned int)&loc_20000 & *(_DWORD *)(*((_DWORD *)*v19 + 9) + 24)) != 0 )
                {
                  v15 = *(_DWORD *)(v18.y + 12);
                  v18.x = -*(_DWORD *)(v15 + 1836);
                  v18.y = -*(_DWORD *)(v15 + 1840);
                  RGNOBJ::bOffset((RGNOBJ *)a3, &v18);
                }
                if ( RGNOBJ::bMerge((RGNOBJ *)v16, v21, (struct RGNOBJ *)a3, 8u) )
                {
                  if ( RGNOBJ::iComplexity((RGNOBJ *)v16) != 1 )
                  {
                    RGNOBJ::vSwap((RGNOBJ *)v16, (struct RGNOBJ *)a3);
                    XCLIPOBJ::vSetup((XCLIPOBJ *)a4, (struct REGION *)a3->dhsurf, (struct ERECTL *)(v17 + 4), 1);
                    if ( !ERECTL::bEmpty((ERECTL *)(a4 + 1)) )
                    {
                      *v23 = (int)a4;
                      v7 = 1;
                    }
                  }
                }
              }
              RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v16);
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v16);
              if ( v16[1] == 1 )
                RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v16);
            }
            goto LABEL_35;
          }
          goto LABEL_36;
        }
      }
LABEL_35:
      EtwTraceGreLockReleaseSemaphore(L"hsem", _ghsemVisRgnPublish);
      GreReleaseSemaphoreInternal(_ghsemVisRgnPublish);
      return v7;
    }
    if ( giVisRgnUniquenessStable > giVisRgnUniqueness )
    {
      if ( v11 <= giVisRgnUniqueness || v11 >= giVisRgnUniquenessStable )
        goto LABEL_11;
    }
    else if ( v11 >= giVisRgnUniquenessStable && v11 <= giVisRgnUniqueness )
    {
LABEL_11:
      v7 = 1;
      goto LABEL_6;
    }
    v7 = 0;
    goto LABEL_6;
  }
  return result;
}
