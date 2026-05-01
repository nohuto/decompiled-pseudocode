/*
 * XREFs of sub_180011AC0 @ 0x180011AC0
 * Callers:
 *     sub_18000B190 @ 0x18000B190 (sub_18000B190.c)
 *     sub_18000FAA0 @ 0x18000FAA0 (sub_18000FAA0.c)
 *     sub_180027DE0 @ 0x180027DE0 (sub_180027DE0.c)
 *     sub_18003489C @ 0x18003489C (sub_18003489C.c)
 *     sub_18003504C @ 0x18003504C (sub_18003504C.c)
 * Callees:
 *     sub_1800115E0 @ 0x1800115E0 (sub_1800115E0.c)
 *     sub_1800117D0 @ 0x1800117D0 (sub_1800117D0.c)
 *     sub_180011CA0 @ 0x180011CA0 (sub_180011CA0.c)
 *     sub_180011DC4 @ 0x180011DC4 (sub_180011DC4.c)
 *     sub_180011EE0 @ 0x180011EE0 (sub_180011EE0.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180046098 @ 0x180046098 (sub_180046098.c)
 */

__int64 __fastcall sub_180011AC0(__int64 a1, __int64 a2, __int64 a3, __int128 *a4, char a5, __int64 *a6)
{
  PVOID Heap; // rax
  __int64 v11; // rsi
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // ebx
  __int64 v17; // rcx
  ULONG v18; // ebx
  int *v19; // rdi
  __int64 v20; // rax
  struct _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-1C8h] BYREF
  _BYTE v23[164]; // [rsp+30h] [rbp-1B8h] BYREF
  char v24; // [rsp+D4h] [rbp-114h] BYREF

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x228uLL);
  v11 = (__int64)Heap;
  if ( Heap )
  {
    sub_1800115E0(a2, a4, a3, (__int64)Heap);
    v12 = *(_QWORD *)(v11 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
    *(_QWORD *)(v11 + 64) = a1;
    sub_180011EE0(v23, v13, v14, v12);
    v16 = sub_180011DC4(v15 - 216, v11 + 252, v23);
    if ( v16 >= 0 )
    {
      sub_180011CA0(v11 + 392, v23);
      if ( (*(_BYTE *)(v17 + 40) & 0x10) != 0 && *(_QWORD *)(v17 + 80) < *(_QWORD *)(v17 + 64) )
      {
        v16 = -1073741811;
        goto LABEL_17;
      }
      RtlInitializeBitMap(&BitMapHeader, (PULONG)(v11 + 496), 0x2Fu);
      v18 = 0;
      v19 = (int *)&v24;
      do
      {
        if ( *v19 < 101 )
          RtlSetBit(&BitMapHeader, v18);
        ++v18;
        ++v19;
      }
      while ( v18 < 0x2F );
      if ( (v23[42] & 7) == 4 )
        *(_DWORD *)(v11 + 112) |= 0x80000u;
      if ( (a5 & 1) == 0 )
        *(_DWORD *)(v11 + 112) &= ~0x80000u;
      v16 = 0;
    }
    if ( v16 < 0 )
    {
LABEL_20:
      sub_1800274E0(v11);
      return (unsigned int)v16;
    }
    v20 = sub_180046098(0x20uLL);
    if ( v20 )
    {
      *(_QWORD *)(v20 + 8) = v11;
      *(_QWORD *)v20 = off_180093E00;
      v16 = 0;
      *(_DWORD *)(v20 + 24) = 1;
      *(_QWORD *)(v20 + 16) = -1LL;
      *(_QWORD *)(v11 + 88) = v20;
    }
    else
    {
      v16 = -1073741801;
    }
LABEL_17:
    if ( v16 >= 0 )
    {
      v16 = sub_1800117D0(v11);
      if ( v16 >= 0 )
      {
        *a6 = v11;
        return 0LL;
      }
    }
    goto LABEL_20;
  }
  return 3221225495LL;
}
