/*
 * XREFs of ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C009262C
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C008C520 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreSelectVisRgn @ 0x1C0092430 (GreSelectVisRgn.c)
 *     GreSelectVisRgnShared @ 0x1C00C7C50 (GreSelectVisRgnShared.c)
 * Callees:
 *     GreGetObjectOwner @ 0x1C0023750 (GreGetObjectOwner.c)
 *     EngAcquireSemaphore @ 0x1C0027A20 (EngAcquireSemaphore.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C007B390 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@K@Z @ 0x1C0080B10 (--0RGNMEMOBJ@@QEAA@K@Z.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C0080FDC (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C0081130 (--1RGNMEMOBJ@@QEAA@XZ.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0081260 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     GreSetRegionOwner @ 0x1C0081470 (GreSetRegionOwner.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00820E8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0082264 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00844C0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0086240 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C0086C70 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C00903E0 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C00919A4 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 */

__int64 __fastcall GreSelectVisRgnInternal(DC **a1, HRGN a2, int a3)
{
  REGION *v3; // rbx
  unsigned int v7; // r14d
  struct _RECTL *v8; // r15
  struct DC *v9; // r12
  __int64 v10; // r8
  int v11; // edi
  int v12; // edi
  __int64 v13; // rdx
  int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // r8
  REGION *v18[2]; // [rsp+20h] [rbp-30h] BYREF
  struct REGION *v19[4]; // [rsp+30h] [rbp-20h] BYREF
  REGION *v20; // [rsp+80h] [rbp+30h] BYREF
  PERESOURCE v21; // [rsp+98h] [rbp+48h] BYREF

  v3 = 0LL;
  if ( *a1 )
  {
    v21 = ghsemVisRgnPublish;
    EngAcquireSemaphore((HSEMAPHORE)ghsemVisRgnPublish);
    v7 = 1;
    DC::vReleaseRao(*a1);
    if ( !a2 )
    {
      DC::vReleaseVis(*a1);
      DC::bSetDefaultRegion(*a1, v15, v16);
      goto LABEL_27;
    }
    GreSetRegionOwner((__int64)a2, 0);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v19, a2, 0);
    v8 = (struct _RECTL *)v19[0];
    if ( v19[0] )
    {
      v9 = *a1;
      if ( (unsigned int)GreGetObjectOwner(*(_QWORD *)*a1, 1) != -2147483630 )
        GrepValidateVisRgn(v9, v8);
      v11 = a3 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 == 2 )
          {
            v3 = (REGION *)*((_QWORD *)*a1 + 140);
            if ( !v3 )
              v3 = prgnDefault;
            if ( v3 != prgnDefault )
            {
              v20 = v3;
              RGNOBJAPI::bSwap((RGNOBJAPI *)v19, (struct RGNOBJ *)&v20, v10);
              v3 = v20;
LABEL_24:
              *((_QWORD *)*a1 + 140) = v3;
              *((_DWORD *)v3 + 7) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
              goto LABEL_25;
            }
            v7 = 0;
          }
        }
        else
        {
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v18, v8[5].left);
          v3 = v18[0];
          if ( v18[0] )
            RGNOBJ::vCopy((RGNOBJ *)v18, (struct RGNOBJ *)v19);
          else
            v3 = prgnDefault;
          RGNMEMOBJ::~RGNMEMOBJ(v18);
        }
      }
      else
      {
        v3 = (REGION *)v8;
        if ( !(unsigned int)RGNOBJAPI::bDeleteHandle((RGNOBJAPI *)v19) )
        {
          v7 = 0;
LABEL_25:
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v19);
LABEL_27:
          SEMOBJ::vUnlock((SEMOBJ *)&v21, v13, v14);
          return v7;
        }
        v19[0] = 0LL;
      }
    }
    else
    {
      v3 = prgnDefault;
    }
    DC::vReleaseVis(*a1);
    goto LABEL_24;
  }
  return 0;
}
