/*
 * XREFs of ?GetSoSurfaceData@SFMLOGICALSURFACE@@QAEJPAUtagDWMSURFACEDATA@@@Z @ 0x2335A
 * Callers:
 *     _GreDwmGetSurfaceData@12 @ 0x2320E (_GreDwmGetSurfaceData@12.c)
 * Callees:
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QAEHXZ @ 0x25308 (-bDeviceBitmap@SFMLOGICALSURFACE@@QAEHXZ.c)
 */

NTSTATUS __thiscall SFMLOGICALSURFACE::GetSoSurfaceData(SFMLOGICALSURFACE *this, struct tagDWMSURFACEDATA *a2)
{
  struct tagDWMSURFACEDATA *v2; // edx
  _DWORD *v3; // edi
  int v4; // esi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  void *v8; // ecx

  v2 = a2;
  v3 = (_DWORD *)*((_DWORD *)this + 28);
  v4 = 0;
  if ( !v3 )
  {
    *(_DWORD *)a2 = 0;
    *((_DWORD *)a2 + 1) = *((_DWORD *)this + 44);
    *((_DWORD *)a2 + 2) = *((_DWORD *)this + 45);
    *((_DWORD *)a2 + 3) = 6;
    goto LABEL_13;
  }
  *((_DWORD *)a2 + 1) = v3[4];
  *((_DWORD *)a2 + 2) = v3[5];
  *((_DWORD *)a2 + 3) = v3[11];
  *((_DWORD *)a2 + 4) = v3[9];
  v5 = *((_DWORD *)this + 28);
  if ( v5 )
    v6 = *(_DWORD *)(v5 + 4);
  else
    v6 = 0;
  *((_DWORD *)a2 + 6) = v6;
  *((_DWORD *)a2 + 7) = 0;
  if ( v3[11] != 6 )
  {
    *(_DWORD *)a2 = 0;
LABEL_13:
    *((_DWORD *)a2 + 8) = dword_27564C;
    v7 = dword_275650;
    goto LABEL_14;
  }
  if ( SFMLOGICALSURFACE::bDeviceBitmap(this) )
  {
    *(_DWORD *)v2 = 2;
    *((_DWORD *)v2 + 10) = v3[97];
    *((_DWORD *)v2 + 8) = v3[98];
    v7 = v3[99];
LABEL_14:
    *((_DWORD *)v2 + 9) = v7;
    return v4;
  }
  v8 = (void *)v3[35];
  *((_DWORD *)v2 + 8) = dword_27564C;
  *((_DWORD *)v2 + 9) = dword_275650;
  if ( v8 )
  {
    *(_DWORD *)v2 = 1;
    return ObOpenObjectByPointer(v8, 0, 0, 6u, 0, 0, (PHANDLE)v2 + 10);
  }
  else
  {
    *(_DWORD *)v2 = 0;
  }
  return v4;
}
