/*
 * XREFs of sub_18000B2DC @ 0x18000B2DC
 * Callers:
 *     sub_180002D50 @ 0x180002D50 (sub_180002D50.c)
 *     sub_180026288 @ 0x180026288 (sub_180026288.c)
 *     sub_180028478 @ 0x180028478 (sub_180028478.c)
 *     _assert @ 0x180028750 (_assert.c)
 *     sub_18003D548 @ 0x18003D548 (sub_18003D548.c)
 * Callees:
 *     sub_1800036B0 @ 0x1800036B0 (sub_1800036B0.c)
 *     sub_1800090D8 @ 0x1800090D8 (sub_1800090D8.c)
 *     sub_180009174 @ 0x180009174 (sub_180009174.c)
 *     sub_180009FE0 @ 0x180009FE0 (sub_180009FE0.c)
 *     sub_18000B114 @ 0x18000B114 (sub_18000B114.c)
 *     sub_18000B190 @ 0x18000B190 (sub_18000B190.c)
 *     sub_18000E1BC @ 0x18000E1BC (sub_18000E1BC.c)
 *     sub_18000E244 @ 0x18000E244 (sub_18000E244.c)
 *     sub_180017F60 @ 0x180017F60 (sub_180017F60.c)
 *     sub_18001B300 @ 0x18001B300 (sub_18001B300.c)
 *     sub_1800260F8 @ 0x1800260F8 (sub_1800260F8.c)
 *     sub_18002619C @ 0x18002619C (sub_18002619C.c)
 *     sub_180026218 @ 0x180026218 (sub_180026218.c)
 *     sub_1800286D8 @ 0x1800286D8 (sub_1800286D8.c)
 *     sub_180034568 @ 0x180034568 (sub_180034568.c)
 *     sub_180035C14 @ 0x180035C14 (sub_180035C14.c)
 *     sub_180035C5C @ 0x180035C5C (sub_180035C5C.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18007E358 @ 0x18007E358 (sub_18007E358.c)
 */

__int64 __fastcall sub_18000B2DC(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 **a5)
{
  int v9; // eax
  __int64 v10; // r8
  PVOID v11; // rsi
  int v12; // edi
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rbx
  SIZE_T v16; // r8
  char *Heap; // rbx
  __int64 v18; // rsi
  int v19; // eax
  __int64 *v20; // rdi
  _QWORD *v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rcx
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rdx
  _BYTE v29[8]; // [rsp+50h] [rbp-51h] BYREF
  PVOID P; // [rsp+58h] [rbp-49h] BYREF
  int v31[2]; // [rsp+60h] [rbp-41h] BYREF
  __int64 v32; // [rsp+68h] [rbp-39h] BYREF
  __int64 v33; // [rsp+70h] [rbp-31h] BYREF
  __int64 v34; // [rsp+78h] [rbp-29h] BYREF
  __int64 v35; // [rsp+80h] [rbp-21h] BYREF
  __int64 **v36; // [rsp+88h] [rbp-19h]
  __int64 v37; // [rsp+90h] [rbp-11h] BYREF
  __int64 v38; // [rsp+98h] [rbp-9h]

  P = 0LL;
  v36 = a5;
  if ( a1 == a2 )
    return (unsigned int)-1073741776;
  v9 = sub_180009FE0(a1, a2, (volatile signed __int64 **)&P);
  v11 = P;
  v12 = v9;
  if ( v9 >= 0 )
  {
    v37 = *(_QWORD *)(a1 - 32);
    v38 = *(_QWORD *)(a2 - 32);
    v13 = sub_18000B114((__int64)P, (__int64)&v37, v10);
    *(_QWORD *)v31 = v13;
    if ( v13 )
    {
      if ( *(_BYTE *)a3 > 3u )
      {
        v15 = 0LL;
      }
      else
      {
        LOBYTE(v14) = *(_BYTE *)a3;
        v15 = sub_180035C14(v13, v14);
      }
    }
    else
    {
      v15 = 0LL;
      v12 = sub_180009174((__int64)v11, &v37, v31);
      if ( v12 < 0 )
        goto LABEL_32;
    }
    if ( v15 )
    {
      if ( (*(_BYTE *)(v15 + 36) & 1) == 0 )
      {
        v12 = -1073741270;
        goto LABEL_32;
      }
      sub_18001B300(v11);
    }
    if ( *(_BYTE *)a3 )
    {
      switch ( *(_BYTE *)a3 )
      {
        case 1:
          v16 = 80LL;
          break;
        case 2:
          v16 = 48LL;
          break;
        case 3:
          v16 = 88LL;
          break;
        case 4:
          v16 = 104LL;
          break;
        default:
          v12 = -1073741583;
          goto LABEL_32;
      }
    }
    else
    {
      v16 = 96LL;
    }
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v16);
    if ( Heap )
    {
      v18 = *(_QWORD *)v31;
      Heap[40] = *(_BYTE *)a3;
      if ( *(_BYTE *)a3 )
      {
        if ( *(_BYTE *)a3 != 1 )
        {
          switch ( *(_BYTE *)a3 )
          {
            case 2:
              *(_OWORD *)Heap = 0LL;
              *((_OWORD *)Heap + 1) = 0LL;
              *((_OWORD *)Heap + 2) = 0LL;
              Heap[40] = 2;
              *((_QWORD *)Heap + 1) = v18;
              break;
            case 3:
              sub_1800260F8(
                v18,
                a1,
                *(_QWORD *)(a3 + 408),
                a2,
                *(_QWORD *)(a3 + 416),
                *(_DWORD *)(a3 + 424),
                *(_DWORD *)(a3 + 428),
                Heap);
              break;
            case 4:
              sub_1800036B0(v18, a1, *(_QWORD *)(a3 + 408), a2, Heap);
              break;
          }
LABEL_19:
          v12 = sub_18000B190(a3, a2, Heap[40] == 4, (__int64)Heap);
          if ( v12 >= 0 )
          {
            v20 = (__int64 *)P;
            sub_18000E1BC(P);
            v21 = Heap + 16;
            if ( (unsigned __int8)Heap[40] > 3u )
              v22 = v18 + 80;
            else
              v22 = v18 + 64;
            v23 = *(_QWORD *)v22;
            if ( *(_QWORD *)(*(_QWORD *)v22 + 8LL) != v22 )
              __fastfail(3u);
            *v21 = v23;
            *((_QWORD *)Heap + 3) = v22;
            *(_QWORD *)(v23 + 8) = v21;
            *(_QWORD *)v22 = v21;
            sub_18000E244(v20);
            if ( *(_QWORD *)Heap )
              v27 = *(_QWORD *)(*(_QWORD *)Heap + 40LL);
            else
              v27 = -1LL;
            if ( (unsigned int)dword_1800B3218 > 4
              && (byte_1800B3228 & 8) != 0
              && (qword_1800B3230 & 8) == qword_1800B3230 )
            {
              v29[0] = *(_BYTE *)a3;
              v32 = v38;
              v33 = v37;
              v34 = *v20;
              v35 = v27;
              sub_18007E358(
                v24,
                (unsigned int)&unk_1800A1456,
                v25,
                v26,
                (__int64)&v35,
                (__int64)&v34,
                (__int64)&v33,
                (__int64)&v32,
                (__int64)v29);
            }
            if ( a4 )
              *a4 = Heap;
            Heap = 0LL;
            v11 = 0LL;
            *v36 = v20;
            v12 = 0;
            goto LABEL_30;
          }
LABEL_58:
          v11 = P;
LABEL_30:
          if ( Heap )
            sub_180035C5C(Heap);
          goto LABEL_32;
        }
        sub_18002619C(v18, a1, a2, Heap);
        v19 = sub_180034568(Heap);
      }
      else
      {
        sub_180026218(v18, a1, a2, Heap);
        v19 = sub_1800090D8((__int64)Heap, *(_DWORD *)(a3 + 424), *(_DWORD *)(a3 + 428));
      }
      v12 = v19;
      if ( v19 < 0 )
        goto LABEL_58;
      goto LABEL_19;
    }
    v11 = P;
    v12 = -1073741801;
  }
LABEL_32:
  if ( v11 )
  {
    sub_180017F60(v11);
    sub_1800286D8(v11);
  }
  return (unsigned int)v12;
}
