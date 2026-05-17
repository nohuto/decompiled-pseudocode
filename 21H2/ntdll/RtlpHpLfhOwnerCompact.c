/*
 * XREFs of RtlpHpLfhOwnerCompact @ 0x180006EAC
 * Callers:
 *     RtlpHpLfhContextCompact @ 0x180006E1C (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x180006EAC (RtlpHpLfhOwnerCompact.c)
 * Callees:
 *     RtlpHpLfhOwnerCompact @ 0x180006EAC (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x1800070C0 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1160 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall RtlpHpLfhOwnerCompact(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v6; // rsi
  _QWORD *v7; // r15
  _QWORD *result; // rax
  _QWORD *i; // r14
  char *v10; // rcx
  unsigned __int8 v11; // cl
  int v12; // r12d
  __int64 v13; // rbp
  char *v14; // rdx
  unsigned __int64 v15; // r8
  char *j; // rsi
  __int64 v17; // rsi
  char v18; // cl
  unsigned int v19; // edi
  unsigned int v20; // ebx
  _QWORD *v21; // [rsp+78h] [rbp+10h]
  unsigned int v22; // [rsp+80h] [rbp+18h]
  __int64 v23; // [rsp+88h] [rbp+20h]

  v22 = a3;
  v3 = 0LL;
  if ( (*(_BYTE *)a2 & 1) != 0 && *(_BYTE *)(a2 + 2) )
  {
    v6 = *(unsigned __int8 *)(a2 + 2);
    do
    {
      RtlpHpLfhOwnerCompact(a1, *(_QWORD *)(v3 + *(_QWORD *)(a2 + 96)), a3);
      a3 = v22;
      v3 += 8LL;
      --v6;
    }
    while ( v6 );
  }
  v7 = (_QWORD *)(a2 + 24);
  v21 = v7;
  if ( (_QWORD *)*v7 != v7 || (result = (_QWORD *)(a2 + 40), (_QWORD *)*result != result) )
  {
    v23 = a2 + 16;
    RtlAcquireSRWLockShared(a2 + 16);
    for ( i = (_QWORD *)*v7; i != v7; i = (_QWORD *)*i )
    {
      v11 = *((_BYTE *)i + 45);
      v12 = 0;
      if ( v11 > 1u )
      {
        LODWORD(v13) = 1;
        do
        {
          v14 = (char *)i + *((unsigned __int16 *)i + 23);
          v15 = (unsigned __int64)&v14[2 * v11];
          v10 = &v14[2 * (unsigned int)v13];
          if ( *(_WORD *)v10 )
          {
            if ( (unsigned __int64)v10 >= v15 )
              break;
            do
            {
              if ( !*(_WORD *)v10 )
                break;
              v10 += 2;
            }
            while ( (unsigned __int64)v10 < v15 );
            if ( (unsigned __int64)v10 >= v15 )
              break;
            v13 = (v10 - v14) >> 1;
          }
          else
          {
            do
              v10 -= 2;
            while ( !*(_WORD *)v10 );
            v10 += 2;
          }
          for ( j = &v14[2 * (unsigned int)v13 + 2]; !*(_WORD *)j && (unsigned __int64)j < v15; j += 2 )
            ;
          v13 = (v10 - v14) >> 1;
          v17 = (j - v10) >> 1;
          if ( (_DWORD)v13 == -1 )
            break;
          if ( (_DWORD)v17 )
          {
            if ( v12 )
            {
              v18 = *((_BYTE *)i + 44);
              v19 = (_DWORD)v13 << v18;
              v20 = (_DWORD)v17 << v18;
              ((void (__fastcall *)(_QWORD, char *, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 32)))(
                *(_QWORD *)a1,
                (char *)i + (unsigned int)((_DWORD)v13 << v18),
                (unsigned int)((_DWORD)v17 << v18));
              RtlpHpLfhSubsegmentDecBlockCounts(a1, i, v19, v20);
              LODWORD(v13) = v17 + v13;
            }
            else
            {
              if ( (v22 & 1) == 0 )
                RtlAcquireSRWLockShared(a1 + 72);
              v12 = 2;
              RtlAcquireSRWLockExclusive(i + 3);
            }
          }
          v11 = *((_BYTE *)i + 45);
        }
        while ( (unsigned int)v13 < v11 );
        v7 = v21;
        if ( v12 )
        {
          RtlReleaseSRWLockExclusive(i + 3);
          if ( (v22 & 1) == 0 )
            RtlReleaseSRWLockShared(a1 + 72);
        }
      }
    }
    return (_QWORD *)RtlReleaseSRWLockShared(v23);
  }
  return result;
}
