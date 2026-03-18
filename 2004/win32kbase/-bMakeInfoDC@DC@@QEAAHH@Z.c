/*
 * XREFs of ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C00A5FA0
 * Callers:
 *     GreRestoreDCInternal @ 0x1C00D0C80 (GreRestoreDCInternal.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C008447C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00844C0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C00A609C (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 */

__int64 __fastcall DC::bMakeInfoDC(DC *this, int a2)
{
  int v2; // eax
  unsigned int v3; // edi
  struct tagSIZE v5; // rax
  struct SURFACE *v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+40h] [rbp+18h]

  v2 = *((_DWORD *)this + 9);
  v3 = 0;
  if ( (v2 & 1) == 0 )
  {
    if ( a2 )
    {
      if ( (v2 & 0x200800) == 0 && !*((_DWORD *)this + 8) )
      {
        *((_DWORD *)this + 8) = 2;
        *((_DWORD *)this + 9) = v2 | 0x800;
        *((_QWORD *)this + 260) = *((_QWORD *)this + 62);
        DC::pSurface(this, 0LL);
        v11 = *((_QWORD *)this + 6);
        if ( *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v11).cx == *((_DWORD *)this + 128) )
        {
          v12 = *((_QWORD *)this + 64);
          v5 = PDEVOBJ::sizl((PDEVOBJ *)&v11);
          if ( *(_DWORD *)(*(_QWORD *)&v5 + 4LL) == HIDWORD(v12) )
            return 1;
        }
        *((_QWORD *)this + 64) = **(_QWORD **)&PDEVOBJ::sizl((PDEVOBJ *)&v11);
LABEL_16:
        DC::bSetDefaultRegion(this, v8, v9);
        return 1;
      }
    }
    else if ( (v2 & 0x800) != 0 && *((_DWORD *)this + 8) == 2 )
    {
      v7 = (struct SURFACE *)*((_QWORD *)this + 260);
      *((_DWORD *)this + 9) = v2 & 0xFFFFF7FF;
      *((_DWORD *)this + 8) = 0;
      DC::pSurface(this, v7);
      v10 = *((_QWORD *)this + 62);
      *((_QWORD *)this + 260) = 0LL;
      if ( !v10 || *(_QWORD *)(v10 + 56) == *((_QWORD *)this + 64) )
        return 1;
      *((_QWORD *)this + 64) = *(_QWORD *)(v10 + 56);
      goto LABEL_16;
    }
  }
  return v3;
}
