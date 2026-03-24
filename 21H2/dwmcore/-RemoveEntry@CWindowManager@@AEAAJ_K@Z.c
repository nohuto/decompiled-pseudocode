/*
 * XREFs of ?RemoveEntry@CWindowManager@@AEAAJ_K@Z @ 0x1800354E0
 * Callers:
 *     ?RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x180035460 (-RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x1801794BC (-RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 * Callees:
 *     ??_GCWindowAssociationMapEntry@@QEAAPEAXI@Z @ 0x180035560 (--_GCWindowAssociationMapEntry@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CWindowManager::RemoveEntry(CWindowManager *this, __int64 a2)
{
  __int64 v3; // r8
  unsigned int v4; // ecx
  __int64 v5; // r11
  CWindowAssociationMapEntry *v6; // r10
  unsigned int v7; // edx
  __int64 i; // rcx

  v3 = 0LL;
  v4 = -2147467259;
  if ( *((_DWORD *)this + 10) )
  {
    v5 = *((_QWORD *)this + 2);
    while ( 1 )
    {
      v6 = *(CWindowAssociationMapEntry **)(v5 + 8 * v3);
      if ( *(_QWORD *)v6 == a2 )
        break;
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)this + 10) )
        return v4;
    }
    v7 = *((_DWORD *)this + 10);
    for ( i = 0LL; (unsigned int)i < v7; i = (unsigned int)(i + 1) )
    {
      if ( v6 == *(CWindowAssociationMapEntry **)(v5 + 8 * i) )
        break;
    }
    if ( (unsigned int)i < v7 )
    {
      while ( (unsigned int)i < v7 - 1 )
      {
        *(_QWORD *)(v5 + 8 * i) = *(_QWORD *)(v5 + 8LL * (unsigned int)(i + 1));
        i = (unsigned int)(i + 1);
        v7 = *((_DWORD *)this + 10);
      }
      *((_DWORD *)this + 10) = v7 - 1;
    }
    CWindowAssociationMapEntry::`scalar deleting destructor'(v6, v7);
    return 0;
  }
  return v4;
}
