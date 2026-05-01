/*
 * XREFs of sub_180031EC0 @ 0x180031EC0
 * Callers:
 *     sub_180031760 @ 0x180031760 (sub_180031760.c)
 * Callees:
 *     sub_180016088 @ 0x180016088 (sub_180016088.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180031EC0(__int64 a1, HSTRING a2, _QWORD *a3)
{
  __int64 v3; // rax
  bool v4; // di
  int v5; // ebx
  __int64 v9; // rsi
  unsigned int v10; // r12d
  __int64 v11; // r14
  __int64 v12; // rcx
  int v13; // eax
  bool v15; // [rsp+60h] [rbp+8h] BYREF
  HSTRING string; // [rsp+78h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 72);
  v4 = 0;
  v5 = 0;
  v15 = 0;
  v9 = 0LL;
  v10 = *(_DWORD *)(v3 + 12);
  while ( (unsigned int)v9 < v10 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * v9 + 16);
    string = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v11 + 48LL))(v11, &string);
    if ( v5 >= 0 )
    {
      v13 = sub_180016088(v12, a2, string, &v15);
      v4 = v15;
      v5 = v13;
      if ( v13 >= 0 && v15 )
      {
        v5 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v11 + 56LL))(v11, a3);
        WindowsDeleteString(string);
        break;
      }
    }
    WindowsDeleteString(string);
    string = 0LL;
    v9 = (unsigned int)(v9 + 1);
    if ( v5 < 0 )
      goto LABEL_13;
  }
  if ( v5 < 0 )
    goto LABEL_13;
  if ( !v4 )
    v5 = -2147483637;
  if ( v5 < 0 )
LABEL_13:
    *a3 = 0LL;
  return (unsigned int)v5;
}
