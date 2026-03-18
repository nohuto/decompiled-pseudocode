/*
 * XREFs of ?bExpandScanline@STACKOBJ@@QAEHKK@Z @ 0x21F6AA
 * Callers:
 *     ?bMergeScanline@RGNMEMOBJ@@QAEHAAVSTACKOBJ@@@Z @ 0x21F8DB (-bMergeScanline@RGNMEMOBJ@@QAEHAAVSTACKOBJ@@@Z.c)
 *     ?bPushMergeScrScan@STACKOBJ@@QAEHXZ @ 0x21FBAB (-bPushMergeScrScan@STACKOBJ@@QAEHXZ.c)
 *     ?bSearchAllSpans@FLOODBM@@QAEHJJAAJ0PAEAAVSTACKOBJ@@PAVSCANLINE@@@Z @ 0x21FCAC (-bSearchAllSpans@FLOODBM@@QAEHJJAAJ0PAEAAVSTACKOBJ@@PAVSCANLINE@@@Z.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __thiscall STACKOBJ::bExpandScanline(STACKOBJ *this, size_t a2, unsigned int a3)
{
  PATHOBJ *v4; // ebx
  size_t v6; // ecx
  _DWORD *v7; // eax
  _DWORD *v8; // edi
  unsigned int v10; // [esp+14h] [ebp+8h]

  if ( a3 == 1 )
    v4 = (PATHOBJ *)*((_DWORD *)this + 4);
  else
    v4 = (PATHOBJ *)*((_DWORD *)this + 3);
  v6 = a2 + 160;
  v10 = v6;
  if ( v6 <= a2 )
    return 0;
  v7 = PALLOCMEM2(v6, 1684817479, 0);
  v8 = v7;
  if ( !v7 )
    return 0;
  memcpy(v7, v4, v4[1].fl);
  v8[2] = v10;
  Win32FreePool(v4);
  if ( a3 == 1 )
    *((_DWORD *)this + 4) = v8;
  else
    *((_DWORD *)this + 3) = v8;
  return 1;
}
