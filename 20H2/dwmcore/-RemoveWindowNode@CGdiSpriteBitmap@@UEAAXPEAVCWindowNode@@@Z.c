/*
 * XREFs of ?RemoveWindowNode@CGdiSpriteBitmap@@UEAAXPEAVCWindowNode@@@Z @ 0x1800D4630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CGdiSpriteBitmap::RemoveWindowNode(CGdiSpriteBitmap *this, struct CWindowNode *a2)
{
  unsigned int v2; // r9d
  __int64 v3; // r8
  __int64 i; // r11
  __int64 v6; // rcx

  v2 = *((_DWORD *)this + 38);
  v3 = 0LL;
  for ( i = *((_QWORD *)this + 16); (unsigned int)v3 < v2; v3 = (unsigned int)(v3 + 1) )
  {
    if ( a2 == *(struct CWindowNode **)(i + 8 * v3) )
      break;
  }
  if ( (unsigned int)v3 < v2 )
  {
    for ( ; (unsigned int)v3 < v2 - 1; v2 = *((_DWORD *)this + 38) )
    {
      v6 = (unsigned int)v3;
      LODWORD(v3) = v3 + 1;
      *(_QWORD *)(i + 8 * v6) = *(_QWORD *)(i + 8LL * (unsigned int)v3);
    }
    *((_DWORD *)this + 38) = v2 - 1;
  }
}
