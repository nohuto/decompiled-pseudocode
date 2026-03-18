/*
 * XREFs of ?MulRenderHint@@YGJPAUDHPDEV__@@KKPAX@Z @ 0x203BD3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall MulRenderHint(struct DHPDEV__ *a1, unsigned int a2, unsigned int a3, struct DHPDEV__ *a4)
{
  int v4; // edx
  _DWORD *v5; // esi
  struct DHPDEV__ *v6; // edi
  _DWORD *v7; // ecx
  int v8; // eax
  int v9; // edx
  int v11; // [esp+4h] [ebp-14h] BYREF
  int v12; // [esp+8h] [ebp-10h]
  int v13; // [esp+Ch] [ebp-Ch]
  int (__stdcall *v14)(_DWORD, unsigned int, unsigned int, struct DHPDEV__ *); // [esp+10h] [ebp-8h]
  int v15; // [esp+14h] [ebp-4h]
  struct DHPDEV__ *v16; // [esp+20h] [ebp+8h]

  v4 = -1073741822;
  v15 = 0;
  v5 = *(_DWORD **)a1;
  if ( *(_DWORD *)a1 )
  {
    v6 = a4;
    while ( 1 )
    {
      v7 = (_DWORD *)v5[9];
      v14 = (int (__stdcall *)(_DWORD, unsigned int, unsigned int, struct DHPDEV__ *))v7[568];
      if ( !v14 )
      {
        v4 = -1073741822;
        goto LABEL_15;
      }
      if ( (v7[280] & 0x8000000) != 0 )
        break;
      if ( !v15 )
      {
        v16 = a4;
        v11 = 0;
        v15 = 1;
        v12 = 0;
        v13 = 0;
        if ( a2 == 65542 || a2 == 65543 )
        {
          v6 = a4;
          if ( *(_WORD *)(*(_DWORD *)a4 + 48) == 3 )
          {
            v9 = **(_DWORD **)a4;
            v11 = **(_DWORD **)(v9 + 4);
            v12 = *(_DWORD *)(**(_DWORD **)(v9 + 4) + 4);
            v13 = *((_DWORD *)a4 + 2);
            v16 = (struct DHPDEV__ *)&v11;
          }
        }
        else
        {
          v6 = a4;
        }
        v8 = v14(v7[277], a2, a3, v16);
        goto LABEL_13;
      }
LABEL_15:
      v5 = (_DWORD *)*v5;
      if ( !v5 )
        return v4;
    }
    v8 = v14(v7[277], a2, a3, v6);
LABEL_13:
    v4 = v8;
    goto LABEL_15;
  }
  return v4;
}
