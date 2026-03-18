/*
 * XREFs of _GreGetRandomRgn@12 @ 0x5D7A0
 * Callers:
 *     _NtGdiGetRandomRgn@12 @ 0x5AA6E (_NtGdiGetRandomRgn@12.c)
 *     ?GetTrueClipRgn@@YGHPAUHDC__@@PAUHRGN__@@@Z @ 0xC3732 (-GetTrueClipRgn@@YGHPAUHDC__@@PAUHRGN__@@@Z.c)
 *     __ExcludeUpdateRgn@8 @ 0x1964AE (__ExcludeUpdateRgn@8.c)
 *     _DrawTextExWorker@28 @ 0x1B8194 (_DrawTextExWorker@28.c)
 * Callees:
 *     ?pSurface@DC@@QAEXPAVSURFACE@@@Z @ 0x11CAA (-pSurface@DC@@QAEXPAVSURFACE@@@Z.c)
 *     _UserGetRedirectedWindowOrigin@8 @ 0x38754 (_UserGetRedirectedWindowOrigin@8.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?UntrapAppContainerRenderingWorker@@YGXAAPAUHDC__@@AAPAUHSURF__@@1PBK@Z @ 0x5DF78 (-UntrapAppContainerRenderingWorker@@YGXAAPAUHDC__@@AAPAUHSURF__@@1PBK@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QAEXXZ @ 0xAAFAA (-vClearRenderState@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QAEHXZ @ 0xABAC4 (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QAEHXZ.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     ?vMarkTransformDirty@DC@@QAEXXZ @ 0x1CDA19 (-vMarkTransformDirty@DC@@QAEXXZ.c)
 */

int __stdcall GreGetRandomRgn(int a1, HRGN a2, int a3)
{
  DC *v3; // ecx
  struct _DC_ATTR *UserAttr; // eax
  LONG v5; // ebx
  int v6; // edi
  int v7; // esi
  int v8; // eax
  int v9; // esi
  PKTHREAD CurrentThread; // esi
  int *ThreadWin32Thread; // eax
  int v12; // eax
  DC *v13; // ecx
  struct _DC_ATTR *v14; // eax
  int v15; // esi
  LONG x; // [esp+8h] [ebp-64h]
  HSURF *v18; // [esp+Ch] [ebp-60h]
  const unsigned int *v19; // [esp+10h] [ebp-5Ch]
  struct _POINTL v20; // [esp+18h] [ebp-54h] BYREF
  int v21; // [esp+20h] [ebp-4Ch] BYREF
  DC *v22; // [esp+24h] [ebp-48h] BYREF
  int v23; // [esp+28h] [ebp-44h]
  int v24; // [esp+2Ch] [ebp-40h]
  _DWORD v25[3]; // [esp+30h] [ebp-3Ch] BYREF
  int v26; // [esp+3Ch] [ebp-30h] BYREF
  int v27; // [esp+40h] [ebp-2Ch]
  int v28; // [esp+48h] [ebp-24h]
  HSURF v29; // [esp+4Ch] [ebp-20h] BYREF
  DC *v30[3]; // [esp+50h] [ebp-1Ch] BYREF
  __int16 v31; // [esp+5Ch] [ebp-10h]
  HDC v32; // [esp+60h] [ebp-Ch] BYREF

  v23 = 0;
  v24 = 0;
  v3 = (DC *)HmgLockEx(a1, 1, 0);
  v22 = v3;
  if ( !v3 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
    goto LABEL_12;
  }
  if ( (*((_BYTE *)v3 + 32) & 2) == 0 )
  {
    UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v22);
    if ( UserAttr && !DC::SaveAttributes(v22, UserAttr) )
    {
      _InterlockedDecrement((volatile signed __int32 *)v22 + 2);
      v3 = 0;
      v22 = 0;
      goto LABEL_13;
    }
    *((_DWORD *)v22 + 8) |= 2u;
    v3 = v22;
    v23 = 1;
  }
  if ( (*((_BYTE *)v3 + 520) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v3);
LABEL_12:
    v3 = v22;
  }
LABEL_13:
  v5 = 0;
  v20.x = 5;
  v6 = -1;
  if ( !v3 )
  {
    EngSetLastError(6u);
    goto LABEL_66;
  }
  memset(v30, 0, sizeof(v30));
  v31 = 256;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v26, (struct XDCOBJ *)&v22, 1);
  if ( (v28 & 1) == 0 )
  {
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v26);
    if ( v30[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v30);
    v6 = -1;
    goto LABEL_66;
  }
  if ( a3 != 1 )
  {
    switch ( a3 )
    {
      case 2:
        v7 = *((_DWORD *)v22 + 27);
        goto LABEL_28;
      case 3:
        v7 = *((_DWORD *)v22 + 26);
        v5 = *((_DWORD *)v22 + 27);
        if ( v7 )
        {
          if ( v5 )
            v20.x = 1;
        }
        else
        {
          v7 = *((_DWORD *)v22 + 27);
        }
        goto LABEL_28;
      case 4:
      case 5:
        v7 = *((_DWORD *)v22 + 287);
        goto LABEL_28;
      default:
        goto LABEL_29;
    }
  }
  v7 = *((_DWORD *)v22 + 26);
LABEL_28:
  if ( v7 )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v25, a2, 0);
    if ( !v25[0] )
      goto LABEL_40;
    v21 = v7;
    if ( v20.x == 5 )
    {
      if ( !RGNOBJAPI::bCopy((RGNOBJAPI *)v25, (struct RGNOBJ *)&v21) )
        goto LABEL_40;
      if ( a3 != 4 || (*((_DWORD *)v22 + 6) & 0x4000) == 0 )
        goto LABEL_39;
      v20.x = 0;
      v20.y = 0;
      if ( !UserGetRedirectedWindowOrigin(a1, &v20) )
      {
LABEL_40:
        if ( !v25[2] )
          RGNOBJ::UpdateUserRgn((RGNOBJ *)v25);
        if ( v25[0] )
          _InterlockedDecrement((volatile signed __int32 *)(v25[0] + 8));
        goto LABEL_44;
      }
      v8 = RGNOBJ::bOffset((RGNOBJ *)v25, &v20);
    }
    else
    {
      x = v20.x;
      v20.x = v5;
      v8 = RGNOBJAPI::iCombine((RGNOBJAPI *)v25, (struct RGNOBJ *)&v21, (struct RGNOBJ *)&v20, x);
    }
    if ( v8 )
    {
LABEL_39:
      v6 = 1;
      goto LABEL_40;
    }
    goto LABEL_40;
  }
LABEL_29:
  v6 = 0;
LABEL_44:
  if ( v30[0] && HIBYTE(v31) )
  {
    v9 = *((_DWORD *)v30[0] + 9);
    if ( (v28 & 0x1000) != 0 )
    {
      DEVLOCKOBJ::bUnMapTrgSurfaceView((DEVLOCKOBJ *)&v26);
      if ( (v28 & 0x10) != 0 )
      {
        *((_DWORD *)v30[0] + 6) &= ~0x4000u;
        DC::pSurface(v30[0], *(struct SURFACE **)(v9 + 1820));
      }
      DEVLOCKOBJ::vClearRenderState((DEVLOCKOBJ *)&v26);
    }
    DLODCOBJ::vUnlock((DLODCOBJ *)v30);
    v30[0] = 0;
  }
  if ( (v28 & 0x1000) != 0 )
  {
    GreDecLockCount();
    v28 &= ~0x1000u;
    CurrentThread = KeGetCurrentThread();
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        v12 = *ThreadWin32Thread;
        if ( v12 )
        {
          *(_DWORD *)(v12 + 176) = 0;
          *(_DWORD *)(v12 + 172) = 0;
        }
      }
    }
  }
  else if ( (v28 & 0x800000) != 0 )
  {
    GreDecLockCount();
    v28 &= ~0x800000u;
  }
  if ( v26 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", v26);
    GreReleaseSemaphoreInternal(v26);
  }
  if ( (v28 & 8) != 0 )
    v28 &= ~8u;
  if ( v27 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v27);
    GreReleaseSemaphoreInternal(v27);
  }
  UntrapAppContainerRenderingWorker(&v32, &v29, v18, v19);
  if ( v30[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v30);
LABEL_66:
  v13 = v22;
  if ( v22 )
  {
    if ( v23 && (*((_BYTE *)v22 + 32) & 2) != 0 )
    {
      if ( !v24 )
      {
        v14 = XDCOBJ::GetUserAttr((XDCOBJ *)&v22);
        v13 = v22;
        if ( v14 )
        {
          DC::RestoreAttributes(v22, v14);
          v13 = v22;
        }
      }
      *((_DWORD *)v13 + 8) &= ~2u;
      v13 = v22;
      v23 = 0;
    }
    v21 = 0;
    v15 = *(_DWORD *)v13;
    HmgDecrementExclusiveReferenceCountEx(v13, v24, &v21);
    if ( v21 )
      bDeleteDCInternalEx(v15, 0);
  }
  return v6;
}
