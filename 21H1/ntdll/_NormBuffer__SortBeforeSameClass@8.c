/*
 * XREFs of _NormBuffer__SortBeforeSameClass@8 @ 0x4B367119
 * Callers:
 *     _NormBuffer__AppendAndSortDecomposed@8 @ 0x4B366C0A (_NormBuffer__AppendAndSortDecomposed@8.c)
 * Callees:
 *     _NormBuffer__GetCurrentOutputChar@8 @ 0x4B366CF5 (_NormBuffer__GetCurrentOutputChar@8.c)
 */

char __fastcall NormBuffer__SortBeforeSameClass(_DWORD *a1, unsigned __int8 a2)
{
  unsigned int CurrentOutputChar; // eax
  int v4; // edi
  unsigned __int16 *v5; // ebx
  int v6; // edx
  unsigned __int16 *v7; // ecx
  int v8; // eax
  int v9; // edi
  int v11; // [esp+8h] [ebp-Ch]
  unsigned __int16 *v12; // [esp+Ch] [ebp-8h] BYREF
  unsigned __int8 v13; // [esp+13h] [ebp-1h]

  v13 = a2;
  CurrentOutputChar = a1[5];
  v4 = a1[11];
  a1[16] = CurrentOutputChar;
  if ( CurrentOutputChar != v4 )
  {
    v12 = (unsigned __int16 *)(CurrentOutputChar - 2);
    CurrentOutputChar = NormBuffer__GetCurrentOutputChar((int)a1, &v12);
    v5 = (unsigned __int16 *)(v4 - 2);
    v6 = CurrentOutputChar;
    if ( (int)a1[12] > 0xFFFF )
      v5 = (unsigned __int16 *)(v4 - 4);
    v7 = v12;
    if ( v12 != v5 )
    {
      v8 = a1[17];
      v9 = *(_DWORD *)(v8 + 20);
      v11 = *(_DWORD *)(v8 + 24);
      do
      {
        LOBYTE(CurrentOutputChar) = *(_BYTE *)((v6 & 0x7F) + v11 + (*(unsigned __int8 *)((v6 >> 7) + v9) << 7) - 128) & 0x3F;
        if ( (unsigned __int8)CurrentOutputChar < v13 )
          break;
        a1[16] = v7;
        v12 = v7 - 1;
        CurrentOutputChar = NormBuffer__GetCurrentOutputChar((int)(v7 - 1), &v12);
        v7 = v12;
        v6 = CurrentOutputChar;
      }
      while ( v12 != v5 );
    }
  }
  return CurrentOutputChar;
}
