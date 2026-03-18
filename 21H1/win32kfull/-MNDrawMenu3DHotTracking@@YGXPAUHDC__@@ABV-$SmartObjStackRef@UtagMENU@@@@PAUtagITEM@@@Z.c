/*
 * XREFs of ?MNDrawMenu3DHotTracking@@YGXPAUHDC__@@ABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0x1A8F1E
 * Callers:
 *     _xxxDrawMenuItem@24 @ 0xB61DA (_xxxDrawMenuItem@24.c)
 * Callees:
 *     _NtGdiPatBlt@24 @ 0x56C7C (_NtGdiPatBlt@24.c)
 */

int __fastcall MNDrawMenu3DHotTracking(HDC a1, int a2, int *a3)
{
  int result; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  int v8; // edi
  int v9; // ebx
  int v11; // [esp+10h] [ebp-10h]
  int v12; // [esp+14h] [ebp-Ch]
  struct XDCOBJ *v13; // [esp+18h] [ebp-8h]
  int v14; // [esp+1Ch] [ebp-4h]

  result = *a3;
  if ( !*(_DWORD *)(*a3 + 64) || (*(_DWORD *)(result + 4) & 0x20000000) == 0 )
  {
    result = *(_DWORD *)(**(_DWORD **)a2 + 20);
    if ( (*(_BYTE *)(result + 20) & 1) == 0 )
    {
      v5 = *(_DWORD *)(*a3 + 4);
      if ( (v5 & 0x80u) == 0 )
      {
        if ( (v5 & 0x100) == 0 )
        {
          if ( (v5 & 0x10000000) == 0 )
            return result;
          if ( *(_DWORD *)(*(_DWORD *)(**(_DWORD **)a2 + 20) + 12) )
          {
            v6 = *(_DWORD *)(*(_DWORD *)(**(_DWORD **)a2 + 20) + 12);
            v11 = *(_DWORD *)(*(_DWORD *)(**(_DWORD **)a2 + 20) + 12);
          }
          else
          {
            v6 = *(_DWORD *)(_gpsi + 4308);
            v11 = v6;
          }
          *(_DWORD *)(*a3 + 4) &= ~0x10000000u;
          goto LABEL_14;
        }
        v6 = *(_DWORD *)(_gpsi + 4372);
        v7 = *(_DWORD *)(_gpsi + 4356);
      }
      else
      {
        v6 = *(_DWORD *)(_gpsi + 4356);
        v7 = *(_DWORD *)(_gpsi + 4372);
      }
      v11 = v7;
      *(_DWORD *)(*a3 + 4) = v5 | 0x10000000;
LABEL_14:
      v8 = *(_DWORD *)(*a3 + 48);
      v12 = *(_DWORD *)(*a3 + 36);
      v13 = *(struct XDCOBJ **)(*a3 + 40);
      v14 = *(_DWORD *)(*a3 + 44);
      v9 = GreSelectBrush(a1, v6);
      NtGdiPatBlt(a1, v12, v13, v14 - 1, 1, (struct EXFORMOBJ *)0xF00021);
      NtGdiPatBlt(a1, v12, v13, 1, v8 - 1, (struct EXFORMOBJ *)0xF00021);
      GreSelectBrush(a1, v11);
      NtGdiPatBlt(a1, v12, (struct XDCOBJ *)((char *)v13 + v8 - 1), v14 - 1, 1, (struct EXFORMOBJ *)0xF00021);
      NtGdiPatBlt(a1, v12 - 1 + v14, v13, 1, v8, (struct EXFORMOBJ *)0xF00021);
      return GreSelectBrush(a1, v9);
    }
  }
  return result;
}
