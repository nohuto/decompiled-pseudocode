/*
 * XREFs of sub_18012E318 @ 0x18012E318
 * Callers:
 *     sub_18012F780 @ 0x18012F780 (sub_18012F780.c)
 *     sub_180130E20 @ 0x180130E20 (sub_180130E20.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18012E018 @ 0x18012E018 (sub_18012E018.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18012E318(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, float a6)
{
  int v8; // ebx
  char v9; // r8
  char v10; // r9
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  LPVOID ppv; // [rsp+38h] [rbp-10h] BYREF

  ppv = 0LL;
  v12 = 0LL;
  if ( (unsigned int)MMDevAPI_7(a1) == 3 )
  {
    v8 = 0;
  }
  else
  {
    v8 = CoCreateInstance(&rclsid, 0LL, 0x17u, &stru_18015B0C0, &ppv);
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, a1, &v12);
      if ( v8 >= 0 )
        v8 = sub_18012E018(v12, a2, v9, v10, a5, a6);
    }
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v8;
}
