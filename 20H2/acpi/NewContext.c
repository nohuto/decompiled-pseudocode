/*
 * XREFs of NewContext @ 0x1C0023D88
 * Callers:
 *     AMLILoadDDB @ 0x1C00BE218 (AMLILoadDDB.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1C001C644 (ExAllocateFromNPagedLookasideList.c)
 *     InitContext @ 0x1C0023E84 (InitContext.c)
 *     memset @ 0x1C0032180 (memset.c)
 */

__int64 __fastcall NewContext(PVOID *a1)
{
  unsigned int v2; // ebx
  PVOID v3; // rax
  KIRQL v4; // dl
  int v5; // eax
  KIRQL v6; // al
  _QWORD *v7; // rcx
  void *v8; // rax

  v2 = 0;
  v3 = ExAllocateFromNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&AMLIContextLookAsideList);
  *a1 = v3;
  if ( v3 )
  {
    memset(v3, 0, 0x238uLL);
    v4 = KeAcquireSpinLockRaiseToDpc(&gdwGContextSpinLock);
    v5 = gdwcCTObjs + 1;
    gdwcCTObjs = v5;
    if ( v5 > 0 && v5 > (unsigned int)gdwcCTObjsMax )
      gdwcCTObjsMax = v5;
    KeReleaseSpinLock(&gdwGContextSpinLock, v4);
    InitContext(*a1);
    v6 = KeAcquireSpinLockRaiseToDpc(&gmutCtxtList);
    v7 = off_1C007F388[0];
    byte_1C0082BC8 = v6;
    v8 = (char *)*a1 + 16;
    if ( *(_UNKNOWN ***)off_1C007F388[0] != &glistCtxtHead )
      __fastfail(3u);
    *((_QWORD *)*a1 + 3) = off_1C007F388[0];
    *(_QWORD *)v8 = &glistCtxtHead;
    *v7 = v8;
    off_1C007F388[0] = v8;
    KeReleaseSpinLock(&gmutCtxtList, byte_1C0082BC8);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
