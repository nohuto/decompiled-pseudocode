/*
 * XREFs of GreHideSprites @ 0x1C0122DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x1C0122E24 (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 */

void __fastcall GreHideSprites(__int64 a1, int a2)
{
  __int64 v2; // rbx

  v2 = 0LL;
  if ( *(_DWORD *)(a1 + 148) )
  {
    do
    {
      vSpHideSprites(*(HDEV *)(*(_QWORD *)(a1 + 152) + 8 * v2), a2);
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < *(_DWORD *)(a1 + 148) );
  }
  else
  {
    vSpHideSprites(*(HDEV *)(a1 + 88), a2);
  }
}
