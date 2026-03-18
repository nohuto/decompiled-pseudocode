/*
 * XREFs of ?bDisableHalftone@PDEVOBJ@@QAEHXZ @ 0xD3540
 * Callers:
 *     _PDEVOBJ_bDisableHalftoneWrap@4 @ 0xD352E (_PDEVOBJ_bDisableHalftoneWrap@4.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?pDevHTInfo@PDEVOBJ@@QAEPAXXZ @ 0x96990 (-pDevHTInfo@PDEVOBJ@@QAEPAXXZ.c)
 *     _CleanUpDHI @ 0xAD654 (_CleanUpDHI.c)
 */

int __thiscall PDEVOBJ::bDisableHalftone(PDEVOBJ *this)
{
  char *v2; // eax
  int v3; // edx
  char *v4; // edi
  _DWORD *v5; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  bool v10; // al
  int i; // edi
  PKTHREAD CurrentThread; // eax
  int v14; // eax
  char *v15; // [esp+Ch] [ebp-8h]
  int ThreadWin32Thread; // [esp+Ch] [ebp-8h]
  bool v17; // [esp+12h] [ebp-2h]
  char v18; // [esp+13h] [ebp-1h]
  bool v19; // [esp+13h] [ebp-1h]

  v2 = (char *)PDEVOBJ::pDevHTInfo(this);
  v3 = *(_DWORD *)this;
  v4 = v2;
  v15 = v2;
  if ( (*(_DWORD *)(*(_DWORD *)this + 24) & 0x100) != 0 )
  {
    for ( i = 908; i < 932; i += 4 )
      bDeleteSurface(*(_DWORD *)(i + *(_DWORD *)this));
    v3 = *(_DWORD *)this;
    v4 = v15;
  }
  v5 = *(_DWORD **)(v3 + 936);
  v6 = 1;
  v18 = 1;
  if ( v5 )
  {
    v7 = bDeletePalette(*v5, 0, 0);
    v3 = *(_DWORD *)this;
    v19 = v7 != 0;
    v8 = *(_DWORD *)(*(_DWORD *)this + 936);
    if ( v8 && *(_DWORD *)(v8 + 32) == 1414021956 )
    {
      v9 = CleanUpDHI((char *)v8);
      v3 = *(_DWORD *)this;
    }
    else
    {
      v9 = 0;
    }
    if ( !v19 || (v18 = 1, !v9) )
      v18 = 0;
  }
  v10 = 1;
  if ( v4 != *(char **)(v3 + 936) )
  {
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v17 = bDeletePalette(*(_DWORD *)v4, 0, 0) != 0;
    if ( *((_DWORD *)v4 + 8) == 1414021956 )
      v14 = CleanUpDHI(v4);
    else
      v14 = 0;
    v10 = v17 && v14;
    *(_DWORD *)(ThreadWin32Thread + 160) = 0;
    v3 = *(_DWORD *)this;
  }
  *(_DWORD *)(v3 + 936) = 0;
  if ( !v18 || !v10 )
    return 0;
  return v6;
}
