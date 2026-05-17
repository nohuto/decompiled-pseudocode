/*
 * XREFs of _RtlCopyLuidAndAttributesArray@12 @ 0x4B3460D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall RtlCopyLuidAndAttributesArray(int a1, int a2, _DWORD *a3)
{
  int v3; // ecx
  _DWORD *v4; // eax
  _DWORD *v5; // edi
  _DWORD *v6; // esi

  v3 = a1;
  if ( a1 )
  {
    v4 = a3;
    do
    {
      v5 = v4;
      v6 = (_DWORD *)((char *)v4 + a2 - (_DWORD)a3);
      v4 += 3;
      *v5 = *v6++;
      *++v5 = *v6;
      v5[1] = v6[1];
      --v3;
    }
    while ( v3 );
  }
}
