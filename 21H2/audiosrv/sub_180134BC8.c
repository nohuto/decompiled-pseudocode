/*
 * XREFs of sub_180134BC8 @ 0x180134BC8
 * Callers:
 *     sub_1801356EC @ 0x1801356EC (sub_1801356EC.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180134BC8(_QWORD *a1)
{
  HRESULT v2; // ebx
  LPVOID v3; // rcx
  LPVOID v4; // rax
  LPVOID ppv; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  ppv = 0LL;
  v2 = CoCreateInstance(&stru_180173848, 0LL, 4u, &stru_180176460, &ppv);
  if ( v2 == -2147024891 )
  {
    v3 = ppv;
    ppv = 0LL;
    if ( v3 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v3 + 16LL))(v3);
    v2 = CoCreateInstance(&stru_180173838, 0LL, 4u, &stru_180176460, &ppv);
  }
  if ( v2 >= 0 )
  {
    v4 = ppv;
    ppv = 0LL;
    *a1 = v4;
  }
  sub_18000F708((__int64 *)&ppv);
  return (unsigned int)v2;
}
