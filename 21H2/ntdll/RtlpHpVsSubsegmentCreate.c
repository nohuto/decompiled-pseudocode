/*
 * XREFs of RtlpHpVsSubsegmentCreate @ 0x180072298
 * Callers:
 *     RtlpHpVsContextAllocateInternal @ 0x180028CD0 (RtlpHpVsContextAllocateInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A1120 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentCreate(__int64 a1, int a2, unsigned int a3)
{
  __int64 v3; // rbx
  unsigned int v6; // ebp
  unsigned int v7; // ecx
  __int64 v8; // rsi
  __int64 v9; // r14
  unsigned int v10; // ebp
  __int16 v11; // cx
  unsigned __int64 v12; // r8
  __int16 v13; // cx
  __int16 v14; // ax
  char v16; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v17; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v18; // [rsp+78h] [rbp+20h]

  v3 = (unsigned int)(2 * a2 + 72);
  v6 = (a2 + 4167) & 0xFFFFF000;
  if ( ((2 * a2 + 71) & (unsigned int)v3) != 0 )
  {
    _BitScanReverse(&v7, v3);
    v18 = v7;
    v3 = (unsigned int)(1 << (v7 + 1));
  }
  if ( (unsigned int)v3 <= 0x10000 )
    v3 = 0x10000LL;
  if ( (unsigned int)v3 >= 0x40000 )
    v3 = 0x40000LL;
  v8 = 0LL;
  while ( 1 )
  {
    v9 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, char *, unsigned int *))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 136)))(
           a1 ^ *(_QWORD *)(a1 + 128),
           (unsigned int)v3,
           a3,
           &v16,
           &v17);
    if ( v9 )
      break;
    if ( v17 < v6 )
      goto LABEL_20;
    v3 = v17;
  }
  v10 = 4096;
  if ( (v16 & 1) != 0 )
    v10 = v3;
  if ( ((int (__fastcall *)(__int64, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 152)))(
         a1 ^ *(_QWORD *)(a1 + 128),
         v9,
         v10) >= 0 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), (unsigned __int64)v10 >> 12);
    *(_QWORD *)v9 = 0LL;
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_DWORD *)(v9 + 34) = 0;
    *(_WORD *)(v9 + 38) = 0;
    *(_QWORD *)(v9 + 24) = 0LL;
    *(_QWORD *)(v9 + 16) = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)((unsigned __int64)v10 >> 12));
    v11 = 0;
    v12 = (unsigned __int64)(v3 - 48) >> 4;
    *(_WORD *)(v9 + 32) = v12;
    if ( v10 == (_DWORD)v3 )
      v11 = 0x8000;
    v13 = (v12 ^ v11 ^ 0x2BED) & 0x7FFF;
    v14 = 0;
    if ( v10 == (_DWORD)v3 )
      v14 = 0x8000;
    *(_WORD *)(v9 + 34) = v14 ^ v13;
    *(_OWORD *)(v9 + 48) = 0LL;
    *(_WORD *)(v9 + 52) = 0;
    v8 = v9;
    *(_WORD *)(v9 + 50) = v12;
    *(_QWORD *)(v9 + 48) ^= (v9 + 48) ^ RtlpHpHeapGlobals;
    return v8;
  }
LABEL_20:
  if ( v9 )
    ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 144)))(
      a1 ^ *(_QWORD *)(a1 + 128),
      v9,
      (unsigned int)v3,
      a3);
  return v8;
}
