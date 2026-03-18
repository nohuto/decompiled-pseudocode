/*
 * XREFs of NtGdiGetStats @ 0x1C0140CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C001A4C0 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 */

__int64 __fastcall NtGdiGetStats(int a1, int a2, unsigned int a3, volatile void *a4, SIZE_T Length)
{
  signed int v9; // ebx
  GdiHandleManager *v10; // rcx
  unsigned int v11; // esi
  unsigned int NextEntryIndex; // edx
  struct _ENTRY *v14; // [rsp+68h] [rbp+20h] BYREF

  v14 = 0LL;
  v9 = (RtlGetNtGlobalFlags() & 0x400) == 0 ? 0xC0000022 : 0;
  if ( a2 )
  {
    if ( a2 <= 0 || a2 > 4 )
      v9 = -1073741822;
  }
  else if ( (unsigned int)Length < 0x7C )
  {
    v9 = -1073741789;
  }
  if ( v9 >= 0 )
  {
    ProbeForWrite(a4, (unsigned int)Length, 1u);
    if ( a2 )
    {
      if ( a2 <= 0 || a2 > 4 )
        return (unsigned int)-1073741822;
    }
    else
    {
      if ( a3 == -2147483646 )
        v11 = a1 & 0xFFFFFFFC;
      else
        v11 = a3;
      NextEntryIndex = 0;
      while ( 1 )
      {
        NextEntryIndex = GdiHandleManager::GetNextEntryIndex(v10, NextEntryIndex, &v14);
        if ( !NextEntryIndex )
          break;
        if ( v11 != 1 )
        {
          v10 = (GdiHandleManager *)(*((_DWORD *)v14 + 2) & 0xFFFFFFFE);
          if ( v11 != (_DWORD)v10 )
            continue;
        }
        v9 = -1073741822;
      }
    }
  }
  return (unsigned int)v9;
}
