/*
 * XREFs of sub_18000D738 @ 0x18000D738
 * Callers:
 *     sub_1801255D7 @ 0x1801255D7 (sub_1801255D7.c)
 * Callees:
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000D738(__int64 a1)
{
  __int64 result; // rax
  __int64 *v3; // rbp
  char *v4; // rbx
  int v5; // eax
  int v6; // ecx
  __int64 *v7; // rdx
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  std::exception *v9; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+50h] [rbp+18h]

  result = qword_18021F4A0();
  if ( (int)result >= 0 )
    goto LABEL_14;
  while ( a1 )
  {
LABEL_14:
    try
    {
      throw;
    }
    catch ( std::exception *v9 )
    {
      v7 = &v8;
      v3 = v7;
      v4 = (char *)v7[8];
      if ( v4 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3[4] + 8LL))(v3[4]);
        sub_18000E9D0(v4);
      }
      v5 = *((_DWORD *)v3 + 20);
      v6 = -2147024322;
      if ( v5 >= 0 )
        v5 = v6;
      *((_DWORD *)v3 + 20) = v5;
      return v10;
    }
    catch ( ... )
    {
      return v10;
    }
  }
  return result;
}
