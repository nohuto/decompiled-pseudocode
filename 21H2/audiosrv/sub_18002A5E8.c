/*
 * XREFs of sub_18002A5E8 @ 0x18002A5E8
 * Callers:
 *     sub_180002FD4 @ 0x180002FD4 (sub_180002FD4.c)
 * Callees:
 *     sub_180028850 @ 0x180028850 (sub_180028850.c)
 *     sub_18002A54C @ 0x18002A54C (sub_18002A54C.c)
 *     sub_180047278 @ 0x180047278 (sub_180047278.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800522A8 @ 0x1800522A8 (sub_1800522A8.c)
 *     sub_1800524EC @ 0x1800524EC (sub_1800524EC.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CD4DC @ 0x1800CD4DC (sub_1800CD4DC.c)
 *     sub_1800CDFEC @ 0x1800CDFEC (sub_1800CDFEC.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18002A5E8(__int64 a1, char *a2, __int64 a3, _QWORD *a4)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  __int64 v7; // rcx
  __int64 *v8; // rbx
  __int64 *v9; // r15
  __int64 *v10; // r15
  __int64 *j; // rsi
  __int64 *v12; // rsi
  char *v13; // r15
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rax
  int v17; // eax
  unsigned int v18; // ebx
  _QWORD *v19; // rdx
  __int64 v20; // rcx
  __int64 *i; // rsi
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rbx
  int (__fastcall ***v26)(_QWORD, _QWORD, _QWORD); // rcx
  int (__fastcall ***v27)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  _QWORD v30[9]; // [rsp+20h] [rbp-48h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  int (__fastcall ***v32)(_QWORD, _QWORD, _QWORD); // [rsp+70h] [rbp+8h] BYREF
  char *v33; // [rsp+78h] [rbp+10h] BYREF
  __int64 v34; // [rsp+80h] [rbp+18h]
  __int64 v35; // [rsp+88h] [rbp+20h] BYREF

  v34 = a3;
  v33 = a2;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v30[1] = v6;
  v8 = *(__int64 **)(a1 + 64);
  v9 = *(__int64 **)(a1 + 72);
  while ( v8 != v9 && !(unsigned __int8)sub_1800CDFEC(v7, v8) )
    ++v8;
  if ( v8 != v9 )
  {
    for ( i = v8 + 1; i != v9; ++i )
    {
      if ( !(unsigned __int8)sub_1800CDFEC(v7, i) )
      {
        v23 = 0LL;
        if ( &v32 != (int (__fastcall ****)(_QWORD, _QWORD, _QWORD))i )
        {
          v23 = *i;
          *i = 0LL;
        }
        v7 = *v8;
        *v8 = v23;
        if ( v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        ++v8;
      }
    }
  }
  v10 = *(__int64 **)(a1 + 72);
  for ( j = v8; j != v10; ++j )
  {
    v24 = *j;
    if ( *j )
    {
      *j = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
  }
  *(_QWORD *)(a1 + 72) = v8;
  *a4 = 0LL;
  v12 = *(__int64 **)(a1 + 64);
  v13 = v33;
  while ( v12 != *(__int64 **)(a1 + 72) )
  {
    v25 = *v12;
    v30[0] = v25;
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
    v32 = 0LL;
    if ( (int)sub_1800CD4DC(v30, &v32) >= 0 && v32 )
    {
      v35 = 0LL;
      sub_180047278(&v35);
      if ( (**v32)(v32, &xmmword_18015BA90, &v35) >= 0
        && (*(unsigned __int8 (__fastcall **)(__int64, char *))(*(_QWORD *)v35 + 24LL))(v35, v13) )
      {
        (**(void (__fastcall ***)(__int64, const IID *, _QWORD *))v35)(v35, &stru_18015B940, a4);
        sub_180047278(&v35);
        v26 = v32;
        if ( v32 )
        {
          v32 = 0LL;
          ((void (__fastcall *)(int (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v26)[2])(v26);
        }
        if ( v25 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        break;
      }
      sub_180047278(&v35);
    }
    v27 = v32;
    if ( v32 )
    {
      v32 = 0LL;
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v27)[2])(v27);
    }
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    ++v12;
  }
  if ( *a4 )
    goto LABEL_15;
  v32 = 0LL;
  sub_180047278(&v32);
  v14 = sub_18002A54C(&v32, &v33);
  v15 = v14;
  if ( v14 < 0 )
  {
    if ( v14 == -2147024891 || v14 == -2147024894 )
    {
      sub_180047278(&v32);
      if ( v6 )
        LeaveCriticalSection(v6);
      return v15;
    }
    else
    {
      sub_18004BD84(retaddr, 2908LL, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", (unsigned int)v14);
      sub_180047278(&v32);
      if ( v6 )
        LeaveCriticalSection(v6);
      return v15;
    }
  }
  else
  {
    v35 = 0LL;
    v30[0] = &v35;
    v16 = sub_1800524EC(v30);
    v17 = sub_1800522A8(v32, v16);
    v18 = v17;
    if ( v17 >= 0 )
    {
      v19 = *(_QWORD **)(a1 + 72);
      if ( *(_QWORD **)(a1 + 80) == v19 )
      {
        sub_180028850((unsigned __int64 *)(a1 + 64), v19, &v35);
      }
      else
      {
        v29 = v35;
        *v19 = v35;
        if ( v29 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
        *(_QWORD *)(a1 + 72) += 8LL;
      }
      (**v32)(v32, &stru_18015B940, a4);
      v20 = v35;
      if ( v35 )
      {
        v35 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      sub_180047278(&v32);
LABEL_15:
      if ( v6 )
        LeaveCriticalSection(v6);
      return 0LL;
    }
    sub_18004BD84(retaddr, 2911LL, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", (unsigned int)v17);
    v28 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    }
    sub_180047278(&v32);
    if ( v6 )
      LeaveCriticalSection(v6);
    return v18;
  }
}
