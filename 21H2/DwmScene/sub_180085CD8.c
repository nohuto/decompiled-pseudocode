/*
 * XREFs of sub_180085CD8 @ 0x180085CD8
 * Callers:
 *     sub_1800866A4 @ 0x1800866A4 (sub_1800866A4.c)
 *     sub_18008713C @ 0x18008713C (sub_18008713C.c)
 *     sub_180090360 @ 0x180090360 (sub_180090360.c)
 *     sub_1800ADE00 @ 0x1800ADE00 (sub_1800ADE00.c)
 *     sub_1800C5C54 @ 0x1800C5C54 (sub_1800C5C54.c)
 *     sub_1800C9D68 @ 0x1800C9D68 (sub_1800C9D68.c)
 *     sub_180101A10 @ 0x180101A10 (sub_180101A10.c)
 *     sub_180107740 @ 0x180107740 (sub_180107740.c)
 *     sub_18010797C @ 0x18010797C (sub_18010797C.c)
 *     sub_18010BED0 @ 0x18010BED0 (sub_18010BED0.c)
 * Callees:
 *     sub_180086244 @ 0x180086244 (sub_180086244.c)
 *     sub_1800889A0 @ 0x1800889A0 (sub_1800889A0.c)
 *     sub_180089274 @ 0x180089274 (sub_180089274.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180085CD8(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  signed __int32 v5; // eax
  char v6; // bl
  __int64 v7; // rdx
  signed __int32 v8; // eax
  _OWORD *v9; // rax
  __int128 v11; // [rsp+28h] [rbp-D8h]
  __int128 v12; // [rsp+38h] [rbp-C8h]
  _OWORD v13[4]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v14[72]; // [rsp+88h] [rbp-78h] BYREF
  _OWORD v15[4]; // [rsp+D0h] [rbp-30h] BYREF

  sub_180089274(a1);
  sub_180089274(a1);
  v12 = 0LL;
  v4 = *(_QWORD *)(a1 + 64);
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(v4 + 8);
      if ( !v5 )
        break;
      if ( v5 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5) )
      {
        v12 = *(_OWORD *)(a1 + 56);
        break;
      }
    }
  }
  v6 = 2;
  if ( (_QWORD)v12 )
  {
    sub_180089274(a1);
    v11 = 0LL;
    v7 = *(_QWORD *)(a1 + 64);
    if ( v7 )
    {
      while ( 1 )
      {
        v8 = *(_DWORD *)(v7 + 8);
        if ( !v8 )
          break;
        if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8) )
        {
          v11 = *(_OWORD *)(a1 + 56);
          break;
        }
      }
    }
    v6 = 7;
    v9 = (_OWORD *)sub_180086244(v11, v14);
  }
  else
  {
    v13[0] = xmmword_180214C90;
    v13[1] = xmmword_180214CA0;
    v13[2] = xmmword_180214CB0;
    v13[3] = xmmword_180214CC0;
    v9 = v13;
  }
  v15[0] = *v9;
  v15[1] = v9[1];
  v15[2] = v9[2];
  v15[3] = v9[3];
  if ( (v6 & 1) != 0 )
  {
    if ( *((_QWORD *)&v11 + 1) )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 8LL)) )
      {
        (***((void (__fastcall ****)(_QWORD))&v11 + 1))(*((_QWORD *)&v11 + 1));
        if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 12LL)) )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v11 + 1) + 8LL))(*((_QWORD *)&v11 + 1));
      }
    }
  }
  if ( *((_QWORD *)&v12 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v12 + 1) + 8LL)) )
    {
      (***((void (__fastcall ****)(_QWORD))&v12 + 1))(*((_QWORD *)&v12 + 1));
      if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v12 + 1) + 12LL)) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v12 + 1) + 8LL))(*((_QWORD *)&v12 + 1));
    }
  }
  sub_1800889A0(a2, a1 + 144, v15);
  return a2;
}
