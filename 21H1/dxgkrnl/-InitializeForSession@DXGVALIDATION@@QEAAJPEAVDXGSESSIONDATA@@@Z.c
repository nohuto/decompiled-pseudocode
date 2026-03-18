/*
 * XREFs of ?InitializeForSession@DXGVALIDATION@@QEAAJPEAVDXGSESSIONDATA@@@Z @ 0x1C001ABE8
 * Callers:
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C015AA08 (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 * Callees:
 *     ?CreateValidationProcessInCallerSession@DXGVALIDATION@@AEAAJPEAPEAU_EPROCESS@@@Z @ 0x1C004B2CC (-CreateValidationProcessInCallerSession@DXGVALIDATION@@AEAAJPEAPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall DXGVALIDATION::InitializeForSession(DXGVALIDATION *this, struct DXGSESSIONDATA *a2)
{
  __int64 result; // rax
  struct _EPROCESS *v4; // [rsp+30h] [rbp+8h] BYREF

  result = 0LL;
  if ( *(_DWORD *)this )
  {
    v4 = 0LL;
    result = DXGVALIDATION::CreateValidationProcessInCallerSession(this, &v4);
    if ( (int)result >= 0 )
      *((_QWORD *)a2 + 2337) = v4;
  }
  return result;
}
