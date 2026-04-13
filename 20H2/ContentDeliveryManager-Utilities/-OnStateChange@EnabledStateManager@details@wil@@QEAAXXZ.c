/*
 * XREFs of ?OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ @ 0x18000C4B8
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_fee8cea507d2413a58be13acfb66740a_@@CAXPEAX@Z @ 0x18000C550 (-_lambda_invoker_cdecl_@_lambda_fee8cea507d2413a58be13acfb66740a_@@CAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::EnabledStateManager::OnStateChange(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi
  volatile signed __int32 **Ptr; // rdx
  volatile signed __int32 **i; // rax
  int v5; // eax

  if ( LOBYTE(this->Ptr) )
  {
    v2 = this + 1;
    AcquireSRWLockExclusive(this + 1);
    Ptr = (volatile signed __int32 **)this[11].Ptr;
    for ( i = (volatile signed __int32 **)this[10].Ptr; i != Ptr; i += 2 )
      _InterlockedAnd(i[1], *(_DWORD *)i != 0 ? -3 : -520);
    this[11].Ptr = this[10].Ptr;
    v5 = 1;
    if ( HIDWORD(this[3].Ptr) != -1 )
      v5 = HIDWORD(this[3].Ptr) + 1;
    HIDWORD(this[3].Ptr) = v5;
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
  }
}
