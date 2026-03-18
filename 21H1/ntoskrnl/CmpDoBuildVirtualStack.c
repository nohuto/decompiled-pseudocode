/*
 * XREFs of CmpDoBuildVirtualStack @ 0x14086BB80
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x14086C20C (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     CmpAddSubKeyEx @ 0x14069316C (CmpAddSubKeyEx.c)
 *     HvpMarkCellDirty @ 0x140699B30 (HvpMarkCellDirty.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1406CFC28 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpCreateEmptyKey @ 0x14086B794 (CmpCreateEmptyKey.c)
 */

__int64 __fastcall CmpDoBuildVirtualStack(__int64 a1, unsigned int a2, ULONG_PTR a3)
{
  __int64 v3; // rsi
  unsigned int *i; // rdi
  __int64 v8; // rdx
  unsigned int v9; // eax
  unsigned int EmptyKey; // eax
  __int64 v11; // rdx
  unsigned int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rax
  unsigned int v17; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0LL;
  if ( !a2 )
    return 0LL;
  for ( i = (unsigned int *)(a1 + 32); ; i += 12 )
  {
    v8 = *((_QWORD *)i - 2);
    v17 = 0;
    CmpFindSubKeyByNameWithStatus(a3, v8, (unsigned __int16 *)(a1 + 48 * v3), &v17);
    v9 = v17;
    i[1] = v17;
    if ( v9 != -1 )
      goto LABEL_10;
    if ( !HvpMarkCellDirty(a3, *i, 0) )
      return 3221225853LL;
    EmptyKey = CmpCreateEmptyKey(a3, (unsigned __int16 *)(a1 + 48 * v3), *i);
    i[1] = EmptyKey;
    if ( EmptyKey == -1 || !CmpAddSubKeyEx(a3, *i, EmptyKey, 0) )
      break;
    if ( (_DWORD)v3 )
    {
      v11 = *((_QWORD *)i - 2);
      v12 = *((unsigned __int16 *)i - 16);
      if ( (unsigned __int16)*(_DWORD *)(v11 + 52) < v12 )
        *(_WORD *)(v11 + 52) = v12;
    }
LABEL_10:
    if ( (unsigned int)v3 < a2 - 1 )
    {
      v13 = i[1];
      v14 = 48LL * (unsigned int)(v3 + 1);
      *(_DWORD *)(v14 + a1 + 32) = v13;
      v15 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64))(a3 + 8))(a3, v13, v14 + a1 + 24);
      *(_QWORD *)(v14 + a1 + 16) = v15;
      if ( !v15 )
        return 3221225626LL;
    }
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= a2 )
      return 0LL;
  }
  return 3221225626LL;
}
