/*
 * XREFs of ?ShareCount@HANDLELOCK@@QEAAKXZ @ 0x1C00C0C10
 * Callers:
 *     HmgSwapLockedHandleContents @ 0x1C00C0290 (HmgSwapLockedHandleContents.c)
 *     bDeleteBrush @ 0x1C00C08E0 (bDeleteBrush.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C008B290 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HANDLELOCK::ShareCount(HANDLELOCK *this)
{
  GdiHandleManager *v1; // rbx
  unsigned int v2; // eax
  __int64 v3; // r11
  unsigned int v4; // r9d
  unsigned int v5; // r10d
  __int64 v6; // rcx
  unsigned int v7; // edx
  __int64 v8; // rax

  v1 = gpHandleManager;
  v2 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, **(_DWORD **)this & 0xFFFFFF);
  v3 = *((_QWORD *)v1 + 2);
  v4 = v2;
  v5 = *(_DWORD *)(v3 + 2056);
  if ( v2 >= v5 + ((*(unsigned __int16 *)(v3 + 2) + 0xFFFF) << 16) )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = 0LL;
    if ( v2 >= v5 )
      v7 = ((v2 - v5) >> 16) + 1;
    else
      v7 = 0;
    v8 = *(_QWORD *)(v3 + 8LL * v7 + 8);
    if ( v7 )
      v4 += ((1 - v7) << 16) - v5;
    if ( v4 < *(_DWORD *)(v8 + 20) )
      v6 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v8 + 24) + 8 * ((unsigned __int64)v4 >> 8))
                     + 16LL * (unsigned __int8)v4
                     + 8);
  }
  return *(unsigned int *)(v6 + 8);
}
