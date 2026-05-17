/*
 * XREFs of _RtlAppendPathElement@12 @ 0x4B32CEB0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlMultiAppendUnicodeStringBuffer@12 @ 0x4B2E13B0 (_RtlMultiAppendUnicodeStringBuffer@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __stdcall RtlAppendPathElement(int a1, unsigned __int16 *a2, int *a3)
{
  __int16 v3; // si
  __int16 v4; // di
  int result; // eax
  unsigned int v6; // eax
  int v7; // ecx
  unsigned int v8; // eax
  __int16 v9; // cx
  __int16 v10; // ax
  __int16 v11; // cx
  __int16 v12; // ax
  int *v13; // ebx
  int v14; // ecx
  int v15; // [esp+Ch] [ebp-68h]
  int v16; // [esp+14h] [ebp-60h]
  __int16 v17; // [esp+1Ch] [ebp-58h]
  int v18; // [esp+20h] [ebp-54h]
  __int16 v19; // [esp+2Ch] [ebp-48h]
  unsigned int v20; // [esp+30h] [ebp-44h]
  int *v21; // [esp+34h] [ebp-40h]
  __int16 v22; // [esp+38h] [ebp-3Ch]
  __int16 v23; // [esp+40h] [ebp-34h]
  __int16 *v24; // [esp+48h] [ebp-2Ch]
  int v25; // [esp+4Ch] [ebp-28h]
  _DWORD v26[6]; // [esp+50h] [ebp-24h] BYREF
  int v27; // [esp+68h] [ebp-Ch] BYREF
  int v28; // [esp+6Ch] [ebp-8h] BYREF

  v16 = RtlpEmptyString;
  v3 = 0;
  v15 = RtlpEmptyString;
  v4 = 0;
  v21 = &dword_4B285DEC;
  v27 = 0;
  v19 = 0;
  v22 = 0;
  v28 = 0;
  if ( (a1 & 0xFFFFFFFC) != 0 || !a2 || !a3 )
    return -1073741811;
  v23 = (a1 & 1) != 0 ? 92 : 47;
  result = 0;
  if ( !*(_WORD *)a3 )
    return result;
  v25 = *a3;
  v18 = *a3;
  v24 = (__int16 *)a3[1];
  v6 = *a2;
  if ( (_WORD)v6 )
  {
    v7 = *((_DWORD *)a2 + 1);
    v20 = v6 >> 1;
    v8 = 0;
    while ( v8 < v20 )
    {
      v9 = *(_WORD *)(v7 + 2 * v8);
      v17 = v9;
      if ( v9 == v23 || v9 == 92 )
      {
        v7 = *((_DWORD *)a2 + 1);
        v3 = v17;
        if ( (a1 & 2) == 0 )
          v3 = **((_WORD **)a2 + 1);
        LOWORD(v27) = v3;
        break;
      }
      v7 = *((_DWORD *)a2 + 1);
      if ( ++v8 >= 3 )
        break;
    }
    v10 = *(_WORD *)(v7 + 2 * v20 - 2);
    v11 = (a1 & 1) != 0 ? 92 : 47;
    if ( v10 == v23 || v10 == 92 )
    {
      v19 = v10;
      HIWORD(v27) = v10;
    }
  }
  else
  {
    v11 = (a1 & 1) != 0 ? 92 : 47;
  }
  if ( *v24 == v11 || *v24 == 92 )
  {
    v22 = *v24;
    LOWORD(v28) = *v24;
  }
  v12 = v24[((unsigned __int16)v18 >> 1) - 1];
  v13 = &dword_4B285DEC;
  if ( v12 == v23 || v12 == 92 )
  {
    v4 = v24[((unsigned __int16)v18 >> 1) - 1];
    HIWORD(v28) = v4;
  }
  if ( !v19 )
  {
    if ( !v22 )
    {
      v13 = (int *)L"\\";
      LOWORD(v16) = 2;
      if ( (a1 & 1) == 0 )
      {
        if ( v4 )
        {
          v13 = (int *)((char *)&v28 + 2);
        }
        else if ( v3 )
        {
          v13 = &v27;
        }
      }
    }
LABEL_30:
    v14 = v25;
    goto LABEL_31;
  }
  if ( !v4 )
  {
    LOWORD(v15) = 2;
    if ( (a1 & 1) != 0 )
      v21 = (int *)L"\\";
    else
      v21 = (int *)((char *)&v27 + 2);
  }
  if ( !v22 )
    goto LABEL_30;
  ++v24;
  HIWORD(v18) -= 2;
  LOWORD(v18) = v18 - 2;
  v14 = v18;
LABEL_31:
  v26[0] = v16;
  v26[3] = v24;
  v26[4] = v15;
  v26[5] = v21;
  v26[1] = v13;
  v26[2] = v14;
  result = RtlMultiAppendUnicodeStringBuffer(a2, 3, (int)v26);
  if ( result >= 0 )
    return 0;
  return result;
}
