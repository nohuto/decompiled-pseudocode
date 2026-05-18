/*
 * XREFs of sub_1800FD120 @ 0x1800FD120
 * Callers:
 *     sub_1800FF27C @ 0x1800FF27C (sub_1800FF27C.c)
 * Callees:
 *     sub_1800702A0 @ 0x1800702A0 (sub_1800702A0.c)
 *     sub_1800FDA6C @ 0x1800FDA6C (sub_1800FDA6C.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800FD120(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  char v5; // r12
  __int64 v6; // r13
  __int64 v7; // rcx
  __int64 v8; // rcx
  void (__fastcall ***v9)(_QWORD, __int64); // rax
  _BYTE *v10; // rax
  __int64 v11; // r14
  __int64 v12; // r8
  int v13; // r15d
  unsigned __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  char v18; // [rsp+20h] [rbp-68h]
  int v19; // [rsp+24h] [rbp-64h]
  __int64 v21; // [rsp+30h] [rbp-58h]
  _BYTE v23[8]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v24; // [rsp+50h] [rbp-38h]

  v3 = a1;
  v4 = 0;
  v19 = 0;
  v5 = 0;
  v18 = 0;
  v6 = a1;
  v7 = *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 72);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  if ( (unsigned __int8)std::istream::_Ipfx(v3, 0LL) )
  {
    v8 = std::ios_base::getloc(v3 + *(int *)(*(_QWORD *)v3 + 4LL), v23);
    v21 = sub_1800FDA6C(v8);
    if ( v24 )
    {
      v9 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      if ( v9 )
        (**v9)(v9, 1LL);
    }
    a2[2] = 0LL;
    v10 = a2;
    if ( a2[3] >= 0x10uLL )
      v10 = (_BYTE *)*a2;
    try
    {
      *v10 = 0;
      if ( std::ios_base::width((std::ios_base *)(v3 + *(int *)(*(_QWORD *)v3 + 4LL))) <= 0 )
      {
        v11 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else
      {
        v11 = 0x7FFFFFFFFFFFFFFFLL;
        if ( (unsigned __int64)std::ios_base::width((std::ios_base *)(v3 + *(int *)(*(_QWORD *)v3 + 4LL))) < 0x7FFFFFFFFFFFFFFFLL )
          v11 = std::ios_base::width((std::ios_base *)(v3 + *(int *)(*(_QWORD *)v3 + 4LL)));
      }
      v13 = std::streambuf::sgetc(*(_QWORD *)(*(int *)(*(_QWORD *)v3 + 4LL) + v3 + 72));
      while ( v11 )
      {
        if ( v13 == -1 )
        {
          v4 = 1;
          v19 = 1;
          goto LABEL_32;
        }
        LOBYTE(v12) = v13;
        if ( (unsigned __int8)std::ctype<char>::is(v21, 72LL, v12) )
          goto LABEL_32;
        v14 = a2[2];
        if ( v14 >= a2[3] )
        {
          sub_1800702A0(a2, 1uLL, 0LL, v13);
        }
        else
        {
          a2[2] = v14 + 1;
          v15 = a2;
          if ( a2[3] >= 0x10uLL )
            v15 = (_QWORD *)*a2;
          *((_BYTE *)v15 + v14) = v13;
          *((_BYTE *)v15 + v14 + 1) = 0;
        }
        v5 = 1;
        v18 = 1;
        --v11;
        v13 = std::streambuf::snextc(*(_QWORD *)(*(int *)(*(_QWORD *)v3 + 4LL) + v3 + 72));
      }
    }
    catch ( ... )
    {
      LOBYTE(v12) = 1;
      std::ios::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), 4LL, v12);
      v4 = v19;
      v5 = v18;
      v6 = a1;
      v3 = a1;
      goto LABEL_24;
    }
LABEL_32:
    ;
  }
LABEL_24:
  std::ios_base::width((std::ios_base *)(v3 + *(int *)(*(_QWORD *)v3 + 4LL)), 0LL);
  if ( !v5 )
    v4 |= 2u;
  std::ios::setstate(v3 + *(int *)(*(_QWORD *)v3 + 4LL), v4, 0LL);
  v16 = *(_QWORD *)(*(int *)(*(_QWORD *)v6 + 4LL) + v6 + 72);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  return v3;
}
