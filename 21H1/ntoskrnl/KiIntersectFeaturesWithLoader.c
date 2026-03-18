/*
 * XREFs of KiIntersectFeaturesWithLoader @ 0x14099C988
 * Callers:
 *     KiInitializeXSave @ 0x1409972B0 (KiInitializeXSave.c)
 * Callees:
 *     Feature_Servicing_User_CET_25433400__private_IsEnabled @ 0x1403EC8EC (Feature_Servicing_User_CET_25433400__private_IsEnabled.c)
 */

__int64 __fastcall KiIntersectFeaturesWithLoader(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  unsigned __int64 v4; // rbx
  int v5; // esi
  int IsEnabled; // eax
  unsigned __int64 v7; // rcx
  bool v8; // zf
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 240);
  v4 = *(_QWORD *)(v2 + 2832);
  v5 = *(_DWORD *)(v2 + 2840);
  IsEnabled = Feature_Servicing_User_CET_25433400__private_IsEnabled();
  v7 = v4 & 0xFFFFFFFFFFFFF7FFuLL;
  v8 = IsEnabled == 0;
  result = *a2;
  if ( !v8 )
    v7 = v4;
  if ( result )
  {
    a2[67] &= v7;
    result &= v7;
    *a2 = result;
    if ( (v5 & 0x10) == 0 )
      *((_DWORD *)a2 + 5) &= ~2u;
    if ( (v5 & 8) == 0 )
      *((_DWORD *)a2 + 5) &= ~1u;
  }
  return result;
}
