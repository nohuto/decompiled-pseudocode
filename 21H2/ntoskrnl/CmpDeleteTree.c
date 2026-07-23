/*
 * XREFs of CmpDeleteTree @ 0x14087EAFC
 * Callers:
 *     CmpSyncSubKeysAfterDelete @ 0x14087A3C8 (CmpSyncSubKeysAfterDelete.c)
 *     CmRestoreKey @ 0x14087C090 (CmRestoreKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpFreeKeyByCell @ 0x1406600A0 (CmpFreeKeyByCell.c)
 *     CmpFindSubKeyByNumber @ 0x1406E2C40 (CmpFindSubKeyByNumber.c)
 */

char __fastcall CmpDeleteTree(ULONG_PTR a1, unsigned int a2)
{
  unsigned int v4; // ebp
  _DWORD *v5; // rax
  unsigned int v6; // ebx
  int SubKeyByNumber; // ebx
  __int64 v8; // rax
  int v9; // ebx
  int v11; // [rsp+40h] [rbp+8h] BYREF
  int v12; // [rsp+44h] [rbp+Ch]
  unsigned int v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0;
  v11 = -1;
  v4 = a2;
  v12 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = (_DWORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a1 + 8))(a1, v4, &v11);
      if ( !v5 )
        return 0;
      v6 = v5[4];
      if ( !(v5[5] + v5[6]) )
        break;
      SubKeyByNumber = CmpFindSubKeyByNumber(a1, v5, 0, &v13);
      (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v11);
      if ( SubKeyByNumber < 0 )
        return 0;
      if ( v13 == -1 )
        return 0;
      v8 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a1 + 8))(a1, v13, &v11);
      if ( !v8 )
        return 0;
      v9 = *(_DWORD *)(v8 + 20) + *(_DWORD *)(v8 + 24);
      (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v11);
      if ( v9 )
      {
        v4 = v13;
      }
      else if ( (int)CmpFreeKeyByCell(a1, v13, 1) < 0 )
      {
        return 0;
      }
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v11);
    if ( v4 == a2 )
      break;
    v4 = v6;
  }
  return 1;
}
