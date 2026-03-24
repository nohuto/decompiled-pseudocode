/*
 * XREFs of ??$_Insertion_sort_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@PEAU123@QEAU123@P6A_NAEBU123@2@Z@Z @ 0x180207B44
 * Callers:
 *     ??$_Sort_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@0_JP6A_NAEBU123@2@Z@Z @ 0x18020841C (--$_Sort_unchecked@PEAUAreaTriangle@CPathEmitterArea@EmitterShapes@@P6A_NAEBU123@0@Z@std@@YAXPEA.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     memmove_0 @ 0x1800F47E7 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

char *__fastcall std::_Insertion_sort_unchecked<EmitterShapes::CPathEmitterArea::AreaTriangle *,bool (*)(EmitterShapes::CPathEmitterArea::AreaTriangle const &,EmitterShapes::CPathEmitterArea::AreaTriangle const &)>(
        char *Src,
        char *a2,
        unsigned __int8 (__fastcall *a3)(__int128 *, char *))
{
  char *v6; // r15
  char *i; // rbx
  __int128 v8; // xmm0
  __int64 v9; // xmm1_8
  char *v10; // r14
  int v11; // eax
  __int64 v12; // xmm1_8
  char *j; // rbp
  int v14; // eax
  __int64 v15; // xmm1_8
  __int128 v17; // [rsp+20h] [rbp-58h] BYREF
  __int64 v18; // [rsp+30h] [rbp-48h]
  int v19; // [rsp+38h] [rbp-40h]

  if ( Src != a2 )
  {
    v6 = Src + 28;
    for ( i = Src + 28; i != a2; i += 28 )
    {
      v8 = *(_OWORD *)i;
      v19 = *((_DWORD *)i + 6);
      v9 = *((_QWORD *)i + 2);
      v17 = v8;
      v10 = i;
      v18 = v9;
      if ( a3(&v17, Src) )
      {
        memmove_0(v6, Src, i - Src);
        v11 = v19;
        v12 = v18;
        *(_OWORD *)Src = v17;
        *((_QWORD *)Src + 2) = v12;
        *((_DWORD *)Src + 6) = v11;
      }
      else
      {
        for ( j = i; ; v10 = j )
        {
          j -= 28;
          if ( !a3(&v17, j) )
            break;
          *(_OWORD *)v10 = *(_OWORD *)j;
          *((_QWORD *)v10 + 2) = *((_QWORD *)j + 2);
          *((_DWORD *)v10 + 6) = *((_DWORD *)j + 6);
        }
        v14 = v19;
        v15 = v18;
        *(_OWORD *)v10 = v17;
        *((_QWORD *)v10 + 2) = v15;
        *((_DWORD *)v10 + 6) = v14;
      }
    }
  }
  return a2;
}
