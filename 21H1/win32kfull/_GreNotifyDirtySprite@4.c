/*
 * XREFs of _GreNotifyDirtySprite@4 @ 0x20098
 * Callers:
 *     _RecreateRedirectionBitmap@24 @ 0x23D22 (_RecreateRedirectionBitmap@24.c)
 * Callees:
 *     ?hspLookupWindow@DWMALTSPRITEREF@@SGPAUHSPRITE__@@PAUHWND__@@@Z @ 0x2387E (-hspLookupWindow@DWMALTSPRITEREF@@SGPAUHSPRITE__@@PAUHWND__@@@Z.c)
 *     ??0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z @ 0x23BEC (--0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z.c)
 *     ?bSpDwmNotifyDirty@@YGHPAUHSPRITE__@@PAVSFMLOGICALSURFACE@@K_K@Z @ 0x25270 (-bSpDwmNotifyDirty@@YGHPAUHSPRITE__@@PAVSFMLOGICALSURFACE@@K_K@Z.c)
 */

struct DwmState *GreNotifyDirtySprite()
{
  struct DwmState *result; // eax
  int v1; // esi
  HSPRITE v2; // eax
  int v3; // edx
  int v4; // eax
  int v5; // eax
  struct SFMLOGICALSURFACE *v6; // eax
  unsigned __int64 v7; // [esp+0h] [ebp-10h]
  int v8; // [esp+Ch] [ebp-4h] BYREF

  result = g_pDwmState;
  if ( g_pDwmState )
  {
    GreAcquireSemaphoreSharedInternal(_ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", _ghsemDwmState);
    v1 = 0;
    v2 = DWMALTSPRITEREF::hspLookupWindow((HWND)v7);
    if ( v2 )
    {
      LOBYTE(v3) = 15;
      v4 = HmgShareLockCheck(v2, v3);
      v1 = v4;
      if ( !v4 )
      {
LABEL_10:
        EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
        return (struct DwmState *)GreReleaseSemaphoreInternal(_ghsemDwmState);
      }
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v8, (struct _EX_PUSH_LOCK *)(v4 + 60));
      v5 = *(_DWORD *)(*(_DWORD *)(v1 + 136) + 112);
      if ( v5 )
        v6 = *(struct SFMLOGICALSURFACE **)(v5 + 4);
      else
        v6 = 0;
      bSpDwmNotifyDirty((HSPRITE)1, v6, 0, v7);
      if ( v8 )
      {
        ExReleasePushLockExclusiveEx(v8, 0);
        KeLeaveCriticalRegion();
      }
    }
    if ( v1 )
      DEC_SHARE_REF_CNT(v1);
    goto LABEL_10;
  }
  return result;
}
