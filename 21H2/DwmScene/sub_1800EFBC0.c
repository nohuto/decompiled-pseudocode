/*
 * XREFs of sub_1800EFBC0 @ 0x1800EFBC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800703D4 @ 0x1800703D4 (sub_1800703D4.c)
 *     sub_18007AB84 @ 0x18007AB84 (sub_18007AB84.c)
 *     sub_180092E28 @ 0x180092E28 (sub_180092E28.c)
 *     sub_180097958 @ 0x180097958 (sub_180097958.c)
 *     sub_18009B3A0 @ 0x18009B3A0 (sub_18009B3A0.c)
 *     sub_18009B484 @ 0x18009B484 (sub_18009B484.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_1800EFBC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 *v8; // rax
  signed __int32 v9; // eax
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rbx
  __int64 v13; // [rsp+20h] [rbp-38h] BYREF
  volatile signed __int32 *v14; // [rsp+28h] [rbp-30h]
  __int128 v15; // [rsp+30h] [rbp-28h] BYREF

  v15 = 0LL;
  sub_18009B3A0(a2, (__int64)&v15);
  if ( (unsigned __int8)sub_180092E28(v15, (__int64)&qword_180212578) )
  {
    v5 = sub_1800703D4(a3);
    v6 = sub_18007AB84(v5, 1);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, &unk_18020FE88, 0LL)
      && (*(_WORD *)(v15 + 112) & 0x10) != 0
      && (*(_WORD *)(v15 + 112) & 0x2000) == 0 )
    {
      v7 = 7;
    }
    else
    {
      v7 = 3;
    }
  }
  else
  {
    v7 = 1;
  }
  v8 = sub_18009B484(a2, &v13);
  LOBYTE(v9) = sub_180097958(*v8, v7);
  v10 = v14;
  if ( v14 )
  {
    v9 = _InterlockedDecrement(v14 + 2);
    if ( !v9 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      v9 = _InterlockedDecrement(v10 + 3);
      if ( !v9 )
        LOBYTE(v9) = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v11 = (volatile signed __int32 *)*((_QWORD *)&v15 + 1);
  if ( *((_QWORD *)&v15 + 1) )
  {
    v9 = _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v15 + 1) + 8LL));
    if ( !v9 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      v9 = _InterlockedDecrement(v11 + 3);
      if ( !v9 )
        LOBYTE(v9) = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  return v9;
}
