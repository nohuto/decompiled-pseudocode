/*
 * XREFs of _GreAccNotifyWindow@8 @ 0x20D36
 * Callers:
 *     ?SetRedirectionBitmap@@YGHPAUtagWND@@QAUHBITMAP__@@H@Z @ 0x20C0E (-SetRedirectionBitmap@@YGHPAUtagWND@@QAUHBITMAP__@@H@Z.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x213BE (--0DYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 *     ?vAccNotify@@YGXPAU_SURFOBJ@@KPAX@Z @ 0x213E8 (-vAccNotify@@YGXPAU_SURFOBJ@@KPAX@Z.c)
 *     ?pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ @ 0x55814 (-pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ.c)
 */

int __fastcall GreAccNotifyWindow(int a1, struct _SURFOBJ *a2)
{
  int v4; // edx
  SURFACE *v5; // eax
  SURFACE *v6; // esi
  unsigned int v8; // [esp+0h] [ebp-10h]
  void *v9; // [esp+4h] [ebp-Ch]
  char v10; // [esp+Fh] [ebp-1h] BYREF

  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v10);
  LOBYTE(v4) = 5;
  v5 = (SURFACE *)HmgShareLockCheck(a1, v4);
  v6 = v5;
  if ( v5 )
  {
    SURFACE::pSurfobj(v5);
    vAccNotify(a2, v8, v9);
    DEC_SHARE_REF_CNT(v6);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
  return GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
}
