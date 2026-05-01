/*
 * XREFs of ?_ApplyScroll@CScrollViewer@@AEAAXH_N@Z @ 0x18039AFF8
 * Callers:
 *     ?ResetScroll@CScrollViewer@@UEAAXXZ @ 0x18039A8B0 (-ResetScroll@CScrollViewer@@UEAAXXZ.c)
 *     ?Scroll@CScrollViewer@@UEAAXI@Z @ 0x18039AB90 (-Scroll@CScrollViewer@@UEAAXI@Z.c)
 *     ?ScrollIntoView@CScrollViewer@@UEAAXPEAUIMultitaskingViewElement@@@Z @ 0x18039AC00 (-ScrollIntoView@CScrollViewer@@UEAAXPEAUIMultitaskingViewElement@@@Z.c)
 *     ?SetScrollPercent@CScrollViewer@@UEAAXN@Z @ 0x18039AE10 (-SetScrollPercent@CScrollViewer@@UEAAXN@Z.c)
 *     ?_UpdateViewport@CScrollViewer@@AEAAXXZ @ 0x18039B46C (-_UpdateViewport@CScrollViewer@@AEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIScrollButtonContainerHost@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIScrollButtonContainerHost@@@WRL@Microsoft@@@Details@12@@Z @ 0x180399E68 (--$As@UIScrollButtonContainerHost@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$.c)
 *     ??$SendUiaPropertyEvent@N@ElementHelpers@@YAJPEAUIMultitaskingViewElement@@HNN@Z @ 0x180399F94 (--$SendUiaPropertyEvent@N@ElementHelpers@@YAJPEAUIMultitaskingViewElement@@HNN@Z.c)
 *     ?_GetMinScrollOffset@CScrollViewer@@AEAAHXZ @ 0x18039B2D4 (-_GetMinScrollOffset@CScrollViewer@@AEAAHXZ.c)
 */

void __fastcall CScrollViewer::_ApplyScroll(CScrollViewer *this, int a2, char a3)
{
  int v4; // ebx
  int MinScrollOffset; // eax
  char *v7; // r14
  DOUBLE v8; // xmm0_8
  __int64 v9; // rax
  __m128i si128; // xmm1
  DOUBLE v11; // xmm6_8
  char v12; // al
  int v13; // ecx
  __int64 v14; // rax
  char v15; // si
  _QWORD *v16; // rax
  int v17; // eax
  char v18; // bl
  __int64 v19; // rax
  char v20; // bl
  _QWORD *v21; // rax
  int v22; // eax
  unsigned int v23; // ebx
  DOUBLE v24; // xmm0_8
  char v25; // al
  int v26; // ecx
  int v27; // [rsp+30h] [rbp-50h] BYREF
  __int64 v28; // [rsp+38h] [rbp-48h] BYREF
  __int64 v29; // [rsp+40h] [rbp-40h] BYREF
  __int64 v30; // [rsp+48h] [rbp-38h] BYREF
  __m128i v31; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  LODWORD(v28) = 0;
  v4 = a2;
  if ( a2 <= (int)CScrollViewer::_GetMinScrollOffset(this) )
    MinScrollOffset = CScrollViewer::_GetMinScrollOffset(this);
  else
    MinScrollOffset = v4;
  if ( MinScrollOffset <= 0 )
  {
    if ( v4 <= (int)CScrollViewer::_GetMinScrollOffset(this) )
      v4 = CScrollViewer::_GetMinScrollOffset(this);
  }
  else
  {
    v4 = 0;
  }
  if ( v4 == *((_DWORD *)this + 64) )
  {
    if ( !a3 )
      return;
    goto LABEL_29;
  }
  v7 = (char *)this + 208;
  v8 = (*(double (__fastcall **)(char *))(*((_QWORD *)this + 26) + 48LL))((char *)this + 208);
  v9 = *((_QWORD *)this + 26);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v11 = v8;
  *((_DWORD *)this + 64) = v4;
  v31 = si128;
  v12 = (*(__int64 (__fastcall **)(char *))(v9 + 96))((char *)this + 208);
  v13 = *((_DWORD *)this + 64);
  if ( v12 )
  {
    v31.m128i_i32[0] += v13;
    v31.m128i_i32[2] += v13;
  }
  else
  {
    v31.m128i_i32[3] += v13;
    v31.m128i_i32[1] += v13;
  }
  v14 = *(_QWORD *)this;
  v15 = 1;
  LOBYTE(v27) = 1;
  v16 = (_QWORD *)(*(__int64 (__fastcall **)(CScrollViewer *, __int64 *))(v14 + 384))(this, &v29);
  v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, CScrollViewer *, __m128i *, int *))(*(_QWORD *)*v16 + 56LL))(
          *v16,
          3LL,
          this,
          &v31,
          &v27);
  if ( v17 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x144,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\scrollviewerelement.cpp",
      (const char *)(unsigned int)v17);
LABEL_14:
    v18 = 1;
    goto LABEL_15;
  }
  if ( (_BYTE)v27 )
    goto LABEL_14;
  v18 = 0;
LABEL_15:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
  if ( v18 )
    (*(void (__fastcall **)(_QWORD, __m128i *, _QWORD, _QWORD))(**((_QWORD **)this + 28) + 24LL))(
      *((_QWORD *)this + 28),
      &v31,
      0LL,
      0LL);
  v19 = *(_QWORD *)this;
  v28 = 0LL;
  v20 = 2;
  if ( !*(_QWORD *)(*(__int64 (__fastcall **)(CScrollViewer *, __int64 *))(v19 + 24))(this, &v30) )
    goto LABEL_20;
  v20 = 6;
  v21 = (_QWORD *)(*(__int64 (__fastcall **)(CScrollViewer *, __int64 *))(*(_QWORD *)this + 24LL))(this, &v29);
  v22 = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IScrollButtonContainerHost>(v21, &v28);
  if ( v22 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x14C,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\scrollviewerelement.cpp",
      (const char *)(unsigned int)v22);
LABEL_20:
    v15 = 0;
  }
  if ( (v20 & 4) != 0 )
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 40LL))(v28);
  v23 = (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v7 + 96LL))((char *)this + 208) != 0 ? 0xFFFFFFFE : 0;
  v24 = (*(double (__fastcall **)(char *))(*(_QWORD *)v7 + 48LL))((char *)this + 208);
  ElementHelpers::SendUiaPropertyEvent<double>((__int64)this, v23 + 30055, v11, v24);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
LABEL_29:
  (*(void (__fastcall **)(_QWORD, __m128i *))(**((_QWORD **)this + 31) + 32LL))(*((_QWORD *)this + 31), &v31);
  v25 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 26) + 96LL))((char *)this + 208);
  v26 = -*((_DWORD *)this + 64);
  if ( v25 )
  {
    v31.m128i_i32[0] -= *((_DWORD *)this + 64);
    v31.m128i_i32[2] += v26;
  }
  else
  {
    v31.m128i_i32[3] -= *((_DWORD *)this + 64);
    v31.m128i_i32[1] += v26;
  }
  (*(void (__fastcall **)(_QWORD, __m128i *))(**((_QWORD **)this + 31) + 56LL))(*((_QWORD *)this + 31), &v31);
}
