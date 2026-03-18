/*
 * XREFs of ?vLockEUDCFontsGlyphCache@RFONTOBJ@@QAEXH@Z @ 0x209BCE
 * Callers:
 *     _GreGetGlyphOutlineInternal@32 @ 0x85B86 (_GreGetGlyphOutlineInternal@32.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@PAVXDCOBJ@@PAVESTROBJ@@PBG2KPAHH@Z @ 0xC0F30 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@PAVXDCOBJ@@PAVESTROBJ@@PBG2KPAHH@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?vLockSystemTTGlyphCache@RFONTOBJ@@AAEXXZ @ 0x209D3E (-vLockSystemTTGlyphCache@RFONTOBJ@@AAEXXZ.c)
 */

void __thiscall RFONTOBJ::vLockEUDCFontsGlyphCache(RFONTOBJ *this, int a2)
{
  _DWORD *v3; // edx
  unsigned int v4; // eax
  unsigned int v5; // ecx
  int v6; // eax
  int v7; // edx
  unsigned int v8; // ecx
  unsigned int v9; // eax
  int v10; // ebx
  unsigned int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // ecx
  unsigned int i; // ebx
  int v16; // ecx
  _DWORD v17[2]; // [esp+8h] [ebp-18h]
  int v18; // [esp+10h] [ebp-10h] BYREF
  void (__thiscall *v19)(_DWORD); // [esp+14h] [ebp-Ch]
  unsigned int v20; // [esp+18h] [ebp-8h]
  unsigned int v21; // [esp+1Ch] [ebp-4h]

  v3 = *(_DWORD **)this;
  v4 = *(_DWORD *)(*(_DWORD *)this + 780);
  if ( v4 > 0x20 )
  {
    if ( a2 )
    {
      RFONTOBJ::vLockSystemTTGlyphCache(this);
      v3 = *(_DWORD **)this;
    }
    v13 = v3[180];
    if ( v13 )
    {
      GreAcquireSemaphore(*(_DWORD *)(v13 + 548));
      a2 = 0;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&a2);
      v3 = *(_DWORD **)this;
    }
    v14 = v3[181];
    if ( v14 )
    {
      GreAcquireSemaphore(*(_DWORD *)(v14 + 548));
      a2 = 0;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&a2);
      v3 = *(_DWORD **)this;
    }
    for ( i = 0; i < v3[195]; ++i )
    {
      v16 = *(_DWORD *)(v3[182] + 4 * i);
      if ( v16 )
      {
        GreAcquireSemaphore(*(_DWORD *)(v16 + 548));
        a2 = 0;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&a2);
        v3 = *(_DWORD **)this;
      }
    }
  }
  else
  {
    v5 = 0;
    v20 = v4 + 2;
    v17[0] = v3[181];
    v6 = v3[180];
    v7 = a2;
    v17[1] = v6;
    v21 = 0;
    if ( v20 )
    {
      v19 = (void (__thiscall *)(_DWORD))GreAcquireSemaphore;
      while ( 1 )
      {
        v8 = *(unsigned __int8 *)(*(_DWORD *)this + v5 + 792);
        v9 = *(_DWORD *)(*(_DWORD *)this + 780);
        if ( v8 < v9 )
          break;
        v11 = v8 - v9;
        if ( v11 < 2 )
        {
          _mm_lfence();
          v10 = v17[v11];
LABEL_8:
          if ( v10 )
          {
            if ( v7 )
            {
              v12 = *(_DWORD *)(*(_DWORD *)this + 716);
              if ( v12 )
              {
                if ( *(_DWORD *)(v12 + 80) < *(_DWORD *)(v10 + 80) )
                  RFONTOBJ::vLockSystemTTGlyphCache(this);
              }
            }
            v19(*(_DWORD *)(v10 + 548));
            v18 = 0;
            RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v18);
            v7 = a2;
          }
        }
        v5 = v21 + 1;
        v21 = v5;
        if ( v5 >= v20 )
          goto LABEL_15;
      }
      _mm_lfence();
      v10 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 728) + 4 * v8);
      goto LABEL_8;
    }
LABEL_15:
    if ( v7 )
      RFONTOBJ::vLockSystemTTGlyphCache(this);
  }
}
