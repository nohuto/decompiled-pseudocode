/*
 * XREFs of DllGetClassObject @ 0x180009670
 * Callers:
 *     <none>
 * Callees:
 *     sub_180009A40 @ 0x180009A40 (sub_180009A40.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

HRESULT __stdcall DllGetClassObject(const IID *const rclsid, const IID *const riid, LPVOID *ppv)
{
  int v4; // ebp
  __int64 *v6; // rbx
  unsigned __int64 v7; // rdx
  bool i; // cf
  __int64 v9; // r9
  _QWORD *v10; // rax
  int v12; // [rsp+50h] [rbp+18h] BYREF

  v4 = (int)riid;
  InitOnceExecuteOnce(&InitOnce, InitFn, 0LL, 0LL);
  byte_18005AE90 = 1;
  *ppv = 0LL;
  v6 = (__int64 *)((*(__int64 (__fastcall **)(int *))(*(_QWORD *)&qword_18005AE88 + 32LL))(&qword_18005AE88) + 8);
  v7 = (*(__int64 (__fastcall **)(int *))(*(_QWORD *)&qword_18005AE88 + 40LL))(&qword_18005AE88);
  for ( i = (unsigned __int64)v6 < v7; i; i = (unsigned __int64)v6 < v7 )
  {
    v9 = *v6;
    if ( *v6 )
    {
      v10 = *(_QWORD **)(v9 + 8);
      if ( *v10 == *(_QWORD *)&rclsid->Data1 && v10[1] == *(_QWORD *)rclsid->Data4 )
      {
        v12 = 1;
        return sub_180009A40((int)&qword_18005AE88, (int)&v12, v4, v9, ppv);
      }
    }
    ++v6;
  }
  return -2147221231;
}
