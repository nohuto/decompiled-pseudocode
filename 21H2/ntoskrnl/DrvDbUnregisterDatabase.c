/*
 * XREFs of DrvDbUnregisterDatabase @ 0x140A304B4
 * Callers:
 *     PiDrvDbRegisterNode @ 0x14082666C (PiDrvDbRegisterNode.c)
 *     PiDrvDbUnregisterNode @ 0x14095E00C (PiDrvDbUnregisterNode.c)
 * Callees:
 *     DrvDbFindDatabaseNode @ 0x1406C2248 (DrvDbFindDatabaseNode.c)
 *     DrvDbDestroyDatabaseNode @ 0x140A30510 (DrvDbDestroyDatabaseNode.c)
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
    if ( (*(_DWORD *)&v6[4].Length & 1) != 0 )
    {
      return 3221225485LL;
    }
    else
    {
      if ( *(const UNICODE_STRING **)(v2 + 48) == v6 )
        *(_QWORD *)(v2 + 48) = 0LL;
      return DrvDbDestroyDatabaseNode(v2, v5, v4);
    }
  }
  return result;
}
