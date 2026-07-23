/*
 * XREFs of DrvDbRegisterDatabase @ 0x1407A43D0
 * Callers:
 *     PiDrvDbRegisterNode @ 0x1407A3A78 (PiDrvDbRegisterNode.c)
 * Callees:
 *     DrvDbFindDatabaseNode @ 0x1406F1CEC (DrvDbFindDatabaseNode.c)
 *     DrvDbCreateDatabaseNode @ 0x1407A4468 (DrvDbCreateDatabaseNode.c)
 */

__int64 __fastcall DrvDbRegisterDatabase(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // rdi
  bool v10; // cf
  const UNICODE_STRING *v12; // [rsp+50h] [rbp+8h] BYREF

  v7 = PiDrvDbCtx;
  v12 = 0LL;
  if ( (int)DrvDbFindDatabaseNode(PiDrvDbCtx, a2, &v12) >= 0 )
    return 0x40000000LL;
  v10 = a5 != 0;
  a5 = -a5;
  return DrvDbCreateDatabaseNode(v7, a2, 0LL, a4, v10 ? 0x10 : 0, PiDrvDbNodeActionCallback, a7, &v12);
}
