/*
 * XREFs of MiAssignSoftwareWsleRegion @ 0x1403B5B20
 * Callers:
 *     MiInitializeSystemVa @ 0x140A4EBEC (MiInitializeSystemVa.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     ExGenRandom @ 0x1402D7710 (ExGenRandom.c)
 *     RtlFindClearBitsAndSet @ 0x1402E3170 (RtlFindClearBitsAndSet.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 */

__int64 __fastcall MiAssignSoftwareWsleRegion(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rbx
  unsigned int i; // edi
  unsigned __int64 v6; // rsi
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int16 v9; // ax
  __int64 result; // rax
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-49h] BYREF
  int v12; // [rsp+30h] [rbp-39h]
  _DWORD v13[9]; // [rsp+34h] [rbp-35h] BYREF
  __int64 v14; // [rsp+58h] [rbp-11h]
  signed __int32 v15[16]; // [rsp+60h] [rbp-9h] BYREF

  *(&BitMapHeader.SizeOfBitMap + 1) = 0;
  memset(v13, 0, 12);
  memset(&v13[6], 0, 12);
  memset(v15, 0, sizeof(v15));
  BitMapHeader.SizeOfBitMap = 512;
  BitMapHeader.Buffer = (unsigned int *)v15;
  if ( (MI_READ_PTE_LOCK_FREE(8 * ((a2 >> 39) & 0x1FF) - 0x90482413000LL) & 1) != 0 )
  {
    v4 = (__int64)((8 * ((a2 >> 39) & 0x1FF) - 0x90482413000LL) << 25) >> 16;
    for ( i = 0; i < 0x200; ++i )
    {
      if ( MI_READ_PTE_LOCK_FREE(v4) )
        _bittestandset(v15, i);
      v4 += 8LL;
    }
  }
  v13[5] = 1;
  v6 = a2 & 0xFFFFFF8000000000uLL;
  v7 = &v13[1];
  v12 = 0;
  *(_QWORD *)&v13[3] = 0x1000000000LL;
  v8 = 2LL;
  v14 = 0x80000000LL;
  do
  {
    v9 = ExGenRandom(1);
    *v7 = v6
        + ((unsigned __int64)RtlFindClearBitsAndSet(
                               &BitMapHeader,
                               ((unsigned __int64)(v7[1] + 0x3FFFFFFFLL) >> 30) + 1,
                               v9 & 0x1FF) << 30);
    v7 += 3;
    --v8;
  }
  while ( v8 );
  qword_140C4E1B0 = *(_QWORD *)&v13[1];
  qword_140C4E1B8 = *(_QWORD *)&v13[1];
  qword_140C4E1C0 = *(_QWORD *)&v13[1];
  qword_140C4E0D0 = v14;
  qword_140C4E0C8 = *(_QWORD *)&v13[7];
  *(_QWORD *)(*(_QWORD *)(a1 + 240) + 2928LL) = *(_QWORD *)&v13[7];
  result = qword_140C4E0D0;
  *(_QWORD *)(*(_QWORD *)(a1 + 240) + 2936LL) = qword_140C4E0D0;
  return result;
}
