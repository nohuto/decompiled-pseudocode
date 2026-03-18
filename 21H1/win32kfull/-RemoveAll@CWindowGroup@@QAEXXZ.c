/*
 * XREFs of ?RemoveAll@CWindowGroup@@QAEXXZ @ 0x19F3A8
 * Callers:
 *     _lambda_4a1771dfab2014d21355f8f68e70493c_::operator() @ 0x19E9CD (_lambda_4a1771dfab2014d21355f8f68e70493c_--operator().c)
 *     ?Cleanup@CWindowGroupManager@@QAEXW4CleanupType@1@@Z @ 0x19ED5D (-Cleanup@CWindowGroupManager@@QAEXW4CleanupType@1@@Z.c)
 * Callees:
 *     ?_FreeWindow@CWindowGroup@@AAEXPAPAVCWindow@@@Z @ 0x19F6A4 (-_FreeWindow@CWindowGroup@@AAEXPAPAVCWindow@@@Z.c)
 */

void __thiscall CWindowGroup::RemoveAll(CWindowGroup *this)
{
  _DWORD *v2; // ebx
  CWindowGroup *v3; // esi
  CWindowGroup *v4; // ecx
  _DWORD *i; // edx
  struct CWindow *v6; // edx
  CWindowGroup *j; // ecx
  struct CWindow *v8; // [esp+Ch] [ebp-4h] BYREF

  v2 = (_DWORD *)*((_DWORD *)this + 6);
  v3 = (CWindowGroup *)v2;
  while ( 1 )
  {
    if ( !v3 )
      goto LABEL_7;
    v4 = *(CWindowGroup **)v3;
    if ( (*(_DWORD *)v3 & 0x80000002) == 0x80000002 )
      v4 = *(CWindowGroup **)v3;
    if ( ((unsigned __int8)v4 & 1) != 0 )
    {
LABEL_7:
      for ( i = v2 + 1; ; ++i )
      {
        if ( (unsigned int)i >= *((_DWORD *)this + 6) + 4 * (*((_DWORD *)this + 5) >> 5) )
        {
          v4 = 0;
          goto LABEL_12;
        }
        if ( (*i & 1) == 0 )
          break;
      }
      v3 = (CWindowGroup *)*i;
      v2 = i;
      v4 = (CWindowGroup *)*i;
    }
    else
    {
      v3 = v4;
    }
LABEL_12:
    if ( !v4 )
      break;
    v6 = v3;
    for ( j = (CWindowGroup *)v2; (*(_DWORD *)j & 1) == 0; j = *(CWindowGroup **)j )
    {
      if ( *(CWindowGroup **)j == v3 )
      {
        *(_DWORD *)j = *(_DWORD *)v3;
        --*((_DWORD *)this + 4);
        *(_DWORD *)v3 |= 0x80000002;
        v3 = j;
        goto LABEL_20;
      }
    }
    j = 0;
    v6 = 0;
LABEL_20:
    v8 = v6;
    CWindowGroup::_FreeWindow(j, &v8);
  }
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
}
