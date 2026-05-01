/*
 * XREFs of ?CompleteInitialization@CAppViewManager@@UEAAJXZ @ 0x180144890
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppViewManager::CompleteInitialization(CAppViewManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  v2 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 11))(
         *((_QWORD *)this + 11),
         &GUID_7860c098_fb29_49aa_a512_adacc0ffee84,
         &v7);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v7 + 24LL))(
           v7,
           ((unsigned __int64)this + 16) & -(__int64)(this != (CAppViewManager *)32),
           (char *)this + 96);
    v3 = v2;
    if ( v2 >= 0 )
    {
      v3 = 0;
      goto LABEL_7;
    }
    v4 = 366LL;
  }
  else
  {
    v4 = 363LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)v2);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  return v3;
}
