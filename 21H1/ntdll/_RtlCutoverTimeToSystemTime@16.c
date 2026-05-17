/*
 * XREFs of _RtlCutoverTimeToSystemTime@16 @ 0x4B2DCAE0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpTimeToTimeFields@12 @ 0x4B2DCCE0 (_RtlpTimeToTimeFields@12.c)
 *     _RtlpTimeFieldsToTime@12 @ 0x4B2DCF80 (_RtlpTimeFieldsToTime@12.c)
 */

bool __stdcall RtlCutoverTimeToSystemTime(_WORD *a1, _DWORD *a2, _QWORD *a3, char a4)
{
  _QWORD *v4; // ebx
  _WORD *v5; // edi
  __int16 v6; // ax
  __int16 v7; // cx
  int v8; // esi
  __int16 v9; // cx
  __int16 v10; // dx
  __int16 v11; // ax
  __int16 v12; // bx
  int v13; // esi
  int v14; // edx
  bool result; // al
  bool v16; // [esp+13h] [ebp-55h]
  int v17; // [esp+14h] [ebp-54h]
  __int16 v18; // [esp+18h] [ebp-50h]
  __int16 v19; // [esp+1Ch] [ebp-4Ch]
  __int16 v20; // [esp+24h] [ebp-44h]
  __int16 v21; // [esp+28h] [ebp-40h]
  __int64 v22; // [esp+30h] [ebp-38h] BYREF
  _WORD v23[2]; // [esp+38h] [ebp-30h] BYREF
  __int16 v24; // [esp+3Ch] [ebp-2Ch]
  __int16 v25; // [esp+3Eh] [ebp-2Ah]
  __int16 v26; // [esp+40h] [ebp-28h]
  __int16 v27; // [esp+42h] [ebp-26h]
  __int16 v28; // [esp+44h] [ebp-24h]
  __int16 v29; // [esp+46h] [ebp-22h]
  unsigned __int16 v30; // [esp+48h] [ebp-20h] BYREF
  __int16 v31; // [esp+4Ah] [ebp-1Eh]
  __int16 v32; // [esp+4Ch] [ebp-1Ch]
  char v33[4]; // [esp+58h] [ebp-10h] BYREF
  __int16 v34; // [esp+5Ch] [ebp-Ch]
  __int16 v35; // [esp+66h] [ebp-2h]

  v4 = a3;
  RtlpTimeToTimeFields(a3, &v30, 0);
  v5 = a1;
  if ( !*a1 )
  {
    v6 = a1[2];
    v20 = v6;
    if ( v6 <= 5 && v6 )
    {
      v21 = a1[7];
      v7 = a1[1];
      v16 = 0;
      if ( a4 )
      {
        v8 = v30;
      }
      else
      {
        if ( v7 >= v31 )
        {
          v8 = v30;
          v17 = v30;
          v16 = v7 <= v31;
          goto LABEL_7;
        }
        v8 = (unsigned __int16)(v30 + 1);
      }
      v17 = v8;
LABEL_7:
      v23[1] = a1[1];
      v29 = 0;
      while ( 1 )
      {
        v23[0] = v8;
        v25 = v5[3];
        v26 = v5[4];
        v27 = v5[5];
        v28 = v5[6];
        v19 = 1;
        v24 = 1;
        if ( !(unsigned __int8)RtlpTimeFieldsToTime(v23, &v22, 0) )
          return 0;
        RtlpTimeToTimeFields(&v22, v33, 0);
        if ( v35 > v21 )
          break;
        v10 = 1;
        if ( v35 < v21 )
        {
          v9 = v21 - v35 + 1;
          v10 = v9;
          goto LABEL_11;
        }
LABEL_12:
        v11 = v10;
        v18 = v10;
        if ( v20 > 1 )
        {
          v12 = v19;
          v13 = 1;
          v18 = v10;
          while ( 1 )
          {
            v12 += 7;
            v24 = v12;
            if ( !(unsigned __int8)RtlpTimeFieldsToTime(v23, &v22, 0) )
              break;
            RtlpTimeToTimeFields(&v22, v33, 0);
            v11 = v34;
            ++v13;
            v18 = v34;
            if ( (__int16)v13 >= v20 )
              goto LABEL_16;
          }
          v11 = v18;
LABEL_16:
          v5 = a1;
          v8 = v17;
          v4 = a3;
        }
        v24 = v11;
        if ( !(unsigned __int8)RtlpTimeFieldsToTime(v23, &v22, 0) )
          return 0;
        v14 = HIDWORD(v22);
        if ( !v16 || v18 >= v32 && (v18 != v32 || v22 >= *v4) )
        {
          result = 1;
          *a2 = v22;
          a2[1] = v14;
          return result;
        }
        ++v8;
        v16 = 0;
        v17 = v8;
      }
      v9 = v21 - v35 + 8;
      v10 = v9;
LABEL_11:
      v19 = v9;
      goto LABEL_12;
    }
    return 0;
  }
  return (unsigned __int8)RtlpTimeFieldsToTime(a1, a2, 0) && (a4 || *(_QWORD *)a2 >= *a3);
}
