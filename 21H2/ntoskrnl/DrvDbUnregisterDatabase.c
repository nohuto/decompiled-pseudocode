/*
 * XREFs of DrvDbUnregisterDatabase @ 0x14097E9F0
 * Callers:
 *     PiDrvDbRegisterNode @ 0x1407A3A78 (PiDrvDbRegisterNode.c)
 * Callees:
 *     DrvDbFindDatabaseNode @ 0x1406F1CEC (DrvDbFindDatabaseNode.c)
 *     DrvDbDestroyDatabaseNode @ 0x14097EA4C (DrvDbDestroyDatabaseNode.c)
 */

__int64 __fastcall DrvDbUnregisterDatabase(__int64 a1, const WCHAR *a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // r8
  const UNICODE_STRING *v5; // rdx
  const UNICODE_STRING *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = PiDrvDbCtx;
  v6 = 0LL;
  result = DrvDbFindDatabaseNode(PiDrvDbCtx, a2, &v6);
  if ( (int)result >= 0 )
  {
    v5 = v6;
    if ( ((__int64)v6[3].Buffer & 1) != 0 )
    {
      return 3221225485LL;
    }
    else
    {
      if ( *(const UNICODE_STRING **)(v2 + 40) == v6 )
        *(_QWORD *)(v2 + 40) = 0LL;
      return DrvDbDestroyDatabaseNode(v2, v5, v4);
    }
  }
  return result;
}
