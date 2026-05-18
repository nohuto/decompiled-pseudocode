/*
 * XREFs of sub_18006D8C0 @ 0x18006D8C0
 * Callers:
 *     sub_180038AF0 @ 0x180038AF0 (sub_180038AF0.c)
 * Callees:
 *     sub_1800E0AC8 @ 0x1800E0AC8 (sub_1800E0AC8.c)
 *     memset @ 0x18012396A (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_18006D8C0(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  void *v6; // rax
  void *v7; // rbx
  void (__fastcall ***v8)(_QWORD, __int64); // rbx
  void (__fastcall ****v9)(_QWORD, __int64); // rdx
  void (__fastcall ***v10)(_QWORD, __int64); // rcx
  signed __int32 v12; // eax
  __int128 v13; // [rsp+20h] [rbp-20h]
  void *v14; // [rsp+30h] [rbp-10h] BYREF

  v13 = 0LL;
  v4 = a1[10];
  if ( v4 )
  {
    while ( 1 )
    {
      v12 = *(_DWORD *)(v4 + 8);
      if ( !v12 )
        break;
      if ( v12 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v12 + 1, v12) )
      {
        *(_QWORD *)&v13 = a1[9];
        v5 = a1[10];
        *((_QWORD *)&v13 + 1) = v5;
        goto LABEL_3;
      }
    }
  }
  v5 = 0LL;
LABEL_3:
  v6 = operator new(0x3960uLL);
  v7 = v6;
  v14 = v6;
  if ( v6 )
  {
    memset(v6, 0, 0x3960uLL);
    v6 = (void *)sub_1800E0AC8(v7, v13, a2);
  }
  v8 = (void (__fastcall ***)(_QWORD, __int64))v6;
  v14 = v6;
  v9 = (void (__fastcall ****)(_QWORD, __int64))(a1 + 12);
  if ( a1 + 12 != &v14 )
  {
    v8 = 0LL;
    v14 = 0LL;
    v10 = *v9;
    *v9 = (void (__fastcall ***)(_QWORD, __int64))v6;
    if ( !v10 )
      goto LABEL_10;
    (**v10)(v10, 1LL);
    v6 = 0LL;
  }
  if ( v6 )
    (**v8)(v8, 1LL);
LABEL_10:
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 8), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v13 + 1))(*((_QWORD *)&v13 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v13 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v13 + 1) + 8LL))(*((_QWORD *)&v13 + 1));
    }
  }
  (*(void (__fastcall **)(_QWORD *))(*a1 + 48LL))(a1);
  return 1;
}
