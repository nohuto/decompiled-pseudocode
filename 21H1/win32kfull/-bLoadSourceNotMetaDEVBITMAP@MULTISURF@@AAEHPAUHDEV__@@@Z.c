/*
 * XREFs of ?bLoadSourceNotMetaDEVBITMAP@MULTISURF@@AAEHPAUHDEV__@@@Z @ 0x206244
 * Callers:
 *     ?bLoadSource@MULTISURF@@QAEHPAUHDEV__@@@Z @ 0x206199 (-bLoadSource@MULTISURF@@QAEHPAUHDEV__@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QAEHPAU_DISPSURF@@@Z @ 0x2061FA (-bLoadSource@MULTISURF@@QAEHPAU_DISPSURF@@@Z.c)
 * Callees:
 *     ?pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ @ 0x55814 (-pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ.c)
 *     ?bCreateDIB@MULTISURF@@AAEHXZ @ 0x205E65 (-bCreateDIB@MULTISURF@@AAEHXZ.c)
 */

int __thiscall MULTISURF::bLoadSourceNotMetaDEVBITMAP(MULTISURF *this, HDEV a2)
{
  int v3; // edx
  int v4; // eax
  HDEV v5; // edi
  int result; // eax
  struct _SURFOBJ *v7; // eax
  int v8; // ecx
  struct _RECTL *v9; // [esp-8h] [ebp-14h]
  int v10; // [esp-4h] [ebp-10h]

  v3 = *(_DWORD *)this;
  v4 = *((_DWORD *)this + 14);
  v5 = *(HDEV *)(*(_DWORD *)this + 28);
  if ( (v4 & 2) == 0 )
  {
    if ( v5 == a2 )
    {
      if ( (v4 & 1) != 0 )
      {
        v8 = *((_DWORD *)this + 5);
        *((_DWORD *)this + 14) = v4 & 0xFFFFFFFE;
        *(_DWORD *)(v3 + 24) = v8;
        *(_DWORD *)(*(_DWORD *)this + 16) = *((_DWORD *)this + 6);
        *(_DWORD *)(*(_DWORD *)this + 72) = *((_DWORD *)this + 15);
      }
    }
    else if ( (v4 & 1) == 0 )
    {
      if ( (v4 & 4) == 0 )
      {
        v9 = (struct _RECTL *)*((_DWORD *)this + 18);
        a2 = *(HDEV *)(*(_DWORD *)this + 28);
        PDEVOBJ::vSync((PDEVOBJ *)&a2, *((struct _SURFOBJ **)this + 17), v9, 0);
        v3 = *(_DWORD *)this;
        v4 = *((_DWORD *)this + 14) | 4;
      }
      *((_DWORD *)this + 14) = v4 | 1;
      *(_DWORD *)(v3 + 24) = 0;
      *(_DWORD *)(*(_DWORD *)this + 16) = 0;
      *(_DWORD *)(*(_DWORD *)this + 72) = 0;
    }
    return 1;
  }
  if ( v5 == a2 )
  {
    v7 = (struct _SURFOBJ *)(v3 + 16);
    v10 = 4;
    goto LABEL_7;
  }
  if ( *((_DWORD *)this + 7) || (result = MULTISURF::bCreateDIB(this)) != 0 )
  {
    v7 = SURFACE::pSurfobj(*((SURFACE **)this + 7));
    v10 = 40;
LABEL_7:
    *((_DWORD *)this + 17) = v7;
    *((_DWORD *)this + 18) = (char *)this + v10;
    return 1;
  }
  return result;
}
