/*
 * XREFs of ?MulSurfaceComplete@@YGHPAUDHPDEV__@@PAX@Z @ 0x204B61
 * Callers:
 *     <none>
 * Callees:
 *     ?vDeviceBitmapAdapterHint@PDEVOBJ@@QAEXPAU_LUID@@@Z @ 0x1E9A26 (-vDeviceBitmapAdapterHint@PDEVOBJ@@QAEXPAU_LUID@@@Z.c)
 */

LONG __stdcall MulSurfaceComplete(struct DHPDEV__ *a1, void *a2)
{
  int v3; // esi
  _DWORD *v4; // edx
  _DWORD *v5; // eax
  int (__stdcall *v6)(_DWORD, _DWORD); // ecx
  int v7; // ebx
  bool v8; // zf
  LONG HighPart; // ebx
  int v11; // [esp+Ch] [ebp-10h] BYREF
  struct _LUID v12; // [esp+10h] [ebp-Ch] BYREF
  int (__stdcall *v13)(_DWORD, _DWORD); // [esp+18h] [ebp-4h]
  struct DHPDEV__ *v14; // [esp+24h] [ebp+8h]

  v12.HighPart = 0;
  v3 = *((_DWORD *)a1 + 4);
  v4 = *(_DWORD **)a1;
  v14 = (struct DHPDEV__ *)*((_DWORD *)a1 + 2);
  v11 = v3;
  while ( 1 )
  {
    v5 = (_DWORD *)v4[9];
    if ( (v5[280] & 0x8000000) == 0 )
    {
      v6 = (int (__stdcall *)(_DWORD, _DWORD))v5[578];
      v13 = v6;
      if ( v6 )
      {
        if ( (*(_DWORD *)(v3 + 24) & 0x4000000) == 0 || !*v4 )
          goto LABEL_15;
        v7 = *(_DWORD *)(v4[10] + 1832);
        if ( v7 )
        {
          if ( *(_DWORD *)(v7 + 204) == *((_DWORD *)a1 + 16) && *(_DWORD *)(v7 + 208) == *((_DWORD *)a1 + 17) )
            break;
        }
      }
    }
    v8 = v14 == (struct DHPDEV__ *)1;
    v14 = (struct DHPDEV__ *)((char *)v14 - 1);
    v4 = (_DWORD *)*v4;
    if ( v8 )
    {
      HighPart = v12.HighPart;
      goto LABEL_11;
    }
  }
  v6 = v13;
LABEL_15:
  HighPart = v6(v5[277], a2);
LABEL_11:
  if ( (*(_DWORD *)(v3 + 24) & 0x4000000) != 0 )
  {
    v12.LowPart = 0;
    v12.HighPart = 0;
    PDEVOBJ::vDeviceBitmapAdapterHint((PDEVOBJ *)&v11, &v12);
  }
  return HighPart;
}
