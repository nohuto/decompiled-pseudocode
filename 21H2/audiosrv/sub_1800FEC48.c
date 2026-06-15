/*
 * XREFs of sub_1800FEC48 @ 0x1800FEC48
 * Callers:
 *     pfnwa @ 0x1800FFD10 (pfnwa.c)
 * Callees:
 *     sub_1800FA18C @ 0x1800FA18C (sub_1800FA18C.c)
 *     sub_1800FFE3C @ 0x1800FFE3C (sub_1800FFE3C.c)
 */

void __fastcall sub_1800FEC48(__int64 a1, char a2)
{
  RTL_SRWLOCK *v2; // rbx
  struct _TP_WAIT *v5; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  v2 = (RTL_SRWLOCK *)(a1 + 152);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 152));
  SRWLock = v2;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 148), 0xFFFFFFFF) == 1 )
  {
    v5 = *(struct _TP_WAIT **)(a1 + 136);
    *(_QWORD *)(a1 + 136) = 0LL;
    CloseThreadpoolWait(v5);
    sub_1800FFE3C(&SRWLock, 0LL);
    if ( a1 )
      sub_1800FA18C(a1);
  }
  else if ( a2 )
  {
    SetThreadpoolWait(*(PTP_WAIT *)(a1 + 136), *(HANDLE *)(a1 + 128), 0LL);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
