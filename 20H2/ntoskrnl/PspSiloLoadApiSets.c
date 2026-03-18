/*
 * XREFs of PspSiloLoadApiSets @ 0x140909564
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x140908CC0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x140204C10 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x140204C30 (PsAttachSiloToCurrentThread.c)
 *     PsGetServerSiloGlobals @ 0x140245E34 (PsGetServerSiloGlobals.c)
 *     ApiSetReleaseSchema @ 0x1405BCB38 (ApiSetReleaseSchema.c)
 *     PspQueryForwardersEnabled @ 0x14079EB58 (PspQueryForwardersEnabled.c)
 *     PspApiSetCopyToSystemSpace @ 0x140908578 (PspApiSetCopyToSystemSpace.c)
 *     ApiSetLoadSchemaWithExtensions @ 0x140961104 (ApiSetLoadSchemaWithExtensions.c)
 */

__int64 __fastcall PspSiloLoadApiSets(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *v2; // r14
  int v3; // esi
  _QWORD *ServerSiloGlobals; // rbx
  __int64 v6; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v7[3]; // [rsp+28h] [rbp-18h] BYREF
  void *Src; // [rsp+68h] [rbp+28h] BYREF
  size_t Size; // [rsp+70h] [rbp+30h] BYREF
  struct _DMA_ADAPTER *v10; // [rsp+78h] [rbp+38h] BYREF

  v6 = 0LL;
  v10 = 0LL;
  Src = 0LL;
  Size = 0LL;
  v7[1] = L"\\SystemRoot\\System32\\ApiSetSchema.dll";
  v7[0] = 4980810LL;
  v2 = PsAttachSiloToCurrentThread(a1);
  v3 = ApiSetLoadSchemaWithExtensions(v7, &Src, &Size);
  if ( v3 >= 0 )
  {
    v3 = PspApiSetCopyToSystemSpace(Src, Size, &v10, &v6);
    if ( v3 >= 0 )
    {
      ServerSiloGlobals = PsGetServerSiloGlobals((__int64)a1);
      ServerSiloGlobals[129] = v10;
      ServerSiloGlobals[130] = v6;
      *((_BYTE *)ServerSiloGlobals + 1048) = PspQueryForwardersEnabled();
    }
    if ( Src )
      ApiSetReleaseSchema((ULONG_PTR)Src);
  }
  PsDetachSiloFromCurrentThread(v2);
  return (unsigned int)v3;
}
