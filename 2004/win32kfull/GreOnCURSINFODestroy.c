/*
 * XREFs of GreOnCURSINFODestroy @ 0x1C00AFADC
 * Callers:
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C00AF918 (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C002D44C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C002D58C (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     _lambda_9a8a047a5147a8b2f6bffa79fe7b2ec3_::operator() @ 0x1C02741E8 (_lambda_9a8a047a5147a8b2f6bffa79fe7b2ec3_--operator().c)
 */

void __fastcall GreOnCURSINFODestroy(struct _CURSINFO *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 HDEV; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF
  char v11; // [rsp+40h] [rbp+18h] BYREF

  if ( gCachedSetPointerState == a1 )
  {
    SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v11, ghsemDynamicModeChange, a3, a4);
    HDEV = UserGetHDEV();
    if ( HDEV )
    {
      v9 = HDEV;
      v6 = *(_QWORD *)(HDEV + 64);
      if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v9) )
      {
        lambda_9a8a047a5147a8b2f6bffa79fe7b2ec3_::operator()(v7, v6, a1);
      }
      else
      {
        v10 = ghsemGreLock;
        GreAcquireSemaphore(ghsemGreLock);
        lambda_9a8a047a5147a8b2f6bffa79fe7b2ec3_::operator()(v8, v6, a1);
        SEMOBJ::vUnlock((SEMOBJ *)&v10);
      }
    }
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v11);
  }
}
