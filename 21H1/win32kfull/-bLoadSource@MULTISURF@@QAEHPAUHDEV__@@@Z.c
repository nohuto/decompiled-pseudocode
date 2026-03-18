/*
 * XREFs of ?bLoadSource@MULTISURF@@QAEHPAUHDEV__@@@Z @ 0x206199
 * Callers:
 *     ?bSpCreateShape@@YGHPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAVPALETTE@@KK4@Z @ 0x1DDCF1 (-bSpCreateShape@@YGHPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAVPALETTE@@KK4.c)
 * Callees:
 *     ?bLoadSourceNotMetaDEVBITMAP@MULTISURF@@AAEHPAUHDEV__@@@Z @ 0x206244 (-bLoadSourceNotMetaDEVBITMAP@MULTISURF@@AAEHPAUHDEV__@@@Z.c)
 */

int __thiscall MULTISURF::bLoadSource(MULTISURF *this, HDEV a2)
{
  int v3; // edi
  int ***v4; // esi
  int **v5; // ecx

  v3 = 1;
  if ( *((_DWORD *)this + 5) )
  {
    v4 = (int ***)*((_DWORD *)this + 16);
    if ( v4 )
    {
      v5 = (int **)**v4;
      if ( v5 )
      {
        while ( v5[9] != (int *)a2 )
        {
          v5 = (int **)*v5;
          if ( !v5 )
            goto LABEL_8;
        }
        *((_DWORD *)this + 17) = v4[1][(_DWORD)v5[2]];
      }
LABEL_8:
      if ( !*((_DWORD *)this + 17) )
        *((_DWORD *)this + 17) = *(_DWORD *)this + 16;
    }
    else
    {
      return MULTISURF::bLoadSourceNotMetaDEVBITMAP(this, a2);
    }
  }
  return v3;
}
