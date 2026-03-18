/*
 * XREFs of ?CaptureUsermodeParameters@QueryGlyphAttrsRequest@@UAEXPAX@Z @ 0x24AD24
 * Callers:
 *     _draw_nf_tb_no_to_temp_start@28 @ 0xBB33A (_draw_nf_tb_no_to_temp_start@28.c)
 *     _draw_f_ntb_o_to_temp_start@28 @ 0x246E3F (_draw_f_ntb_o_to_temp_start@28.c)
 *     _draw_f_tb_no_to_temp_start@28 @ 0x246F32 (_draw_f_tb_no_to_temp_start@28.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     ?CaptureUsermodeFontObj@FontDriverDdiRequest@@KG_NPAU_FONTOBJ@@0@Z @ 0x8C1D4 (-CaptureUsermodeFontObj@FontDriverDdiRequest@@KG_NPAU_FONTOBJ@@0@Z.c)
 *     ?Win32ProbeForRead@@YGXPAXKK@Z @ 0x8D388 (-Win32ProbeForRead@@YGXPAXKK@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

void __thiscall QueryGlyphAttrsRequest::CaptureUsermodeParameters(QueryGlyphAttrsRequest *this, unsigned int pv)
{
  void **v2; // ebx
  void *v3; // edi
  unsigned int *v4; // eax
  unsigned int *v5; // esi
  unsigned int v6; // edx
  unsigned int v7; // [esp+0h] [ebp-38h]
  unsigned int v8; // [esp+0h] [ebp-38h]
  unsigned int v9; // [esp+0h] [ebp-38h]
  unsigned int v10; // [esp+0h] [ebp-38h]
  unsigned int v11; // [esp+4h] [ebp-34h]
  unsigned int v12; // [esp+4h] [ebp-34h]
  unsigned int *v13; // [esp+4h] [ebp-34h]
  unsigned int *v14; // [esp+4h] [ebp-34h]

  v2 = *(void ***)(pv + 8);
  if ( *(_DWORD *)pv == *((_DWORD *)this + 9) )
  {
    if ( FontDriverDdiRequest::CaptureUsermodeFontObj(*((_DWORD *)this + 6), *(_DWORD *)pv) )
    {
      if ( v2 )
      {
        Win32ProbeForRead(16, (ULONG)v2, (void *)4, v7, v11);
        v3 = *v2;
        if ( (unsigned int)*v2 >= 0x10 )
        {
          Win32ProbeForRead((int)v3, (ULONG)v2, (void *)4, v8, v12);
          v4 = (unsigned int *)EngAllocMem(0, (ULONG)v3, 0x74614446u);
          v5 = v4;
          pv = (unsigned int)v4;
          if ( v4 )
          {
            memcpy(v4, v2, (size_t)v3);
            *v5 = (unsigned int)v3;
            pv = 0;
            if ( (ULongAdd(7, v5[1], (int *)&pv, v9, v13) & 0x80000000) == 0
              && (v6 = pv >> 3, pv = 0, (ULongAdd(v6, 0xCu, (int *)&pv, v10, v14) & 0x80000000) == 0)
              && (void *)pv == v3 )
            {
              *((_DWORD *)this + 8) = v5;
            }
            else
            {
              EngFreeMem(v5);
            }
          }
        }
      }
    }
  }
}
