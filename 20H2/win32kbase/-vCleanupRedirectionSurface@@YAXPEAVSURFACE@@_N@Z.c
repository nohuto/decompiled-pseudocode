/*
 * XREFs of ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1C0143CD0
 * Callers:
 *     pProcessDfbSurfacesInternal @ 0x1C001AA60 (pProcessDfbSurfacesInternal.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C0145040 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 * Callees:
 *     ?GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ @ 0x1C001B380 (-GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ.c)
 *     HmgShareLockCheck @ 0x1C00438E0 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0043DF0 (HmgDecrementShareReferenceCountEx.c)
 *     IsvSpDwmMigrateLSurfShapeReferenceSupported @ 0x1C00BF700 (IsvSpDwmMigrateLSurfShapeReferenceSupported.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00CEC10 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vCleanupRedirectionSurface(struct SURFACE *this, char a2)
{
  int v4; // eax
  char v5; // si
  __int64 v6; // rdi
  struct SFMLOGICALSURFACE *FirstLSurf; // rax
  __int64 v8; // [rsp+20h] [rbp-38h]
  SURFACE *v9; // [rsp+70h] [rbp+18h] BYREF

  if ( (int)IsvSpDwmMigrateLSurfShapeReferenceSupported() >= 0 )
  {
    v4 = qword_1C024F1C0 ? qword_1C024F1C0() : -1073741637;
    if ( v4 >= 0 )
    {
      v9 = (SURFACE *)HmgShareLockCheck(*((_QWORD *)this + 4), 5);
      if ( v9 )
      {
        v5 = 0;
        v6 = 0LL;
        while ( 1 )
        {
          FirstLSurf = SURFACE::GetFirstLSurf(this);
          if ( !FirstLSurf )
            break;
          if ( !v6 )
            v6 = *((_QWORD *)FirstLSurf + 33);
          v5 = 1;
          if ( qword_1C024F1A8 )
            qword_1C024F1A8(*((_QWORD *)this + 6), FirstLSurf, 0LL);
        }
        if ( qword_1C024F1C8 )
          qword_1C024F1C8(v6);
        SURFREF::bDeleteSurface(&v9, 0);
        if ( a2 && !v5 && !byte_1C0252448 )
        {
          v8 = *((_QWORD *)this + 6);
          byte_1C0252448 = 1;
          DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 400LL, 20LL, this, v8, 0LL, 0LL, 0LL, 0);
        }
        if ( v9 )
          HmgDecrementShareReferenceCountEx((__int64)v9, 0LL);
      }
    }
  }
}
