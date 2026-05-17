/*
 * XREFs of RtlpHpHeapExtendContext @ 0x180003030
 * Callers:
 *     RtlpHpSegLfhExtendContext @ 0x180003020 (RtlpHpSegLfhExtendContext.c)
 * Callees:
 *     RtlpHpMetadataCommit @ 0x1800059A8 (RtlpHpMetadataCommit.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpAllocVA @ 0x180022BAC (RtlpHpAllocVA.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x18007F1B0 (RtlAcquireReleaseSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpHpHeapExtendContext(__int128 *a1, __int64 a2)
{
  __int128 *v2; // rsi
  signed __int64 v5; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int128 v9; // xmm0
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  bool v12; // zf
  int v13; // eax
  __int128 v14; // [rsp+30h] [rbp-38h] BYREF
  __int128 v15; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v16; // [rsp+70h] [rbp+8h] BYREF
  __int64 v17; // [rsp+78h] [rbp+10h] BYREF

  v2 = a1 + 14;
  RtlAcquireReleaseSRWLockExclusive(a1 + 14);
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = *((_QWORD *)a1 + 29);
      if ( (unsigned __int64)(v5 + a2) > *((_QWORD *)a1 + 30) )
        break;
      if ( v5 == _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 29, v5 + a2, v5) )
        return v5;
    }
    RtlAcquireSRWLockExclusive(v2);
    v7 = *((_QWORD *)a1 + 29);
    v8 = *((_QWORD *)a1 + 30);
    if ( v7 + a2 > v8 )
      break;
LABEL_10:
    RtlReleaseSRWLockExclusive(v2);
  }
  v9 = *a1;
  v10 = v7 - v8;
  v17 = *((_QWORD *)a1 + 30);
  v11 = (v10 + a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v12 = (*((_BYTE *)a1 + 30) & 1) == 0;
  v16 = v11;
  if ( v12 )
  {
    v15 = v9;
    v13 = RtlpHpAllocVA((unsigned int)&v17, (unsigned int)&v16, 0, 4096, 4, (__int64)&v15);
    v11 = v16;
  }
  else
  {
    v14 = v9;
    v13 = RtlpHpMetadataCommit((_DWORD)a1, v8, (v10 + a2 + 4095) & 0xFFFFF000, (unsigned int)&v14, 1);
  }
  if ( v13 >= 0 )
  {
    *((_QWORD *)a1 + 30) += v11;
    goto LABEL_10;
  }
  v5 = 0LL;
  RtlReleaseSRWLockExclusive(v2);
  return v5;
}
