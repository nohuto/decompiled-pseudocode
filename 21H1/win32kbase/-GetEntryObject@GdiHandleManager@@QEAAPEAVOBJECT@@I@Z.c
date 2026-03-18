/*
 * XREFs of ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C0084020
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0089500 (GreSetDCOwnerEx.c)
 *     HmgNextOwned @ 0x1C00A9DE0 (HmgNextOwned.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C00C30E0 (-vCleanupDCs@@YAXK@Z.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C014987C (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00841C0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

struct OBJECT *__fastcall GdiHandleManager::GetEntryObject(GdiHandleManager *this, unsigned int a2)
{
  unsigned int v3; // eax
  __int64 v4; // r9
  __int64 v5; // r8
  unsigned __int64 v6; // rdx
  unsigned int v7; // r10d
  __int64 v8; // rax
  __int64 v9; // r9

  v3 = GdiHandleManager::DecodeIndex(this, a2);
  v4 = *((_QWORD *)this + 2);
  v5 = 0LL;
  v6 = v3;
  v7 = *(_DWORD *)(v4 + 2056);
  if ( v3 < v7 + ((*(unsigned __int16 *)(v4 + 2) + 0xFFFF) << 16) )
  {
    v8 = ((v3 - v7) >> 16) + 1;
    if ( (unsigned int)v6 < v7 )
      v8 = 0LL;
    v9 = *(_QWORD *)(v4 + 8 * v8 + 8);
    if ( (_DWORD)v8 )
      v6 = ((1 - (_DWORD)v8) << 16) - v7 + (unsigned int)v6;
    if ( (unsigned int)v6 < *(_DWORD *)(v9 + 20) )
      return *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8 * (v6 >> 8)) + 16LL * (unsigned __int8)v6 + 8);
  }
  return (struct OBJECT *)v5;
}
