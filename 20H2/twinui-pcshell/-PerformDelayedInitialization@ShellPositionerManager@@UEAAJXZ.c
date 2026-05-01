/*
 * XREFs of ?PerformDelayedInitialization@ShellPositionerManager@@UEAAJXZ @ 0x1803D40B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ShellPositionerManager::PerformDelayedInitialization(ShellPositionerManager *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, __int64 *); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  unsigned int i; // esi
  __int64 v8; // rbx
  int (__fastcall *v9)(__int64, _QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v10)(char *, __int64, GUID *, __int64 *); // rbx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  unsigned int v13; // [rsp+60h] [rbp+30h] BYREF
  __int64 v14; // [rsp+68h] [rbp+38h] BYREF
  __int64 v15; // [rsp+70h] [rbp+40h] BYREF
  __int64 v16; // [rsp+78h] [rbp+48h] BYREF

  v15 = 0LL;
  v2 = *((_QWORD *)this + 17);
  v3 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 24LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  v4 = v3(v2, &v15);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 263LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_13;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v15 + 24LL))(v15, &v13);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 266LL;
    goto LABEL_5;
  }
  for ( i = 0; i < v13; ++i )
  {
    v14 = 0LL;
    v8 = v15;
    v9 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v15 + 32LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    if ( v9(v8, i, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v14) >= 0 )
    {
      v16 = 0LL;
      v10 = *(int (__fastcall **)(char *, __int64, GUID *, __int64 *))(*((_QWORD *)this + 8) + 56LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      if ( v10((char *)this + 64, v14, &GUID_ee010e17_919a_4068_868b_675acf787303, &v16) >= 0 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 104LL))(v16, v14);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  }
  v5 = 0;
LABEL_13:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  return v5;
}
