/*
 * XREFs of ndisIfFindRcvAddress @ 0x1C01277F4
 * Callers:
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C00B4240 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00B4530 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     memcmp @ 0x1C003FFE0 (memcmp.c)
 */

__int64 __fastcall ndisIfFindRcvAddress(__int64 a1, const void *a2)
{
  unsigned int v2; // esi
  __int64 v3; // rbx
  unsigned int v5; // edi
  __int64 v6; // r14

  v2 = *(_DWORD *)(a1 + 1288);
  v3 = 0LL;
  v5 = 0;
  if ( v2 )
  {
    v6 = *(_QWORD *)(a1 + 1280);
    while ( memcmp(a2, (const void *)(v6 + 40LL * v5 + 8), *(unsigned __int16 *)(v6 + 40LL * v5 + 4)) )
    {
      if ( ++v5 >= v2 )
        return v3;
    }
    return v6 + 40LL * v5;
  }
  return v3;
}
