/*
 * XREFs of sub_180141124 @ 0x180141124
 * Callers:
 *     sub_180066570 @ 0x180066570 (sub_180066570.c)
 * Callees:
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180140D2C @ 0x180140D2C (sub_180140D2C.c)
 *     sub_180141540 @ 0x180141540 (sub_180141540.c)
 *     sub_180141778 @ 0x180141778 (sub_180141778.c)
 *     sub_1801419F8 @ 0x1801419F8 (sub_1801419F8.c)
 *     sub_180142900 @ 0x180142900 (sub_180142900.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180141124(__int64 *a1)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  LPVOID v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rsi
  int v8; // eax

  v2 = 0;
  v3 = 0LL;
  if ( a1 )
  {
    *a1 = 0LL;
    v4 = sub_180055F40(0xE0uLL);
    if ( v4 )
    {
      v6 = sub_180140D2C((__int64)v4, v5);
      v7 = v6;
      v3 = v6;
      if ( v6 )
      {
        v8 = sub_1801419F8(v6);
        if ( v8 < 0
          || (v8 = sub_180141540(v7), v8 < 0)
          || (v8 = sub_180141778(v7), v8 < 0)
          || (v8 = sub_180142900(v7), v8 < 0) )
        {
          v2 = v8;
        }
        else
        {
          v3 = 0LL;
          *a1 = v7;
        }
        goto LABEL_13;
      }
    }
    else
    {
      v3 = 0LL;
    }
    v2 = -2147024882;
  }
  else
  {
    v2 = -2147467261;
  }
LABEL_13:
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return v2;
}
