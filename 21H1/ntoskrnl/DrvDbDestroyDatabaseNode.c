/*
 * XREFs of DrvDbDestroyDatabaseNode @ 0x140979FDC
 * Callers:
 *     DrvDbDispatchDriverDatabase @ 0x1406AD710 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x14073C170 (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbOpenContext @ 0x14078B4DC (DrvDbOpenContext.c)
 *     DrvDbUnregisterDatabase @ 0x140979F80 (DrvDbUnregisterDatabase.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x140231040 (ExDeleteResourceLite.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     DrvDbUnloadDatabaseNode @ 0x1406AE260 (DrvDbUnloadDatabaseNode.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
