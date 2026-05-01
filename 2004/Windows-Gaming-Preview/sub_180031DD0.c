/*
 * XREFs of sub_180031DD0 @ 0x180031DD0
 * Callers:
 *     sub_180031660 @ 0x180031660 (sub_180031660.c)
 * Callees:
 *     sub_180016088 @ 0x180016088 (sub_180016088.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180031DD0(__int64 a1, HSTRING a2, _BYTE *a3)
{
  int v3; // ebx
  __int64 v4; // rax
  __int64 v8; // rdi
  unsigned int v9; // r14d
  __int64 v10; // rcx
  __int64 v11; // rcx
  HSTRING v12; // rcx
  bool v14; // [rsp+50h] [rbp+8h] BYREF
  HSTRING string; // [rsp+60h] [rbp+18h] BYREF

  *a3 = 0;
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 72);
  v14 = 0;
  v8 = 0LL;
  v9 = *(_DWORD *)(v4 + 12);
  while ( (unsigned int)v8 < v9 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * v8 + 16);
    string = 0LL;
    v3 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v10 + 48LL))(v10, &string);
    if ( v3 >= 0 )
    {
      v3 = sub_180016088(v11, a2, string, &v14);
      if ( v3 >= 0 && v14 )
      {
        v12 = string;
        *a3 = 1;
        WindowsDeleteString(v12);
        return (unsigned int)v3;
      }
    }
    WindowsDeleteString(string);
    string = 0LL;
    v8 = (unsigned int)(v8 + 1);
    if ( v3 < 0 )
      return (unsigned int)v3;
  }
  return (unsigned int)v3;
}
