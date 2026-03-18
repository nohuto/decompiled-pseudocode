/*
 * XREFs of ?_RemoveWindowAction@CWindowGroup@@AAEXPAVCWindow@@@Z @ 0x19F6FF
 * Callers:
 *     CWindowGroupManager::_ExecuteGroupAction__lambda_10653f091205cdfaef55327f2586c792___ @ 0x19E81D (CWindowGroupManager--_ExecuteGroupAction__lambda_10653f091205cdfaef55327f2586c792___.c)
 *     _lambda_1c3d49064923e57234eebd0c1aed86d1_::operator() @ 0x19E983 (_lambda_1c3d49064923e57234eebd0c1aed86d1_--operator().c)
 * Callees:
 *     ?_FreeWindow@CWindowGroup@@AAEXPAPAVCWindow@@@Z @ 0x19F6A4 (-_FreeWindow@CWindowGroup@@AAEXPAPAVCWindow@@@Z.c)
 */

void __thiscall CWindowGroup::_RemoveWindowAction(CWindowGroup *this, struct CWindow *a2)
{
  struct CWindow *v2; // edi
  int v4; // ecx
  CWindowGroup *v5; // ecx
  int v6; // [esp+Ch] [ebp-4h]

  v2 = a2;
  v4 = *((_DWORD *)a2 + 3);
  if ( (v4 == 1 || *((_DWORD *)a2 + 3) == 2) && v4 )
    *((_DWORD *)this + v4 + 6) = 0;
  v6 = *((_DWORD *)v2 + 1) & (-1 << (*((_DWORD *)this + 5) & 0x1F));
  v5 = (CWindowGroup *)(*((_DWORD *)this + 6)
                      + 4
                      * ((HIBYTE(v6) + 37 * (BYTE2(v6) + 37 * (BYTE1(v6) + 37 * ((unsigned __int8)v6 + 11623883)))) & ((*((_DWORD *)this + 5) >> 5) - 1)));
  if ( (*(_DWORD *)v2 & 0x80000002) == 0x80000002 )
    v2 = a2;
  while ( (*(_DWORD *)v5 & 1) == 0 )
  {
    if ( *(struct CWindow **)v5 == v2 )
    {
      *(_DWORD *)v5 = *(_DWORD *)v2;
      --*((_DWORD *)this + 4);
      *(_DWORD *)v2 |= 0x80000002;
      break;
    }
    v5 = *(CWindowGroup **)v5;
  }
  CWindowGroup::_FreeWindow(v5, &a2);
}
