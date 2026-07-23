/*
 * XREFs of KiFindNextTimerDueTime @ 0x1402CA180
 * Callers:
 *     KiGetNextTimerExpirationDueTime @ 0x1402C9EA0 (KiGetNextTimerExpirationDueTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiFindNextTimerDueTime(__int64 a1, unsigned __int64 a2, char a3, unsigned __int64 *a4)
{
  char v4; // r11
  unsigned __int64 v5; // r15
  unsigned int v6; // edx
  __int64 v7; // r8
  unsigned int v8; // r13d
  unsigned __int64 *v9; // rbx
  __int64 v10; // r10
  unsigned int v11; // ecx
  unsigned int v12; // eax
  unsigned __int64 v13; // r9
  unsigned int v14; // esi
  unsigned int v15; // esi
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 *v20; // rdi
  unsigned __int64 v21; // r11
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rbx
  __int64 v24; // r10
  unsigned __int64 v25; // r9
  _QWORD *v26; // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned int v29; // eax
  __int64 v30; // r9
  __int64 v31; // rbp
  unsigned int v32; // ecx
  __int64 v33; // rbx
  __int64 v34; // rbp
  unsigned __int64 v35; // r12
  unsigned __int64 v36; // r15
  unsigned __int64 v37; // r10
  unsigned __int64 v38; // r11
  _QWORD *v39; // r8
  __int64 v40; // rax
  unsigned __int64 v41; // r8
  unsigned __int64 v42; // rdx
  int v43; // ecx
  __int64 v44; // r11
  unsigned __int64 v45; // rdi
  unsigned __int16 v46; // r11
  unsigned __int64 v47; // r10
  unsigned __int64 v48; // r9
  __int64 v49; // rbx
  unsigned __int64 v50; // rdx
  _QWORD *v51; // rcx
  __int64 v52; // rax
  unsigned __int64 v53; // rcx
  __int64 v54; // rdx
  unsigned int v55; // [rsp+0h] [rbp-88h]
  __int64 v56; // [rsp+8h] [rbp-80h]
  unsigned int v57; // [rsp+10h] [rbp-78h]
  unsigned __int64 v58; // [rsp+18h] [rbp-70h]
  int v59; // [rsp+20h] [rbp-68h]
  unsigned int v60; // [rsp+24h] [rbp-64h]

  v4 = a3;
  v5 = a2;
  v6 = -1;
  v7 = -1LL;
  v56 = -1LL;
  v8 = -1;
  v55 = -1;
  v9 = a4;
  v10 = a1;
  if ( (KiVelocityFlags & 0x2000) != 0 && KePseudoHrTimeIncrement == KeMaximumIncrement )
  {
    v11 = 1;
    v59 = -1;
  }
  else
  {
    v11 = 0;
    v59 = 1;
  }
  v57 = v11;
  v12 = (unsigned __int8)(v5 >> 18);
  v60 = v12;
  while ( 1 )
  {
    v13 = -1LL;
    v58 = -1LL;
    v14 = v12;
    if ( !KiSerializeTimerExpiration )
      break;
    if ( !v4 )
      goto LABEL_7;
    v31 = v11;
    v32 = (unsigned __int8)(v12 - *(_BYTE *)(KiProcessorBlock[0] + 4LL * v11 + 31568));
    if ( v32 > 1 )
      return 0LL;
    v8 = 0;
    v33 = (unsigned __int8)*(_DWORD *)(KiProcessorBlock[0] + 4 * v31 + 31568);
    v34 = KiProcessorBlock[0] + (v31 << 13);
    v35 = (v5 & 0xFFFFFFFFFFFC0000uLL) - (v32 << 18) + 0x4000000;
    while ( 2 )
    {
      v36 = v13;
      v37 = (unsigned int)v33;
      v38 = KiPendingTimerBitmaps[0] - 1;
      if ( (unsigned __int64)(unsigned int)v33 >= KiPendingTimerBitmaps[0] )
        v37 = 0LL;
      while ( 1 )
      {
        if ( v38 - v37 == -1LL )
        {
          LODWORD(v41) = -1;
        }
        else
        {
          v39 = (_QWORD *)(qword_140CFD7A8 + 8 * (v37 >> 6));
          v40 = ((1LL << (v37 & 0x3F)) - 1) | ~*v39;
          if ( v40 == -1 )
          {
            while ( (unsigned __int64)++v39 <= qword_140CFD7A8 + 8 * (v38 >> 6) )
            {
              v40 = ~*v39;
              if ( *v39 )
                goto LABEL_48;
            }
LABEL_64:
            LODWORD(v41) = -1;
            goto LABEL_65;
          }
LABEL_48:
          _BitScanForward64((unsigned __int64 *)&v40, ~v40);
          v41 = v40 + (((__int64)v39 - qword_140CFD7A8) >> 3 << 6);
          if ( v41 > v38 )
            goto LABEL_64;
          if ( v41 != -1LL )
            break;
        }
LABEL_65:
        if ( !v37 )
          break;
        v44 = v33 + 1;
        if ( (unsigned __int64)(v33 + 1) > KiPendingTimerBitmaps[0] )
          v44 = KiPendingTimerBitmaps[0];
        v38 = v44 - 1;
        v37 = 0LL;
      }
      v6 = v55;
      v13 = v58;
      if ( (_DWORD)v41 != -1 )
      {
        v8 += (unsigned __int8)(v41 - v33 + 1);
        if ( v8 <= v55 && v8 <= 0x100 )
        {
          v42 = *(_QWORD *)(32LL * (unsigned int)v41 + v34 + 15192);
          if ( v42 >= v58 || HIDWORD(v42) == -1 )
            goto LABEL_54;
          if ( v42 >= v35 )
          {
            v13 = *(_QWORD *)(32LL * (unsigned int)v41 + v34 + 15192);
            v58 = v13;
LABEL_54:
            v33 = (unsigned __int8)(v41 + 1);
            continue;
          }
          v43 = (unsigned __int8)(v42 >> 18);
          if ( v43 != (_DWORD)v41 )
          {
            v33 = (unsigned __int8)(v41 + 1);
            v13 = (v42 & 0xFFFFFFFFFFFC0000uLL) + ((((_DWORD)v41 - v43) << 18) & 0x3FC0000);
            if ( v13 >= v36 )
              v13 = v36;
            v58 = v13;
            continue;
          }
          v13 = *(_QWORD *)(32LL * (unsigned int)v41 + v34 + 15192);
          v6 = v55;
        }
      }
      break;
    }
    v5 = a2;
LABEL_34:
    v7 = v56;
    v10 = a1;
    v4 = a3;
    v9 = a4;
LABEL_7:
    if ( v57 )
    {
      *v9 = v13;
    }
    else
    {
      v7 = v13;
      v56 = v13;
    }
    if ( v13 != -1LL && v6 >= v8 + 1 )
    {
      v6 = v8 + 1;
      v55 = v8 + 1;
    }
    v15 = v59 + v57;
    v57 = v15;
    if ( v15 >= 2 )
      return v7;
    v12 = v60;
    v11 = v15;
  }
  if ( v12 == (unsigned __int8)*(_DWORD *)(v10 + 4LL * v11 + 31568) )
  {
    if ( !v4 )
    {
      v8 = 0;
      v17 = *(_QWORD *)(v10 + 200);
      v18 = 2LL * *(unsigned __int8 *)(v10 + 208);
      v19 = KiPendingTimerBitmaps[v18 + 1];
      v20 = &KiPendingTimerBitmaps[v18];
      while ( 1 )
      {
        v21 = *v20;
        v22 = (unsigned __int64)v14 << 9;
        if ( v22 >= *v20 )
          v23 = 0LL;
        else
          v23 = (unsigned __int64)v14 << 9;
        v24 = v20[1];
        v25 = v21 - 1;
        while ( 1 )
        {
          if ( v25 - v23 == -1LL )
            goto LABEL_37;
          v26 = (_QWORD *)(v24 + 8 * (v23 >> 6));
          v27 = ~*v26;
          if ( !*v26 )
          {
            while ( (unsigned __int64)++v26 <= v24 + 8 * (v25 >> 6) )
            {
              v27 = ~*v26;
              if ( *v26 )
                goto LABEL_20;
            }
LABEL_37:
            LODWORD(v28) = -1;
            goto LABEL_38;
          }
LABEL_20:
          _BitScanForward64((unsigned __int64 *)&v27, ~v27);
          v28 = v27 + (((__int64)v26 - v24) >> 3 << 6);
          if ( v28 > v25 )
          {
            LODWORD(v28) = -1;
          }
          else if ( v28 != -1LL )
          {
            break;
          }
LABEL_38:
          if ( !v23 )
            break;
          v30 = v22 + 1;
          if ( v22 + 1 > v21 )
            v30 = *v20;
          v25 = v30 - 1;
          v23 = 0LL;
        }
        if ( (_DWORD)v28 == -1 || (v29 = (unsigned int)v28 >> 9, v8 += (unsigned __int8)(v29 - v14) + 1, v8 > 0x100) )
        {
          v13 = -1LL;
          v6 = v55;
          goto LABEL_34;
        }
        if ( (*(_QWORD *)(((unsigned __int64)v29 << 6) + v19) & v17) != 0 )
        {
          v6 = v55;
          v13 = v5 + (v8 << 18);
          goto LABEL_34;
        }
        v14 = (unsigned __int8)(v29 + 1);
      }
    }
    v45 = v12 << 9;
    v8 = -1;
    v46 = 0;
LABEL_72:
    v47 = KiPendingTimerBitmaps[2 * v46];
    if ( v45 >= v47 )
      v48 = 0LL;
    else
      v48 = v14 << 9;
    v49 = KiPendingTimerBitmaps[2 * v46 + 1];
    v50 = v47 - 1;
    while ( 1 )
    {
      if ( v50 - v48 == -1LL )
        goto LABEL_91;
      v51 = (_QWORD *)(v49 + 8 * (v48 >> 6));
      v52 = ~*v51;
      if ( !*v51 )
        break;
LABEL_77:
      _BitScanForward64((unsigned __int64 *)&v52, ~v52);
      v53 = v52 + (((__int64)v51 - v49) >> 3 << 6);
      if ( v53 > v50 )
      {
        LODWORD(v53) = -1;
      }
      else if ( v53 != -1LL )
      {
        goto LABEL_79;
      }
LABEL_92:
      if ( !v48 )
      {
LABEL_79:
        if ( (_DWORD)v53 != -1 && (unsigned __int8)(((unsigned int)v53 >> 9) - v14) < v8 )
          v8 = (unsigned __int8)(((unsigned int)v53 >> 9) - v14);
        if ( ++v46 >= (unsigned __int16)KiActiveGroups )
        {
          v6 = v55;
          v7 = v56;
          v10 = a1;
          v4 = a3;
          v9 = a4;
          if ( v8 == -1 )
            v13 = -1LL;
          else
            v13 = (unsigned int)KeTimeIncrement + (v5 & 0xFFFFFFFFFFFC0000uLL) + (v8 << 18);
          goto LABEL_7;
        }
        goto LABEL_72;
      }
      v54 = v45 + 1;
      if ( v45 + 1 > v47 )
        v54 = KiPendingTimerBitmaps[2 * v46];
      v50 = v54 - 1;
      v48 = 0LL;
    }
    while ( (unsigned __int64)++v51 <= v49 + 8 * (v50 >> 6) )
    {
      v52 = ~*v51;
      if ( *v51 )
        goto LABEL_77;
    }
LABEL_91:
    LODWORD(v53) = -1;
    goto LABEL_92;
  }
  return 0LL;
}
