/*
 * XREFs of ??1MULTISPRITEDDIACCESS@@QAE@XZ @ 0x9EFFA
 * Callers:
 *     _vSpDynamicModeChange@8 @ 0x9EE36 (_vSpDynamicModeChange@8.c)
 * Callees:
 *     ?vSpDirectDriverAccess@@YGXPAU_SPRITESTATE@@H@Z @ 0x3061A (-vSpDirectDriverAccess@@YGXPAU_SPRITESTATE@@H@Z.c)
 */

void __thiscall MULTISPRITEDDIACCESS::~MULTISPRITEDDIACCESS(MULTISPRITEDDIACCESS *this)
{
  _DWORD *v2; // ecx
  unsigned int v3; // esi
  _DWORD *v4; // edx
  _DWORD *v5; // eax

  v2 = *(_DWORD **)this;
  if ( v2 )
  {
    if ( v2[10] )
    {
      v3 = 0;
      do
      {
        v4 = v2;
        v5 = *(_DWORD **)(v2[11] + 4 * v3);
        if ( v5[30] && ((unsigned int)&loc_20000 & v5[6]) == 0 )
        {
          vSpDirectDriverAccess(v5 + 16, 0);
          v4 = *(_DWORD **)this;
        }
        ++v3;
        v2 = v4;
      }
      while ( v3 < v4[10] );
    }
    else if ( v2[14] )
    {
      if ( ((unsigned int)&loc_20000 & *(_DWORD *)(*v2 + 24)) == 0 )
        vSpDirectDriverAccess(v2, 0);
    }
  }
}
