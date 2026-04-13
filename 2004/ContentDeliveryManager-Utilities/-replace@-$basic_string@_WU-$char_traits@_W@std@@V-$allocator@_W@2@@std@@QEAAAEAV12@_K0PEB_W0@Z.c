/*
 * XREFs of ?replace@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W0@Z @ 0x18007A794
 * Callers:
 *     ?NormalizedString@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W00@Z @ 0x180071680 (-NormalizedString@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_trait.c)
 *     ?GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x18009CC28 (-GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA-AV-$basic_string@_W.c)
 * Callees:
 *     ?_Xran@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAXXZ @ 0x180017928 (-_Xran@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAXXZ.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180018238 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Grow@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA_N_K_N@Z @ 0x18006B228 (-_Grow@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA_N_K_N@Z.c)
 *     ?replace@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0AEBV12@00@Z @ 0x18007A97C (-replace@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K0AEBV12@00.c)
 *     memcpy_0 @ 0x1800CDCF8 (memcpy_0.c)
 *     memmove_0 @ 0x1800CDD04 (memmove_0.c)
 */

__int64 __fastcall std::wstring::replace(
        void **a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        void **a4,
        unsigned __int64 a5)
{
  unsigned __int64 v6; // rdi
  void **v8; // rbx
  void **v9; // rax
  _BYTE *v10; // rax
  char *v12; // rcx
  unsigned __int64 v13; // rsi
  void **v14; // rcx
  char *v15; // rdx
  void **v16; // rcx
  unsigned __int64 v17; // r12
  void **v18; // rcx
  char *v19; // rdx
  void **v20; // rcx
  unsigned __int64 v21; // rax
  _BYTE *v22; // rcx
  _BYTE *v23; // rax

  v6 = a3;
  v8 = a1;
  if ( !a4 )
    goto LABEL_13;
  v9 = (unsigned __int64)a1[3] < 8 ? a1 : (void **)*a1;
  if ( a4 < v9 )
    goto LABEL_13;
  if ( (unsigned __int64)a1[3] >= 8 )
    a1 = (void **)*a1;
  if ( (void **)((char *)a1 + 2 * (_QWORD)v8[2]) > a4 )
  {
    if ( (unsigned __int64)v8[3] < 8 )
      v10 = v8;
    else
      v10 = *v8;
    return std::wstring::replace((_DWORD)v8, a2, a3, (_DWORD)v8, ((char *)a4 - v10) >> 1, a5);
  }
  else
  {
LABEL_13:
    v12 = (char *)v8[2];
    if ( (unsigned __int64)v12 < a2 )
      std::wstring::_Xran();
    if ( (unsigned __int64)&v12[-a2] < a3 )
      v6 = (unsigned __int64)&v12[-a2];
    if ( ~a5 <= (unsigned __int64)&v12[-v6] )
      std::wstring::_Xlen();
    v13 = (unsigned __int64)&v12[-a2 - v6];
    if ( a5 < v6 )
    {
      v14 = (unsigned __int64)v8[3] < 8 ? v8 : (void **)*v8;
      v15 = (char *)v14 + 2 * a2 + 2 * v6;
      v16 = (unsigned __int64)v8[3] < 8 ? v8 : (void **)*v8;
      if ( v13 )
        memmove_0((char *)v16 + 2 * a2 + 2 * a5, v15, 2 * v13);
    }
    if ( a5 || v6 )
    {
      v17 = (unsigned __int64)v8[2] + a5 - v6;
      if ( std::wstring::_Grow(v8, v17, 0) )
      {
        if ( v6 < a5 )
        {
          v18 = (unsigned __int64)v8[3] < 8 ? v8 : (void **)*v8;
          v19 = (char *)v18 + 2 * a2 + 2 * v6;
          v20 = (unsigned __int64)v8[3] < 8 ? v8 : (void **)*v8;
          if ( v13 )
            memmove_0((char *)v20 + 2 * a2 + 2 * a5, v19, 2 * v13);
        }
        v21 = (unsigned __int64)v8[3];
        if ( v21 < 8 )
          v22 = v8;
        else
          v22 = *v8;
        if ( a5 )
        {
          memcpy_0(&v22[2 * a2], a4, 2 * a5);
          v21 = (unsigned __int64)v8[3];
        }
        if ( v21 < 8 )
          v23 = v8;
        else
          v23 = *v8;
        v8[2] = (void *)v17;
        *(_WORD *)&v23[2 * v17] = 0;
      }
    }
    return (__int64)v8;
  }
}
