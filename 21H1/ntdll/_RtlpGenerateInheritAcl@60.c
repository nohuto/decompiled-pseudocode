/*
 * XREFs of _RtlpGenerateInheritAcl@60 @ 0x4B2D7C3D
 * Callers:
 *     _RtlpInheritAcl2@72 @ 0x4B2D7947 (_RtlpInheritAcl2@72.c)
 * Callees:
 *     _RtlpGenerateInheritedAce@56 @ 0x4B2D7D3F (_RtlpGenerateInheritedAce@56.c)
 *     _RtlFindAceByType@12 @ 0x4B2D7FA0 (_RtlFindAceByType@12.c)
 */

int __fastcall RtlpGenerateInheritAcl(
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
        int a11,
        char a12,
        _DWORD *a13,
        PACL Acl,
        _BYTE *a15)
{
  int v16; // ebx
  unsigned int v17; // ecx
  int v18; // edi
  unsigned int v19; // esi
  int result; // eax
  int v21; // [esp+Ch] [ebp-14h]
  int v22; // [esp+10h] [ebp-10h] BYREF
  unsigned int v23; // [esp+14h] [ebp-Ch]
  int v24; // [esp+18h] [ebp-8h] BYREF
  _BYTE v25[2]; // [esp+1Dh] [ebp-3h] BYREF
  char v26; // [esp+1Fh] [ebp-1h]

  v25[1] = a2;
  *a15 = 0;
  v16 = a1 + 8;
  v17 = 0;
  v21 = a1;
  v18 = 0;
  v26 = 0;
  v19 = 0;
  v23 = 0;
  if ( *(_WORD *)(a1 + 4) )
  {
    while ( 1 )
    {
      if ( *(_BYTE *)v16 == 17 )
      {
        if ( a11 == 3 )
        {
          if ( RtlFindAceByType(Acl, 0x11u, 0) )
          {
LABEL_14:
            if ( !v26 )
              break;
LABEL_21:
            result = -1073741789;
            *a13 = v19 + v18;
            return result;
          }
LABEL_4:
          result = RtlpGenerateInheritedAce(
                     a3,
                     a4,
                     a5,
                     a6,
                     a7,
                     GenericMapping,
                     a9,
                     a10,
                     (int)&v24,
                     Acl,
                     (int)&v22,
                     (int)v25);
          if ( result == -1073741789 )
          {
            v26 = 1;
            result = 0;
          }
          if ( result < 0 )
            return result;
          if ( v25[0] )
            *a15 = 1;
          v18 += v24;
          if ( v24 > v19 || (v19 -= v24, v19 <= v22) )
            v19 = v22;
          v17 = v23;
        }
      }
      else if ( a11 != 3 )
      {
        goto LABEL_4;
      }
      ++v17;
      v16 += *(unsigned __int16 *)(v16 + 2);
      v23 = v17;
      if ( v17 >= *(unsigned __int16 *)(v21 + 4) )
        goto LABEL_14;
    }
  }
  if ( a12 )
    goto LABEL_21;
  *a13 = v18;
  return 0;
}
