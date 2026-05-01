/*
 * XREFs of ?_LayoutBackground@CVirtualDesktopBarElement@@IEAAXXZ @ 0x18038DD34
 * Callers:
 *     ObservablePropertyCallback__lambda_8cb41962f400b05f8d5f37a54afbb5b2___::Run @ 0x18038D680 (ObservablePropertyCallback__lambda_8cb41962f400b05f8d5f37a54afbb5b2___--Run.c)
 *     ?v_LayoutChildren@CVirtualDesktopBarElement@@MEAAXXZ @ 0x18038DF00 (-v_LayoutChildren@CVirtualDesktopBarElement@@MEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??B?$HighContrastAwareOpacity@M@@QEBAMXZ @ 0x18038907C (--B-$HighContrastAwareOpacity@M@@QEBAMXZ.c)
 */

void __fastcall CVirtualDesktopBarElement::_LayoutBackground(CVirtualDesktopBarElement *this)
{
  int v2; // eax
  int v3; // edx
  __int64 v4; // rax
  _QWORD *v5; // rax
  bool v6; // di
  _BYTE *v7; // rax
  __int64 *v8; // rsi
  float *v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  _BYTE v13[16]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v14; // [rsp+40h] [rbp-30h] BYREF
  __int128 v15; // [rsp+50h] [rbp-20h] BYREF

  v2 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
  v3 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
  *(_QWORD *)&v15 = 0LL;
  HIDWORD(v15) = v2;
  v4 = *(_QWORD *)this;
  DWORD2(v15) = v3;
  v5 = (_QWORD *)(*(__int64 (__fastcall **)(CVirtualDesktopBarElement *, __int128 *))(v4 + 384))(this, &v14);
  v6 = (*(int (__fastcall **)(_QWORD, __int64, CVirtualDesktopBarElement *, __int128 *, _BYTE *))(*(_QWORD *)*v5 + 56LL))(
         *v5,
         7LL,
         this,
         &v15,
         v13) < 0
    || v13[0];
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD, __int128 *, _QWORD, _QWORD))(**((_QWORD **)this + 96) + 24LL))(
      *((_QWORD *)this + 96),
      &v15,
      0LL,
      0LL);
  v7 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 92) + 40LL))(*((_QWORD *)this + 92));
  v8 = (__int64 *)*((_QWORD *)this + 96);
  v9 = (float *)((char *)this + 232);
  v10 = *v8;
  if ( !*v7 )
    v9 = (float *)((char *)this + 240);
  HighContrastAwareOpacity<float>::operator float(v9);
  (*(void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(v10 + 32))(v8, v11, 0LL, 0LL);
  v12 = *((_QWORD *)this + 97);
  if ( v12 )
  {
    v14 = v15;
    HIDWORD(v14) = DWORD1(v15);
    DWORD1(v14) = DWORD1(v15) - *((_DWORD *)this + 89);
    (*(void (__fastcall **)(__int64, __int128 *, _QWORD, _QWORD))(*(_QWORD *)v12 + 24LL))(v12, &v14, 0LL, 0LL);
  }
}
