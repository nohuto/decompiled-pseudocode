/*
 * XREFs of draw_f_tb_no_to_temp_start @ 0x1C02D9930
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall draw_f_tb_no_to_temp_start(__int64 a1, int a2, __int64 a3, int a4, unsigned int a5, int a6)
{
  __int64 result; // rax
  __int64 v7; // rsi
  int v9; // edi
  int v11; // ebx
  _DWORD *v12; // rdx
  int v13; // eax
  unsigned int v14; // r13d
  int v15; // ecx
  __int64 v16; // r11
  int v17; // r14d
  int v18; // r9d
  __int64 v19; // r8
  __int64 v20; // rcx

  if ( a2 )
  {
    v7 = 0LL;
    v9 = a2;
    v11 = *(_DWORD *)(a1 + 16) - a4;
    do
    {
      --v9;
      v12 = **(_DWORD ***)(a1 + 24 * v7 + 8);
      v13 = v12[2];
      v14 = v12[3];
      v15 = v11 + *v12;
      v16 = a3 + ((__int64)v15 >> 3);
      v17 = (v13 + 7) >> 3;
      v18 = (v13 + (((unsigned __int8)v11 + *(_BYTE *)v12) & 7) + 7) >> 3;
      if ( v18 > 4 )
      {
        v20 = 0LL;
        if ( v18 > v17 )
          v20 = 2LL;
        result = OrAllTableWide[((((_BYTE)v11 + *(_BYTE *)v12) & 7) == 0) | (unsigned __int64)v20](
                   v14,
                   ((_BYTE)v11 + *(_BYTE *)v12) & 7,
                   a5,
                   (int)(v12 + 4),
                   v16,
                   v17,
                   v18);
      }
      else
      {
        v19 = 0LL;
        if ( v18 > v17 )
          v19 = 2LL;
        result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _DWORD *, __int64, int))OrInitialTableNarrow[((((_BYTE)v11 + *(_BYTE *)v12) & 7) == 0) | (unsigned int)(4 * ((v13 + (((unsigned __int8)v11 + *(_BYTE *)v12) & 7) + 7) >> 3)) | (unsigned __int64)v19])(
                   v14,
                   ((_BYTE)v11 + *(_BYTE *)v12) & 7,
                   a5,
                   v12 + 4,
                   a3 + ((__int64)v15 >> 3),
                   v17);
      }
      v11 += a6;
      v7 = (unsigned int)(v7 + 1);
    }
    while ( v9 );
  }
  return result;
}
