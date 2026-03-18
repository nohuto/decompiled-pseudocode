/*
 * XREFs of ?bExpand@STACKOBJ@@QAEHK@Z @ 0x21F627
 * Callers:
 *     ?bPushMergeScrScan@STACKOBJ@@QAEHXZ @ 0x21FBAB (-bPushMergeScrScan@STACKOBJ@@QAEHXZ.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __thiscall STACKOBJ::bExpand(STACKOBJ *this, unsigned int a2)
{
  PATHOBJ *v3; // ebx
  void *v4; // eax
  int v5; // ecx
  int v6; // edi
  int v7; // ecx
  bool v8; // zf
  int v9; // eax
  int v10; // eax

  v3 = (PATHOBJ *)*((_DWORD *)this + 5);
  if ( a2 + 320 < a2 )
    return 0;
  v4 = PALLOCMEM2(a2 + 320, 1684817479, 0);
  *((_DWORD *)this + 5) = v4;
  if ( !v4 )
    return 0;
  memcpy(v4, v3, *((_DWORD *)this + 1));
  v5 = *((_DWORD *)this + 2);
  *(_DWORD *)this = a2 + 320;
  v6 = *((_DWORD *)this + 5);
  v7 = v6 - (_DWORD)v3 + v5;
  v8 = *((_DWORD *)this + 1) == 0;
  *((_DWORD *)this + 2) = v7;
  if ( v8 )
  {
    *(_DWORD *)(v7 + 12) = v7;
  }
  else
  {
    v9 = *(_DWORD *)(v7 + 12);
    if ( v9 != v6 )
    {
      do
      {
        v10 = v6 - (_DWORD)v3 + v9;
        *(_DWORD *)(v7 + 12) = v10;
        v7 = v10;
        v9 = *(_DWORD *)(v10 + 12);
      }
      while ( v9 != *((_DWORD *)this + 5) );
    }
  }
  Win32FreePool(v3);
  return 1;
}
