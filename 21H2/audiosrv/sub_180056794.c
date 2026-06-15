/*
 * XREFs of sub_180056794 @ 0x180056794
 * Callers:
 *     sub_1800565B4 @ 0x1800565B4 (sub_1800565B4.c)
 * Callees:
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     sub_180056938 @ 0x180056938 (sub_180056938.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180056794(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  unsigned int v6; // esi
  __int64 v7; // rbx
  LPVOID v8; // rax
  __int64 v9; // rdi
  int v10; // eax

  v6 = 0;
  v7 = 0LL;
  if ( a4 )
  {
    *a4 = 0LL;
    v8 = sub_180055F40(0x518uLL);
    if ( v8 )
      v9 = sub_180056938(v8);
    else
      v9 = 0LL;
    v7 = v9;
    if ( v9 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 160LL))(v9, a1);
      if ( v10 >= 0 )
      {
        v7 = 0LL;
        *a4 = v9;
      }
      else
      {
        v6 = v10;
      }
    }
    else
    {
      v6 = -2147024882;
    }
  }
  else
  {
    v6 = -2147467261;
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v6;
}
