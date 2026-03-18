/*
 * XREFs of ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004C72C
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00462B0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreSelectVisRgn @ 0x1C004C6C0 (GreSelectVisRgn.c)
 *     GreSelectVisRgnShared @ 0x1C00C6EC0 (GreSelectVisRgnShared.c)
 * Callees:
 *     GreGetObjectOwner @ 0x1C001F270 (GreGetObjectOwner.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0037A40 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@K@Z @ 0x1C003C320 (--0RGNMEMOBJ@@QEAA@K@Z.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C003C800 (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C003C950 (--1RGNMEMOBJ@@QEAA@XZ.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C003C9D0 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     GreSetRegionOwner @ 0x1C003CBE0 (GreSetRegionOwner.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C003D898 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C003DA14 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C003ECA0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0040820 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C0041330 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C004A370 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C004B9B4 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     EngAcquireSemaphore @ 0x1C005EA70 (EngAcquireSemaphore.c)
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
  REGION *v14[2]; // [rsp+20h] [rbp-30h] BYREF
  struct REGION *v15[4]; // [rsp+30h] [rbp-20h] BYREF
  REGION *v16; // [rsp+80h] [rbp+30h] BYREF
  HSEMAPHORE v17; // [rsp+98h] [rbp+48h] BYREF

  v3 = 0LL;
  if ( *a1 )
  {
    v17 = ghsemVisRgnPublish;
    EngAcquireSemaphore(ghsemVisRgnPublish);
    v7 = 1;
    DC::vReleaseRao(*a1);
    if ( !a2 )
    {
      DC::vReleaseVis(*a1);
      DC::bSetDefaultRegion(*a1);
      goto LABEL_27;
    }
    GreSetRegionOwner((__int64)a2, 0);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v15, a2, 0);
    v8 = (struct _RECTL *)v15[0];
    if ( v15[0] )
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
              v16 = v3;
              RGNOBJAPI::bSwap((RGNOBJAPI *)v15, (struct RGNOBJ *)&v16, v10);
              v3 = v16;
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
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v14, v8[5].left);
          v3 = v14[0];
          if ( v14[0] )
            RGNOBJ::vCopy((RGNOBJ *)v14, (struct RGNOBJ *)v15);
          else
            v3 = prgnDefault;
          RGNMEMOBJ::~RGNMEMOBJ(v14);
        }
      }
      else
      {
        v3 = (REGION *)v8;
        if ( !(unsigned int)RGNOBJAPI::bDeleteHandle((RGNOBJAPI *)v15) )
        {
          v7 = 0;
LABEL_25:
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v15);
LABEL_27:
          SEMOBJ::vUnlock((PERESOURCE *)&v17);
          return v7;
        }
        v15[0] = 0LL;
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
