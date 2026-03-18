/*
 * XREFs of ?AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C01DE2AC
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C01875D0 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C02F50F4 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     ?_AddMode@OBTAIN_MODES_ON_SOURCE@@AEBAJAEAU_D3DKMT_DISPLAYMODE@@_N1@Z @ 0x1C02F88E8 (-_AddMode@OBTAIN_MODES_ON_SOURCE@@AEBAJAEAU_D3DKMT_DISPLAYMODE@@_N1@Z.c)
 * Callees:
 *     ?AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C018849C (-AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     ?RemoveMode@MODE_UNION_LIST@@AEAAXI@Z @ 0x1C01D229C (-RemoveMode@MODE_UNION_LIST@@AEAAXI@Z.c)
 *     _UpgradeDispModeFlags @ 0x1C01DE1C4 (_UpgradeDispModeFlags.c)
 *     ?SearchIndexdModeList@MODE_UNION_LIST@@AEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@AEAI@Z @ 0x1C01DE308 (-SearchIndexdModeList@MODE_UNION_LIST@@AEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@AEAI@Z.c)
 */

__int64 __fastcall MODE_UNION_LIST::AddUniqueMode(MODE_UNION_LIST *this, const struct _D3DKMT_DISPLAYMODE *a2)
{
  unsigned int v2; // ebx
  struct _D3DKMT_DISPLAYMODE *v5; // rax
  __int64 v6; // r9
  __int64 v8; // r9
  unsigned int v9; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v9 = 0;
  v5 = MODE_UNION_LIST::SearchIndexdModeList(this, a2, &v9);
  if ( v5 )
  {
    if ( (*(_DWORD *)&v5->Flags & 2) != 0 )
    {
      MODE_UNION_LIST::RemoveMode(this, v9);
      MODE_UNION_LIST::AddMode(this, a2, v9, v8);
    }
    else
    {
      UpgradeDispModeFlags((__int64)v5, (__int64)a2);
    }
  }
  else
  {
    return (unsigned int)MODE_UNION_LIST::AddMode(this, a2, v9, v6);
  }
  return v2;
}
