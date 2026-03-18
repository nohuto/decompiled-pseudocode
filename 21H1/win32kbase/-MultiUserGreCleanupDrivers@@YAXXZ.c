/*
 * XREFs of ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C000E5E0
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C000C588 (MultiUserNtGreCleanup.c)
 * Callees:
 *     DxDdCleanupDxGraphics @ 0x1C000E674 (DxDdCleanupDxGraphics.c)
 *     ?InitializeClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C000E720 (-InitializeClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C008B8E0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ldevUnloadImage @ 0x1C00AD180 (ldevUnloadImage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MultiUserGreCleanupDrivers(__int64 a1, __int64 a2)
{
  struct PDEV *v2; // rbx
  struct tagGRAPHICS_DEVICE *v3; // r8
  struct tagGRAPHICS_DEVICE *v4; // rbx
  __int64 v5; // rcx
  struct _LDEV *v6; // [rsp+30h] [rbp+8h]
  struct PDEV *v7; // [rsp+38h] [rbp+10h] BYREF

  while ( 1 )
  {
    v2 = gppdevList;
    if ( !gppdevList )
      break;
    PDEV::InitializeClientReferenceCount(gppdevList);
    *((_DWORD *)v2 + 3) = 1;
    v7 = v2;
    PDEVOBJ::vUnreferencePdev(&v7, 2LL);
  }
  v3 = gpRemoteGraphicsDeviceList;
  if ( gpRemoteGraphicsDeviceList )
  {
    do
    {
      v4 = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)v3 + 16);
      if ( (*((_DWORD *)v3 + 40) & 0x4000000) != 0 )
      {
        v5 = *((_QWORD *)v3 + 35);
        if ( v5 )
        {
          LOBYTE(a2) = 1;
          ((void (__fastcall *)(__int64, __int64, _QWORD))qword_1C02529D0)(v5, a2, *((_QWORD *)v3 + 36));
        }
      }
      v3 = v4;
    }
    while ( v4 );
  }
  DxDdCleanupDxGraphics();
  while ( 1 )
  {
    v6 = gpldevDrivers;
    if ( !gpldevDrivers )
      break;
    *((_DWORD *)gpldevDrivers + 7) = 1;
    ldevUnloadImage(v6);
  }
}
