/*
 * XREFs of ?ScrollIntoView@CScrollViewer@@UEAAXPEAUIMultitaskingViewElement@@@Z @ 0x1803BBC60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_ApplyScroll@CScrollViewer@@AEAAXH_N@Z @ 0x1803BC058 (-_ApplyScroll@CScrollViewer@@AEAAXH_N@Z.c)
 *     ?_GetVisibleRect@CScrollViewer@@AEAA?AUCRect@Geometry@@XZ @ 0x1803BC450 (-_GetVisibleRect@CScrollViewer@@AEAA-AUCRect@Geometry@@XZ.c)
 */

void __fastcall CScrollViewer::ScrollIntoView(CScrollViewer *this, struct IMultitaskingViewElement *a2)
{
  __int64 (__fastcall *v4)(__m128i *, _BYTE *); // rdi
  __m128i *v5; // rbx
  int *v6; // rax
  __m128i v7; // xmm0
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  __int64 v11; // rbx
  __int64 VisibleRect; // rax
  _QWORD *v13; // rax
  __int64 v14; // r8
  int v15; // edx
  __int64 v16; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v17[8]; // [rsp+28h] [rbp-38h] BYREF
  __m128i v18; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v19[16]; // [rsp+40h] [rbp-20h] BYREF

  v4 = (__int64 (__fastcall *)(__m128i *, _BYTE *))Geometry::CRect::GetVerticalSegment;
  if ( (*(unsigned __int8 (__fastcall **)(CScrollViewer *))(*(_QWORD *)this + 96LL))(this) )
    v4 = (__int64 (__fastcall *)(__m128i *, _BYTE *))Geometry::CRect::GetHorizontalSegment;
  v5 = (__m128i *)(*(__int64 (__fastcall **)(struct IMultitaskingViewElement *, _BYTE *))(*(_QWORD *)a2 + 96LL))(
                    a2,
                    v19);
  v6 = (int *)(*(__int64 (__fastcall **)(char *, __int64 *))(*((_QWORD *)this - 26) + 120LL))((char *)this - 208, &v16);
  v18 = *v5;
  v7 = v18;
  v8 = *v6;
  v9 = -v6[1];
  v18.m128i_i32[3] -= v6[1];
  v10 = -v8;
  v18.m128i_i32[2] += v10;
  v18.m128i_i32[1] += v9;
  v18.m128i_i32[0] = v10 + _mm_cvtsi128_si32(v7);
  v11 = *(_QWORD *)v4(&v18, v17);
  v16 = v11;
  VisibleRect = CScrollViewer::_GetVisibleRect((char *)this - 208);
  v13 = (_QWORD *)v4((__m128i *)VisibleRect, v17);
  if ( (int)v11 < *(_DWORD *)v13 || SHIDWORD(v16) > (int)HIDWORD(*v13) )
  {
    v14 = HIDWORD(*v13);
    if ( SHIDWORD(v16) <= (int)v14 )
    {
      if ( (int)v11 >= *(_DWORD *)v13 )
        return;
      v15 = *(_DWORD *)v13 + *((_DWORD *)this + 12) - v11;
    }
    else
    {
      v15 = v14 + *((_DWORD *)this + 12) - HIDWORD(v16);
    }
    CScrollViewer::_ApplyScroll((CScrollViewer *)((char *)this - 208), v15, 0);
  }
}
