/*
 * XREFs of sub_1800C2ED0 @ 0x1800C2ED0
 * Callers:
 *     sub_1800C30E0 @ 0x1800C30E0 (sub_1800C30E0.c)
 * Callees:
 *     sub_180053724 @ 0x180053724 (sub_180053724.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800C2D44 @ 0x1800C2D44 (sub_1800C2D44.c)
 *     sub_1800C2E6C @ 0x1800C2E6C (sub_1800C2E6C.c)
 *     sub_1800C3D30 @ 0x1800C3D30 (sub_1800C3D30.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800C2ED0(struct _RTL_CRITICAL_SECTION *a1, __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v3; // edi
  __int64 v4; // r15
  struct _RTL_CRITICAL_SECTION *v5; // r14
  bool v6; // zf
  __int64 v7; // r12
  ATL::CAtlException *v9; // rbx
  ATL::CAtlException *v10; // rbx
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+20h] [rbp-58h]
  ATL::CAtlException *v12; // [rsp+28h] [rbp-50h] BYREF
  ATL::CAtlException *v13; // [rsp+30h] [rbp-48h] BYREF
  ATL::CAtlException *v14; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 v18; // [rsp+98h] [rbp+20h]

  v2 = a1;
  v3 = 0;
  EnterCriticalSection(a1);
  v4 = 0LL;
  v5 = v2 + 1;
  try
  {
    while ( 1 )
    {
      v6 = (unsigned int)v4 == *(_QWORD *)&v2[1].LockCount;
      if ( (unsigned __int64)(unsigned int)v4 >= *(_QWORD *)&v2[1].LockCount )
        break;
      v7 = *a2;
      v5 = v2 + 1;
      if ( *(_QWORD *)sub_1800C2D44(&v2[1].DebugInfo, (unsigned int)v4) == v7 )
      {
        v6 = (unsigned int)v4 == *(_QWORD *)&v2[1].LockCount;
        break;
      }
      v4 = (unsigned int)(v4 + 1);
    }
    if ( v6 )
    {
      try
      {
        v11 = v5;
        v18 = sub_1800C2E6C(v5, a2);
      }
      catch ( ATL::CAtlException *v12 )
      {
        v9 = v12;
        if ( *(_DWORD *)v12 == -1073741571 )
          o__resetstkoflw();
        v3 = *(_DWORD *)v9;
        if ( *(int *)v9 < 0 )
        {
          v2 = a1;
          goto LABEL_28;
        }
        v2 = a1;
      }
      try
      {
        v3 = 0;
        sub_180053724(&v2[1].SpinCount);
      }
      catch ( ATL::CAtlException *v13 )
      {
        v10 = v13;
        if ( *(_DWORD *)v13 == -1073741571 )
          o__resetstkoflw();
        v3 = *(_DWORD *)v10;
        if ( *(int *)v10 >= 0 )
        {
          v2 = a1;
        }
        else
        {
          sub_1800C3D30(v11, v18);
          v2 = a1;
        }
      }
    }
    else
    {
      if ( (PRTL_CRITICAL_SECTION_DEBUG)(unsigned int)v4 >= v2[2].DebugInfo )
        sub_1800B8610(-2147024809);
      ++*(_DWORD *)(v2[1].SpinCount + 4 * v4);
    }
  }
  catch ( ATL::CAtlException *v14 )
  {
    v2 = a1;
    v3 = *(_DWORD *)v14;
  }
LABEL_28:
  LeaveCriticalSection(v2);
  if ( *a2 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*a2 + 16LL))(*a2, *(_QWORD *)*a2);
  return v3;
}
