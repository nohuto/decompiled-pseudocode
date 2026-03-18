/*
 * XREFs of _OutputAATo1BPP @ 0xFA9E4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __cdecl OutputAATo1BPP(
        char *a1,
        int a2,
        unsigned int a3,
        _BYTE *a4,
        int a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        int a9)
{
  int v9; // esi
  unsigned int v10; // edx
  int v11; // edi
  int v12; // eax
  char result; // al
  _BYTE *v14; // ebx
  unsigned int v15; // esi
  _BYTE *j; // edi
  _BYTE *v24; // ebx
  unsigned int v25; // esi
  _BYTE *i; // edi
  int v28; // ebx
  unsigned int v29; // edx
  _BYTE *v30; // esi
  __int16 v31; // ax
  unsigned int v32; // ecx
  int v33; // eax
  int v34; // [esp+Ch] [ebp-4h]
  int v35; // [esp+Ch] [ebp-4h]
  _BYTE *v36; // [esp+1Ch] [ebp+Ch]
  _BYTE *v37; // [esp+1Ch] [ebp+Ch]
  _BYTE *v38; // [esp+24h] [ebp+14h]
  unsigned int v39; // [esp+2Ch] [ebp+1Ch]

  v9 = (unsigned __int8)a9;
  if ( (_BYTE)a9 )
  {
    v34 = 0;
    v10 = a6;
    v11 = a2;
    do
    {
      v11 += 4;
      --v9;
      a2 = v11;
      LOBYTE(v34) = *(_BYTE *)(v11 + 3);
      v12 = *(unsigned __int16 *)(v10 + 2);
      v10 += 6;
      a6 = v10;
      v34 = (2 * v34) | (((unsigned __int16)~*(_WORD *)v11 >> 4) - v12) & 0x10000;
      if ( v10 >= a7 )
      {
        v10 += a8;
        a6 = v10;
      }
    }
    while ( v9 );
    LOBYTE(v34) = 0;
    *a4 = *a4 & ~((unsigned __int16)(v34 << SBYTE2(a9)) >> 8) | ((unsigned __int16)(v34 << SBYTE2(a9)) >> 8) & (BYTE1(a9) ^ ((unsigned int)(v34 << SBYTE2(a9)) >> 16));
    ++a4;
  }
  result = (char)a1;
  v36 = (_BYTE *)(a2 - 28);
  if ( *a1 >= 0 )
  {
    v24 = v36;
    v25 = a6;
    for ( i = a4; ; ++i )
    {
      v24 += 32;
      if ( (unsigned int)v24 >= a3 )
        break;
      _AL = 0;
      __asm { rcl     al, 1 }
      __asm { rcl     al, 1 }
      __asm { rcl     al, 1 }
      __asm { rcl     al, 1 }
      __asm { rcl     al, 1 }
      __asm { rcl     al, 1 }
      __asm { rcl     al, 1 }
      __asm { rcl     al, 1 }
      result = BYTE1(a9) ^ _AL;
      *i = result;
      v25 += 48;
      if ( v25 >= a7 )
        v25 += a8;
    }
    v37 = v24;
    v39 = v25;
    v38 = i;
  }
  else
  {
    v14 = v36;
    v15 = a6;
    for ( j = a4; ; ++j )
    {
      v14 += 32;
      if ( (unsigned int)v14 >= a3 )
        break;
      _AX = 0;
      if ( v14[3] )
        HIBYTE(_AX) = 0x80;
      __asm { rcl     al, 1 }
      if ( v14[7] )
        HIBYTE(_AX) |= 0x40u;
      __asm { rcl     al, 1 }
      if ( v14[11] )
        HIBYTE(_AX) |= 0x20u;
      __asm { rcl     al, 1 }
      if ( v14[15] )
        HIBYTE(_AX) |= 0x10u;
      __asm { rcl     al, 1 }
      if ( v14[19] )
        HIBYTE(_AX) |= 8u;
      __asm { rcl     al, 1 }
      if ( v14[23] )
        HIBYTE(_AX) |= 4u;
      __asm { rcl     al, 1 }
      if ( v14[27] )
        HIBYTE(_AX) |= 2u;
      __asm { rcl     al, 1 }
      if ( v14[31] )
        HIBYTE(_AX) |= 1u;
      __asm { rcl     al, 1 }
      result = HIBYTE(_AX) & (BYTE1(a9) ^ _AX);
      *j &= ~HIBYTE(_AX);
      *j |= result;
      v15 += 48;
      if ( v15 >= a7 )
        v15 += a8;
    }
    v37 = v14;
    v39 = v15;
    v38 = j;
  }
  v28 = HIBYTE(a9);
  if ( HIBYTE(a9) )
  {
    v35 = 0;
    v29 = v39;
    v30 = v37;
    do
    {
      --v28;
      LOBYTE(v35) = v30[3];
      v31 = *(_WORD *)v30;
      v30 += 4;
      v32 = (unsigned __int16)~v31;
      v33 = *(unsigned __int16 *)(v29 + 2);
      v29 += 6;
      v35 = (2 * v35) | ((v32 >> 4) - v33) & 0x10000;
      if ( v29 >= a7 )
        v29 += a8;
    }
    while ( v28 );
    result = (char)v38;
    LOBYTE(v35) = 0;
    *v38 = *v38 & ~((unsigned __int16)(v35 << (8 - HIBYTE(a9))) >> 8) | ((unsigned __int16)(v35 << (8 - HIBYTE(a9))) >> 8) & (BYTE1(a9) ^ ((unsigned int)(v35 << (8 - HIBYTE(a9))) >> 16));
  }
  return result;
}
