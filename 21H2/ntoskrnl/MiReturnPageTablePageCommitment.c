/*
 * XREFs of MiReturnPageTablePageCommitment @ 0x140705D70
 * Callers:
 *     MiDeleteVad @ 0x1402C08F0 (MiDeleteVad.c)
 *     MiDeletePartialVad @ 0x14030862C (MiDeletePartialVad.c)
 *     MiDeleteEmptyPageTableCommit @ 0x1403F4B14 (MiDeleteEmptyPageTableCommit.c)
 * Callees:
 *     MiCreateSystemWsles @ 0x14023F040 (MiCreateSystemWsles.c)
 *     HalSystemVectorDispatchEntry @ 0x140251020 (HalSystemVectorDispatchEntry.c)
 *     MiVadDeleted @ 0x14027C8A0 (MiVadDeleted.c)
 *     MiVadPureReserve @ 0x1402C0290 (MiVadPureReserve.c)
 *     MiVadPageTableChargeLevel @ 0x1402C0320 (MiVadPageTableChargeLevel.c)
 *     MiBitmapRangeZeroEx @ 0x140314410 (MiBitmapRangeZeroEx.c)
 *     RtlAreBitsClearEx @ 0x140353CE0 (RtlAreBitsClearEx.c)
 *     MiUpdateChargedWsles @ 0x14055C69C (MiUpdateChargedWsles.c)
 *     MiReturnFullProcessCommitment @ 0x140705C18 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiReturnPageTablePageCommitment(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        unsigned __int8 *a7)
{
  unsigned __int64 *v7; // r14
  __int64 v12; // rax
  unsigned __int64 v13; // r10
  __int64 result; // rax
  __int64 v15; // r12
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  int v18; // eax
  __int64 v19; // r9
  __int64 v20; // r10
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rbp
  __int64 v24; // rcx
  __int64 v25; // r11
  __int64 v26; // r15
  __int64 v27; // r9
  unsigned __int64 v28; // rdi
  __int64 v29; // rbp
  char v30; // r8
  __int64 v31; // rax
  unsigned __int64 v32; // rcx
  __int64 v33; // rcx
  unsigned __int64 v34; // rax
  unsigned __int64 i; // rax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  char v39; // r8
  __int64 v40; // rax
  unsigned __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 *v43; // rcx
  __int64 **v44; // rcx
  __int64 *v45; // rcx
  __int64 v46; // r8
  int v47; // edx
  __int64 v48; // rbx
  signed __int64 v49; // rsi
  __int64 v50; // rdi
  __int64 v51; // r14
  int v52; // eax
  int v53; // edx
  unsigned __int64 v54; // rbp
  __int64 v55; // r15
  __int64 v56; // r9
  __int64 v57; // r8
  __int64 v58; // [rsp+20h] [rbp-A8h]
  int v59; // [rsp+28h] [rbp-A0h]
  int v60; // [rsp+2Ch] [rbp-9Ch]
  unsigned __int64 j; // [rsp+30h] [rbp-98h]
  _QWORD *v62; // [rsp+38h] [rbp-90h]
  __int64 v63; // [rsp+40h] [rbp-88h]
  __int64 v64; // [rsp+48h] [rbp-80h]
  __int64 v65; // [rsp+50h] [rbp-78h]
  __int64 v66; // [rsp+58h] [rbp-70h] BYREF
  __int64 v67; // [rsp+60h] [rbp-68h]
  __int64 v68; // [rsp+68h] [rbp-60h]
  __int64 v69; // [rsp+70h] [rbp-58h]
  unsigned __int64 v70; // [rsp+78h] [rbp-50h]
  unsigned __int64 v71; // [rsp+80h] [rbp-48h]
  __int64 v72; // [rsp+88h] [rbp-40h]
  __int64 v73; // [rsp+90h] [rbp-38h]

  v7 = (unsigned __int64 *)a6;
  v12 = *(unsigned int *)(a6 + 52);
  LODWORD(v12) = v12 & 0x7FFFFFFF;
  v13 = v12 | ((unsigned __int64)*(unsigned __int8 *)(a6 + 34) << 31);
  result = 0x7FFFFFFFELL;
  if ( v13 >= 0x7FFFFFFFDLL && v13 != 0x7FFFFFFFELL )
    return result;
  v15 = 0LL;
  v16 = a4 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (a4 & 1) == 0 )
    v16 = 0LL;
  v70 = v16;
  v17 = a5 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (a5 & 1) == 0 )
    v17 = 0LL;
  v71 = v17;
  MiVadPageTableChargeLevel(a6);
  v18 = MiVadPureReserve(a6);
  v21 = -1LL;
  v24 = (unsigned int)(a2 >> 21);
  v60 = v18;
  v22 = a4 & 0xFFFFFFFFFFFFFFFEuLL;
  v23 = a1 >> 21;
  v58 = v24;
  LOBYTE(v24) = 0;
  v69 = *(_QWORD *)(a3 + 1680) + 48LL;
  if ( !v25 )
    v22 = a4;
  v26 = (unsigned int)v23;
  v67 = v19;
  v27 = v58;
  v28 = a5 & 0xFFFFFFFFFFFFFFFEuLL;
  LOBYTE(result) = *a7;
  v65 = 0LL;
  if ( !v20 )
    v28 = a5;
  v64 = 0LL;
  v29 = 0LL;
  v68 = 1023LL;
  v63 = 0LL;
  v59 = 0;
  j = v22;
  v62 = (_QWORD *)v28;
  do
  {
    v72 = v26;
    v73 = v27;
    if ( !(_BYTE)result )
    {
      ++v26;
LABEL_40:
      result = (__int64)a7;
      goto LABEL_41;
    }
    if ( !v22 )
      goto LABEL_40;
    v30 = 9 * v24;
    while ( 1 )
    {
      if ( (__int64)(((unsigned __int64)*(unsigned int *)(v22 + 28) >> 9) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 33) << 23)) >> v30 != v26 )
      {
LABEL_39:
        LOBYTE(v24) = v59;
        goto LABEL_40;
      }
      v31 = *(unsigned int *)(v22 + 52);
      LODWORD(v31) = v31 & 0x7FFFFFFF;
      v32 = v31 | ((unsigned __int64)*(unsigned __int8 *)(v22 + 34) << 31);
      if ( (v32 < 0x7FFFFFFFDLL || v32 == 0x7FFFFFFFELL)
        && ((unsigned int)MiVadDeleted(v22) == 1 || !(unsigned int)MiVadPureReserve(v33)) )
      {
        break;
      }
      if ( v22 == v70 )
      {
        v22 = *v7;
        v34 = (unsigned __int64)v7;
        j = *v7;
        if ( *v7 )
        {
          for ( i = *(_QWORD *)(v22 + 8); i; i = *(_QWORD *)(i + 8) )
          {
            v22 = i;
            j = i;
          }
          goto LABEL_38;
        }
        v22 = v7[2] & 0xFFFFFFFFFFFFFFFCuLL;
        j = v22;
        if ( v22 )
        {
          do
          {
            if ( *(_QWORD *)(v22 + 8) == v34 )
              break;
            v34 = v22;
            v22 = *(_QWORD *)(v22 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          }
          while ( v22 );
LABEL_37:
          j = v22;
        }
      }
      else
      {
        v36 = *(_QWORD *)v22;
        v37 = v22;
        if ( *(_QWORD *)v22 )
        {
          v38 = *(_QWORD *)(v36 + 8);
          v22 = *(_QWORD *)v22;
          for ( j = v36; v38; v38 = *(_QWORD *)(v38 + 8) )
          {
            v22 = v38;
            j = v38;
          }
          goto LABEL_38;
        }
        v22 = *(_QWORD *)(v22 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        j = v22;
        if ( v22 )
        {
          do
          {
            if ( *(_QWORD *)(v22 + 8) == v37 )
              break;
            v37 = v22;
            v22 = *(_QWORD *)(v22 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          }
          while ( v22 );
          goto LABEL_37;
        }
      }
LABEL_38:
      if ( !v22 )
        goto LABEL_39;
    }
    result = (__int64)a7;
    ++v26;
    LOBYTE(v24) = v59;
    *a7 = 0;
LABEL_41:
    if ( *(_BYTE *)(result + 1) )
    {
      if ( v28 )
      {
        v39 = 9 * v24;
        do
        {
          result = (unsigned __int64)*(unsigned int *)(v28 + 24) >> 9;
          if ( (__int64)(result | ((unsigned __int64)*(unsigned __int8 *)(v28 + 32) << 23)) >> v39 != v27 )
            break;
          v40 = *(unsigned int *)(v28 + 52);
          LODWORD(v40) = v40 & 0x7FFFFFFF;
          v41 = v40 | ((unsigned __int64)*(unsigned __int8 *)(v28 + 34) << 31);
          if ( (v41 < 0x7FFFFFFFDLL || v41 == 0x7FFFFFFFELL)
            && ((unsigned int)MiVadDeleted(v28) == 1 || !(unsigned int)MiVadPureReserve(v42)) )
          {
            result = (__int64)a7;
            a7[1] = 0;
            goto LABEL_70;
          }
          if ( v28 == v71 )
          {
            v28 = v7[1];
            result = (__int64)v7;
            v62 = (_QWORD *)v28;
            if ( v28 )
            {
              v43 = *(__int64 **)v28;
              if ( *(_QWORD *)v28 )
              {
                do
                {
                  result = *v43;
                  v28 = (unsigned __int64)v43;
                  v62 = v43;
                  v43 = (__int64 *)result;
                }
                while ( result );
              }
              continue;
            }
            v28 = v7[2] & 0xFFFFFFFFFFFFFFFCuLL;
            v62 = (_QWORD *)v28;
            if ( v28 )
            {
              do
              {
                if ( *(_QWORD *)v28 == result )
                  break;
                result = v28;
                v28 = *(_QWORD *)(v28 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              }
              while ( v28 );
LABEL_66:
              v62 = (_QWORD *)v28;
            }
          }
          else
          {
            v44 = *(__int64 ***)(v28 + 8);
            result = v28;
            if ( v44 )
            {
              v28 = *(_QWORD *)(v28 + 8);
              v62 = v44;
              v45 = *v44;
              if ( v45 )
              {
                do
                {
                  result = *v45;
                  v28 = (unsigned __int64)v45;
                  v62 = v45;
                  v45 = (__int64 *)result;
                }
                while ( result );
              }
              continue;
            }
            v28 = *(_QWORD *)(v28 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            v62 = (_QWORD *)v28;
            if ( v28 )
            {
              do
              {
                if ( *(_QWORD *)v28 == result )
                  break;
                result = v28;
                v28 = *(_QWORD *)(v28 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              }
              while ( v28 );
              goto LABEL_66;
            }
          }
        }
        while ( v28 );
      }
    }
    else
    {
LABEL_70:
      v58 = --v27;
    }
    if ( v26 > v27 )
      break;
    v46 = v67;
    v47 = v60;
    if ( v29 >= v67 && !v60 )
      v65 += v27 - v26 + 1;
    v48 = v64;
    v49 = v26;
    v50 = v65;
    v51 = v69 - 16 * v29;
    v66 = v26;
    do
    {
      if ( v47 )
      {
        if ( v49 == v26 )
        {
          v52 = MiBitmapRangeZeroEx(v51 + 520, v49, &v66);
          v26 = v66;
          v27 = v58;
          if ( v52 == 1 )
          {
            v49 = v66 - 1;
            goto LABEL_100;
          }
          v46 = v67;
        }
        if ( !_bittest64(*(const signed __int64 **)(v51 + 528), v49) )
          goto LABEL_100;
        if ( v29 >= v46 )
          ++v50;
      }
      _bittestandreset64(*(signed __int64 **)(v51 + 528), v49);
      if ( !(unsigned int)MiCreateSystemWsles() && (v49 == v27 || (v49 & 7) == 7 || v53) )
      {
        v54 = v49 & 0xFFFFFFFFFFFFFFF8uLL;
        if ( !RtlAreBitsClearEx(v51 + 520, v49 & 0xFFFFFFFFFFFFFFF8uLL, 8uLL)
          || (*(_DWORD *)(a3 + 2172) & 1) == 0 && v54 == (v68 & 0xFFFFFFFFFFFFFFF8uLL) )
        {
          goto LABEL_93;
        }
        if ( v63 )
        {
          ++v48;
LABEL_93:
          v27 = v58;
          v29 = v63;
          goto LABEL_100;
        }
        if ( v21 == -1LL )
        {
          v27 = v58;
          v21 = v49 & 0xFFFFFFFFFFFFFFF8uLL;
          v29 = 0LL;
          v15 = 1LL;
        }
        else
        {
          if ( v21 + 8 * v15 == v54 )
          {
            v27 = v58;
            ++v15;
          }
          else
          {
            HalSystemVectorDispatchEntry();
            v27 = v58;
            v48 += v15;
            v21 = v49 & 0xFFFFFFFFFFFFFFF8uLL;
            v15 = 1LL;
          }
          v29 = 0LL;
        }
      }
LABEL_100:
      v47 = v60;
      ++v49;
      v46 = v67;
    }
    while ( v49 <= v27 );
    v65 = v50;
    v28 = (unsigned __int64)v62;
    v64 = v48;
    v22 = j;
    if ( v15 )
    {
      HalSystemVectorDispatchEntry();
      v64 += v15;
      v21 = -1LL;
      v15 = 0LL;
    }
    ++v29;
    v55 = v72;
    LODWORD(v24) = v59 + 1;
    v56 = v73;
    *a7 >>= 1;
    a7[1] >>= 1;
    v68 >>= 9;
    result = *a7;
    v7 = (unsigned __int64 *)a6;
    v27 = v56 >> 9;
    v26 = v55 >> 9;
    v58 = v27;
    v59 = v24;
    v63 = v29;
  }
  while ( (int)v24 < 3 );
  v57 = v64;
  if ( v64 )
    result = (__int64)MiUpdateChargedWsles(a3 + 1664);
  if ( v65 )
  {
    result = v69;
    *(_QWORD *)(v69 + 240) -= v65;
  }
  if ( v57 + v65 )
    return MiReturnFullProcessCommitment(a3, v57 + v65);
  return result;
}
