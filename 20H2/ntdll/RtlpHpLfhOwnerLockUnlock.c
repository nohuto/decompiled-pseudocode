/*
 * XREFs of RtlpHpLfhOwnerLockUnlock @ 0x18010E464
 * Callers:
 *     RtlpHpLfhContextLockUnlock @ 0x18010E370 (RtlpHpLfhContextLockUnlock.c)
 *     RtlpHpLfhOwnerLockUnlock @ 0x18010E464 (RtlpHpLfhOwnerLockUnlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhOwnerListLockUnlock @ 0x18010E3F0 (RtlpHpLfhOwnerListLockUnlock.c)
 *     RtlpHpLfhOwnerLockUnlock @ 0x18010E464 (RtlpHpLfhOwnerLockUnlock.c)
 */

void __fastcall RtlpHpLfhOwnerLockUnlock(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // edi
  int v6; // esi
  __int64 v7; // rcx
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  volatile signed __int64 *v12; // rcx
  volatile signed __int64 *v13; // rcx

  v4 = a2;
  v6 = a2 & 1;
  if ( (a2 & 1) == 0 )
    RtlAcquireSRWLockExclusive(a1 + 16, a2, a3, a4);
  RtlpHpLfhOwnerListLockUnlock(a1, (_QWORD *)(a1 + 24), v4, a4);
  RtlpHpLfhOwnerListLockUnlock(v7, (_QWORD *)(a1 + 40), v4, v8);
  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v12 = (volatile signed __int64 *)(a1 + 80);
    if ( v6 )
    {
      if ( (v4 & 2) != 0 )
        *v12 = 1LL;
      RtlReleaseSRWLockExclusive(v12);
    }
    else
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)v12, v9, v10, v11);
    }
    RtlpHpLfhOwnerLockUnlock(**(_QWORD **)(a1 + 96), v4);
  }
  if ( v6 )
  {
    v13 = (volatile signed __int64 *)(a1 + 16);
    if ( (v4 & 2) != 0 )
      *v13 = 1LL;
    RtlReleaseSRWLockExclusive(v13);
  }
}
