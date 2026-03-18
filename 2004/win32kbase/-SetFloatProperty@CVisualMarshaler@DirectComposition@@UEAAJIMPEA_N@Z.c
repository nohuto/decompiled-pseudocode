/*
 * XREFs of ?SetFloatProperty@CVisualMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C007AD20
 * Callers:
 *     ?SetFloatProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C01D9480 (-SetFloatProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetFloatProperty(
        DirectComposition::CVisualMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r8d
  int v8; // edx
  bool v9; // al
  __int64 v10; // r11
  __int64 v11; // rax
  __int64 v12; // r9
  float v14; // xmm1_4
  int v15; // ecx

  v4 = 0;
  if ( a2 > 0x20 )
  {
    switch ( a2 )
    {
      case '!':
        v8 = 0x1000000;
        if ( *((float *)this + 24) != a3 )
        {
          *((float *)this + 24) = a3;
          goto LABEL_28;
        }
        goto LABEL_11;
      case '"':
        v8 = 0x1000000;
        if ( *((float *)this + 25) != a3 )
        {
          *((float *)this + 25) = a3;
          goto LABEL_28;
        }
        goto LABEL_11;
      case '#':
        v8 = 0x2000000;
        if ( *((float *)this + 26) != a3 )
        {
          *((float *)this + 26) = a3;
          goto LABEL_28;
        }
        goto LABEL_11;
      case '$':
        v8 = 0x2000000;
        if ( *((float *)this + 27) != a3 )
        {
          *((float *)this + 27) = a3;
          goto LABEL_28;
        }
        goto LABEL_11;
      case '.':
        v8 = 0x40000000;
        if ( *((float *)this + 29) != a3 )
        {
          *((float *)this + 29) = a3;
          goto LABEL_28;
        }
        goto LABEL_11;
    }
    return (unsigned int)-1073741811;
  }
  switch ( a2 )
  {
    case 0x20u:
      v8 = 0x1000000;
      if ( *((float *)this + 23) != a3 )
      {
        *((float *)this + 23) = a3;
        goto LABEL_28;
      }
      goto LABEL_11;
    case 0u:
      v8 = 128;
      if ( *((float *)this + 18) != a3 )
      {
        *((float *)this + 18) = a3;
        goto LABEL_28;
      }
      goto LABEL_11;
    case 1u:
      v8 = 128;
      if ( *((float *)this + 19) != a3 )
      {
        *((float *)this + 19) = a3;
        goto LABEL_28;
      }
      goto LABEL_11;
    case 2u:
      v8 = 128;
      if ( *((float *)this + 20) != a3 )
      {
        *((float *)this + 20) = a3;
        goto LABEL_28;
      }
      goto LABEL_11;
  }
  if ( a2 != 24 )
  {
    if ( a2 == 25 )
    {
      v8 = 0x200000;
      if ( *((float *)this + 22) != a3 )
      {
        *((float *)this + 22) = a3;
LABEL_28:
        v9 = 1;
        goto LABEL_12;
      }
      goto LABEL_11;
    }
    if ( a2 == 26 )
    {
      v8 = 0x400000;
      v14 = fminf(1.0, fmaxf(a3, 0.0));
      if ( *((float *)this + 28) != v14 )
      {
        *((float *)this + 28) = v14;
        goto LABEL_28;
      }
      goto LABEL_11;
    }
    return (unsigned int)-1073741811;
  }
  v8 = 0x200000;
  if ( *((float *)this + 21) != a3 )
  {
    *((float *)this + 21) = a3;
    goto LABEL_28;
  }
LABEL_11:
  v9 = 0;
LABEL_12:
  *a4 = v9;
  v10 = 0LL;
  v11 = *((_QWORD *)this + 4);
  v12 = 0LL;
  if ( v11 )
  {
    do
    {
      if ( *(_DWORD *)(v11 + 12) == a2 )
      {
        v15 = *(_DWORD *)(v11 + 8);
        if ( (v15 & 1) != 0 )
          goto LABEL_57;
        if ( (v15 & 2) != 0 )
        {
          v12 = v11;
          if ( v10 )
            break;
        }
        else if ( (v15 & 4) != 0 )
        {
          v10 = v11;
          if ( v12 )
            goto LABEL_57;
        }
      }
      v11 = *(_QWORD *)(v11 + 32);
    }
    while ( v11 );
    if ( !v12 )
      goto LABEL_13;
LABEL_57:
    *a4 = 1;
  }
LABEL_13:
  if ( a2 <= 2 || a2 - 24 <= 2 )
    *a4 = 1;
  if ( *a4 )
    *((_DWORD *)this + 4) |= v8;
  return v4;
}
