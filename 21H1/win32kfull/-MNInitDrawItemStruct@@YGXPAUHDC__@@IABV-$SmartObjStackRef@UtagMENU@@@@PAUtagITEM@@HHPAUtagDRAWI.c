/*
 * XREFs of ?MNInitDrawItemStruct@@YGXPAUHDC__@@IABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@HHPAUtagDRAWITEMSTRUCT@@@Z @ 0xB65B6
 * Callers:
 *     ?xxxSendMenuDrawItemMessage@@YGXPAUHDC__@@IABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@HHPAUtagWND@@@Z @ 0xB6372 (-xxxSendMenuDrawItemMessage@@YGXPAUHDC__@@IABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@HHPAUta.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     ?MNDrawHilite@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0xB66E6 (-MNDrawHilite@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z.c)
 */

int __fastcall MNInitDrawItemStruct(int a1, int a2, _DWORD *a3, int *a4, int a5, int a6, _DWORD *a7)
{
  unsigned int v7; // eax
  int v8; // ebx
  int v9; // edi
  BOOL v10; // esi
  int v11; // ecx
  _DWORD *v12; // edx
  int v13; // ecx
  int *v14; // eax
  int v15; // eax
  _DWORD *v16; // eax
  unsigned int v17; // ecx
  _DWORD *v18; // eax
  int v19; // edi
  int v20; // eax
  int v21; // eax
  int result; // eax
  int v24; // [esp+10h] [ebp-8h]
  int v25; // [esp+14h] [ebp-4h]

  a7[1] = 0;
  *a7 = 1;
  a7[2] = *(_DWORD *)(*a4 + 8);
  a7[3] = a2;
  v7 = *(_DWORD *)(*a4 + 4);
  v8 = v7 & 8;
  v25 = 2 * (v7 & 1);
  v24 = (v7 >> 7) & 0x20;
  v9 = (v7 & 3) != 0 ? 4 : 0;
  v10 = MNDrawHilite(a3, a4) != 0;
  v11 = 8 * (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)*a3 + 20) + 20) & 0x10);
  a7[4] = v8 | v24 | v10 | v25 | v9 | v11 | (*(_DWORD *)(*a4 + 4) >> 2) & 0x40 | ~((unsigned __int16)*(_DWORD *)(*(_DWORD *)(*(_DWORD *)*a3 + 20) + 20) << 6) & 0x100;
  if ( SmartObjStackRef<tagMENU>::operator==(a3, v11) )
  {
    v15 = 0;
  }
  else
  {
    v14 = *(int **)(v13 + 8);
    if ( !v14 )
      v14 = **(int ***)v13;
    v15 = *v14;
  }
  v12[5] = v15;
  v12[6] = a1;
  v16 = (_DWORD *)*a4;
  v17 = *(_DWORD *)(*a4 + 40);
  if ( a5 )
    v17 = (unsigned int)(v16[12] - v16[18]) >> 1;
  v12[7] = a6 + v16[9];
  v12[8] = v17;
  v18 = (_DWORD *)*a4;
  if ( a5 )
    v19 = v18[17];
  else
    v19 = v18[11];
  v12[9] = a6 + v19 + v18[9];
  v20 = *a4;
  if ( a5 )
    v21 = *(_DWORD *)(v20 + 72);
  else
    v21 = *(_DWORD *)(v20 + 48);
  v12[10] = v17 + v21;
  result = *(_DWORD *)(*a4 + 32);
  v12[11] = result;
  return result;
}
