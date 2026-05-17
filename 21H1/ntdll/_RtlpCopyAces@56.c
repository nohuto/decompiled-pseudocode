/*
 * XREFs of _RtlpCopyAces@56 @ 0x4B2D886D
 * Callers:
 *     _RtlpInheritAcl2@72 @ 0x4B2D7947 (_RtlpInheritAcl2@72.c)
 *     _RtlpComputeMergedAcl2@44 @ 0x4B3478EE (_RtlpComputeMergedAcl2@44.c)
 * Callees:
 *     _RtlFirstFreeAce@8 @ 0x4B2D7F40 (_RtlFirstFreeAce@8.c)
 *     _RtlFindAceByType@12 @ 0x4B2D7FA0 (_RtlFindAceByType@12.c)
 *     _RtlpCopyEffectiveAce@64 @ 0x4B2D7FF4 (_RtlpCopyEffectiveAce@64.c)
 *     _RtlMapGenericMask@8 @ 0x4B2D83B0 (_RtlMapGenericMask@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

unsigned int __fastcall RtlpCopyAces(
        int a1,
        int a2,
        int a3,
        char a4,
        char a5,
        unsigned __int8 *a6,
        unsigned __int8 *a7,
        int a8,
        int a9,
        char a10,
        char a11,
        int a12,
        unsigned int *a13,
        _BYTE *a14)
{
  int v14; // ebx
  unsigned __int8 v15; // al
  unsigned int v17; // esi
  _BYTE *v18; // ecx
  unsigned int v19; // edx
  int *v20; // edi
  size_t v21; // esi
  unsigned __int8 v22; // al
  unsigned __int8 v23; // al
  int v24; // eax
  unsigned int v25; // eax
  bool v27; // al
  char v28; // al
  char v29; // dl
  void *v30; // esi
  int *v31; // ebx
  char v32; // al
  char v33; // al
  bool v34; // al
  signed int v35; // ecx
  int v37; // [esp+24h] [ebp-38h]
  unsigned int v38; // [esp+28h] [ebp-34h]
  char v39; // [esp+2Ch] [ebp-30h]
  int v40; // [esp+30h] [ebp-2Ch] BYREF
  void *v41; // [esp+34h] [ebp-28h] BYREF
  int v42; // [esp+38h] [ebp-24h]
  unsigned int v43; // [esp+3Ch] [ebp-20h]
  _BYTE v44[5]; // [esp+43h] [ebp-19h] BYREF
  int v45; // [esp+48h] [ebp-14h]
  _WORD v46[5]; // [esp+4Eh] [ebp-Eh] BYREF

  v14 = (int)a14;
  v15 = *a14 - 2;
  v42 = a2;
  v45 = (int)a14;
  HIBYTE(v46[0]) = 0;
  if ( v15 > 2u )
    return -1073741736;
  if ( !RtlFirstFreeAce((int)a14, (unsigned int *)&v41) )
    return -1073741699;
  v17 = 0;
  v18 = (_BYTE *)(a1 + 8);
  v19 = 0;
  v37 = 0;
  v38 = 0;
  *(_DWORD *)&v44[1] = a1 + 8;
  if ( !*(_WORD *)(a1 + 4) )
    goto LABEL_24;
  v20 = (int *)v41;
  while ( *v18 != 17 )
  {
    if ( a12 == 3 )
      goto LABEL_22;
LABEL_7:
    switch ( a3 )
    {
      case 0:
        if ( (v18[1] & 0x10) != 0 )
          goto LABEL_10;
        v27 = 0;
LABEL_26:
        if ( !v27 )
          break;
LABEL_10:
        if ( !a5 )
        {
          v21 = *((unsigned __int16 *)v18 + 1);
          v43 = v21;
          if ( v20 && v21 <= v14 + *(unsigned __int16 *)(v14 + 2) - (unsigned int)v20 )
          {
            if ( !HIBYTE(v46[0]) )
            {
              memcpy(v20, v18, v21);
              v22 = *(_BYTE *)v20;
              if ( (*(_BYTE *)v20 <= 8u || v22 <= 0xAu || v22 >= 0xDu && v22 <= 0xEu) && (*((_BYTE *)v20 + 1) & 8) == 0 )
              {
                RtlMapGenericMask(v20 + 1, (_DWORD *)v42);
                v23 = *(_BYTE *)v20;
                if ( !*(_BYTE *)v20 || v23 == 1 || v23 == 4 || v23 == 5 || v23 == 6 || v23 == 9 || v23 == 10 )
                  v24 = *(_DWORD *)(v42 + 12);
                else
                  v24 = *(_DWORD *)(v42 + 12) | 0x1000000;
                v20[1] &= v24;
              }
              *((_BYTE *)v20 + 1) &= ~a4;
              ++*(_WORD *)(v14 + 4);
              goto LABEL_20;
            }
LABEL_43:
            v25 = v43;
            v20 = (int *)(v14 + *(unsigned __int16 *)(v14 + 2));
            goto LABEL_21;
          }
          v33 = 1;
          HIBYTE(v46[0]) = 1;
          goto LABEL_42;
        }
        v28 = v18[1];
        v29 = 0;
        v30 = 0;
        v31 = v20;
        v41 = 0;
        LOBYTE(v46[0]) = 0;
        v40 = (int)v20;
        v43 = 0;
        if ( !a10 || (v39 = 1, (v28 & 3) == 0) )
          v39 = 0;
        if ( (v28 & 8) == 0 )
        {
          if ( a11 && (v28 & 0x10) != 0 )
            v29 = 1;
          if ( !RtlpCopyEffectiveAce(
                  (int *)v18,
                  v29,
                  v39,
                  a6,
                  a7,
                  a8,
                  a9,
                  v42,
                  0,
                  0,
                  (void **)&v40,
                  (unsigned int *)&v41,
                  v45,
                  0,
                  v46,
                  v44) )
            return -1073741699;
          if ( v44[0] )
          {
            v32 = 1;
            HIBYTE(v46[0]) = 1;
          }
          else
          {
            v32 = HIBYTE(v46[0]);
          }
          v30 = v41;
          v43 = (unsigned int)v41;
          if ( !v32 && v41 )
            *((_BYTE *)v20 + 1) &= ~a4;
          v18 = *(_BYTE **)&v44[1];
          v31 = (int *)v40;
        }
        if ( v39 )
        {
          *(_DWORD *)&v46[1] = 0;
          v46[3] = 768;
          v34 = memcmp(v18 + 10, &v46[1], 6u) == 0;
          if ( v30 && !LOBYTE(v46[0]) )
          {
            if ( HIBYTE(v46[0]) )
            {
              v14 = v45;
              goto LABEL_43;
            }
            *((_BYTE *)v20 + 1) = ~a4 & (*((_BYTE *)v20 + 1) | *(_BYTE *)(*(_DWORD *)&v44[1] + 1) & 0x1F);
            goto LABEL_20;
          }
          if ( **(_BYTE **)&v44[1] > 8u || *(_DWORD *)(*(_DWORD *)&v44[1] + 4) || v34 )
          {
            v35 = *(unsigned __int16 *)(*(_DWORD *)&v44[1] + 2);
            v43 += v35;
            if ( v43 > 0xFFFF )
              return -1073741699;
            if ( v35 > v45 + *(unsigned __int16 *)(v45 + 2) - (int)v31 )
            {
              HIBYTE(v46[0]) = 1;
            }
            else if ( !HIBYTE(v46[0]) )
            {
              memcpy(v31, *(const void **)&v44[1], v35);
              *((_BYTE *)v31 + 1) = ~a4 & (*((_BYTE *)v31 + 1) | 8);
              v14 = v45;
              ++*(_WORD *)(v45 + 4);
              goto LABEL_41;
            }
            v14 = v45;
            goto LABEL_43;
          }
        }
        v14 = v45;
LABEL_41:
        v33 = HIBYTE(v46[0]);
LABEL_42:
        if ( v33 )
          goto LABEL_43;
LABEL_20:
        v25 = v43;
        v20 = (int *)((char *)v20 + v43);
        v14 = v45;
LABEL_21:
        v18 = *(_BYTE **)&v44[1];
        v17 = v25 + v37;
        v19 = v38;
        v37 += v25;
        break;
      case 1:
        v27 = (v18[1] & 0x10) == 0;
        goto LABEL_26;
      case 2:
        goto LABEL_10;
    }
LABEL_22:
    ++v19;
    v18 += *((unsigned __int16 *)v18 + 1);
    v38 = v19;
    *(_DWORD *)&v44[1] = v18;
    if ( v19 >= *(unsigned __int16 *)(a1 + 4) )
      goto LABEL_23;
  }
  if ( a12 != 3 )
    goto LABEL_22;
  if ( !RtlFindAceByType(v14, 17, 0) )
  {
    v18 = *(_BYTE **)&v44[1];
    v19 = v38;
    goto LABEL_7;
  }
LABEL_23:
  if ( v17 <= 0xFFFF )
  {
LABEL_24:
    *a13 = v17;
    return HIBYTE(v46[0]) != 0 ? 0xC0000023 : 0;
  }
  return -1073741699;
}
