/*
 * XREFs of ?Invoke@DEVICE_EVENT@@UEAAXXZ @ 0x180116280
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006DF3C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DEVICE_EVENT::Invoke(DEVICE_EVENT *this)
{
  int v1; // eax
  __int64 v2; // rax
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 2);
  switch ( v1 )
  {
    case 0:
      v2 = *((_QWORD *)this + 2);
      *((_QWORD *)this + 2) = 0LL;
      v8 = v2;
      v3 = (*(__int64 (__fastcall **)(unsigned __int64, __int64 *))(*(_QWORD *)g_AudioService + 40LL))(
             g_AudioService,
             &v8);
      if ( v3 >= 0 )
        return;
      v4 = 382LL;
      goto LABEL_13;
    case 1:
      v5 = *((_QWORD *)this + 2);
      *((_QWORD *)this + 2) = 0LL;
      v8 = v5;
      v3 = (*(__int64 (__fastcall **)(unsigned __int64, __int64 *))(*(_QWORD *)g_AudioService + 48LL))(
             g_AudioService,
             &v8);
      if ( v3 >= 0 )
        return;
      v4 = 386LL;
      goto LABEL_13;
    case 2:
      v6 = *((_QWORD *)this + 2);
      *((_QWORD *)this + 2) = 0LL;
      v8 = v6;
      v3 = (*(__int64 (__fastcall **)(unsigned __int64, __int64 *))(*(_QWORD *)g_AudioService + 56LL))(
             g_AudioService,
             &v8);
      if ( v3 >= 0 )
        return;
      v4 = 390LL;
      goto LABEL_13;
    case 3:
      v3 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)g_AudioService + 64LL))(g_AudioService);
      if ( v3 < 0 )
      {
        v4 = 394LL;
LABEL_13:
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          v4,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\audioservice.cpp",
          (const char *)(unsigned int)v3);
      }
      break;
  }
}
