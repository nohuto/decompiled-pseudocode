/*
 * XREFs of ?_AddMode@OBTAIN_MODES_ON_SOURCE@@AEBAJAEAU_D3DKMT_DISPLAYMODE@@_N1@Z @ 0x1C02F88E8
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C01875D0 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 * Callees:
 *     ?AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C01DE2AC (-AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 */

__int64 __fastcall OBTAIN_MODES_ON_SOURCE::_AddMode(
        OBTAIN_MODES_ON_SOURCE *this,
        struct _D3DKMT_DISPLAYMODE *a2,
        __int64 a3,
        char a4)
{
  MODE_UNION_LIST *v4; // rsi
  __int64 result; // rax

  v4 = (OBTAIN_MODES_ON_SOURCE *)((char *)this + 64);
  result = MODE_UNION_LIST::AddUniqueMode((OBTAIN_MODES_ON_SOURCE *)((char *)this + 64), a2);
  if ( (int)result >= 0 )
  {
    if ( !a4 )
      return 0LL;
    ++a2->IntegerRefreshRate;
    *(_DWORD *)&a2->Flags |= 2u;
    result = MODE_UNION_LIST::AddUniqueMode(v4, a2);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
