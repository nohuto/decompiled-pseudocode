/*
 * XREFs of _RtlpGenerateInheritedAce@56 @ 0x4B2D7D3F
 * Callers:
 *     _RtlpGenerateInheritAcl@60 @ 0x4B2D7C3D (_RtlpGenerateInheritAcl@60.c)
 * Callees:
 *     _RtlFirstFreeAce@8 @ 0x4B2D7F40 (_RtlFirstFreeAce@8.c)
 *     _RtlpCopyEffectiveAce@64 @ 0x4B2D7FF4 (_RtlpCopyEffectiveAce@64.c)
 *     _RtlpIsDuplicateAce@8 @ 0x4B2D840A (_RtlpIsDuplicateAce@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

unsigned int __fastcall RtlpGenerateInheritedAce(
        int a1,
        char a2,
        char a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        unsigned int *a11,
        int a12,
        unsigned int *a13,
        _BYTE *a14)
{
  unsigned int v14; // ebx
  _BYTE *v15; // esi
  _BYTE *v16; // ecx
  char v17; // al
  bool v18; // zf
  unsigned int v19; // ecx
  char v21; // al
  char v22; // al
  signed int v23; // edx
  unsigned int v24; // eax
  _BYTE *v25; // [esp+Ch] [ebp-20h]
  char v27; // [esp+14h] [ebp-18h]
  int v28; // [esp+18h] [ebp-14h] BYREF
  int v29; // [esp+1Ch] [ebp-10h]
  void *v30; // [esp+20h] [ebp-Ch] BYREF
  unsigned int v31; // [esp+24h] [ebp-8h]
  char v32; // [esp+28h] [ebp-4h]
  char v33; // [esp+29h] [ebp-3h] BYREF
  __int16 v34; // [esp+2Ah] [ebp-2h] BYREF

  v32 = a2;
  v29 = 0;
  v28 = 0;
  v33 = 0;
  v14 = 0;
  v31 = 0;
  v25 = 0;
  v34 = 0;
  *a14 = 0;
  if ( !a2 || (v21 = *(_BYTE *)(a1 + 1), (v21 & 4) != 0) || (v27 = 1, (v21 & 3) == 0) )
    v27 = 0;
  if ( !(unsigned __int8)RtlFirstFreeAce(a12, &v30) )
    return -1073741699;
  v15 = v30;
  if ( !v30 )
    return -1073741699;
  v16 = (_BYTE *)a1;
  v17 = *(_BYTE *)(a1 + 1);
  if ( v32 )
    v18 = (v17 & 2) == 0;
  else
    v18 = (v17 & 1) == 0;
  if ( !v18 )
  {
    v25 = v30;
    if ( !(unsigned __int8)RtlpCopyEffectiveAce(
                             (void *)a1,
                             v27,
                             a4,
                             a5,
                             a6,
                             a7,
                             a8,
                             a9,
                             a10,
                             (int)&v30,
                             (int)&v28,
                             a12,
                             (int)a14,
                             (int)&v33,
                             (int)&v34) )
      return -1073741699;
    v14 = v28;
    HIBYTE(v34) = v34;
    v29 = v28;
    if ( !(_BYTE)v34 && v28 && v15 && (unsigned __int8)RtlpIsDuplicateAce(a12, v15) )
    {
      v31 = v14;
      --*(_WORD *)(a12 + 4);
      v14 = 0;
      v29 = 0;
    }
    else
    {
      v15 = v30;
    }
    v16 = (_BYTE *)a1;
  }
  if ( !v27 )
    goto LABEL_9;
  if ( v29 && !v33 )
  {
    if ( !HIBYTE(v34) )
    {
      v22 = v25[1] | v16[1] & 3;
      v25[1] = v22;
      if ( a3 )
        v25[1] = v22 | 0x10;
    }
    goto LABEL_9;
  }
  if ( *v16 <= 8u && !*((_DWORD *)v16 + 1) )
  {
LABEL_9:
    v19 = v31;
LABEL_10:
    *a11 = v14;
    *a13 = v19;
    return HIBYTE(v34) != 0 ? 0xC0000023 : 0;
  }
  v23 = *((unsigned __int16 *)v16 + 1);
  v14 += v23;
  if ( v14 <= 0xFFFF )
  {
    if ( v23 > a12 + *(unsigned __int16 *)(a12 + 2) - (int)v15 )
    {
      HIBYTE(v34) = 1;
    }
    else if ( !HIBYTE(v34) )
    {
      memcpy(v15, v16, v23);
      v15[1] |= 8u;
      ++*(_WORD *)(a12 + 4);
      if ( a3 )
      {
        v15[1] |= 0x10u;
        if ( (unsigned __int8)RtlpIsDuplicateAce(a12, v15) )
        {
          --*(_WORD *)(a12 + 4);
          v24 = *(unsigned __int16 *)(a1 + 2);
          v19 = v31;
          if ( v31 <= v24 )
            v19 = *(unsigned __int16 *)(a1 + 2);
          v14 -= v24;
          goto LABEL_10;
        }
      }
    }
    goto LABEL_9;
  }
  return -1073741699;
}
