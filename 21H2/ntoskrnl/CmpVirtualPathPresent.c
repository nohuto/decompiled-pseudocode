/*
 * XREFs of CmpVirtualPathPresent @ 0x140870FB0
 * Callers:
 *     CmpReparseToVirtualPath @ 0x1405FFF2C (CmpReparseToVirtualPath.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpUnblockTwoHiveWrites @ 0x140664940 (CmpUnblockTwoHiveWrites.c)
 *     CmpFindPathByName @ 0x140666308 (CmpFindPathByName.c)
 *     CmpBlockTwoHiveWrites @ 0x140667684 (CmpBlockTwoHiveWrites.c)
 *     CmpGetCmHiveFromVirtualPath @ 0x1406679FC (CmpGetCmHiveFromVirtualPath.c)
 */

bool __fastcall CmpVirtualPathPresent(__m128i *a1)
{
  char *v1; // r14
  __int64 v3; // rdi
  char PathByName; // al
  __int64 v5; // rsi
  bool v6; // bl
  __int64 v8; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v9; // [rsp+78h] [rbp+38h] BYREF
  int v10; // [rsp+80h] [rbp+40h] BYREF
  int v11; // [rsp+84h] [rbp+44h]
  PVOID v12; // [rsp+88h] [rbp+48h] BYREF

  v10 = -1;
  v1 = (char *)CmpMasterHive;
  v8 = 0LL;
  v9 = 0;
  v3 = 0LL;
  v12 = 0LL;
  v11 = 0;
  if ( (int)CmpGetCmHiveFromVirtualPath((__int64)a1, (__int64)&v12) < 0
    || (int)CmpBlockTwoHiveWrites((__int64)v1, (__int64)v12, 1) < 0 )
  {
    return 0;
  }
  PathByName = CmpFindPathByName(0LL, a1, 0LL, &v9, &v8);
  v5 = v8;
  v6 = PathByName;
  if ( v8 )
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v8 + 8))(v8, v9, &v10);
  if ( v6 )
    v6 = v3 && CmpVEEnabled && (*(_WORD *)(v3 + 2) & 0x100) != 0;
  if ( v3 )
    (*(void (__fastcall **)(__int64, int *))(v5 + 16))(v5, &v10);
  CmpUnblockTwoHiveWrites(v1, (char *)v12);
  return v6;
}
