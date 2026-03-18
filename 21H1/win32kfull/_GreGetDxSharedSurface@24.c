/*
 * XREFs of _GreGetDxSharedSurface@24 @ 0x38958
 * Callers:
 *     _WindowRedirectionBitmapMatchesMonitorAdapter@4 @ 0x2026A (_WindowRedirectionBitmapMatchesMonitorAdapter@4.c)
 *     _CreateOrGetRedirectionBitmap@16 @ 0x20722 (_CreateOrGetRedirectionBitmap@16.c)
 *     _NtUserHwndQueryRedirectionInfo@16 @ 0xB96F4 (_NtUserHwndQueryRedirectionInfo@16.c)
 *     _DxgkEngGetRedirBitmapSharedHandle@8 @ 0xBA5AA (_DxgkEngGetRedirBitmapSharedHandle@8.c)
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     ?uiDxPresentFlags@SFMLOGICALSURFACE@@QAEIXZ @ 0xA53B8 (-uiDxPresentFlags@SFMLOGICALSURFACE@@QAEIXZ.c)
 */

int __fastcall GreGetDxSharedSurface(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, int *a5, _DWORD *a6)
{
  int v7; // ebx
  int v8; // edx
  int v9; // eax
  int v10; // edi
  int v11; // ebx
  _DWORD *v12; // eax
  int v13; // edx
  int v14; // eax
  SFMLOGICALSURFACE *v15; // ebx
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // ecx
  _DWORD *v21; // eax
  int v22; // ecx
  int v23; // edx
  _DWORD *v24; // ecx
  int v25; // edx
  unsigned int v26; // ecx
  int v27; // edx
  _DWORD Buffer[2]; // [esp+10h] [ebp-18h] BYREF
  _DWORD *v30; // [esp+18h] [ebp-10h]
  int v31; // [esp+1Ch] [ebp-Ch]
  void (*v32)(void); // [esp+20h] [ebp-8h]
  _DWORD *v33; // [esp+24h] [ebp-4h]

  v33 = a2;
  v7 = -1071775733;
  if ( g_pDwmState )
  {
    GreAcquireSemaphoreSharedInternal(_ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", _ghsemDwmState);
    LOBYTE(v8) = 1;
    v9 = HMValidateHandleNoSecure(a1, v8);
    if ( v9 && (*(_BYTE *)(*(_DWORD *)(v9 + 20) + 18) & 0x20) != 0 )
    {
LABEL_51:
      EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
      GreReleaseSemaphoreInternal(_ghsemDwmState);
      return v7;
    }
    v10 = 0;
    if ( !a1 )
      goto LABEL_48;
    Buffer[1] = 0;
    v11 = 0;
    Buffer[0] = a1;
    if ( g_pDwmState != (struct DwmState *)-40 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)g_pDwmState + 40, 0);
    }
    v12 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)g_pDwmState, Buffer);
    if ( v12 )
      v11 = v12[1];
    v32 = KeLeaveCriticalRegion;
    if ( g_pDwmState != (struct DwmState *)-40 )
    {
      ExReleasePushLockExclusiveEx((char *)g_pDwmState + 40, 0);
      v32();
    }
    if ( !v11 || (LOBYTE(v13) = 15, v14 = HmgShareLockCheck(v11, v13), (v10 = v14) == 0) )
    {
LABEL_48:
      v7 = -1073741811;
LABEL_49:
      if ( v10 )
        DEC_SHARE_REF_CNT(v10);
      goto LABEL_51;
    }
    v15 = *(SFMLOGICALSURFACE **)(v14 + 136);
    if ( v14 != -60 )
    {
      KeEnterCriticalRegion();
      GreAcquirePushLockShared(v10 + 60);
    }
    v16 = *((_DWORD *)v15 + 28);
    if ( !v16
      || (*(_BYTE *)(v16 + 60) & 1) == 0
      || UserIsRemoteConnection() && !UserIsRemoteAndNotDisconnectConnection() )
    {
      v7 = -1073741822;
      *v33 = 0;
      *a4 = 87;
      *a5 = 1;
      *a6 = 0;
      a6[1] = 0;
      *a3 = 0;
      a3[1] = 0;
LABEL_46:
      if ( v10 != -60 )
      {
        GreReleasePushLockShared(v10 + 60);
        v32();
      }
      goto LABEL_49;
    }
    v31 = *((_DWORD *)v15 + 29);
    if ( v31 )
    {
      v17 = *((_DWORD *)v15 + 28);
      if ( v17 && (*(_BYTE *)(v17 + 60) & 1) != 0 )
      {
        v18 = *(_DWORD *)(v17 + 392);
        v19 = *(_DWORD *)(v17 + 396);
      }
      else
      {
        v18 = *((_DWORD *)v15 + 30);
        v19 = *((_DWORD *)v15 + 31);
      }
      if ( (*(_BYTE *)a5 & 4) != 0 && (*((_DWORD *)v15 + 39) & 0x100) == 0 && (v18 != *a3 || v19 != a3[1]) )
        goto LABEL_28;
      *v33 = v31;
      *a4 = *((_DWORD *)v15 + 32);
      if ( g_pDwmState && gfDwmDeviceBitmapsEnabledForMultiAdapter )
        v20 = 8;
      else
        v20 = 0;
      *a5 = v20 | *((_DWORD *)v15 + 33);
      v21 = (_DWORD *)*((_DWORD *)v15 + 28);
      if ( !v21 || (v21[15] & 1) == 0 )
      {
        v22 = *((_DWORD *)v15 + 30);
        v23 = *((_DWORD *)v15 + 31);
LABEL_42:
        *a3 = v22;
        v26 = 0;
        a3[1] = v23;
        v27 = *(_DWORD *)(*((_DWORD *)v15 + 28) + 40);
        if ( (*((_BYTE *)v15 + 132) & 2) != 0 )
          v26 = 0x80000000;
        v7 = 0;
        *a6 = v27;
        a6[1] = v26;
        goto LABEL_46;
      }
    }
    else
    {
      v24 = (_DWORD *)*((_DWORD *)v15 + 28);
      v30 = v24;
      v25 = v24[98];
      v31 = v24[99];
      if ( (*(_BYTE *)a5 & 4) != 0 && (v24[15] & 0x400) == 0 && (v25 != *a3 || v31 != a3[1]) )
      {
LABEL_28:
        v7 = -1071775484;
        goto LABEL_46;
      }
      *v33 = v24[97];
      *a4 = 87;
      *a5 = SFMLOGICALSURFACE::uiDxPresentFlags(v15);
      v21 = v30;
    }
    v23 = v21[99];
    v22 = v21[98];
    goto LABEL_42;
  }
  return v7;
}
