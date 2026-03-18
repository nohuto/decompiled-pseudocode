/*
 * XREFs of _ProcessSuspendedSendMessage@20 @ 0xAB210
 * Callers:
 *     _xxxInterSendMsgEx@36 @ 0x43A56 (_xxxInterSendMsgEx@36.c)
 * Callees:
 *     ?ProcessComplexCoalescence@@YGHIIIJPAIPAJ@Z @ 0x141B63 (-ProcessComplexCoalescence@@YGHIIIJPAIPAJ@Z.c)
 */

int __fastcall ProcessSuspendedSendMessage(int a1, int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  unsigned int v6; // edx
  int v7; // esi
  _DWORD *v9; // ebx
  _DWORD *i; // edi
  unsigned int *v11; // [esp+0h] [ebp-10h]
  int *v12; // [esp+4h] [ebp-Ch]
  int v13; // [esp+Ch] [ebp-4h]

  v6 = a3;
  v13 = a2;
  if ( a3 >= 0x400 )
    v7 = 1;
  else
    v7 = ((unsigned __int16)MessageTable[a3] >> 10) & 7;
  if ( !v7 )
    return 0;
  if ( v7 != 1 )
  {
    v9 = (_DWORD *)(a1 + 280);
    for ( i = *(_DWORD **)(a1 + 280); i != v9; i = (_DWORD *)*i )
    {
      if ( i[12] == v6 && i[13] == a2 && !i[6] && !i[2] )
      {
        if ( (i[9] & 0x4008) == 8 && !ProcessComplexCoalescence(a4, a5, (unsigned int)(i + 10), (int)(i + 11), v11, v12) )
          return 0;
        a2 = v13;
      }
    }
  }
  return 1;
}
