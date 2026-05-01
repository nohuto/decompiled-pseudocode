/*
 * XREFs of sub_180043330 @ 0x180043330
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800436D4 @ 0x1800436D4 (sub_1800436D4.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180043330(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, int a6, int *a7)
{
  int *v7; // rsi
  signed int v12; // ebx
  _QWORD *v13; // rax
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  int v16; // eax

  v7 = a7;
  *a7 = 0;
  v12 = sub_1800436D4((LPUNKNOWN)a1);
  if ( v12 >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, __int64, int, int *))(MEMORY[0] + 32LL))(
            0LL,
            a2,
            a3,
            a4,
            a5,
            a6,
            v7);
    if ( v12 >= 0 && a4 != 3 )
    {
      v13 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
      if ( *v13 || v13[1] )
      {
        v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64, int, int **))(*(_QWORD *)a1 + 72LL))(
                a1,
                a2,
                a3,
                a4,
                a5,
                a6,
                &a7);
        if ( v12 >= 0 )
        {
          _InterlockedExchange((volatile __int32 *)(a1 + 32), (__int32)a7);
          v14 = *(_DWORD *)(a1 + 32);
          if ( v14 + 4 < v14 )
          {
            return (unsigned int)-2147024362;
          }
          else
          {
            v15 = *v7 + v14 + 4;
            v16 = -1;
            if ( v15 >= *v7 )
              v16 = v15;
            v12 = v15 < *v7 ? 0x80070216 : 0;
            *v7 = v16;
          }
        }
      }
    }
  }
  return (unsigned int)v12;
}
