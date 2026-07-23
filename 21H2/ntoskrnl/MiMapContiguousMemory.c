/*
 * XREFs of MiMapContiguousMemory @ 0x1402174E4
 * Callers:
 *     MmMapIoSpaceEx @ 0x140216B10 (MmMapIoSpaceEx.c)
 *     MiAllocateContiguousMemory @ 0x140216BFC (MiAllocateContiguousMemory.c)
 * Callees:
 *     MiMappingHasIoReferences @ 0x140217B54 (MiMappingHasIoReferences.c)
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x1402CB7F0 (MiFillSystemPtes.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     MiMapContiguousMemoryLarge @ 0x1403B89C4 (MiMapContiguousMemoryLarge.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MiInsertPteTracker @ 0x14055F020 (MiInsertPteTracker.c)
 */

__int64 __fastcall MiMapContiguousMemory(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  unsigned int v5; // esi
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r13
  ULONG_PTR v9; // rcx
  unsigned int v10; // r15d
  int v11; // r14d
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rdi
  unsigned int v15; // r15d
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rax
  int v20; // ebx
  int v21; // [rsp+30h] [rbp-49h] BYREF
  int v22; // [rsp+34h] [rbp-45h]
  ULONG_PTR v23; // [rsp+38h] [rbp-41h]
  __int64 v24; // [rsp+40h] [rbp-39h]
  unsigned __int64 v25; // [rsp+48h] [rbp-31h]
  _QWORD v26[5]; // [rsp+50h] [rbp-29h] BYREF
  int v27; // [rsp+78h] [rbp-1h]
  int v28; // [rsp+7Ch] [rbp+3h]
  unsigned __int64 v29; // [rsp+80h] [rbp+7h]

  v25 = a2;
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
  v24 = a1 & 0xFFF;
  v8 = (v24 + a2 + 4095) >> 12;
  v9 = (a1 >> 12) & 0xFFFFFFFFFLL;
  if ( a1 >> 12 < 0x1000000000LL )
    v9 = a1 >> 12;
  v23 = v9;
  if ( (a3 & 2) != 0 && (MiFlags & 0x10000) != 0 )
    v5 = a3 & 0xFFFFFFFD;
  v21 = 0;
  if ( (a1 & 0x1FFFFF) != 0
    || a2 < 0x200000
    || (v11 = a4 & 1, (a4 & 1) != 0)
    || (v14 = MiMapContiguousMemoryLarge(v9, (__int64)&v21)) == 0 )
  {
    v22 = 0;
    v10 = v8;
    v11 = a4 & 1;
    if ( (a4 & 1) != 0 )
    {
      v10 = v8 + 1;
      if ( (_DWORD)v8 == -1 )
        return 0LL;
      v22 = 1;
    }
    v12 = MiReservePtes(&qword_140C4EF80, v10);
    if ( v12 )
    {
      v13 = v22 | 2;
      if ( (a4 & 2) == 0 )
        v13 = v22;
      if ( (int)MiFillSystemPtes(v12, v8, v23, v5, v13, (__int64)&v21) >= 0 )
      {
        v14 = v24 + (v12 << 25 >> 16);
        goto LABEL_16;
      }
      MiReleasePtes(&qword_140C4EF80, v12, v10);
    }
    return 0LL;
  }
LABEL_16:
  v15 = v21 & 1;
  if ( (v21 & 1) != 0 )
    MiMappingHasIoReferences(v14);
  if ( (dword_140CFB17C & 1) != 0 )
  {
    v26[0] = 0LL;
    v26[1] = 0LL;
    v27 = 0;
    v17 = v15 | 2;
    v29 = a1 >> 12;
    v18 = 1LL;
    v26[3] = v14;
    v19 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v20 = a1 & 0xFFF;
    v26[4] = v19;
    v26[2] = v25;
    if ( !v11 )
      v17 = v15;
    v28 = v20;
    if ( v5 >> 3 == 1 )
    {
      v18 = 0LL;
    }
    else if ( v5 >> 3 == 3 && (v5 & 7) != 0 )
    {
      v18 = 2LL;
    }
    MiInsertPteTracker(v26, 1LL, v17, v18);
  }
  return v14;
}
