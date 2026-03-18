/*
 * XREFs of ?vSpRemovePresent@@YAXPEAUHDEV__@@PEAU_PRESENT@@@Z @ 0x1C0284F80
 * Callers:
 *     GreDeleteSpriteOverlapPresent @ 0x1C008E35C (GreDeleteSpriteOverlapPresent.c)
 *     ?GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C027FB1C (-GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vSpRemovePresent(_QWORD *a1, struct _PRESENT *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rcx

  v2 = a1[21];
  if ( (struct _PRESENT *)v2 == a2 )
  {
    a1[21] = *((_QWORD *)a2 + 1);
  }
  else
  {
    while ( v2 )
    {
      v3 = (_QWORD *)(v2 + 8);
      v2 = *(_QWORD *)(v2 + 8);
      if ( (struct _PRESENT *)v2 == a2 )
      {
        v2 = *((_QWORD *)a2 + 1);
        *v3 = v2;
      }
    }
  }
}
