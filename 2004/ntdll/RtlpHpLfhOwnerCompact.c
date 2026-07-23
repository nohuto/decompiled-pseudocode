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
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RtlpHpLfhOwnerCompact(_RTL_SRWLOCK *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v6; // rsi
  _QWORD *v7; // r15
  _QWORD *i; // r14
  char *v9; // rcx
  unsigned __int8 v10; // cl
  int v11; // r12d
  __int64 v12; // rbp
  char *v13; // rdx
  unsigned __int64 v14; // r8
  char *j; // rsi
  __int64 v16; // rsi
  char v17; // cl
  unsigned int v18; // edi
  unsigned int v19; // ebx
  _QWORD *v20; // [rsp+78h] [rbp+10h]
  unsigned int v21; // [rsp+80h] [rbp+18h]
  _RTL_SRWLOCK *SRWLock; // [rsp+88h] [rbp+20h]

  v21 = a3;
  v3 = 0LL;
  if ( (*(_BYTE *)a2 & 1) != 0 && *(_BYTE *)(a2 + 2) )
  {
    v6 = *(unsigned __int8 *)(a2 + 2);
    do
    {
      RtlpHpLfhOwnerCompact(a1, *(_QWORD *)(v3 + *(_QWORD *)(a2 + 96)), a3);
      a3 = v21;
      v3 += 8LL;
      --v6;
    }
    while ( v6 );
  }
  v7 = (_QWORD *)(a2 + 24);
  v20 = v7;
  if ( (_QWORD *)*v7 != v7 || *(_QWORD *)(a2 + 40) != a2 + 40 )
  {
    SRWLock = (_RTL_SRWLOCK *)(a2 + 16);
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a2 + 16));
    for ( i = (_QWORD *)*v7; i != v7; i = (_QWORD *)*i )
    {
      v10 = *((_BYTE *)i + 45);
      v11 = 0;
      if ( v10 > 1u )
      {
        LODWORD(v12) = 1;
        do
        {
          v13 = (char *)i + *((unsigned __int16 *)i + 23);
          v14 = (unsigned __int64)&v13[2 * v10];
          v9 = &v13[2 * (unsigned int)v12];
          if ( *(_WORD *)v9 )
          {
            if ( (unsigned __int64)v9 >= v14 )
              break;
            do
            {
              if ( !*(_WORD *)v9 )
                break;
              v9 += 2;
            }
            while ( (unsigned __int64)v9 < v14 );
            if ( (unsigned __int64)v9 >= v14 )
              break;
            v12 = (v9 - v13) >> 1;
          }
          else
          {
            do
              v9 -= 2;
            while ( !*(_WORD *)v9 );
            v9 += 2;
          }
          for ( j = &v13[2 * (unsigned int)v12 + 2]; !*(_WORD *)j && (unsigned __int64)j < v14; j += 2 )
            ;
          v12 = (v9 - v13) >> 1;
          v16 = (j - v9) >> 1;
          if ( (_DWORD)v12 == -1 )
            break;
          if ( (_DWORD)v16 )
          {
            if ( v11 )
            {
              v17 = *((_BYTE *)i + 44);
              v18 = (_DWORD)v12 << v17;
              v19 = (_DWORD)v16 << v17;
              ((void (__fastcall *)(unsigned __int64, char *, _QWORD))((unsigned __int64)a1 ^ RtlpHpHeapGlobals ^ a1[4].Value))(
                a1->Value,
                (char *)i + (unsigned int)((_DWORD)v12 << v17),
                (unsigned int)((_DWORD)v16 << v17));
              RtlpHpLfhSubsegmentDecBlockCounts(a1, i, v18, v19);
              LODWORD(v12) = v16 + v12;
            }
            else
            {
              if ( (v21 & 1) == 0 )
                RtlAcquireSRWLockShared(a1 + 9);
              v11 = 2;
              RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)i + 3);
            }
          }
          v10 = *((_BYTE *)i + 45);
        }
        while ( (unsigned int)v12 < v10 );
        v7 = v20;
        if ( v11 )
        {
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)i + 3);
          if ( (v21 & 1) == 0 )
            RtlReleaseSRWLockShared(a1 + 9);
        }
      }
    }
    RtlReleaseSRWLockShared(SRWLock);
  }
}
