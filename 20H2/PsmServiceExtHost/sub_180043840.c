/*
 * XREFs of sub_180043840 @ 0x180043840
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002B954 @ 0x18002B954 (sub_18002B954.c)
 */

void __fastcall sub_180043840(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  if ( a2 == 4 )
  {
    v5 = -64LL;
  }
  else
  {
    if ( a2 != 8 )
      return;
    v5 = -88LL;
  }
  v6 = a1 + v5;
  RtlAcquireSRWLockExclusive(a1 + v5 + 8);
  *(_DWORD *)(v6 + 16) = GetCurrentThreadId();
  v7 = *(_QWORD *)(v6 + 56);
  if ( a2 == 4 )
    LODWORD(v7) = *a3;
  else
    HIDWORD(v7) = *a3;
  sub_18002B954((void **)v6, &v7, 8uLL, 1);
  *(_DWORD *)(v6 + 16) = 0;
  RtlReleaseSRWLockExclusive(v6 + 8);
}
