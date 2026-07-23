/*
 * XREFs of MiFindEmptyAddressRangeDownTree @ 0x1405EB218
 * Callers:
 *     MiFindEmptyAddressRangeDown @ 0x1405EB104 (MiFindEmptyAddressRangeDown.c)
 *     MiFinishCreateSection @ 0x14071D000 (MiFinishCreateSection.c)
 * Callees:
 *     MiHonorRangeStraddleRequirement @ 0x14022A21C (MiHonorRangeStraddleRequirement.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall MiFindEmptyAddressRangeDownTree(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 *a7)
{
  unsigned __int64 v11; // rbx
  __int64 v12; // rbp
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // r9
  __int64 v15; // rdi
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // r10
  __int64 v21; // rax
  unsigned __int64 v22; // rbx
  _DWORD *v23; // rcx
  _DWORD *v24; // r11
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  _DWORD *v28; // r13
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdi
  __int64 v32; // rsi
  unsigned __int64 v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // rax
  unsigned __int64 v36; // r11
  unsigned __int64 v37; // rcx
  __int64 v38; // r11
  __int64 v40; // rax
  __int64 v41; // rax
  _DWORD v42[30]; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int64 v43; // [rsp+A8h] [rbp+10h]
  _DWORD *v44; // [rsp+B8h] [rbp+20h]

  memset(v42, 0, 0x40uLL);
  v11 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v12 = a4 >> 12;
  v13 = v11 >> 12;
  if ( a5 >= a6 || a6 - a5 < v11 )
    goto LABEL_37;
  v14 = a3;
  v15 = -(__int64)a3;
  v16 = a6 >> 12;
  v17 = v15 & (a6 - v11);
  v18 = v14 >> 12;
  v19 = v17 >> 12;
  v20 = 0LL;
  v43 = v18;
  if ( v12 )
  {
    v40 = MiHonorRangeStraddleRequirement((v15 & (a6 - v11)) >> 12, v11 >> 12, v12, 1);
    v18 = v43;
    v16 = a6 >> 12;
    v19 = ~(v43 - 1) & v40;
    v17 = v19 << 12;
  }
  if ( v17 < a5 )
  {
LABEL_37:
    LODWORD(v20) = -1073741801;
  }
  else
  {
    v21 = *a1;
    if ( *a1 )
    {
      v22 = v20;
      do
      {
        v23 = (_DWORD *)v21;
        v44 = (_DWORD *)v21;
        v21 = *(_QWORD *)(v21 + 8);
      }
      while ( v21 );
      v24 = v23;
      v25 = a5 >> 12;
      while ( 1 )
      {
        if ( v23 )
        {
          v24 = v42;
          v22 = (unsigned __int64)v23;
          LOBYTE(v42[8]) = a6 >> 44;
          v44 = (_DWORD *)v20;
          v42[6] = v16;
        }
        else
        {
          v26 = *(_QWORD *)v22;
          v27 = v22;
          if ( *(_QWORD *)v22 )
          {
            while ( 1 )
            {
              v22 = v26;
              if ( *(_QWORD *)(v26 + 8) == v20 )
                break;
              v26 = *(_QWORD *)(v26 + 8);
            }
          }
          else
          {
            while ( 1 )
            {
              v22 = *(_QWORD *)(v22 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              if ( !v22 || *(_QWORD *)(v22 + 8) == v27 )
                break;
              v27 = v22;
            }
          }
        }
        v28 = v42;
        if ( v22 )
        {
          v29 = v18 - 1;
          v30 = a5 >> 12;
          if ( (*(unsigned int *)(v22 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 33) << 32)) + 1 >= v25 )
          {
            v30 = (*(unsigned int *)(v22 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 33) << 32)) + 1;
            v28 = (_DWORD *)v22;
          }
          v31 = v30 + v18 - 1;
        }
        else
        {
          v42[7] = v20;
          v29 = v18 - 1;
          BYTE1(v42[8]) = v20;
          v31 = v25 + v18 - 1;
        }
        v32 = ~v29;
        v33 = v32 & v31;
        if ( v12 )
        {
          v41 = MiHonorRangeStraddleRequirement(v33, v13, v12, 0);
          v18 = v43;
          v33 = v41;
        }
        v16 = a6 >> 12;
        if ( v33 <= v19 )
        {
          v34 = *((unsigned __int8 *)v24 + 32);
          v35 = (unsigned int)v24[6];
          v36 = a6 >> 12;
          v37 = v35 | (v34 << 32);
          if ( v37 <= a6 >> 12 )
            v36 = v37;
          if ( v36 > v33 && v13 <= v36 - v33 )
            break;
        }
        if ( v28 == v42 )
          goto LABEL_37;
        v23 = v44;
        v24 = v28;
      }
      v38 = v32 & (v36 - v13);
      if ( v12 )
        v38 = v32 & MiHonorRangeStraddleRequirement(v38, v13, v12, 1);
      *a7 = v38 << 12;
    }
    else
    {
      *a7 = v17;
    }
  }
  return (unsigned int)v20;
}
