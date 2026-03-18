/*
 * XREFs of bDfbSurfacesMigrated @ 0x1C009C330
 * Callers:
 *     pProcessDfbSurfaces2 @ 0x1C009B1F0 (pProcessDfbSurfaces2.c)
 * Callees:
 *     HmgShareLockCheck @ 0x1C0081AB0 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0082370 (HmgDecrementShareReferenceCountEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     MulFindDisplayDhsurfFromMetaSurf @ 0x1C014BFA8 (MulFindDisplayDhsurfFromMetaSurf.c)
 */

__int64 __fastcall bDfbSurfacesMigrated(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  int v5; // r11d
  __int64 v6; // r15
  __int64 (__fastcall *v7)(_QWORD, __int64, _QWORD, _QWORD, __int64, _DWORD, _DWORD, __int64 *); // r13
  __int64 DisplayDhsurfFromMetaSurf; // r12
  __int64 v9; // rbx
  int v10; // r14d
  __int64 v11; // rax
  _QWORD *i; // rdx
  __int64 v14; // rdx
  _QWORD *v15; // r13
  __int64 v16; // rax
  __int64 v17; // [rsp+90h] [rbp+8h] BYREF
  __int64 v18; // [rsp+98h] [rbp+10h]

  v2 = 0;
  if ( (*(_DWORD *)(a2 + 112) & 0x800000) != 0 )
  {
    v5 = *(_DWORD *)(a1 + 40);
    if ( (v5 & 0x20000) != 0 )
    {
      for ( i = **(_QWORD ***)(a1 + 1800); i; i = (_QWORD *)*i )
      {
        if ( *(_DWORD *)(*(_QWORD *)(i[6] + 1792LL) + 24LL) != 1 )
          return v2;
      }
    }
    v6 = 0LL;
    if ( (*(_DWORD *)(a1 + 1824) & 0x8000000) != 0 )
      goto LABEL_16;
    v7 = *(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64, _DWORD, _DWORD, __int64 *))(a1 + 3440);
    if ( !v7 )
      goto LABEL_16;
    DisplayDhsurfFromMetaSurf = *(_QWORD *)(a2 + 24);
    if ( (*(_DWORD *)(*(_QWORD *)(a2 + 48) + 40LL) & 0x20000) == 0
      || (DisplayDhsurfFromMetaSurf = MulFindDisplayDhsurfFromMetaSurf()) != 0 )
    {
      v9 = *(_QWORD *)(a2 + 56);
      v10 = *(_DWORD *)(a2 + 120);
      v17 = *(_QWORD *)(a2 + 568);
      if ( (v5 & 0x4000000) != 0 )
      {
        v14 = *(_QWORD *)(a1 + 1800);
        v18 = v14;
        v15 = *(_QWORD **)v14;
        while ( v15 && !v6 )
        {
          *(_QWORD *)(v14 + 104) = *(_QWORD *)(*(_QWORD *)(v15[7] + 2576LL) + 248LL);
          v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64, _DWORD, _DWORD, __int64 *))(a1 + 3440))(
                  *(_QWORD *)(a1 + 1800),
                  v9,
                  *(unsigned int *)(a2 + 96),
                  v10 | 0x10u,
                  DisplayDhsurfFromMetaSurf,
                  *(_DWORD *)(a2 + 124),
                  0,
                  &v17);
          v15 = (_QWORD *)*v15;
          v6 = v16;
          v14 = v18;
        }
      }
      else
      {
        v6 = v7(
               *(_QWORD *)(a1 + 1800),
               v9,
               *(unsigned int *)(a2 + 96),
               v10 | 0x10u,
               DisplayDhsurfFromMetaSurf,
               *(_DWORD *)(a2 + 124),
               0,
               &v17);
      }
      v11 = HmgShareLockCheck(v6, 5);
      if ( v11 )
      {
        *(_QWORD *)(a2 + 560) = v11;
        if ( (*(_DWORD *)(v11 + 116) & 0x2000) != 0 )
          *(_DWORD *)(a2 + 116) |= 0x2000u;
        *(_DWORD *)(v11 + 120) = v10;
        if ( (*(_DWORD *)(a1 + 40) & 0x20000) == 0 )
        {
          if ( (v10 & 1) != 0 )
          {
            *(_DWORD *)(v11 + 116) |= 1u;
            *(_QWORD *)(v11 + 568) = v17;
            *(_QWORD *)(v11 + 576) = *(_QWORD *)(a2 + 576);
            *(_DWORD *)(v11 + 124) = *(_DWORD *)(a2 + 124);
          }
          else if ( (v10 & 2) != 0 )
          {
            *(_DWORD *)(v11 + 116) |= 8u;
          }
          *(_DWORD *)(v11 + 112) |= 0x4804000u;
        }
        HmgDecrementShareReferenceCountEx(v11, 0LL);
      }
LABEL_16:
      LOBYTE(v2) = v6 != 0;
    }
  }
  return v2;
}
