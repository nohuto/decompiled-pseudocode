/*
 * XREFs of _TppPHDelete@8 @ 0x4B2B750C
 * Callers:
 *     _TppTimerQueueExpiration@16 @ 0x4B2B7250 (_TppTimerQueueExpiration@16.c)
 *     _TppCancelTimer@12 @ 0x4B2B7D76 (_TppCancelTimer@12.c)
 * Callees:
 *     <none>
 */

void __fastcall TppPHDelete(_DWORD *a1, _DWORD *a2, int a3, int a4)
{
  _DWORD *v4; // eax
  int v5; // eax
  _DWORD *v6; // esi
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // eax

  v4 = (_DWORD *)*a1;
  if ( a2 != (_DWORD *)*a1 )
  {
    v5 = *a2;
    if ( *(_DWORD **)(*a2 + 4) != a2 )
      goto LABEL_7;
    v6 = (_DWORD *)a2[1];
    if ( (_DWORD *)*v6 != a2
      || (*v6 = v5,
          *(_DWORD *)(v5 + 4) = v6,
          v7 = a2 + 2,
          a2[1] = a2,
          *a2 = a2,
          v8 = a2[2],
          v9 = (_DWORD *)*a1,
          *(_DWORD **)(v8 + 4) != a2 + 2) )
    {
LABEL_7:
      __fastfail(3u);
    }
    *v9 = v8;
    v9[1] = v7;
    *(_DWORD *)(v8 + 4) = v9;
    *v7 = v9;
    v4 = a2;
    *a1 = a2;
  }
  v4[4] = 0;
  v4[5] = 0;
  JUMPOUT(0x4B2B755C);
}
