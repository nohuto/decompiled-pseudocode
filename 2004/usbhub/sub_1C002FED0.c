/*
 * XREFs of sub_1C002FED0 @ 0x1C002FED0
 * Callers:
 *     sub_1C002F6C0 @ 0x1C002F6C0 (sub_1C002F6C0.c)
 *     sub_1C002F830 @ 0x1C002F830 (sub_1C002F830.c)
 *     sub_1C00304E0 @ 0x1C00304E0 (sub_1C00304E0.c)
 *     sub_1C0039198 @ 0x1C0039198 (sub_1C0039198.c)
 *     sub_1C0041890 @ 0x1C0041890 (sub_1C0041890.c)
 *     sub_1C0057020 @ 0x1C0057020 (sub_1C0057020.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1C002FED0(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  _DWORD *v6; // rax
  __int64 result; // rax
  int v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = a4;
  if ( !LODWORD(stru_1C006B480.DeviceQueue.DeviceListHead.Blink) )
    return a3;
  v6 = sub_1C000F050(a1);
  if ( !*((_QWORD *)v6 + 554) )
    return a3;
  result = (*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *))v6 + 554))(*((_QWORD *)v6 + 529), 0LL, a2, &v8);
  if ( !(_DWORD)result )
    return a3;
  return result;
}
