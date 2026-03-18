/*
 * XREFs of ?vMirrorNotifyDrawing@@YGXAAVPDEVOBJ@@PAVSURFACE@@H@Z @ 0x1FAB80
 * Callers:
 *     _vMirrorIncludeNotifyWrap@12 @ 0x93030 (_vMirrorIncludeNotifyWrap@12.c)
 * Callees:
 *     ?GetDevBitmap@@YGPAU_SURFOBJ@@PAU_DISPSURF@@PAU1@@Z @ 0x1FA7B5 (-GetDevBitmap@@YGPAU_SURFOBJ@@PAU_DISPSURF@@PAU1@@Z.c)
 */

void __userpurge vMirrorNotifyDrawing(int a1@<edx>, int *a2@<ecx>, struct PDEVOBJ *a3, struct SURFACE *a4, int a5)
{
  int v5; // eax
  _DWORD *i; // esi
  _DWORD *v8; // eax
  int v9; // ecx
  int v10; // edx
  void (__stdcall *v11)(struct _SURFOBJ *, int, struct PDEVOBJ *); // ebx
  struct _SURFOBJ *DevBitmap; // eax
  void (__stdcall *v13)(_DWORD, int, int, _DWORD *); // edx
  _DWORD v14[2]; // [esp+4h] [ebp-8h] BYREF

  v5 = *a2;
  if ( *a2 )
  {
    if ( (*(_DWORD *)(v5 + 24) & 0x1000000) != 0 )
    {
      for ( i = **(_DWORD ***)(v5 + 1108); i; i = (_DWORD *)*i )
      {
        v8 = (_DWORD *)i[9];
        if ( v8 )
        {
          if ( (v8[280] & 0x8000000) != 0 )
          {
            v9 = v8[354];
            if ( (v9 & 0x1000) != 0 )
            {
              v10 = v8[276];
              if ( (v9 & 0x8000) != 0 )
              {
                v11 = *(void (__stdcall **)(struct _SURFOBJ *, int, struct PDEVOBJ *))(v10 + 388);
                if ( v11 )
                {
                  DevBitmap = GetDevBitmap((int)i, a1 != 0 ? a1 + 16 : 0);
                  v11(DevBitmap, 7, a3);
                }
              }
              else
              {
                v13 = *(void (__stdcall **)(_DWORD, int, int, _DWORD *))(v10 + 412);
                if ( v13 )
                {
                  if ( a1 )
                    v14[0] = a1 + 16;
                  else
                    v14[0] = 0;
                  v14[1] = a3;
                  v13(v8[277], 1, 8, v14);
                }
              }
            }
          }
        }
      }
    }
  }
}
