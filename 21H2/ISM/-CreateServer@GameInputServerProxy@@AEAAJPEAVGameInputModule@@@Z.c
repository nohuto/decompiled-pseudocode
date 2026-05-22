/*
 * XREFs of ?CreateServer@GameInputServerProxy@@AEAAJPEAVGameInputModule@@@Z @ 0x180043020
 * Callers:
 *     ?LoadGameInput@GameInputServerProxy@@AEAAJXZ @ 0x180043430 (-LoadGameInput@GameInputServerProxy@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800BF010 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GameInputServerProxy::CreateServer(RTL_SRWLOCK *this, struct GameInputModule *a2)
{
  __int64 (__fastcall *v2)(_DWORD *, GUID *, __int64 *); // rax
  int v4; // eax
  int v5; // edx
  unsigned int v6; // ebx
  RTL_SRWLOCK *v8; // r14
  int v9; // edi
  int v10; // edx
  RTL_SRWLOCK *v11; // rdi
  RTL_SRWLOCK *v12; // rsi
  RTL_SRWLOCK *i; // rbx
  __int64 v14; // [rsp+20h] [rbp-20h] BYREF
  _DWORD v15[4]; // [rsp+28h] [rbp-18h] BYREF

  v2 = (__int64 (__fastcall *)(_DWORD *, GUID *, __int64 *))*((_QWORD *)a2 + 3);
  v15[0] = -10034830;
  v15[1] = 1185990568;
  v15[2] = -143540582;
  v15[3] = -557123954;
  v4 = v2(v15, &GUID_ff03efb3_9964_4a77_bbf0_2a387f32c83c, &v14);
  v6 = v4;
  if ( v4 >= 0 )
  {
    AcquireSRWLockExclusive(this + 5);
    v8 = this + 6;
    v9 = (*(__int64 (__fastcall **)(__int64, PVOID, RTL_SRWLOCK *))(*(_QWORD *)v14 + 24LL))(v14, this[7].Ptr, this + 6);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    if ( v9 >= 0 )
    {
      ReleaseSRWLockExclusive(this + 5);
      v11 = this + 28;
      AcquireSRWLockExclusive(this + 28);
      v12 = this + 25;
      for ( i = (RTL_SRWLOCK *)v12->Ptr; i != v12; i = (RTL_SRWLOCK *)i->Ptr )
        (*(void (__fastcall **)(PVOID, PVOID, _QWORD))(*(_QWORD *)v8->Ptr + 24LL))(v8->Ptr, i[3].Ptr, LODWORD(i[2].Ptr));
      ReleaseSRWLockExclusive(v11);
      return 0LL;
    }
    else
    {
      wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)(unsigned int)v9, v10);
      ReleaseSRWLockExclusive(this + 5);
      return (unsigned int)v9;
    }
  }
  else
  {
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)(unsigned int)v4, v5);
    return v6;
  }
}
