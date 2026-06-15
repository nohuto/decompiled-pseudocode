/*
 * XREFs of sub_1800D1280 @ 0x1800D1280
 * Callers:
 *     <none>
 * Callees:
 *     sub_180027D40 @ 0x180027D40 (sub_180027D40.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800D1280(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  _DWORD *v4; // rdx
  _DWORD *v5; // rcx
  _QWORD *v6; // r8
  __int64 v7; // r9

  v3 = 0;
  *a3 = 0LL;
  if ( sub_180027D40(a2, &stru_18015B900) || sub_180027D40(v5, v4) )
  {
    *v6 = v7;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
  else
  {
    return (unsigned int)-2147467262;
  }
  return v3;
}
