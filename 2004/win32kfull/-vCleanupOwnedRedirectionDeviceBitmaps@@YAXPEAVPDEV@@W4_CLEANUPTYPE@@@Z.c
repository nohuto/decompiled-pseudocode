/*
 * XREFs of ?vCleanupOwnedRedirectionDeviceBitmaps@@YAXPEAVPDEV@@W4_CLEANUPTYPE@@@Z @ 0x1C0100268
 * Callers:
 *     vCleanupOwnedRedirectionDeviceBitmapsWrap @ 0x1C0100250 (vCleanupOwnedRedirectionDeviceBitmapsWrap.c)
 * Callees:
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z @ 0x1C00DC48C (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00DC4E0 (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C015A84C (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 */

void __fastcall vCleanupOwnedRedirectionDeviceBitmaps(__int64 a1, unsigned int a2)
{
  int IsSemaphoreOwnedOrSharedByCurrentThread; // eax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 i; // rcx
  __int64 Objt; // rax
  __int64 v11; // rbx
  __int64 v12; // rdx
  char v13; // [rsp+30h] [rbp+8h] BYREF
  __int64 v14; // [rsp+40h] [rbp+18h] BYREF

  IsSemaphoreOwnedOrSharedByCurrentThread = GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemDynamicModeChange);
  NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
    (NEEDDYNAMICMODECHANGESHARELOCK *)&v13,
    IsSemaphoreOwnedOrSharedByCurrentThread == 0,
    v5,
    v6);
  LOBYTE(v7) = 5;
  HmgPrefetchAllObjt(v7, SURFACE::tSize + 256);
  GreAcquireHmgrSemaphore();
  for ( i = 0LL; ; i = v11 )
  {
    LOBYTE(v8) = 5;
    Objt = HmgSafeNextObjt(i, v8);
    if ( !Objt )
      break;
    v11 = *(_QWORD *)Objt;
    if ( *(_QWORD *)(Objt + 48) == a1 && (*(_DWORD *)(Objt + 116) & 1) != 0 && !*(_DWORD *)(Objt + 8) )
    {
      GreMarkDeletableBitmap(*(_QWORD *)Objt);
      LOBYTE(v12) = 5;
      v14 = HmgShareLockCheck(v11, v12);
      SURFREF::bDeleteSurface(&v14, a2, 0LL);
      if ( v14 )
        DEC_SHARE_REF_CNT(v14);
    }
  }
  GreReleaseHmgrSemaphore();
  NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v13);
}
