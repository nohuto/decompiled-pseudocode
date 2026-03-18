/*
 * XREFs of ?bCreateDIB@MULTISURF@@AAEHXZ @ 0x205E65
 * Callers:
 *     ?bLoadSourceNotMetaDEVBITMAP@MULTISURF@@AAEHPAUHDEV__@@@Z @ 0x206244 (-bLoadSourceNotMetaDEVBITMAP@MULTISURF@@AAEHPAUHDEV__@@@Z.c)
 * Callees:
 *     ??XERECTL@@QAEAAV0@ABU_RECTL@@@Z @ 0x4F46A (--XERECTL@@QAEAAV0@ABU_RECTL@@@Z.c)
 *     ?pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ @ 0x55814 (-pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __thiscall MULTISURF::bCreateDIB(MULTISURF *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // esi
  int v5; // edx
  int v6; // eax
  int *v7; // eax
  int v8; // eax
  int v9; // edi
  struct _SURFOBJ *v10; // eax
  void (__stdcall *v11)(struct _SURFOBJ *, int, _DWORD, _DWORD, _DWORD *, int *); // edx
  _DWORD *v12; // ecx
  int v14; // [esp-14h] [ebp-5Ch]
  _DWORD v15[6]; // [esp+Ch] [ebp-3Ch] BYREF
  int v16; // [esp+24h] [ebp-24h] BYREF
  int v17; // [esp+28h] [ebp-20h]
  int v18; // [esp+2Ch] [ebp-1Ch]
  int v19; // [esp+30h] [ebp-18h]
  _DWORD v20[4]; // [esp+34h] [ebp-14h] BYREF

  v2 = *(_DWORD *)this;
  v3 = *(_DWORD *)(*(_DWORD *)this + 32);
  v4 = *(_DWORD *)(*(_DWORD *)this + 28);
  v5 = *(_DWORD *)(*(_DWORD *)this + 36);
  v16 = 0;
  v17 = 0;
  v18 = v3;
  v19 = v5;
  ERECTL::operator*=(&v16, (int *)this + 1);
  v20[0] = 0;
  v20[1] = 0;
  v15[3] = 0;
  v20[3] = v19 - v17;
  v20[2] = v18 - v16;
  v6 = *(_DWORD *)(v2 + 60);
  v15[2] = v19 - v17;
  v15[0] = v6;
  v15[1] = v18 - v16;
  v7 = *(int **)(v2 + 88);
  if ( v7 )
    v8 = *v7;
  else
    v8 = 0;
  v15[4] = v8;
  v9 = 1;
  v15[5] = 1;
  if ( !SURFMEM::bCreateDIB((MULTISURF *)((char *)this + 28), (struct _DEVBITMAPINFO *)v15, 0, 0, 0, 0, 0, 0, 1, 0, 0)
    || !*(_DWORD *)(v4 + 1976) )
  {
    return 0;
  }
  v14 = *(_DWORD *)this + 16;
  v10 = SURFACE::pSurfobj(*((SURFACE **)this + 7));
  v11(v10, v14, 0, 0, v20, &v16);
  v12 = (_DWORD *)*((_DWORD *)this + 18);
  *((_DWORD *)this + 10) = *v12 - v16;
  *((_DWORD *)this + 11) = v12[1] - v17;
  *((_DWORD *)this + 12) = v12[2] - v16;
  *((_DWORD *)this + 13) = v12[3] - v17;
  return v9;
}
