/*
 * XREFs of _UpgradeDispModeFlags @ 0x1C025E4C0
 * Callers:
 *     ?AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C00DE2F8 (-AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C011FD90 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     _CombineModeList @ 0x1C025E090 (_CombineModeList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UpgradeDispModeFlags(__int64 a1, __int64 a2)
{
  int v3; // ecx
  int v5; // ecx
  unsigned int v6; // edx
  __int64 result; // rax

  v3 = *(_DWORD *)(a1 + 36);
  if ( (((unsigned __int8)v3 ^ *(_BYTE *)(a2 + 36)) & 1) != 0 )
    *(_DWORD *)(a1 + 36) = v3 | 1;
  v5 = *(_DWORD *)(a1 + 40);
  v6 = *(_DWORD *)(a2 + 40);
  if ( (((unsigned __int8)v6 ^ *(_BYTE *)(a1 + 40)) & 0x20) != 0 )
  {
    v5 |= 0x20u;
    *(_DWORD *)(a1 + 40) = v5;
    v6 = *(_DWORD *)(a2 + 40);
  }
  result = v5 ^ v6;
  if ( (((unsigned __int8)v5 ^ (unsigned __int8)v6) & 0x40) != 0 )
  {
    v5 |= 0x40u;
    *(_DWORD *)(a1 + 40) = v5;
    v6 = *(_DWORD *)(a2 + 40);
  }
  if ( ((v5 ^ v6) & 0x80u) != 0 )
    *(_DWORD *)(a1 + 40) = v5 | 0x80;
  return result;
}
