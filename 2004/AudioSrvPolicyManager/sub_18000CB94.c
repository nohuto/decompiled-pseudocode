/*
 * XREFs of sub_18000CB94 @ 0x18000CB94
 * Callers:
 *     sub_18000B210 @ 0x18000B210 (sub_18000B210.c)
 * Callees:
 *     sub_180009280 @ 0x180009280 (sub_180009280.c)
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_18000D0F8 @ 0x18000D0F8 (sub_18000D0F8.c)
 *     sub_18000D4EC @ 0x18000D4EC (sub_18000D4EC.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18000CB94(struct _RTL_CRITICAL_SECTION *a1, __int64 a2)
{
  __int64 v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v4; // esi
  __int64 i; // rdx
  bool v6; // zf
  __int64 v7; // r8
  bool v8; // al
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // r15
  __int64 v10; // rcx
  volatile signed __int32 *v11; // rdx
  ATL::CAtlException *v13; // rbx
  ATL::CAtlException *v14; // rbx
  void **p_DebugInfo; // [rsp+20h] [rbp-48h]
  ATL::CAtlException *v16; // [rsp+28h] [rbp-40h] BYREF
  ATL::CAtlException *v17; // [rsp+30h] [rbp-38h] BYREF
  ATL::CAtlException *v18; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int64 v21; // [rsp+88h] [rbp+20h]

  v2 = a2;
  v3 = a1;
  v4 = 0;
  EnterCriticalSection(a1);
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v6 = (unsigned int)i == *(_QWORD *)&v3[1].LockCount;
    if ( (unsigned __int64)(unsigned int)i >= *(_QWORD *)&v3[1].LockCount )
      break;
    v7 = (__int64)v3[1].DebugInfo + 32 * (unsigned int)i;
    if ( *(_DWORD *)(v7 + 8) == *(_DWORD *)(v2 + 8) )
    {
      if ( !*(_QWORD *)v7 || !*(_QWORD *)v2 )
      {
LABEL_10:
        v6 = (unsigned int)i == *(_QWORD *)&v3[1].LockCount;
        break;
      }
      v8 = *(_QWORD *)v7 == *(_QWORD *)v2;
    }
    else
    {
      v8 = 0;
    }
    if ( v8 )
      goto LABEL_10;
  }
  try
  {
    if ( !v6 )
    {
      if ( (PRTL_CRITICAL_SECTION_DEBUG)(unsigned int)i >= v3[2].DebugInfo )
        sub_18000A174(-2147024809);
      ++*(_DWORD *)(v3[1].SpinCount + 4 * i);
      goto LABEL_40;
    }
    try
    {
      p_DebugInfo = (void **)&v3[1].DebugInfo;
      v21 = sub_18000D0F8(&v3[1], v2);
    }
    catch ( ATL::CAtlException *v16 )
    {
      v13 = v16;
      if ( *(_DWORD *)v16 == -1073741571 )
        o__resetstkoflw();
      v4 = *(_DWORD *)v13;
      if ( *(int *)v13 < 0 )
      {
        v3 = a1;
        v2 = a2;
        goto LABEL_40;
      }
      v3 = a1;
      v2 = a2;
    }
    v4 = 0;
    DebugInfo = v3[2].DebugInfo;
    if ( (unsigned __int64)DebugInfo >= *(_QWORD *)&v3[2].LockCount )
    {
      try
      {
        if ( !(unsigned __int8)sub_18000D4EC(&v3[1].SpinCount, (char *)&DebugInfo->Type + 1) )
          sub_18000A174(-2147024882);
      }
      catch ( ATL::CAtlException *v17 )
      {
        v14 = v17;
        if ( *(_DWORD *)v17 == -1073741571 )
          o__resetstkoflw();
        v4 = *(_DWORD *)v14;
        if ( *(int *)v14 < 0 )
          sub_180009280(p_DebugInfo, v21);
        v3 = a1;
        v2 = a2;
        goto LABEL_40;
      }
    }
    *(_DWORD *)(v3[1].SpinCount + 4LL * (_QWORD)DebugInfo) = 1;
    ++v3[2].DebugInfo;
  }
  catch ( ATL::CAtlException *v18 )
  {
    v3 = a1;
    v2 = a2;
    v4 = *(_DWORD *)v18;
  }
LABEL_40:
  LeaveCriticalSection(v3);
  v10 = *(_QWORD *)(v2 + 24);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = (volatile signed __int32 *)(*(_QWORD *)(v2 + 16) - 24LL);
  if ( _InterlockedExchangeAdd(v11 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v11 + 8LL))(*(_QWORD *)v11);
  return v4;
}
