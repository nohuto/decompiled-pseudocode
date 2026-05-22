/*
 * XREFs of ?DispatchNextCallback@SipcServer@@UEAAJXZ @ 0x1800399E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddHandle@AggregateWaitHandle@@QEAAJPEAX@Z @ 0x1800315C8 (-AddHandle@AggregateWaitHandle@@QEAAJPEAX@Z.c)
 *     ?GetSignaledHandle@AggregateWaitHandle@@QEAAJPEAPEAX@Z @ 0x180039A60 (-GetSignaledHandle@AggregateWaitHandle@@QEAAJPEAPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D360 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800BEBB0 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ??_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z @ 0x1800BF07C (--_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z.c)
 *     ?Disconnect@SipcEndpoint@@QEAAX_N@Z @ 0x1800C0034 (-Disconnect@SipcEndpoint@@QEAAX_N@Z.c)
 *     ?DispatchNextCallback@SipcEndpoint@@QEAAJPEAX@Z @ 0x1800C0108 (-DispatchNextCallback@SipcEndpoint@@QEAAJPEAX@Z.c)
 *     ?FailFast_Unexpected@in1diag0@details@wil@@YAXXZ @ 0x1800C0280 (-FailFast_Unexpected@in1diag0@details@wil@@YAXXZ.c)
 *     ?FreeSection@SipcPort@@QEAAJPEAX@Z @ 0x1800C04A8 (-FreeSection@SipcPort@@QEAAJPEAX@Z.c)
 *     ?RemoveEndpoint@SipcServer@@UEAAXPEAVSipcEndpoint@@@Z @ 0x1800C15C0 (-RemoveEndpoint@SipcServer@@UEAAXPEAVSipcEndpoint@@@Z.c)
 */

__int64 __fastcall SipcServer::DispatchNextCallback(unsigned __int64 this)
{
  AggregateWaitHandle *v2; // r15
  __int64 result; // rax
  void *v4; // rax
  wil::details::in1diag0 *v5; // rcx
  void *v6; // rsi
  unsigned int v7; // r14d
  int v8; // edx
  int v9; // ebx
  SipcServer *v10; // rax
  struct SipcEndpoint **v11; // rbx
  __int64 *j; // rbx
  _QWORD *v13; // rax
  unsigned int v14; // edx
  SipcServer::EndpointListEntry *v15; // rcx
  int v16; // eax
  __int64 *i; // rbx
  int v18; // [rsp+30h] [rbp-30h] BYREF
  void *v19; // [rsp+38h] [rbp-28h]
  void *v20; // [rsp+80h] [rbp+20h] BYREF

  v2 = (AggregateWaitHandle *)(this + 56);
  result = AggregateWaitHandle::GetSignaledHandle((AggregateWaitHandle *)(this + 56), &v20);
  if ( (int)result < 0 )
    return result;
  v4 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(this + 48) + 40LL))(*(_QWORD *)(this + 48));
  v6 = v20;
  if ( v20 != v4 )
  {
    if ( !v20 )
      return 1LL;
    for ( i = *(__int64 **)(this + 104); ; i = (__int64 *)*i )
    {
      if ( i == (__int64 *)(this + 104) )
      {
        wil::details::in1diag0::FailFast_Unexpected(v5);
        JUMPOUT(0x1800627E6LL);
      }
      if ( v20 == (void *)i[4] || v20 == (void *)i[5] )
        break;
    }
    if ( (int)SipcEndpoint::DispatchNextCallback((SipcEndpoint *)i[2], v20) < 0
      || (int)AggregateWaitHandle::AddHandle(v2, v6) < 0 )
    {
      SipcEndpoint::Disconnect((SipcEndpoint *)i[2], 1);
      SipcServer::RemoveEndpoint((SipcServer *)(this + 8), (struct SipcEndpoint *)i[2]);
    }
    return 0LL;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(this + 48) + 32LL))(*(_QWORD *)(this + 48), &v18);
  if ( !v7 )
  {
    switch ( v18 )
    {
      case 2:
        for ( j = *(__int64 **)(this + 104); j != (__int64 *)(this + 104); j = (__int64 *)*j )
        {
          if ( (void *)j[6] == v19 )
          {
            SipcEndpoint::Disconnect((SipcEndpoint *)j[2], 1);
            SipcServer::RemoveEndpoint((SipcServer *)(this + 8), (struct SipcEndpoint *)j[2]);
            break;
          }
        }
        v13 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
        if ( v13 )
        {
          v13[2] = 0LL;
          v13[3] = 0LL;
          v13[4] = 0LL;
          v13[5] = 0LL;
          *((_DWORD *)v13 + 12) = 0;
          *((_DWORD *)v13 + 13) = 0;
        }
        *(_QWORD *)(this + 128) = v13;
        if ( !v13 )
        {
          v9 = -2147024882;
          goto LABEL_27;
        }
        v13[3] = this - 16;
        *(_QWORD *)(*(_QWORD *)(this + 128) + 48LL) = v19;
        (*(void (__fastcall **)(_QWORD, unsigned __int64, _QWORD, _QWORD))(this + 136))(
          *(_QWORD *)(this + 144),
          this & -(__int64)(this != 16),
          (unsigned int)v19,
          HIDWORD(v19));
        if ( *(_QWORD *)(this + 128) )
        {
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(this + 48) + 16LL))(*(_QWORD *)(this + 48));
          v15 = *(SipcServer::EndpointListEntry **)(this + 128);
          if ( v15 )
            SipcServer::EndpointListEntry::`scalar deleting destructor'(v15, v14);
          *(_QWORD *)(this + 128) = 0LL;
        }
        break;
      case 3:
        v10 = *(SipcServer **)(this + 104);
        if ( v10 != (SipcServer *)(this + 104) )
        {
          v11 = (struct SipcEndpoint **)v19;
          while ( v10 != v19 )
          {
            v10 = *(SipcServer **)v10;
            if ( v10 == (SipcServer *)(this + 104) )
              goto LABEL_33;
          }
          SipcEndpoint::Disconnect(*((SipcEndpoint **)v19 + 2), 1);
          SipcServer::RemoveEndpoint((SipcServer *)(this + 8), v11[2]);
        }
        break;
      case 6:
        v9 = SipcPort::FreeSection(*(SipcPort **)(this + 48), v19);
        if ( v9 >= 0 )
          break;
LABEL_27:
        wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)(unsigned int)v9, v8);
        return (unsigned int)v9;
      default:
        return 2147549183LL;
    }
  }
LABEL_33:
  v16 = AggregateWaitHandle::AddHandle(v2, v6);
  if ( v16 < 0 )
    return (unsigned int)v16;
  return v7;
}
