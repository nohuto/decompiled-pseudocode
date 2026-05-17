/*
 * XREFs of RtlCutoverTimeToSystemTime @ 0x18005AE50
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTimeFieldsToTime @ 0x18005B020 (RtlpTimeFieldsToTime.c)
 *     RtlpTimeToTimeFields @ 0x18005B350 (RtlpTimeToTimeFields.c)
 */

bool __fastcall RtlCutoverTimeToSystemTime(_WORD *a1, _QWORD *a2, _QWORD *a3, char a4)
{
  _WORD *v6; // r15
  __int16 v8; // r12
  bool v9; // zf
  __int16 v10; // ax
  bool v11; // r13
  __int16 v12; // di
  __int16 v13; // si
  __int16 v14; // r14
  __int16 i; // r15
  __int16 v17; // [rsp+20h] [rbp-40h]
  __int64 v18; // [rsp+28h] [rbp-38h] BYREF
  _WORD v19[2]; // [rsp+30h] [rbp-30h] BYREF
  __int16 v20; // [rsp+34h] [rbp-2Ch]
  __int16 v21; // [rsp+36h] [rbp-2Ah]
  __int16 v22; // [rsp+38h] [rbp-28h]
  __int16 v23; // [rsp+3Ah] [rbp-26h]
  __int16 v24; // [rsp+3Ch] [rbp-24h]
  __int16 v25; // [rsp+3Eh] [rbp-22h]
  __int16 v26; // [rsp+40h] [rbp-20h] BYREF
  __int16 v27; // [rsp+42h] [rbp-1Eh]
  __int16 v28; // [rsp+44h] [rbp-1Ch]
  _BYTE v29[4]; // [rsp+50h] [rbp-10h] BYREF
  __int16 v30; // [rsp+54h] [rbp-Ch]
  __int16 v31; // [rsp+5Eh] [rbp-2h]

  v6 = a1;
  RtlpTimeToTimeFields(a3, &v26, 0LL);
  if ( !*v6 )
  {
    v8 = v6[2];
    if ( v8 <= 5 && v8 )
    {
      v17 = v6[7];
      v9 = a4 == 0;
      v10 = v6[1];
      v11 = 0;
      v12 = v26;
      if ( v9 )
      {
        if ( v10 >= v27 )
          v11 = v10 <= v27;
        else
          v12 = v26 + 1;
      }
      v19[1] = v6[1];
      v25 = 0;
      while ( 1 )
      {
        v21 = v6[3];
        v22 = v6[4];
        v13 = 1;
        v23 = v6[5];
        v24 = v6[6];
        v19[0] = v12;
        v20 = 1;
        if ( !(unsigned __int8)RtlpTimeFieldsToTime(v19, &v18, 0LL) )
          return 0;
        RtlpTimeToTimeFields(&v18, v29, 0LL);
        if ( v31 > v17 )
          break;
        v14 = 1;
        if ( v31 < v17 )
        {
          v13 = v17 - v31 + 1;
          goto LABEL_9;
        }
LABEL_10:
        if ( v8 > 1 )
        {
          for ( i = 1; i < v8; ++i )
          {
            v13 += 7;
            v20 = v13;
            if ( !(unsigned __int8)RtlpTimeFieldsToTime(v19, &v18, 0LL) )
              break;
            RtlpTimeToTimeFields(&v18, v29, 0LL);
            v14 = v30;
          }
          v6 = a1;
        }
        v20 = v14;
        if ( !(unsigned __int8)RtlpTimeFieldsToTime(v19, &v18, 0LL) )
          return 0;
        if ( !v11 || v14 >= v28 && (v14 != v28 || v18 >= *a3) )
        {
          *a2 = v18;
          return 1;
        }
        v11 = 0;
        ++v12;
      }
      v13 = v17 - v31 + 8;
LABEL_9:
      v14 = v13;
      goto LABEL_10;
    }
    return 0;
  }
  return (unsigned __int8)RtlpTimeFieldsToTime(v6, a2, 0LL) && (a4 || *a2 >= *a3);
}
