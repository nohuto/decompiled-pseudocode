/*
 * XREFs of ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C0018E18
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C001783C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C001A4C0 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0045800 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

void __fastcall MultiUserGreCleanupHmgRemoveAllLocks(GdiHandleManager *a1)
{
  char v1; // bp
  unsigned int NextEntryIndex; // esi
  struct _ENTRY *v3; // rdi
  unsigned __int8 v4; // al
  char v5; // al
  GdiHandleManager *v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // r9
  unsigned __int64 v9; // rdx
  unsigned int v10; // r8d
  __int64 v11; // r9
  __int64 v12; // rdx
  struct _ENTRY *v13; // [rsp+48h] [rbp+10h] BYREF

  v1 = (char)a1;
  v13 = 0LL;
  NextEntryIndex = 0;
  while ( 1 )
  {
    NextEntryIndex = GdiHandleManager::GetNextEntryIndex(a1, NextEntryIndex, &v13);
    if ( !NextEntryIndex )
      break;
    v3 = v13;
    if ( v1 )
    {
      if ( v1 == *((_BYTE *)v13 + 14) )
      {
LABEL_13:
        v6 = gpHandleManager;
        v7 = GdiHandleManager::DecodeIndex(gpHandleManager, NextEntryIndex);
        v8 = *((_QWORD *)v6 + 2);
        v9 = v7;
        v10 = *(_DWORD *)(v8 + 2056);
        a1 = (GdiHandleManager *)(v10 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16));
        if ( v7 >= (unsigned int)a1 )
          goto LABEL_21;
        if ( v7 >= v10 )
          a1 = (GdiHandleManager *)(((v7 - v10) >> 16) + 1);
        else
          a1 = 0LL;
        v11 = *(_QWORD *)(v8 + 8LL * (unsigned int)a1 + 8);
        if ( (_DWORD)a1 )
          v9 = ((1 - (_DWORD)a1) << 16) - v10 + v7;
        if ( (unsigned int)v9 >= *(_DWORD *)(v11 + 20) )
        {
LABEL_21:
          v12 = 0LL;
        }
        else
        {
          a1 = (GdiHandleManager *)(2LL * (unsigned __int8)v9);
          v12 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v11 + 24) + 8 * (v9 >> 8)) + 16LL * (unsigned __int8)v9 + 8);
        }
        *(_DWORD *)(v12 + 8) = 0;
        *(_WORD *)(v12 + 12) = 0;
        *(_QWORD *)(v12 + 16) = 0LL;
        *((_DWORD *)v3 + 2) &= ~1u;
        *((_BYTE *)v3 + 15) &= ~1u;
        v5 = *((_BYTE *)v3 + 15);
        if ( (v5 & 0x20) != 0 )
          *((_QWORD *)v3 + 2) = 0LL;
        *((_BYTE *)v3 + 15) = v5 & 0xDF;
      }
    }
    else
    {
      v4 = *((_BYTE *)v13 + 14);
      if ( v4 && v4 <= 0x1Eu )
        goto LABEL_13;
    }
  }
}
