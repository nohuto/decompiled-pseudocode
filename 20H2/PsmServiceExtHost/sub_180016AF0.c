/*
 * XREFs of sub_180016AF0 @ 0x180016AF0
 * Callers:
 *     StartAddress @ 0x18003E530 (StartAddress.c)
 * Callees:
 *     sub_1800100D0 @ 0x1800100D0 (sub_1800100D0.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_1800176F0 @ 0x1800176F0 (sub_1800176F0.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 *     sub_18006A72C @ 0x18006A72C (sub_18006A72C.c)
 *     sub_180074A1C @ 0x180074A1C (sub_180074A1C.c)
 *     sub_180074F4C @ 0x180074F4C (sub_180074F4C.c)
 *     sub_180074FF4 @ 0x180074FF4 (sub_180074FF4.c)
 *     sub_180075784 @ 0x180075784 (sub_180075784.c)
 *     sub_1800759A8 @ 0x1800759A8 (sub_1800759A8.c)
 *     sub_1800760A8 @ 0x1800760A8 (sub_1800760A8.c)
 */

__int64 __fastcall sub_180016AF0(__int64 *a1, ULONGLONG *a2, unsigned int *a3, unsigned int *a4)
{
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rcx
  unsigned int v10; // r12d
  _DWORD *v11; // r9
  unsigned int v12; // r8d
  ULONGLONG *v13; // rcx
  ULONGLONG Ptr; // r11
  int v15; // r15d
  unsigned __int64 v16; // xmm3_8
  _DWORD *v17; // rdx
  unsigned int *v18; // r10
  _QWORD *v19; // rdx
  unsigned int v20; // edi
  unsigned int v21; // eax
  unsigned int v22; // ebx
  int v23; // r9d
  unsigned int *v24; // rax
  unsigned int v26; // eax
  unsigned int v27; // ecx
  int v28; // r9d
  ULONGLONG v29; // r10
  __int64 v30; // r11
  unsigned int v31; // eax
  int v32; // r8d
  int v33; // r9d
  __int64 v34; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v35; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int *v36; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v37; // [rsp+58h] [rbp-A8h] BYREF
  ULONGLONG v38; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+68h] [rbp-98h] BYREF
  __m128i v40; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+80h] [rbp-80h]
  __m128i v42; // [rsp+90h] [rbp-70h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+A0h] [rbp-60h]
  __int128 v44; // [rsp+B0h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v45[15]; // [rsp+C0h] [rbp-40h] BYREF
  __m128i v46; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+1C0h] [rbp+C0h]
  __m128i v48; // [rsp+1D0h] [rbp+D0h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+1E0h] [rbp+E0h]
  __int128 v50; // [rsp+1F0h] [rbp+F0h]

  v36 = a4;
  ResetEvent((HANDLE)a1[5]);
  ResetEvent((HANDLE)a1[6]);
  v7 = *a1;
  v8 = *(_QWORD *)(*a1 + 24);
  memset(a2, 0, 0x80uLL);
  memset(v45, 0, sizeof(v45));
  v9 = *(_QWORD *)(v7 + 32);
  *(ULONGLONG *)((char *)&v45[0].Ptr + 4) = -1LL;
  NtManagePartition(v9, 0LL, 0LL, v45, 240);
  v10 = 0;
  v42.m128i_i64[0] = 0LL;
  v40.m128i_i64[1] = qword_1800B41B0 * v45[2].Ptr - qword_1800B41B0 * v45[14].Ptr;
  v41.Ptr = qword_1800B41B0 * *(_QWORD *)&v45[1].Size - qword_1800B41B0 * v45[14].Ptr;
  *(_QWORD *)&v41.Size = v40.m128i_i64[1] - v41.Ptr;
  v42.m128i_i64[1] = qword_1800B41B0 * v45[3].Ptr - qword_1800B41B0 * v45[14].Ptr;
  v43.Ptr = qword_1800B41B0
          * (v45[4].Ptr
           + *(_QWORD *)&v45[4].Size
           + v45[8].Ptr
           + *(_QWORD *)&v45[7].Size
           + v45[7].Ptr
           + *(_QWORD *)&v45[6].Size
           + *(_QWORD *)&v45[5].Size
           + v45[6].Ptr);
  *(_QWORD *)&v43.Size = v42.m128i_i64[1] - v43.Ptr;
  v40.m128i_i64[0] = qword_1800B41B0 * *(_QWORD *)&v45[13].Size - qword_1800B41B0 * v45[14].Ptr;
  v44 = *(_QWORD *)&v45[9].Size
      + v45[13].Ptr
      + *(_QWORD *)&v45[12].Size
      + v45[12].Ptr
      + *(_QWORD *)&v45[11].Size
      + v45[11].Ptr
      + *(_QWORD *)&v45[10].Size
      + v45[10].Ptr;
  v34 = v8 + 456;
  sub_1800176F0(
    v8 + 400,
    v8 + 456,
    (unsigned int)&v40,
    qword_1800B41B0 * v45[13].Size - qword_1800B41B0 * LODWORD(v45[14].Ptr),
    (__int64)a2);
  v46 = v40;
  v11 = (_DWORD *)(v8 + 472);
  v12 = 4;
  v13 = a2 + 6;
  Ptr = v41.Ptr;
  v15 = 0;
  v16 = _mm_srli_si128(v40, 8).m128i_u64[0];
  v47 = v41;
  v17 = (_DWORD *)(v8 + 472);
  v48 = v42;
  v49 = v43;
  v35 = _mm_srli_si128(v42, 8).m128i_u64[0];
  *(_QWORD *)&v45[2].Size = v35;
  v50 = v44;
  *(_WORD *)(v7 + 188) = 0;
  v45[0].Ptr = 0LL;
  memset(&v45[1], 0, 24);
  v45[3] = 0uLL;
  v37 = v16;
  *(_QWORD *)&v45[0].Size = v16;
  do
  {
    if ( Ptr >= *v13 )
    {
      v26 = v12;
      if ( v10 > v12 )
        v26 = v10;
      v10 = v26;
      if ( *v17 )
        break;
    }
    --v13;
    --v17;
    --v12;
  }
  while ( v12 );
  v18 = *(unsigned int **)&v43.Size;
  v19 = a2 + 11;
  v20 = 0;
  v21 = 4;
  do
  {
    if ( *(_QWORD *)&v43.Size >= *v19 )
    {
      v27 = v21;
      if ( v20 > v21 )
        v27 = v20;
      v20 = v27;
      if ( *v11 )
        break;
    }
    --v19;
    --v11;
    --v21;
  }
  while ( v21 );
  v22 = 3;
  if ( v12 || v21 )
  {
    if ( v12 < v21 )
    {
      v23 = 3;
      v15 = *(_DWORD *)(v34 + 4LL * v21 + 20);
      *(_QWORD *)&v45[3].Size = a2[v21 + 7];
      v45[3].Ptr = v35 - *(_QWORD *)&v45[3].Size;
    }
    else
    {
      v23 = 1;
      v15 = *(_DWORD *)(v34 + 4LL * v12);
      v45[1].Ptr = a2[v12 + 2];
      *(_QWORD *)&v45[1].Size = v37 - v45[1].Ptr;
    }
    v40 = (__m128i)v45[0];
    v41 = v45[1];
    v42 = (__m128i)v45[2];
    v43 = v45[3];
    v44 = 0LL;
  }
  else
  {
    v23 = v34;
  }
  v24 = v36;
  *a3 = v10;
  *v24 = v20;
  if ( !v15 )
  {
    *((_DWORD *)a1 + 23) &= ~2u;
    if ( (unsigned int)dword_1800B31E0 > 5 && (byte_1800B31F0 & 1) != 0 && (qword_1800B31F8 & 1) == qword_1800B31F8 )
    {
      v36 = v18;
      v35 = Ptr;
      sub_18006A72C(
        (unsigned int)&dword_1800B31E0,
        (unsigned int)&unk_18009DF5F,
        v12,
        v23,
        (__int64)&v35,
        (__int64)&v36);
    }
    return v22;
  }
  if ( v15 != 4 && (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 9LL) )
  {
    v36 = *(unsigned int **)&v43.Size;
    v35 = v41.Ptr;
    v45[7].Ptr = (ULONGLONG)&v36;
    v45[6].Ptr = (ULONGLONG)&v35;
    v45[5].Ptr = (ULONGLONG)&v38;
    v45[4].Ptr = (ULONGLONG)&v39;
    v45[3].Ptr = (ULONGLONG)&v37;
    v45[2].Ptr = (ULONGLONG)&v34;
    LODWORD(v37) = v28;
    v38 = v29;
    v39 = v30;
    LODWORD(v34) = v15;
    *(_QWORD *)&v45[7].Size = 8LL;
    *(_QWORD *)&v45[6].Size = 8LL;
    *(_QWORD *)&v45[5].Size = 8LL;
    *(_QWORD *)&v45[4].Size = 8LL;
    *(_QWORD *)&v45[3].Size = 4LL;
    *(_QWORD *)&v45[2].Size = 4LL;
    sub_18002E278((int)&dword_1800B31E0, (int)&dword_18009DE86, 0, 0, 8u, v45);
  }
  ResetEvent((HANDLE)a1[4]);
  switch ( v15 )
  {
    case 2:
      v31 = sub_1800759A8(a1, &v46, &v40, 0LL);
      goto LABEL_45;
    case 3:
      v22 = sub_1800759A8(a1, &v46, &v40, 1LL);
      if ( v22 != 2 )
        break;
      *(_QWORD *)&v43.Size = a2[14];
      v31 = sub_180075784(a1, &v46, &v40);
LABEL_45:
      v22 = v31;
      break;
    case 4:
      sub_180074F4C(a1);
      break;
    case 5:
      v31 = sub_180074FF4(a1, &v46, &v40);
      goto LABEL_45;
    case 7:
      v22 = sub_1800760A8(a1, &v46, &v40, a2);
      if ( v22 == 2 )
        goto LABEL_47;
      break;
    default:
      v22 = 2;
      break;
  }
  *((_DWORD *)a1 + 23) &= ~2u;
LABEL_47:
  if ( dword_1800B31E0 )
  {
    if ( v15 != 4 )
    {
      sub_1800100D0(*a1, v46.m128i_i64);
      if ( (unsigned int)dword_1800B31E0 > 4 )
      {
        if ( sub_180010470((__int64)&dword_1800B31E0, 9LL) )
        {
          v39 = *(_QWORD *)&v49.Size;
          v38 = v47.Ptr;
          LODWORD(v34) = v22;
          sub_180074A1C(
            (unsigned int)&dword_1800B31E0,
            (unsigned int)&unk_18009E5CD,
            v32,
            v33,
            (__int64)&v34,
            (__int64)&v38,
            (__int64)&v39);
        }
      }
    }
  }
  return v22;
}
