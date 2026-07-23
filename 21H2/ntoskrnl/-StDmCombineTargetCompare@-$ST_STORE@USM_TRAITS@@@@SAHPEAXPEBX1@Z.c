/*
 * XREFs of ?StDmCombineTargetCompare@?$ST_STORE@USM_TRAITS@@@@SAHPEAXPEBX1@Z @ 0x140388890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCombineTargetCompare(_QWORD *a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v3; // eax
  unsigned int v5; // r9d
  __int64 v7; // rax
  int v8; // ecx
  unsigned int v9; // ebx
  unsigned int v10; // r9d
  int v11; // r8d
  int v12; // edx
  bool v13; // cf

  v3 = a2[1];
  v5 = a3[1];
  if ( v3 != v5 )
  {
    v13 = v5 < v3;
    return v13 ? -1 : 1;
  }
  v7 = a1[1];
  v8 = *(_DWORD *)(v7 + 812);
  v9 = *a2 & *(_DWORD *)(v7 + 808);
  v10 = *a3 & *(_DWORD *)(v7 + 808);
  v11 = *a2 >> v8;
  v12 = *a3 >> v8;
  if ( v11 == v12 )
  {
LABEL_3:
    v13 = v9 < v10;
    return v13 ? -1 : 1;
  }
  if ( v11 == *(_DWORD *)a1 )
    return 1LL;
  if ( v12 != *(_DWORD *)a1 )
    goto LABEL_3;
  return 0xFFFFFFFFLL;
}
