/*
 * XREFs of ?CaptureUsermodeParameters@QueryTrueTypeOutlineRequest@@UAEXPAX@Z @ 0x24AE6F
 * Callers:
 *     _draw_nf_tb_no_to_temp_start@28 @ 0xBB33A (_draw_nf_tb_no_to_temp_start@28.c)
 *     _draw_f_ntb_o_to_temp_start@28 @ 0x246E3F (_draw_f_ntb_o_to_temp_start@28.c)
 *     _draw_f_tb_no_to_temp_start@28 @ 0x246F32 (_draw_f_tb_no_to_temp_start@28.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     ?CaptureUsermodeFontObj@FontDriverDdiRequest@@KG_NPAU_FONTOBJ@@0@Z @ 0x8C1D4 (-CaptureUsermodeFontObj@FontDriverDdiRequest@@KG_NPAU_FONTOBJ@@0@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

void __thiscall QueryTrueTypeOutlineRequest::CaptureUsermodeParameters(
        QueryTrueTypeOutlineRequest *this,
        unsigned int a2)
{
  int v3; // edx
  const void *v4; // edi
  int v5; // esi
  void *v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // eax
  unsigned int v9; // eax
  int v10; // ecx
  void *v11; // edi
  unsigned int v12; // [esp+0h] [ebp-50h]
  unsigned int v13; // [esp+0h] [ebp-50h]
  unsigned int *v14; // [esp+4h] [ebp-4Ch]
  unsigned int *v15; // [esp+4h] [ebp-4Ch]
  unsigned int *v16; // [esp+1Ch] [ebp-34h]
  const void *v17; // [esp+28h] [ebp-28h]
  unsigned int v18; // [esp+2Ch] [ebp-24h]
  unsigned int v19; // [esp+30h] [ebp-20h]
  unsigned int v20; // [esp+34h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+38h] [ebp-18h]

  ms_exc.registration.TryLevel = 0;
  v3 = *(_DWORD *)(a2 + 4);
  v17 = *(const void **)(a2 + 16);
  v4 = *(const void **)(a2 + 24);
  v5 = *(_DWORD *)(a2 + 28);
  ms_exc.registration.TryLevel = -2;
  if ( v3 == *((_DWORD *)this + 14)
    && FontDriverDdiRequest::CaptureUsermodeFontObj(*((_DWORD *)this + 7), v3)
    && v5 >= 0
    && v4 == *((const void **)this + 16) )
  {
    v6 = (void *)*((_DWORD *)this + 12);
    if ( v6 && v5 > 0 )
    {
      ms_exc.registration.TryLevel = 1;
      memcpy(v6, v4, *((_DWORD *)this + 11));
      ms_exc.registration.TryLevel = -2;
      v19 = *((_DWORD *)this + 11);
      if ( v5 < v19 )
        v19 = v5;
      v7 = 0;
LABEL_10:
      a2 = 0;
      if ( (ULongAdd(16, v7, (int *)&a2, v12, v14) & 0x80000000) == 0 && a2 <= v19 )
      {
        v16 = (unsigned int *)(v7 + *((_DWORD *)this + 12));
        v18 = *v16;
        if ( *v16 >= 0x10 && v19 - v7 >= *v16 )
        {
          v8 = 16;
          a2 = 16;
          while ( 1 )
          {
            v20 = 0;
            if ( (ULongAdd(12, v8, (int *)&v20, v12, v14) & 0x80000000) != 0 || v18 < v20 )
              break;
            v9 = 8 * *(unsigned __int16 *)((char *)v16 + a2 + 2);
            if ( is_mul_ok(8u, *(unsigned __int16 *)((char *)v16 + a2 + 2)) )
            {
              v10 = 0;
            }
            else
            {
              v10 = -2147024362;
              v9 = -1;
            }
            v20 = v9;
            if ( v10 < 0 || (ULongAdd(4, v9, (int *)&v20, v13, v15) & 0x80000000) != 0 || v18 - a2 < v20 )
              break;
            v8 = v20 + a2;
            a2 = v8;
            if ( v8 >= v18 )
            {
              v7 += v18;
              if ( v7 < v19 )
                goto LABEL_10;
              goto LABEL_25;
            }
          }
        }
      }
    }
    else
    {
LABEL_25:
      v11 = (void *)*((_DWORD *)this + 10);
      if ( v11 )
      {
        if ( v17 != *((const void **)this + 15) )
          return;
        qmemcpy(v11, v17, 0x40u);
        ms_exc.registration.TryLevel = -2;
      }
      else if ( v17 )
      {
        return;
      }
      *((_DWORD *)this + 13) = v5;
    }
  }
}
