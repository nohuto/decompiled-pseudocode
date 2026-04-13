/*
 * XREFs of ?GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x18009C7D8
 * Callers:
 *     ?LaunchNotification@NotificationManagerService@Actions@CreativeFramework@@AEAAXXZ @ 0x180093714 (-LaunchNotification@NotificationManagerService@Actions@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180036D6C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18006ACE4 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?_Grow@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA_N_K_N@Z @ 0x18006ADD8 (-_Grow@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA_N_K_N@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18006AEBC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800798B0 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180079AC4 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?replace@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W0@Z @ 0x18007A344 (-replace@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W0@Z.c)
 *     ?find@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z @ 0x18008AF84 (-find@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=6
void **__fastcall CreativeFramework::NotificationManager::ToastHelpers::GetToastContentXML(__int64 a1, void **a2)
{
  unsigned int v4; // r14d
  __int64 *v5; // rdi
  __int64 *v6; // rbx
  int v7; // r14d
  unsigned __int64 v8; // rdx
  void **v9; // rax
  _QWORD *v10; // rax
  void **v11; // r12
  unsigned __int16 *v12; // r15
  char *v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rax
  void **v18; // rax
  unsigned __int64 v19; // rcx
  __int64 **v20; // rax
  __int64 *j; // rcx
  __int64 *i; // rax
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rcx
  __int64 *v25; // rax
  void **v26; // rbx
  void *v27; // rdx
  unsigned __int64 v28; // r8
  void **v29; // rax
  void **v30; // rdi
  unsigned __int64 v31; // r8
  void **v32; // rdx
  void *v34[2]; // [rsp+50h] [rbp-41h] BYREF
  __int64 v35; // [rsp+60h] [rbp-31h]
  unsigned __int64 v36; // [rsp+68h] [rbp-29h]
  void *Src[2]; // [rsp+70h] [rbp-21h] BYREF
  unsigned __int64 v38; // [rsp+80h] [rbp-11h]
  unsigned __int64 v39; // [rsp+88h] [rbp-9h]
  void *v40[3]; // [rsp+90h] [rbp-1h] BYREF
  unsigned __int64 v41; // [rsp+A8h] [rbp+17h]

  v4 = 0;
  v39 = 7LL;
  v38 = 0LL;
  LOWORD(Src[0]) = 0;
  std::wstring::assign(Src, (void **)a1, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  v5 = *(__int64 **)(a1 + 32);
  v6 = (__int64 *)*v5;
  while ( v6 != v5 )
  {
    v36 = 7LL;
    v35 = 0LL;
    LOWORD(v34[0]) = 0;
    v7 = v4 | 2;
    v8 = (asc_1801685F8[0] != 0) + v6[6];
    if ( v8 != 7 && std::wstring::_Grow(v34, v8, 1) )
    {
      v9 = v34;
      if ( v36 >= 8 )
        v9 = (void **)v34[0];
      v35 = 0LL;
      *(_WORD *)v9 = 0;
    }
    std::wstring::append(v34, (void **)L"{", asc_1801685F8[0] != 0);
    std::wstring::append(v34, v6 + 4, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    v10 = (_QWORD *)std::wstring::append(v34, (void **)L"}", asc_1801685F4[0] != 0);
    v41 = 7LL;
    v40[2] = 0LL;
    LOWORD(v40[0]) = 0;
    std::wstring::_Assign_rv(v40, v10);
    if ( v36 >= 8 )
      operator delete(v34[0]);
    v11 = (void **)(v6 + 8);
    if ( (unsigned __int64)v6[11] >= 8 )
      v11 = (void **)*v11;
    v12 = (unsigned __int16 *)v40;
    if ( v41 >= 8 )
      v12 = (unsigned __int16 *)v40[0];
    v13 = (char *)Src;
    if ( v39 >= 8 )
      v13 = (char *)Src[0];
    v36 = 7LL;
    v35 = 0LL;
    LOWORD(v34[0]) = 0;
    if ( *(_WORD *)v13 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( *(_WORD *)&v13[2 * v14] );
    }
    else
    {
      v14 = 0LL;
    }
    std::wstring::assign(v34, v13, v14);
    if ( *v12 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( v12[v15] );
      goto LABEL_35;
    }
LABEL_32:
    v15 = 0LL;
LABEL_35:
    while ( 1 )
    {
      v19 = std::wstring::find((char *)v34, v12, 0LL, v15);
      if ( v19 == -1LL )
        break;
      v16 = -1LL;
      do
        ++v16;
      while ( v12[v16] );
      if ( *(_WORD *)v11 )
      {
        v17 = -1LL;
        do
          ++v17;
        while ( *((_WORD *)v11 + v17) );
      }
      else
      {
        v17 = 0LL;
      }
      v18 = (void **)std::wstring::replace(v34, v19, v16, v11, v17);
      if ( v34 != v18 )
        std::wstring::assign(v34, v18, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
      if ( !*v12 )
        goto LABEL_32;
      v15 = -1LL;
      do
        ++v15;
      while ( v12[v15] );
    }
    if ( v39 >= 8 )
      operator delete(Src[0]);
    v39 = 7LL;
    v38 = 0LL;
    LOWORD(Src[0]) = 0;
    std::wstring::_Assign_rv(Src, v34);
    v4 = v7 & 0xFFFFFFF1 | 4;
    if ( v36 >= 8 )
      operator delete(v34[0]);
    if ( v41 >= 8 )
      operator delete(v40[0]);
    if ( !*((_BYTE *)v6 + 25) )
    {
      v20 = (__int64 **)v6[2];
      if ( *((_BYTE *)v20 + 25) )
      {
        for ( i = (__int64 *)v6[1]; !*((_BYTE *)i + 25) && v6 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v6 = i;
        v6 = i;
      }
      else
      {
        v6 = (__int64 *)v6[2];
        for ( j = *v20; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v6 = j;
      }
    }
  }
  a2[3] = (void *)7;
  a2[2] = 0LL;
  *(_WORD *)a2 = 0;
  v23 = (unsigned __int64)a2[2];
  v24 = v38;
  if ( v23 <= v38 && v38 != 7 )
  {
    if ( std::wstring::_Grow(a2, v38, 1) )
    {
      if ( (unsigned __int64)a2[3] < 8 )
        v25 = (__int64 *)a2;
      else
        v25 = (__int64 *)*a2;
      a2[2] = (void *)v23;
      *((_WORD *)v25 + v23) = 0;
    }
    v24 = v38;
  }
  v26 = Src;
  v27 = Src[0];
  v28 = v39;
  if ( v39 >= 8 )
    v26 = (void **)Src[0];
  v29 = Src;
  if ( v39 >= 8 )
    v29 = (void **)Src[0];
  v30 = (void **)((char *)v29 + 2 * v24);
  if ( v26 != v30 )
  {
    do
    {
      if ( *(_WORD *)v26 == 38 )
      {
        v31 = 5LL;
        v32 = (void **)L"&amp;";
      }
      else
      {
        v31 = 1LL;
        v32 = v26;
      }
      std::wstring::append(a2, v32, v31);
      v26 = (void **)((char *)v26 + 2);
    }
    while ( v26 != v30 );
    v28 = v39;
    v27 = Src[0];
  }
  if ( v28 >= 8 )
    operator delete(v27);
  return a2;
}
