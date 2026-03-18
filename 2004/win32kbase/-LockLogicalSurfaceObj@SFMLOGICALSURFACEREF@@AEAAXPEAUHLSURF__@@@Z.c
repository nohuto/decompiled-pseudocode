/*
 * XREFs of ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C00C01BC
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C00BF860 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     HmgLockEx @ 0x1C008ABB0 (HmgLockEx.c)
 */

void __fastcall SFMLOGICALSURFACEREF::LockLogicalSurfaceObj(SFMLOGICALSURFACEREF *this, HLSURF a2)
{
  if ( a2 )
    *(_QWORD *)this = HmgLockEx((unsigned int)a2, 18, 0);
}
