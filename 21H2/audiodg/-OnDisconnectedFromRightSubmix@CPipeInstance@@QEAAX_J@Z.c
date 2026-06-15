/*
 * XREFs of ?OnDisconnectedFromRightSubmix@CPipeInstance@@QEAAX_J@Z @ 0x1400017B0
 * Callers:
 *     ?DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z @ 0x1400016B8 (-DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CPipeInstance::OnDisconnectedFromRightSubmix(CPipeInstance *this, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  _QWORD *v5; // rax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  void (__fastcall ***v9)(_QWORD, GUID *, _QWORD *); // r9
  __int64 v10; // rcx
  void (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  v3 = *((_QWORD *)this + 3);
  while ( v3 )
  {
    v4 = *(_QWORD *)(v3 + 16);
    v3 = *(_QWORD *)(v3 + 8);
    if ( *(_DWORD *)(v4 + 40) == 3 )
    {
      v5 = *(_QWORD **)(v4 + 32);
      v11 = 0LL;
      v6 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD))*v5)(
             *v5,
             &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
             &v11);
      v9 = v11;
      if ( v6 >= 0 )
      {
        v10 = 0LL;
        v12 = 0LL;
        if ( v11 )
        {
          (**v11)(v11, &GUID_8a2ae4dd_6b2e_4225_9174_9d02b5e8f572, &v12);
          v9 = v11;
          v10 = v12;
        }
        if ( v10 )
        {
          (*(void (__fastcall **)(__int64, __int64, __int64, void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*(_QWORD *)v10 + 40LL))(
            v10,
            a2,
            v8,
            v9);
          v9 = v11;
          v10 = v12;
        }
        if ( v10 )
        {
          (*(void (__fastcall **)(__int64, __int64, __int64, void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*(_QWORD *)v10 + 16LL))(
            v10,
            v7,
            v8,
            v9);
          v9 = v11;
        }
      }
      if ( v9 )
        ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v9)[2])(v9);
    }
  }
}
