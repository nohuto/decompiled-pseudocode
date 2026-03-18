/*
 * XREFs of ?MulEscape@@YGKPAU_SURFOBJ@@KKPAXK1@Z @ 0x203445
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bFindSurface@MSURF@@QAEHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z @ 0x205F5F (-bFindSurface@MSURF@@QAEHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z.c)
 *     ?bNextSurface@MSURF@@QAEHXZ @ 0x2062FC (-bNextSurface@MSURF@@QAEHXZ.c)
 */

int __stdcall MulEscape(struct _SURFOBJ *a1, unsigned int a2, unsigned int a3, void *a4, unsigned int a5, void *a6)
{
  int v6; // esi
  int i; // eax
  int (__stdcall *v8)(int, unsigned int, unsigned int, void *, unsigned int, void *); // eax
  int v9; // eax
  DHPDEV dhpdev; // eax
  _DWORD *v11; // ecx
  int v12; // ebx
  int (__stdcall *v13)(_DWORD, unsigned int, unsigned int, void *, unsigned int, void *); // edx
  int v14; // eax
  _DWORD *v16; // [esp+14h] [ebp-4Ch]
  _BYTE v17[52]; // [esp+18h] [ebp-48h] BYREF
  int v18; // [esp+4Ch] [ebp-14h]

  v6 = 0;
  if ( !a1->dhsurf || a2 == 4352 || a2 == 4353 || a2 == 4354 )
    return 0;
  if ( a1->iType == 3 )
  {
    for ( i = MSURF::bFindSurface((MSURF *)v17, a1, 0, 0); i; i = MSURF::bNextSurface((MSURF *)v17) )
    {
      v8 = *(int (__stdcall **)(int, unsigned int, unsigned int, void *, unsigned int, void *))(*(_DWORD *)(v18 + 12)
                                                                                              + 1996);
      if ( v8 )
      {
        v9 = v8(v18, a2, a3, a4, a5, a6);
        if ( v9 )
          v6 = v9;
      }
    }
  }
  else
  {
    dhpdev = a1->dhpdev;
    v11 = *(_DWORD **)dhpdev;
    v12 = *((_DWORD *)dhpdev + 2);
    while ( 1 )
    {
      v16 = v11;
      if ( !v12 )
        break;
      --v12;
      v13 = *(int (__stdcall **)(_DWORD, unsigned int, unsigned int, void *, unsigned int, void *))(v11[9] + 1996);
      if ( v13 )
      {
        v14 = v13(v11[11], a2, a3, a4, a5, a6);
        v11 = v16;
        if ( v14 )
          v6 = v14;
      }
      v11 = (_DWORD *)*v11;
    }
  }
  return v6;
}
