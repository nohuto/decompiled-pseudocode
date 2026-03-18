/*
 * XREFs of DrvDbDestroyDatabaseNode @ 0x14098114C
 * Callers:
 *     DrvDbDispatchDriverDatabase @ 0x1406E5000 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x14073143C (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbOpenContext @ 0x140799AEC (DrvDbOpenContext.c)
 *     DrvDbUnregisterDatabase @ 0x1409810F0 (DrvDbUnregisterDatabase.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x14029DAD0 (ExDeleteResourceLite.c)
 *     RtlFreeAnsiString @ 0x140632500 (RtlFreeAnsiString.c)
 *     DrvDbUnloadDatabaseNode @ 0x1406E5D0C (DrvDbUnloadDatabaseNode.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DrvDbDestroyDatabaseNode(__int64 a1, void ***a2)
{
  int v3; // esi
  void **v4; // rcx
  void **v5; // rdx
  void **v6; // rdi

  v3 = DrvDbUnloadDatabaseNode(a1, (__int64)a2);
  if ( v3 >= 0 )
  {
    v4 = *a2;
    if ( (*a2)[1] != a2 || (v5 = a2[1], *v5 != a2) )
      __fastfail(3u);
    *v5 = v4;
    v4[1] = v5;
    v6 = a2[18];
    if ( v6 )
    {
      ExDeleteResourceLite((PERESOURCE)a2[18]);
      ExFreePoolWithTag(v6, 0);
    }
    RtlFreeAnsiString((PUNICODE_STRING)a2 + 1);
    RtlFreeAnsiString((PUNICODE_STRING)(a2 + 5));
    ExFreePoolWithTag(a2, 0);
  }
  return (unsigned int)v3;
}
