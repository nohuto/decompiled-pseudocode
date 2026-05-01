/*
 * XREFs of ?_SendMessageCallback@CWindowIconLoader@@IEAAXPEAUSendMessageCallbackInfo@1@PEAUHICON__@@@Z @ 0x18038A4C0
 * Callers:
 *     ?_SendMessageCallback@CWindowIconLoader@@KAXPEAUHWND__@@I_K_J@Z @ 0x18038A590 (-_SendMessageCallback@CWindowIconLoader@@KAXPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_LoadAsyncIcon@CWindowIconLoader@@IEAAXH@Z @ 0x18038A420 (-_LoadAsyncIcon@CWindowIconLoader@@IEAAXH@Z.c)
 */

void __fastcall CWindowIconLoader::_SendMessageCallback(
        CWindowIconLoader *this,
        struct CWindowIconLoader::SendMessageCallbackInfo *a2,
        HICON a3)
{
  int v3; // r9d
  int v4; // ebx
  int v6; // edi
  int v7; // r9d
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v3 = *((_DWORD *)a2 + 2);
  v4 = 0;
  if ( a3 )
  {
    v6 = 1;
    if ( v3 )
    {
      v7 = v3 - 1;
      if ( v7 )
      {
        if ( v7 == 1 )
          v6 = 4;
      }
      else
      {
        v6 = 6;
      }
    }
    else
    {
      v6 = 5;
    }
    if ( v6 > *((_DWORD *)this + 10) )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, HICON, char *, __int64 *))(**((_QWORD **)this + 4) + 48LL))(
             *((_QWORD *)this + 4),
             a3,
             (char *)this + 44,
             &v10);
      if ( v8 >= 0 )
      {
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3), v10);
        *((_DWORD *)this + 10) = v6;
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x93,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\windowiconloader.cpp",
          (const char *)(unsigned int)v8);
      }
    }
  }
  else
  {
    if ( v3 )
    {
      if ( v3 != 1 )
        return;
    }
    else
    {
      v4 = 2;
    }
    CWindowIconLoader::_LoadAsyncIcon(this, v4);
  }
}
