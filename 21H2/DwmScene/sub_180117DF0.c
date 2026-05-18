/*
 * XREFs of sub_180117DF0 @ 0x180117DF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001000 @ 0x180001000 (sub_180001000.c)
 *     sub_180118F70 @ 0x180118F70 (sub_180118F70.c)
 *     sub_18011A0CC @ 0x18011A0CC (sub_18011A0CC.c)
 */

const char *__fastcall sub_180117DF0(__int64 *a1, char a2, __int64 a3, __int64 a4)
{
  void *v4; // rbx
  const char *result; // rax
  const char *v10; // r8
  _QWORD *v11; // rax
  volatile signed __int64 *v12; // rcx
  __int64 v13; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v14; // [rsp+68h] [rbp-98h] BYREF
  __int64 v15; // [rsp+70h] [rbp-90h] BYREF
  __int64 v16; // [rsp+78h] [rbp-88h] BYREF
  __int64 v17; // [rsp+80h] [rbp-80h] BYREF
  char v18; // [rsp+90h] [rbp-70h] BYREF
  __int64 v19; // [rsp+150h] [rbp+50h] BYREF
  __int64 v20; // [rsp+158h] [rbp+58h] BYREF

  v4 = (void *)a1[14];
  sub_180118F70(v4);
  sub_18011A0CC(v4);
  result = "success";
  v10 = "fail";
  if ( a2 )
    v10 = "success";
  if ( (unsigned int)dword_180214B90 > 5 && (qword_180214BA0 & 0x400000000000LL) != 0 )
  {
    result = (const char *)(qword_180214BA8 & 0x400000000000LL);
    if ( (qword_180214BA8 & 0x400000000000LL) == qword_180214BA8 )
    {
      v11 = a1 + 6;
      v19 = a4;
      if ( (unsigned __int64)a1[9] >= 0x10 )
        v11 = (_QWORD *)*v11;
      v12 = (volatile signed __int64 *)a1[14];
      v13 = (__int64)v11;
      v16 = a1[1];
      v14 = a3;
      v15 = (__int64)v10;
      LODWORD(v20) = 1;
      if ( v12 )
      {
        _InterlockedExchangeAdd64(v12 + 18, 0LL);
        sub_18011A0CC((void *)v12);
      }
      else
      {
        v18 = 0;
      }
      v17 = (__int64)&v18;
      return (const char *)sub_180001000(
                             (int)&dword_180214B90,
                             (int)&dword_1801ED761,
                             0,
                             0,
                             (void **)&v17,
                             (__int64)&v20,
                             &v16,
                             (void **)&v15,
                             (void **)&v14,
                             (void **)&v13,
                             (void **)&v19);
    }
  }
  return result;
}
