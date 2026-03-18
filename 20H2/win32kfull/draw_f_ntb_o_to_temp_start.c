/*
 * XREFs of draw_f_ntb_o_to_temp_start @ 0x1C02D97B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall draw_f_ntb_o_to_temp_start(__int64 a1, int a2, __int64 a3, int a4, unsigned int a5, int a6, int a7)
{
  __int64 v7; // rsi
  int v8; // ebx
  int v9; // r14d
  int v10; // edi
  __int64 v12; // rdx
  int v13; // eax
  int v14; // r11d
  int v15; // r9d
  __int64 v16; // r12
  __int64 v17; // r8
  __int64 result; // rax
  __int64 v19; // rcx
  __int64 v20; // [rsp+80h] [rbp+18h]
  unsigned int v21; // [rsp+A0h] [rbp+38h]

  if ( a2 )
  {
    v20 = a3;
    v7 = 0LL;
    v8 = *(_DWORD *)(a1 + 16) - a4;
    v9 = *(_DWORD *)(a1 + 20) - a7;
    v10 = a2;
    do
    {
      --v10;
      v12 = **(_QWORD **)(a1 + 24 * v7 + 8);
      v13 = *(_DWORD *)(v12 + 8);
      v14 = (v13 + 7) >> 3;
      v15 = (v13 + (((unsigned __int8)v8 + *(_BYTE *)v12) & 7) + 7) >> 3;
      v16 = a3 + (int)(a5 * (v9 + *(_DWORD *)(v12 + 4))) + ((__int64)(v8 + *(_DWORD *)v12) >> 3);
      v21 = *(_DWORD *)(v12 + 12);
      if ( v15 > 4 )
      {
        v19 = 0LL;
        if ( v15 > v14 )
          v19 = 2LL;
        result = OrAllTableWide[((((_BYTE)v8 + *(_BYTE *)v12) & 7) == 0) | (unsigned __int64)v19](
                   v21,
                   ((_BYTE)v8 + *(_BYTE *)v12) & 7,
                   a5,
                   v12 + 16,
                   v16,
                   v14,
                   v15);
      }
      else
      {
        v17 = 0LL;
        if ( v15 > v14 )
          v17 = 2LL;
        result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64, __int64, int))OrAllTableNarrow[((((_BYTE)v8 + *(_BYTE *)v12) & 7) == 0) | (unsigned int)(4 * v15) | (unsigned __int64)v17])(
                   v21,
                   ((_BYTE)v8 + *(_BYTE *)v12) & 7,
                   a5,
                   v12 + 16,
                   v16,
                   v14);
      }
      v8 += a6;
      v7 = (unsigned int)(v7 + 1);
      a3 = v20;
    }
    while ( v10 );
  }
  return result;
}
