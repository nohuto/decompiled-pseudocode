/*
 * XREFs of ?vCleanupOwnedRedirectionDeviceBitmaps@@YGXPAVPDEV@@W4_CLEANUPTYPE@@@Z @ 0x94DD6
 * Callers:
 *     _vCleanupOwnedRedirectionDeviceBitmapsWrap@8 @ 0x94DC2 (_vCleanupOwnedRedirectionDeviceBitmapsWrap@8.c)
 * Callees:
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x96A1A (--1NEEDDYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QAE@H@Z @ 0x96A40 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QAE@H@Z.c)
 */

void __fastcall vCleanupOwnedRedirectionDeviceBitmaps(int a1, int a2)
{
  int v2; // esi
  int IsSemaphoreOwnedOrSharedByCurrentThread; // eax
  int v4; // ecx
  int v5; // edx
  int *i; // eax
  int v7; // edx
  int v8; // edi
  int v9; // edx
  int v10; // esi
  int v11; // eax
  _BYTE v12[4]; // [esp+4h] [ebp-Ch] BYREF
  int v13; // [esp+8h] [ebp-8h]
  int v14; // [esp+Ch] [ebp-4h]

  v2 = a1;
  v13 = a2;
  v14 = a1;
  IsSemaphoreOwnedOrSharedByCurrentThread = GreIsSemaphoreOwnedOrSharedByCurrentThread(_ghsemDynamicModeChange);
  NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
    (NEEDDYNAMICMODECHANGESHARELOCK *)v12,
    IsSemaphoreOwnedOrSharedByCurrentThread == 0);
  LOBYTE(v4) = 5;
  HmgPrefetchAllObjt(v4, SURFACE::tSize + 256);
  GreAcquireHmgrSemaphore();
  LOBYTE(v5) = 5;
  for ( i = (int *)HmgSafeNextObjt(0, v5); i; i = (int *)HmgSafeNextObjt(v8, v7) )
  {
    v8 = *i;
    if ( i[7] == v2 && (i[19] & 1) != 0 && !i[1] )
    {
      GreMarkDeletableBitmap(*i);
      LOBYTE(v9) = 5;
      v10 = HmgShareLockCheck(v8, v9);
      v11 = SURFACE::bDeleteSurface(v10, v13, 0) == 0 ? v10 : 0;
      if ( v11 )
        DEC_SHARE_REF_CNT(v11);
      v2 = v14;
    }
    LOBYTE(v7) = 5;
  }
  GreReleaseHmgrSemaphore();
  NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)v12);
}
