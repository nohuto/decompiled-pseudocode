/*
 * XREFs of CmpFindSubKeyByNameWithStatus @ 0x1406CFC28
 * Callers:
 *     CmpFindPathByName @ 0x140691A2C (CmpFindPathByName.c)
 *     CmpMarkCurrentValueDirty @ 0x1407813C0 (CmpMarkCurrentValueDirty.c)
 *     CmpFindSubKeyByName @ 0x140793664 (CmpFindSubKeyByName.c)
 *     CmpFindControlSet @ 0x140793688 (CmpFindControlSet.c)
 *     CmpWalkUnicodeStringPath @ 0x140793AEC (CmpWalkUnicodeStringPath.c)
 *     CmRenameKey @ 0x140867FFC (CmRenameKey.c)
 *     CmpDoBuildVirtualStack @ 0x14086BB80 (CmpDoBuildVirtualStack.c)
 *     CmpCopySyncTree2 @ 0x140873DD0 (CmpCopySyncTree2.c)
 *     CmpSyncSubKeysAfterDelete @ 0x140875A90 (CmpSyncSubKeysAfterDelete.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyInRoot @ 0x14061B12C (CmpFindSubKeyInRoot.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x14061BA70 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpFindSubKeyByHashWithStatus @ 0x1406CFDAC (CmpFindSubKeyByHashWithStatus.c)
 */

__int64 __fastcall CmpFindSubKeyByNameWithStatus(__int64 a1, __int64 a2, unsigned __int16 *a3, _DWORD *a4)
{
  __int64 v5; // rsi
  unsigned int v9; // ebx
  _WORD *v10; // rax
  unsigned int SubKeyByHashWithStatus; // eax
  _DWORD v13[4]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v14; // [rsp+70h] [rbp+30h] BYREF
  int v15; // [rsp+88h] [rbp+48h] BYREF

  v14 = 0;
  v15 = 0;
  v5 = 0LL;
  v13[0] = -1;
  v9 = -1073741772;
  v13[1] = 0;
  *a4 = -1;
  if ( *(_DWORD *)(a1 + 208) )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(a2 + 4 * v5 + 20) )
        goto LABEL_13;
      v10 = (_WORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(
                       a1,
                       *(unsigned int *)(a2 + 4 * v5 + 28),
                       v13);
      if ( !v10 )
        return (unsigned int)-1073741670;
      if ( *v10 != 26994 )
        goto LABEL_5;
      if ( (int)CmpFindSubKeyInRoot(a1, (__int64)v10, (int)a3, &v14) < 0 )
      {
        v9 = -1073741670;
        goto LABEL_10;
      }
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v13);
      if ( v14 != -1 )
        break;
LABEL_13:
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= *(_DWORD *)(a1 + 208) )
        return v9;
    }
    v10 = (_WORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v14, v13);
    if ( !v10 )
      return (unsigned int)-1073741670;
LABEL_5:
    if ( *v10 == 26732 )
      SubKeyByHashWithStatus = CmpFindSubKeyByHashWithStatus(a1, v10, a3, &v14);
    else
      SubKeyByHashWithStatus = CmpFindSubKeyInLeafWithStatus(a1, (__int64)v10, a3, &v14, &v15);
    v9 = SubKeyByHashWithStatus;
    if ( (int)(SubKeyByHashWithStatus + 0x80000000) >= 0 && SubKeyByHashWithStatus != -1073741772 )
      goto LABEL_10;
    if ( v14 != -1 )
    {
      *a4 = v14;
      v9 = 0;
LABEL_10:
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v13);
      return v9;
    }
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v13);
    goto LABEL_13;
  }
  return v9;
}
