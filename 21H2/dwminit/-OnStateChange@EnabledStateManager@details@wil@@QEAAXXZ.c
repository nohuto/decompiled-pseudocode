/*
 * XREFs of ?OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ @ 0x1800068F0
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_fee8cea507d2413a58be13acfb66740a_@@CAXPEAX@Z @ 0x1800069A0 (-_lambda_invoker_cdecl_@_lambda_fee8cea507d2413a58be13acfb66740a_@@CAXPEAX@Z.c)
 * Callees:
 *     ??$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z @ 0x180007FC0 (--$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z.c)
 */

void __fastcall wil::details::EnabledStateManager::OnStateChange(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi
  volatile signed __int32 **Ptr; // rdx
  volatile signed __int32 **i; // rax
  int v5; // eax
  RTL_SRWLOCK *v6; // [rsp+30h] [rbp+8h] BYREF
  void (__stdcall *v7)(PSRWLOCK); // [rsp+38h] [rbp+10h] BYREF

  if ( LOBYTE(this->Ptr) )
  {
    v2 = this + 1;
    AcquireSRWLockExclusive(this + 1);
    Ptr = (volatile signed __int32 **)this[11].Ptr;
    for ( i = (volatile signed __int32 **)this[10].Ptr; i != Ptr; i += 2 )
      _InterlockedAnd(i[1], *(_DWORD *)i != 0 ? -5 : -2111);
    this[11].Ptr = this[10].Ptr;
    v5 = 1;
    if ( HIDWORD(this[3].Ptr) != -1 )
      v5 = HIDWORD(this[3].Ptr) + 1;
    HIDWORD(this[3].Ptr) = v5;
    if ( v2 )
    {
      v7 = ReleaseSRWLockExclusive;
      v6 = v2;
      wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(&v7, &v6);
    }
  }
}
