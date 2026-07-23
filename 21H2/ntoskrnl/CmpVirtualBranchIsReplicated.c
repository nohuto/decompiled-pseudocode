/*
 * XREFs of CmpVirtualBranchIsReplicated @ 0x1406647D4
 * Callers:
 *     CmpVEExecuteRealStoreParseLogic @ 0x1406660E0 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140870D88 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpUnblockTwoHiveWrites @ 0x140664940 (CmpUnblockTwoHiveWrites.c)
 *     CmpFindPathByName @ 0x140666308 (CmpFindPathByName.c)
 *     CmpBlockTwoHiveWrites @ 0x140667684 (CmpBlockTwoHiveWrites.c)
 *     CmpGetCmHiveFromVirtualPath @ 0x1406679FC (CmpGetCmHiveFromVirtualPath.c)
 */

bool __fastcall CmpVirtualBranchIsReplicated(__int64 a1, _WORD *a2, char *a3)
{
  char *v3; // r12
  int v4; // esi
  int v5; // edi
  PVOID v6; // r15
  PVOID v7; // r14
  char PathByName; // al
  __int64 v9; // rsi
  char v10; // di
  __int64 v11; // rax
  bool v12; // zf
  char v13; // al
  unsigned __int16 v14; // cx
  unsigned __int16 v15; // dx
  __int64 v18; // [rsp+30h] [rbp-20h] BYREF
  __int128 v19; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v20; // [rsp+90h] [rbp+40h] BYREF
  int v21; // [rsp+A0h] [rbp+50h] BYREF
  int v22; // [rsp+A4h] [rbp+54h]
  PVOID v23; // [rsp+A8h] [rbp+58h] BYREF

  v21 = -1;
  v20 = 0;
  v22 = 0;
  v18 = 0LL;
  v3 = a3;
  v23 = 0LL;
  v4 = (int)a2;
  *a3 = 0;
  v5 = a1;
  v6 = 0LL;
  v19 = 0LL;
  if ( a1 )
  {
    if ( !*a2 )
      return CmpVEEnabled && (*(_DWORD *)(a1 + 184) & 0x1000000) != 0;
    v7 = *(PVOID *)(a1 + 32);
  }
  else
  {
    if ( (int)CmpGetCmHiveFromVirtualPath(a2, &v23) < 0 )
      return 0;
    v6 = CmpMasterHive;
    v7 = v23;
  }
  LOBYTE(a3) = 1;
  if ( (int)CmpBlockTwoHiveWrites(v6, v7, a3) < 0 )
    return 0;
  PathByName = CmpFindPathByName(v5, v4, (unsigned int)&v19, (unsigned int)&v20, (__int64)&v18);
  v9 = v18;
  v10 = PathByName;
  if ( v18 && (v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v18 + 8))(v18, v20, &v21)) != 0 )
  {
    if ( v10 )
    {
      if ( !CmpVEEnabled || (*(_WORD *)(v11 + 2) & 0x100) == 0 )
        v10 = 0;
    }
    else
    {
      if ( !CmpVEEnabled || (v12 = (*(_WORD *)(v11 + 2) & 0x100) == 0, v13 = 1, v12) )
        v13 = 0;
      v14 = 0;
      v15 = (unsigned __int16)v19 >> 1;
      *v3 = v13;
      if ( v15 )
      {
        while ( *(_WORD *)(*((_QWORD *)&v19 + 1) + 2LL * v14) != 92 )
        {
          if ( ++v14 >= v15 )
            goto LABEL_16;
        }
        *v3 = 0;
      }
    }
LABEL_16:
    (*(void (__fastcall **)(__int64, int *))(v9 + 16))(v9, &v21);
  }
  else
  {
    v10 = 0;
  }
  CmpUnblockTwoHiveWrites(v6, v7);
  return v10;
}
