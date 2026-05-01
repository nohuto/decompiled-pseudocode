/*
 * XREFs of ?SwapPositioners@PositionerPriority@@UEAAXW4SHELL_POSITIONER_TYPE@@0@Z @ 0x1803E8E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PositionerPriority::SwapPositioners(RTL_SRWLOCK *a1, int a2, int a3)
{
  RTL_SRWLOCK *v3; // rbp
  __int64 v4; // rsi
  __int64 v6; // rbx

  v3 = a1 + 3;
  v4 = a3;
  v6 = a2;
  AcquireSRWLockExclusive(a1 + 3);
  *((_BYTE *)&a1[4].Ptr + v6) = 0;
  *((_BYTE *)&a1[4].Ptr + v4) = 1;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
}
