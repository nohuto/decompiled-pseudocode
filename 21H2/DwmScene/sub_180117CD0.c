/*
 * XREFs of sub_180117CD0 @ 0x180117CD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000154C @ 0x18000154C (sub_18000154C.c)
 *     sub_180118F70 @ 0x180118F70 (sub_180118F70.c)
 *     sub_18011A0CC @ 0x18011A0CC (sub_18011A0CC.c)
 */

__int64 __fastcall sub_180117CD0(__int64 *a1, __int64 a2)
{
  void *v2; // rbx
  __int64 result; // rax
  volatile signed __int64 *v6; // rcx
  __int64 v7; // [rsp+50h] [rbp-59h] BYREF
  __int64 v8; // [rsp+58h] [rbp-51h] BYREF
  char v9; // [rsp+60h] [rbp-49h] BYREF
  __int64 v10; // [rsp+110h] [rbp+67h] BYREF
  __int64 v11; // [rsp+120h] [rbp+77h] BYREF
  __int64 v12; // [rsp+128h] [rbp+7Fh] BYREF

  v2 = (void *)a1[14];
  sub_180118F70(v2);
  result = sub_18011A0CC(v2);
  if ( (unsigned int)dword_180214B90 > 5 && (qword_180214BA0 & 0x400000000000LL) != 0 )
  {
    result = qword_180214BA8 & 0x400000000000LL;
    if ( (qword_180214BA8 & 0x400000000000LL) == qword_180214BA8 )
    {
      v6 = (volatile signed __int64 *)a1[14];
      v12 = a1[3];
      v7 = a1[1];
      v11 = a2;
      LODWORD(v10) = 1;
      if ( v6 )
      {
        _InterlockedExchangeAdd64(v6 + 18, 0LL);
        sub_18011A0CC((void *)v6);
      }
      else
      {
        v9 = 0;
      }
      v8 = (__int64)&v9;
      return sub_18000154C(
               (int)&dword_180214B90,
               (int)&dword_1801EDF10,
               0,
               0,
               (void **)&v8,
               (__int64)&v10,
               &v7,
               &v12,
               (void **)&v11);
    }
  }
  return result;
}
