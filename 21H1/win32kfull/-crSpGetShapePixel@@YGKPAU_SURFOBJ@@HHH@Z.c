/*
 * XREFs of ?crSpGetShapePixel@@YGKPAU_SURFOBJ@@HHH@Z @ 0x1CD941
 * Callers:
 *     _GrePtInSprite@24 @ 0x23540 (_GrePtInSprite@24.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __userpurge crSpGetShapePixel@<eax>(int a1@<edx>, int a2@<ecx>, struct _SURFOBJ *a3, int a4, int a5, int a6)
{
  int v8; // esi
  int v9; // eax
  int (__stdcall *v10)(int, int, _DWORD, _DWORD, _DWORD *, _DWORD *); // edx
  int *v11; // ebx
  int v12; // eax
  int v14; // [esp-18h] [ebp-50h]
  _DWORD v15[2]; // [esp+Ch] [ebp-2Ch] BYREF
  _DWORD v16[2]; // [esp+14h] [ebp-24h] BYREF
  int v17; // [esp+1Ch] [ebp-1Ch]
  struct _SURFOBJ *v18; // [esp+20h] [ebp-18h]
  _DWORD v19[4]; // [esp+24h] [ebp-14h] BYREF

  v18 = a3;
  v8 = 0;
  v17 = a1;
  v16[0] = 0;
  SURFREFVIEW::bMap((SURFREFVIEW *)v16, (struct _SURFOBJ *)a2);
  if ( v16[0] )
  {
    if ( (*(_BYTE *)(a2 + 60) & 1) != 0 )
    {
      v9 = *(_DWORD *)(a2 + 12);
      if ( v9 )
      {
        v10 = *(int (__stdcall **)(int, int, _DWORD, _DWORD, _DWORD *, _DWORD *))(v9 + 1976);
        v11 = *(int **)(*(_DWORD *)(v9 + 704) + 32);
        *v11 = 0;
        v19[2] = 1;
        v19[3] = 1;
        v15[0] = v17;
        v15[1] = v18;
        v19[0] = 0;
        v14 = *(_DWORD *)(v9 + 704);
        v19[1] = 0;
        if ( v10(v14, a2, 0, 0, v19, v15) )
          v8 = *v11;
      }
    }
    else
    {
      v12 = *(_DWORD *)(a2 + 32) + (_DWORD)v18 * *(_DWORD *)(a2 + 36);
      if ( a4 )
        v8 = *(_DWORD *)(v12 + 4 * a1) & 0xFF00 | ((unsigned __int8)*(_DWORD *)(v12 + 4 * a1) << 16) | (unsigned __int8)BYTE2(*(_DWORD *)(v12 + 4 * a1));
      else
        v8 = *(_DWORD *)(v12 + 4 * a1);
    }
  }
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v16);
  return v8;
}
