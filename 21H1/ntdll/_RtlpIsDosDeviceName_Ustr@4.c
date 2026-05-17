/*
 * XREFs of _RtlpIsDosDeviceName_Ustr@4 @ 0x4B2C9330
 * Callers:
 *     _RtlSetCurrentDirectory_U@4 @ 0x4B2A79F0 (_RtlSetCurrentDirectory_U@4.c)
 *     _RtlGetFullPathName_Ustr@24 @ 0x4B2C8CA0 (_RtlGetFullPathName_Ustr@24.c)
 *     _RtlIsDosDeviceName_U@4 @ 0x4B2D1BB0 (_RtlIsDosDeviceName_U@4.c)
 * Callees:
 *     _RtlEqualUnicodeString@12 @ 0x4B2D1250 (_RtlEqualUnicodeString@12.c)
 *     _iswdigit @ 0x4B2F8620 (_iswdigit.c)
 */

int __thiscall RtlpIsDosDeviceName_Ustr(int *this)
{
  unsigned __int16 *v1; // edx
  unsigned int v2; // esi
  int v3; // ebx
  int v4; // eax
  unsigned __int16 *v5; // esi
  int v6; // edi
  int v7; // edx
  __int16 v8; // cx
  unsigned __int16 v9; // ax
  unsigned __int16 *v10; // eax
  int v11; // ecx
  char *v12; // ecx
  int v13; // eax
  __int16 v14; // ax
  int v15; // eax
  unsigned __int16 *v16; // ecx
  unsigned __int16 *v17; // edx
  int v18; // eax
  int v19; // ecx
  int v20; // edi
  __int16 v21; // bx
  int result; // eax
  char v23; // al
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // [esp+10h] [ebp-10h] BYREF
  char *v28; // [esp+14h] [ebp-Ch]
  int v29; // [esp+18h] [ebp-8h]
  int v30; // [esp+1Ch] [ebp-4h]

  v1 = (unsigned __int16 *)this[1];
  v2 = *(unsigned __int16 *)this;
  v3 = 0;
  v30 = 0;
  if ( v2 >= 2 )
  {
    v4 = *v1;
    if ( (v4 == 92 || v4 == 47) && v2 >= 4 )
    {
      v24 = v1[1];
      if ( v24 == 92 || v24 == 47 )
      {
        if ( v2 < 6 )
          return 0;
        v25 = v1[2];
        if ( v25 != 46 && v25 != 63 )
          return 0;
        if ( v2 >= 8 )
        {
          v26 = v1[3];
          if ( v26 == 92 || v26 == 47 )
            return 0;
        }
        if ( v2 != 6 )
          return 0;
      }
    }
  }
  v5 = v1;
  v6 = (unsigned __int16)*this;
  v27 = *this;
  v7 = (unsigned __int16)v6 >> 1;
  v28 = (char *)v5;
  if ( !(_WORD)v7 )
    return 0;
  if ( v5[v7 - 1] == 58 )
  {
    v3 = 1;
    v8 = v6 - 2;
    LOWORD(v7) = v7 - 1;
    v30 = 1;
  }
  else
  {
    v8 = v27;
  }
  if ( !(_WORD)v7 )
    return 0;
  do
  {
    v9 = v5[(unsigned __int16)v7 - 1];
    if ( v9 != 46 && v9 != 32 )
      break;
    v29 = 65534;
    LOWORD(v7) = v7 - 1;
    v8 -= 2;
    ++v3;
  }
  while ( (_WORD)v7 );
  v30 = v3;
  v29 = 0;
  if ( (_WORD)v7 )
  {
    v10 = &v5[(unsigned __int16)v7 - 1];
    if ( v10 >= v5 )
    {
      while ( 1 )
      {
        v11 = *v10;
        if ( v11 == 92 || v11 == 47 || v11 == 58 && v10 == v5 + 1 )
          break;
        if ( --v10 < v5 )
          goto LABEL_21;
      }
      v12 = (char *)(v10 + 1);
      if ( v10 + 1 >= (unsigned __int16 *)((char *)v5 + (v6 & 0xFFFFFFFE)) )
        return 0;
      v13 = *(_WORD *)v12 | 0x20;
      if ( v13 != 112 && v13 != 108 && v13 != 110 && v13 != 97 && v13 != 99 )
        return 0;
      v29 = v12 - (char *)v5;
      v14 = (unsigned __int16)(v6 + (_WORD)v5 - (_WORD)v12) >> 1;
      v5 = (unsigned __int16 *)v12;
      v28 = v12;
      LOWORD(v7) = v14 - v30;
    }
LABEL_21:
    v15 = *v5 | 0x20;
    if ( v15 != 112 && v15 != 108 && v15 != 110 && v15 != 97 && v15 != 99 )
      return 0;
  }
  v16 = v5;
  v17 = &v5[(unsigned __int16)v7];
  if ( v5 < v17 )
  {
    do
    {
      v18 = *v16;
      if ( v18 == 46 )
        break;
      if ( v18 == 58 )
        break;
      ++v16;
    }
    while ( v16 < v17 );
    for ( ; v16 > v5; --v16 )
    {
      if ( *(v16 - 1) != 32 )
        break;
    }
  }
  v19 = v16 - v5;
  v20 = (unsigned __int16)v19;
  v21 = 2 * v19;
  LOWORD(v27) = 2 * v19;
  if ( (unsigned __int16)v19 == 5 )
    return 0;
  switch ( (__int16)v19 )
  {
    case 3:
      if ( (unsigned __int8)RtlEqualUnicodeString(&v27, &RtlpDosPRNDevice, 1)
        || (unsigned __int8)RtlEqualUnicodeString(&v27, &RtlpDosAUXDevice, 1)
        || (unsigned __int8)RtlEqualUnicodeString(&v27, &RtlpDosNULDevice, 1) )
      {
        return (v29 << 16) | (2 * v20);
      }
      v23 = RtlEqualUnicodeString(&v27, &RtlpDosCONDevice, 1);
      goto LABEL_46;
    case 4:
      if ( !iswdigit(v5[3]) || v5[3] == 48 )
        return 0;
      LOWORD(v27) = v21 - 2;
      if ( (unsigned __int8)RtlEqualUnicodeString(&v27, &RtlpDosLPTDevice, 1) )
        return (v29 << 16) | (2 * v20);
      v23 = RtlEqualUnicodeString(&v27, &RtlpDosCOMDevice, 1);
LABEL_46:
      if ( !v23 )
        return 0;
      result = (v29 << 16) | (2 * v20);
      break;
    case 6:
      v23 = RtlEqualUnicodeString(&v27, &RtlpDosCONINDevice, 1);
      goto LABEL_46;
    case 7:
      if ( !(unsigned __int8)RtlEqualUnicodeString(&v27, &RtlpDosCONOUTDevice, 1) )
        return 0;
      return (v29 << 16) | (2 * v20);
    default:
      return 0;
  }
  return result;
}
