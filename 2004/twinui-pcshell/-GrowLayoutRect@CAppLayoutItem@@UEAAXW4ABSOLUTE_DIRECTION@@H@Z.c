/*
 * XREFs of ?GrowLayoutRect@CAppLayoutItem@@UEAAXW4ABSOLUTE_DIRECTION@@H@Z @ 0x180484E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAppLayoutItem::GrowLayoutRect(__int64 a1, int a2, int a3)
{
  RTL_SRWLOCK *v6; // rsi

  v6 = (RTL_SRWLOCK *)(a1 + 24);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 24));
  if ( a2 == -1 )
    *(_DWORD *)(a1 + 48) -= a3;
  else
    *(_DWORD *)(a1 + 56) += a3;
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
}
