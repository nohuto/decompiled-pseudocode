/*
 * XREFs of MiMapContiguousMemory @ 0x140295824
 * Callers:
 *     MmMapIoSpaceEx @ 0x140294E50 (MmMapIoSpaceEx.c)
 *     MiAllocateContiguousMemory @ 0x140294F3C (MiAllocateContiguousMemory.c)
 * Callees:
 *     MiReservePtes @ 0x1402265B0 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x140226EF0 (MiFillSystemPtes.c)
 *     MiReleasePtes @ 0x140245800 (MiReleasePtes.c)
 *     MiMappingHasIoReferences @ 0x140295E94 (MiMappingHasIoReferences.c)
 *     MiMapContiguousMemoryLarge @ 0x1403B8854 (MiMapContiguousMemoryLarge.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     MiInsertPteTracker @ 0x14055EDE0 (MiInsertPteTracker.c)
 */

__int64 __fastcall MiMapContiguousMemory(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned __int64 a4)
{
  char v4; // r12
  unsigned int v5; // esi
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r13
  ULONG_PTR v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // r15d
  int v12; // r14d
  ULONG_PTR v13; // rdi
  char v14; // al
  __int64 v15; // rdi
  unsigned int v16; // r15d
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rax
  int v21; // ebx
  int v22; // [rsp+30h] [rbp-49h] BYREF
  int v23; // [rsp+34h] [rbp-45h]
  ULONG_PTR v24; // [rsp+38h] [rbp-41h]
  __int64 v25; // [rsp+40h] [rbp-39h]
  unsigned __int64 v26; // [rsp+48h] [rbp-31h]
  _QWORD v27[5]; // [rsp+50h] [rbp-29h] BYREF
  int v28; // [rsp+78h] [rbp-1h]
  int v29; // [rsp+7Ch] [rbp+3h]
  unsigned __int64 v30; // [rsp+80h] [rbp+7h]

  v26 = a2;
  v4 = a4;
  v5 = a3;
  if ( a3 == -1 )
    return 0LL;
  if ( a3 == 24 )
    return 0LL;
  if ( (a3 & 5) == 5 )
    return 0LL;
  if ( (a3 & 0xFFFFFFF8) == 0x10 )
    return 0LL;
  v7 = a2 + a1;
  if ( v7 <= a1 )
  {
    if ( v7 )
      return 0LL;
  }
  v25 = a1 & 0xFFF;
  v8 = (v25 + a2 + 4095) >> 12;
  v9 = (a1 >> 12) & 0xFFFFFFFFFLL;
  v10 = 0x1000000000LL;
  if ( a1 >> 12 < 0x1000000000LL )
    v9 = a1 >> 12;
  v24 = v9;
  if ( (v5 & 2) != 0 && (MiFlags & 0x10000) != 0 )
    v5 &= ~2u;
  v22 = 0;
  if ( (a1 & 0x1FFFFF) != 0
    || a2 < 0x200000
    || (v12 = a4 & 1, (a4 & 1) != 0)
    || (v15 = MiMapContiguousMemoryLarge(v9, (__int64)&v22)) == 0 )
  {
    v23 = 0;
    v11 = v8;
    v12 = v4 & 1;
    if ( (v4 & 1) != 0 )
    {
      v11 = v8 + 1;
      if ( (_DWORD)v8 == -1 )
        return 0LL;
      v23 = 1;
    }
    v13 = MiReservePtes((__int64)&qword_140C4EF40, v11, v10, a4);
    if ( v13 )
    {
      v14 = v23 | 2;
      if ( (v4 & 2) == 0 )
        v14 = v23;
      if ( (int)MiFillSystemPtes(v13, v8, v24, v5, v14, &v22) >= 0 )
      {
        v15 = v25 + ((__int64)(v13 << 25) >> 16);
        goto LABEL_16;
      }
      MiReleasePtes((__int64)&qword_140C4EF40, (_QWORD *)v13, v11);
    }
    return 0LL;
  }
LABEL_16:
  v16 = v22 & 1;
  if ( (v22 & 1) != 0 )
    MiMappingHasIoReferences(v15);
  if ( (dword_140CFB17C & 1) != 0 )
  {
    v27[0] = 0LL;
    v27[1] = 0LL;
    v28 = 0;
    v18 = v16 | 2;
    v30 = a1 >> 12;
    v19 = 1LL;
    v27[3] = v15;
    v20 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v21 = a1 & 0xFFF;
    v27[4] = v20;
    v27[2] = v26;
    if ( !v12 )
      v18 = v16;
    v29 = v21;
    if ( v5 >> 3 == 1 )
    {
      v19 = 0LL;
    }
    else if ( v5 >> 3 == 3 && (v5 & 7) != 0 )
    {
      v19 = 2LL;
    }
    MiInsertPteTracker(v27, 1LL, v18, v19);
  }
  return v15;
}
