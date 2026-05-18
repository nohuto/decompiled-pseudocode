/*
 * XREFs of sub_18011A2D0 @ 0x18011A2D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001174 @ 0x180001174 (sub_180001174.c)
 *     sub_180118F70 @ 0x180118F70 (sub_180118F70.c)
 *     sub_18011A0CC @ 0x18011A0CC (sub_18011A0CC.c)
 */

const char *__fastcall sub_18011A2D0(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // rbx
  unsigned __int64 v10; // rax
  const char *result; // rax
  const char *v12; // r8
  _QWORD *v13; // rax
  bool v14; // cf
  __int64 v15; // rcx
  __int64 v16; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+68h] [rbp-98h] BYREF
  __int64 v18; // [rsp+70h] [rbp-90h] BYREF
  __int64 v19; // [rsp+78h] [rbp-88h] BYREF
  __int64 v20; // [rsp+80h] [rbp-80h] BYREF
  __int64 v21; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v22[176]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v23; // [rsp+150h] [rbp+50h] BYREF
  __int64 v24; // [rsp+158h] [rbp+58h] BYREF

  v5 = *(_QWORD **)(a1 + 112);
  v10 = sub_180118F70((__int64)v5);
  sub_18011A0CC(v5, v10, (_BYTE *)(a1 + 120));
  result = "success";
  v12 = "fail";
  if ( a2 )
    v12 = "success";
  if ( (unsigned int)dword_180214B90 > 5 && (qword_180214BA0 & 0x400000000000LL) != 0 )
  {
    result = (const char *)(qword_180214BA8 & 0x400000000000LL);
    if ( (qword_180214BA8 & 0x400000000000LL) == qword_180214BA8 )
    {
      v23 = a5;
      v13 = (_QWORD *)(a1 + 48);
      v14 = *(_QWORD *)(a1 + 72) < 0x10uLL;
      v16 = a4;
      if ( !v14 )
        v13 = (_QWORD *)*v13;
      v15 = *(_QWORD *)(a1 + 112);
      v17 = (__int64)v13;
      v20 = *(_QWORD *)(a1 + 16);
      v18 = a3;
      v19 = (__int64)v12;
      LODWORD(v24) = 1;
      if ( v15 )
        sub_18011A0CC((_QWORD *)v15, _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 144), 0LL), v22);
      else
        v22[0] = 0;
      v21 = (__int64)v22;
      return (const char *)sub_180001174(
                             (int)&dword_180214B90,
                             (int)&dword_1801EDF89,
                             0,
                             0,
                             (void **)&v21,
                             (__int64)&v24,
                             &v20,
                             (void **)&v19,
                             (void **)&v18,
                             (void **)&v17,
                             (void **)&v16,
                             (void **)&v23);
    }
  }
  return result;
}
