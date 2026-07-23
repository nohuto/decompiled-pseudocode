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
        PGENERIC_MAPPING GenericMapping,
        int a9,
        int a10,
        unsigned int *a11,
        PACL Acl,
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
  int v23; // edx
  unsigned int v24; // eax
  size_t v25; // [esp-4h] [ebp-30h]
  _BYTE *v26; // [esp+Ch] [ebp-20h]
  char v28; // [esp+14h] [ebp-18h]
  int v29; // [esp+18h] [ebp-14h] BYREF
  int v30; // [esp+1Ch] [ebp-10h]
  PVOID FirstFree; // [esp+20h] [ebp-Ch] BYREF
  unsigned int v32; // [esp+24h] [ebp-8h]
  char v33; // [esp+28h] [ebp-4h]
  char v34; // [esp+29h] [ebp-3h] BYREF
  __int16 v35; // [esp+2Ah] [ebp-2h] BYREF

  v33 = a2;
  v30 = 0;
  v29 = 0;
  v34 = 0;
  v14 = 0;
  v32 = 0;
  v26 = 0;
  v35 = 0;
  *a14 = 0;
  if ( !a2 || (v21 = *(_BYTE *)(a1 + 1), (v21 & 4) != 0) || (v28 = 1, (v21 & 3) == 0) )
    v28 = 0;
  if ( !RtlFirstFreeAce(Acl, &FirstFree) )
    return -1073741699;
  v15 = FirstFree;
  if ( !FirstFree )
    return -1073741699;
  v16 = (_BYTE *)a1;
  v17 = *(_BYTE *)(a1 + 1);
  if ( v33 )
    v18 = (v17 & 2) == 0;
  else
    v18 = (v17 & 1) == 0;
  if ( !v18 )
  {
    v26 = FirstFree;
    if ( !(unsigned __int8)RtlpCopyEffectiveAce(
                             (void *)a1,
                             v28,
                             a4,
                             a5,
                             a6,
                             a7,
                             GenericMapping,
                             a9,
                             a10,
                             (int)&FirstFree,
                             (int)&v29,
                             (int)Acl,
                             (int)a14,
                             (int)&v34,
                             (int)&v35) )
      return -1073741699;
    v14 = v29;
    HIBYTE(v35) = v35;
    v30 = v29;
    if ( !(_BYTE)v35 && v29 && v15 && (unsigned __int8)RtlpIsDuplicateAce(Acl, v15) )
    {
      v32 = v14;
      --Acl->AceCount;
      v14 = 0;
      v30 = 0;
    }
    else
    {
      v15 = FirstFree;
    }
    v16 = (_BYTE *)a1;
  }
  if ( !v28 )
    goto LABEL_9;
  if ( v30 && !v34 )
  {
    if ( !HIBYTE(v35) )
    {
      v22 = v26[1] | v16[1] & 3;
      v26[1] = v22;
      if ( a3 )
        v26[1] = v22 | 0x10;
    }
    goto LABEL_9;
  }
  if ( *v16 <= 8u && !*((_DWORD *)v16 + 1) )
  {
LABEL_9:
    v19 = v32;
LABEL_10:
    *a11 = v14;
    *a13 = v19;
    return HIBYTE(v35) != 0 ? 0xC0000023 : 0;
  }
  v23 = *((unsigned __int16 *)v16 + 1);
  v14 += v23;
  if ( v14 <= 0xFFFF )
  {
    if ( v23 > (int)Acl + Acl->AclSize - (int)v15 )
    {
      HIBYTE(v35) = 1;
    }
    else if ( !HIBYTE(v35) )
    {
      LODWORD(v25) = *((unsigned __int16 *)v16 + 1);
      memcpy(v15, v16, v25);
      v15[1] |= 8u;
      ++Acl->AceCount;
      if ( a3 )
      {
        v15[1] |= 0x10u;
        if ( (unsigned __int8)RtlpIsDuplicateAce(Acl, v15) )
        {
          --Acl->AceCount;
          v24 = *(unsigned __int16 *)(a1 + 2);
          v19 = v32;
          if ( v32 <= v24 )
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
