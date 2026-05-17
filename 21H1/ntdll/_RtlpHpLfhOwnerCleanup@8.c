/*
 * XREFs of _RtlpHpLfhOwnerCleanup@8 @ 0x4B376752
 * Callers:
 *     _RtlpHpLfhContextCleanup@4 @ 0x4B3764C9 (_RtlpHpLfhContextCleanup@4.c)
 * Callees:
 *     _RtlpHpLfhSubsegmentFree@16 @ 0x4B377399 (_RtlpHpLfhSubsegmentFree@16.c)
 */

_DWORD *__fastcall RtlpHpLfhOwnerCleanup(int a1, int a2)
{
  _DWORD ***v4; // ecx
  _DWORD *result; // eax
  _DWORD *v6; // edx
  int v7; // edx
  _DWORD *v8; // esi
  _DWORD **v9; // ecx
  _DWORD *v10; // esi
  _DWORD *v11; // edx
  int v12; // eax
  int v13; // eax
  int v14; // [esp+Ch] [ebp-4h]

  v4 = (_DWORD ***)(a2 + 20);
  v14 = *(_DWORD *)(a1 + 4 * *(unsigned __int8 *)(a2 + 1) + 128);
  result = *(_DWORD **)(a2 + 20);
  if ( result != (_DWORD *)(a2 + 20) )
  {
    if ( (_DWORD ***)result[1] != v4
      || (v6 = *(_DWORD **)(a2 + 24), (_DWORD ***)*v6 != v4)
      || (*v6 = result,
          result[1] = v6,
          v7 = a2 + 12,
          v8 = *(_DWORD **)(a2 + 16),
          *(_DWORD *)(*(_DWORD *)(a2 + 12) + 4) != a2 + 12)
      || *v8 != v7
      || (v9 = *v4, (_DWORD **)(*v9)[1] != v9)
      || (_DWORD **)*v9[1] != v9 )
    {
LABEL_16:
      __fastfail(3u);
    }
    *v8 = v9;
    *(_DWORD *)(a2 + 16) = v9[1];
    result = v9[1];
    *result = v7;
    v9[1] = v8;
  }
  v10 = (_DWORD *)(a2 + 12);
  while ( 1 )
  {
    v11 = (_DWORD *)*v10;
    if ( (_DWORD *)*v10 == v10 )
      return result;
    if ( (_DWORD *)v11[1] != v10 )
      goto LABEL_16;
    v12 = *v11;
    if ( *(_DWORD **)(*v11 + 4) != v11 )
      goto LABEL_16;
    *v10 = v12;
    *(_DWORD *)(v12 + 4) = v10;
    if ( *((_WORD *)v11 + 8) )
      --*(_DWORD *)(a2 + 4);
    *((_WORD *)v11 + 8) = *((_WORD *)v11 + 9);
    v13 = *((unsigned __int16 *)v11 + 15);
    *((_BYTE *)v11 + 22) = 2;
    *(_WORD *)((char *)v11 + v13) = 1;
    result = (_DWORD *)RtlpHpLfhSubsegmentFree(v14, 0);
  }
}
