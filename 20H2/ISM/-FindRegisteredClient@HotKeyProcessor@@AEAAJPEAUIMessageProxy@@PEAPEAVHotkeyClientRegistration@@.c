/*
 * XREFs of ?FindRegisteredClient@HotKeyProcessor@@AEAAJPEAUIMessageProxy@@PEAPEAVHotkeyClientRegistration@@@Z @ 0x1801A0224
 * Callers:
 *     ?OnDisconnected@HotKeyProcessor@@UEAAJPEAUIMessageProxy@@@Z @ 0x1801A09C0 (-OnDisconnected@HotKeyProcessor@@UEAAJPEAUIMessageProxy@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180037660 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x1801489BC (-FailFastWithHR@@YAXJ_K0@Z.c)
 *     ??$As@UIMessageProxy@@@?$ComPtr@UIRemoteHotKeyCallBack@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18019CDF4 (--$As@UIMessageProxy@@@-$ComPtr@UIRemoteHotKeyCallBack@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Com.c)
 */

__int64 __fastcall HotKeyProcessor::FindRegisteredClient(
        HotKeyProcessor *this,
        struct IMessageProxy *a2,
        struct HotkeyClientRegistration **a3)
{
  unsigned int v3; // edi
  ULONG_PTR v7; // r8
  _QWORD *v8; // rbx
  _QWORD *v9; // rcx
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]
  struct IMessageProxy *v12; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      *a3 = 0LL;
      v8 = (_QWORD *)*((_QWORD *)this + 3);
      while ( 1 )
      {
        do
        {
          v8 = (_QWORD *)*v8;
          if ( v8 == *((_QWORD **)this + 3) )
            return v3;
          v9 = (_QWORD *)(v8[2] + 104LL);
        }
        while ( !*v9 );
        v12 = 0LL;
        v3 = Microsoft::WRL::ComPtr<IRemoteHotKeyCallBack>::As<IMessageProxy>(v9, (__int64 *)&v12);
        if ( (v3 & 0x80000000) != 0 )
          break;
        if ( v12 == a2 )
        {
          wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v8 + 2);
          v3 = 0;
          *a3 = (struct HotkeyClientRegistration *)v8[2];
LABEL_16:
          Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)&v12);
          return v3;
        }
        Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)&v12);
      }
      if ( v3 == -2147024882 )
        FailFastWithHR(-2147024882, retaddr, 0x3F9uLL);
      FailFastWithHR(v3, retaddr, 0x3F9uLL);
      goto LABEL_16;
    }
    v7 = 1009LL;
  }
  else
  {
    v7 = 1008LL;
  }
  v3 = -2147024809;
  FailFastWithHR(-2147024809, retaddr, v7);
  return v3;
}
