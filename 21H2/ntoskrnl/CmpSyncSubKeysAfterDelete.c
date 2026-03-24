/*
 * XREFs of CmpSyncSubKeysAfterDelete @ 0x14087A268
 * Callers:
 *     CmpCopySyncTree2 @ 0x140878590 (CmpCopySyncTree2.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyByNumber @ 0x1405F34E0 (CmpFindSubKeyByNumber.c)
 *     CmpFreeKeyByCell @ 0x14066B280 (CmpFreeKeyByCell.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1407AC8F8 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpInitializeKeyNameString @ 0x140879188 (CmpInitializeKeyNameString.c)
 *     CmpDeleteTree @ 0x14087E99C (CmpDeleteTree.c)
 */

bool __fastcall CmpSyncSubKeysAfterDelete(__int64 a1, __int64 a2, ULONG_PTR a3, _DWORD *a4, _WORD *a5)
{
  unsigned int v5; // r15d
  int SubKeyByNumber; // ebx
  ULONG_PTR v10; // rax
  ULONG_PTR v11; // rsi
  unsigned int v13; // [rsp+20h] [rbp-20h] BYREF
  int v14; // [rsp+24h] [rbp-1Ch] BYREF
  _DWORD v15[2]; // [rsp+28h] [rbp-18h] BYREF
  __int128 v16; // [rsp+30h] [rbp-10h] BYREF

  v13 = 0;
  v5 = 0;
  v15[0] = -1;
  v15[1] = 0;
  v16 = 0LL;
  while ( 1 )
  {
    SubKeyByNumber = CmpFindSubKeyByNumber(a3, a4, v5, &v13);
    if ( SubKeyByNumber < 0 || v13 == -1 )
      return SubKeyByNumber >= 0;
    v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a3 + 8))(a3, v13, v15);
    v11 = v10;
    if ( !v10 )
    {
      SubKeyByNumber = -1073741670;
LABEL_13:
      if ( v11 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v15);
      return SubKeyByNumber >= 0;
    }
    CmpInitializeKeyNameString(v10, (__int64)&v16, a5);
    v14 = 0;
    CmpFindSubKeyByNameWithStatus(a1, a2, (unsigned __int16 *)&v16, &v14);
    if ( v14 == -1 )
    {
      if ( *(_DWORD *)(v11 + 20) + *(_DWORD *)(v11 + 24) )
        CmpDeleteTree(a3, v13);
      SubKeyByNumber = CmpFreeKeyByCell(a3, v13, 1);
      if ( SubKeyByNumber < 0 )
        goto LABEL_13;
    }
    else
    {
      ++v5;
    }
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v15);
  }
}
