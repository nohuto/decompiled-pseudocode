/*
 * XREFs of _MakeUpKeyboardCorrectionCalloutContents@12 @ 0x14E42F
 * Callers:
 *     _xxxInterSendMsgEx@36 @ 0x43A56 (_xxxInterSendMsgEx@36.c)
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __fastcall MakeUpKeyboardCorrectionCalloutContents(_DWORD *a1, _DWORD *a2, char *a3)
{
  _BYTE *v5; // ebx
  unsigned int v6; // edx
  int v7; // eax
  int v8; // eax
  int v9; // esi
  int result; // eax
  int v11; // [esp+Ch] [ebp-8h]
  unsigned __int8 v12; // [esp+1Fh] [ebp+Bh]

  v5 = a3 + 16;
  v11 = *(_DWORD *)(_gptiCurrent + 236);
  memset(a3, 0, 0x130u);
  *(_DWORD *)a3 = *a1;
  *((_DWORD *)a3 + 1) = a1[1];
  *((_DWORD *)a3 + 2) = a1[2];
  *((_DWORD *)a3 + 3) = a1[3];
  *((_DWORD *)a3 + 68) = *(unsigned __int8 *)(_gptiCurrent + 744);
  *((_DWORD *)a3 + 69) = *(_DWORD *)(_gptiCurrent + 748);
  *((_DWORD *)a3 + 70) = a1[2];
  v6 = 0;
  *((_DWORD *)a3 + 71) = (*a2 & 2u) >> 1;
  v7 = *(_DWORD *)(_gptiCurrent + 240);
  if ( v7 )
    v8 = *(_DWORD *)(v7 + 20);
  else
    v8 = 0;
  *((_DWORD *)a3 + 75) = v8;
  *((_DWORD *)a3 + 72) = *(_DWORD *)(_gptiCurrent + 752);
  *((_DWORD *)a3 + 73) = *(_DWORD *)(_gptiCurrent + 756);
  *((_DWORD *)a3 + 74) = *(_DWORD *)(_gptiCurrent + 760);
  do
  {
    v9 = (unsigned __int8)v6 >> 2;
    v12 = *(_BYTE *)(v9 + v11 + 152);
    if ( ((unsigned __int8)(1 << (2 * (v6 & 3))) & v12) != 0 )
    {
      *v5 |= 0x80u;
      v12 = *(_BYTE *)(v9 + v11 + 152);
    }
    result = 1 << (2 * (v6 & 3) + 1);
    if ( ((unsigned __int8)result & v12) != 0 )
      *v5 |= 1u;
    ++v6;
    ++v5;
  }
  while ( v6 < 0x100 );
  return result;
}
