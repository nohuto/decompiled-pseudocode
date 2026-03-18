/*
 * XREFs of ?GetActivePpiPreference@CRotationMgr@@SA?AW4ORIENTATION_PREFERENCE@@PEAK@Z @ 0x1C01D17C0
 * Callers:
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ @ 0x1C0058DC4 (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?IsOrientationWithinPreferences@CLegacyRotationMgr@@AEAAHK@Z @ 0x1C01D1A54 (-IsOrientationWithinPreferences@CLegacyRotationMgr@@AEAAHK@Z.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C001ED40 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C001ED74 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 */

__int64 __fastcall CRotationMgr::GetActivePpiPreference(_DWORD *a1)
{
  unsigned int v2; // ebx
  PEPROCESS *v3; // rcx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v5, gRotationProcessLock);
  v2 = 0;
  if ( grpdeskRitInput )
  {
    v3 = *(PEPROCESS **)(grpdeskRitInput + 256LL);
    if ( v3 )
    {
      if ( a1 )
        *a1 = (unsigned int)PsGetProcessId(*v3);
      v2 = *(_DWORD *)(*(_QWORD *)(grpdeskRitInput + 256LL) + 920LL);
    }
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v5);
  return v2;
}
