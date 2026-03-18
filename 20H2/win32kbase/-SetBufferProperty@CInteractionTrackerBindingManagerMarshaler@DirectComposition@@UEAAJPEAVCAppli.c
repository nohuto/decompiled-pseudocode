/*
 * XREFs of ?SetBufferProperty@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01EBA50
 * Callers:
 *     <none>
 * Callees:
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C0059774 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01CEAD4 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 *     ?SetBindingManagerMarshaler@CInteractionTrackerMarshaler@DirectComposition@@QEAAXPEAVCApplicationChannel@2@PEAVCInteractionTrackerBindingManagerMarshaler@2@@Z @ 0x1C01EA9EC (-SetBindingManagerMarshaler@CInteractionTrackerMarshaler@DirectComposition@@QEAAXPEAVCApplicatio.c)
 */

__int64 __fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::SetBufferProperty(
        DirectComposition::CInteractionTrackerBindingManagerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _DWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  __int32 v9; // r12d
  unsigned __int64 v10; // rdx
  __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  __int64 v13; // rsi
  unsigned __int64 v14; // r9
  __int64 v15; // rcx
  int v16; // r13d
  int v17; // r10d
  size_t v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r11
  int v21; // edx
  DirectComposition::CInteractionTrackerBindingManagerMarshaler *v22; // rax
  DirectComposition::CInteractionTrackerBindingManagerMarshaler *v23; // rax
  bool v24; // zf
  __m128i *v26; // rcx
  __m128i v27; // xmm1
  _QWORD v28[2]; // [rsp+28h] [rbp-61h] BYREF
  __int32 v29; // [rsp+38h] [rbp-51h]
  int v30; // [rsp+3Ch] [rbp-4Dh]
  char v31; // [rsp+40h] [rbp-49h]
  __m128i Src; // [rsp+48h] [rbp-41h] BYREF
  __m128i v33; // [rsp+58h] [rbp-31h]
  __int128 v34; // [rsp+68h] [rbp-21h]
  __int64 v35; // [rsp+88h] [rbp-1h]
  __int32 v36; // [rsp+90h] [rbp+7h]

  v6 = 0;
  *a6 = 0;
  if ( !a3 && a5 == 12 )
  {
    v9 = a4[2];
    v35 = *(_QWORD *)a4;
    v36 = v9;
    v10 = (unsigned int)(v35 - 1);
    if ( (_DWORD)v35 && v10 < *((_QWORD *)a2 + 10) )
    {
      _mm_lfence();
      v9 = v36;
      v11 = *(_QWORD *)(v10 * *((_QWORD *)a2 + 11) + *((_QWORD *)a2 + 7));
    }
    else
    {
      v11 = 0LL;
    }
    v12 = (unsigned int)(HIDWORD(v35) - 1);
    if ( HIDWORD(v35) && v12 < *((_QWORD *)a2 + 10) )
    {
      _mm_lfence();
      v9 = v36;
      v13 = *(_QWORD *)(v12 * *((_QWORD *)a2 + 11) + *((_QWORD *)a2 + 7));
    }
    else
    {
      v13 = 0LL;
    }
    if ( v11
      && v13
      && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 96LL))(v11, 88LL)
      && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 96LL))(v13, 88LL)
      && v11 != v13 )
    {
      v14 = *((_QWORD *)this + 12);
      v15 = 0LL;
      v16 = *(_DWORD *)(v11 + 24);
      v17 = *(_DWORD *)(v13 + 24);
      if ( v14 )
      {
        v18 = *((_QWORD *)this + 13);
        v19 = 0LL;
        v20 = *((_QWORD *)this + 9);
        while ( 1 )
        {
          v34 = *(_OWORD *)(v19 * v18 + v20);
          v21 = *(_DWORD *)(v34 + 24);
          if ( v21 == v16 && *(_DWORD *)(*((_QWORD *)&v34 + 1) + 24LL) == v17 )
            break;
          if ( v21 == v17 && *(_DWORD *)(*((_QWORD *)&v34 + 1) + 24LL) == v16 )
            break;
          v15 = (unsigned int)(v15 + 1);
          v19 = (unsigned int)v15;
          if ( (unsigned int)v15 >= v14 )
            goto LABEL_24;
        }
        v26 = (__m128i *)(v20 + v18 * v15);
        v27 = v26[1];
        Src = *v26;
        v33 = v27;
        if ( _mm_cvtsi128_si32(v27) == v9 )
          return v6;
        v33.m128i_i32[0] = v9;
        v33.m128i_i8[8] = 1;
        memmove(v26, &Src, v18);
LABEL_38:
        *((_DWORD *)this + 4) |= 0x40u;
        *a6 = 1;
        return v6;
      }
LABEL_24:
      if ( v9 )
      {
        v22 = *(DirectComposition::CInteractionTrackerBindingManagerMarshaler **)(v11 + 448);
        if ( !v22 || v22 == this )
        {
          v23 = *(DirectComposition::CInteractionTrackerBindingManagerMarshaler **)(v13 + 448);
          if ( !v23 || v23 == this )
          {
            v24 = (*(_DWORD *)(v11 + 64))++ == -1;
            if ( v24 )
            {
              *(_DWORD *)(v11 + 64) = -1;
            }
            else
            {
              v24 = (*(_DWORD *)(v13 + 64))++ == -1;
              if ( !v24 )
              {
                v6 = DirectComposition::CDCompDynamicArrayBase::Grow(
                       (DirectComposition::CInteractionTrackerBindingManagerMarshaler *)((char *)this + 72),
                       1LL,
                       0x73694344u);
                if ( (v6 & 0x80000000) != 0 )
                {
                  --*(_DWORD *)(v11 + 64);
                  --*(_DWORD *)(v13 + 64);
                  return v6;
                }
                v30 = 0;
                v28[0] = v11;
                v28[1] = v13;
                v29 = v9;
                v31 = 1;
                DirectComposition::CResourceMarshaler::AddRef((DirectComposition::CResourceMarshaler *)v11);
                DirectComposition::CResourceMarshaler::AddRef((DirectComposition::CResourceMarshaler *)v13);
                memmove(
                  (void *)(*((_QWORD *)this + 9) + *((_QWORD *)this + 13) * (*((_QWORD *)this + 12) - 1LL)),
                  v28,
                  *((_QWORD *)this + 13));
                DirectComposition::CInteractionTrackerMarshaler::SetBindingManagerMarshaler(
                  (DirectComposition::CInteractionTrackerMarshaler *)v11,
                  a2,
                  this);
                DirectComposition::CInteractionTrackerMarshaler::SetBindingManagerMarshaler(
                  (DirectComposition::CInteractionTrackerMarshaler *)v13,
                  a2,
                  this);
                goto LABEL_38;
              }
              --*(_DWORD *)(v11 + 64);
              --*(_DWORD *)(v13 + 64);
            }
          }
        }
      }
    }
    return 3221225485LL;
  }
  return (unsigned int)-1073741811;
}
