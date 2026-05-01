/*
 * XREFs of ?SetSizeConstraintsForDpi@AppSizeConstraintsCache@@EEAAJIAEBUAPP_SIZE_CONSTRAINTS@@@Z @ 0x180051650
 * Callers:
 *     <none>
 * Callees:
 *     ??$AppSizeConstraintsSet@AEAIAEBUCSize@Geometry@@AEBU12@@ApplicationViewTelemetry@ApplicationViewManagement@@SAXAEAIAEBUCSize@Geometry@@1@Z @ 0x180051728 (--$AppSizeConstraintsSet@AEAIAEBUCSize@Geometry@@AEBU12@@ApplicationViewTelemetry@ApplicationVie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@USIZE_CONSTRAINTS_CACHE_ENTRY@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@USIZE_CONSTRAINTS_CACHE_ENTRY@@@@V?$CSimpleArrayStandardCompareHelper@USIZE_CONSTRAINTS_CACHE_ENTRY@@@@V?$CSimpleArrayStandardMergeHelper@USIZE_CONSTRAINTS_CACHE_ENTRY@@@@@@QEAAJ_K0@Z @ 0x180066EAC (-_EnsureCapacity@-$CTSimpleArray@USIZE_CONSTRAINTS_CACHE_ENTRY@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 */

__int64 __fastcall AppSizeConstraintsCache::SetSizeConstraintsForDpi(
        AppSizeConstraintsCache *this,
        int a2,
        const struct APP_SIZE_CONSTRAINTS *a3)
{
  char *v3; // rdi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  int v8; // ebx
  __int64 v9; // r8
  _DWORD *v11; // r8
  _BYTE v12[20]; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v14; // [rsp+58h] [rbp+10h] BYREF

  v14 = a2;
  v3 = (char *)this + 16;
  v5 = *((_QWORD *)this + 3);
  v6 = 0LL;
  if ( v5 )
  {
    v11 = *(_DWORD **)v3;
    while ( a2 != *v11 )
    {
      ++v6;
      v11 += 5;
      if ( v6 >= v5 )
        goto LABEL_2;
    }
    *(_OWORD *)(*((_QWORD *)this + 2) + 20 * v6 + 4) = *(_OWORD *)a3;
    goto LABEL_6;
  }
LABEL_2:
  *(_DWORD *)v12 = a2;
  *(_OWORD *)&v12[4] = *(_OWORD *)a3;
  if ( v5 != *((_QWORD *)this + 5)
    || (v8 = CTSimpleArray<SIZE_CONSTRAINTS_CACHE_ENTRY,4294967294,CTPolicyCoTaskMem<SIZE_CONSTRAINTS_CACHE_ENTRY>,CSimpleArrayStandardCompareHelper<SIZE_CONSTRAINTS_CACHE_ENTRY>,CSimpleArrayStandardMergeHelper<SIZE_CONSTRAINTS_CACHE_ENTRY>>::_EnsureCapacity(
               v3,
               v5 + 1),
        v8 >= 0) )
  {
    ++*((_QWORD *)v3 + 1);
    v9 = *(_QWORD *)v3 + 4 * (5LL * *((_QWORD *)v3 + 1) - 5);
    if ( v9 )
    {
      *(_OWORD *)v9 = *(_OWORD *)v12;
      *(_DWORD *)(v9 + 16) = *(_DWORD *)&v12[16];
    }
LABEL_6:
    ApplicationViewManagement::ApplicationViewTelemetry::AppSizeConstraintsSet<unsigned int &,Geometry::CSize const &,Geometry::CSize const &>(
      &v14,
      a3,
      (char *)a3 + 8);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5E,
    (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appsizeconstraintscache.cpp",
    (const char *)(unsigned int)v8,
    *(int *)v12);
  return (unsigned int)v8;
}
