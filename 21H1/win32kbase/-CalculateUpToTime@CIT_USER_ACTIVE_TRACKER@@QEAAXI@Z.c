/*
 * XREFs of ?CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C005B738
 * Callers:
 *     ?CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0024FA8 (-CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpPostUpdateUseInfoCalculate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C0025EB8 (-CitpPostUpdateUseInfoCalculate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_POST_UPDATE_USE_INFO@@@Z.c)
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C00275DC (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagS.c)
 *     ?OnDisplayRequiredChange@CIT_USER_ACTIVE_TRACKER@@QEAAXII@Z @ 0x1C0059964 (-OnDisplayRequiredChange@CIT_USER_ACTIVE_TRACKER@@QEAAXII@Z.c)
 *     ?OnUserActiveEvent@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C005B6BC (-OnUserActiveEvent@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 * Callees:
 *     ?SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z @ 0x1C005B6F4 (-SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z.c)
 */

void __fastcall CIT_USER_ACTIVE_TRACKER::CalculateUpToTime(CIT_USER_ACTIVE_TRACKER *this, unsigned int a2)
{
  unsigned __int64 v2; // r11
  CIT_USER_ACTIVE_TRACKER *v3; // r10
  unsigned int v4; // ebx
  unsigned int v5; // eax
  unsigned int v6; // ecx
  int v7; // r8d
  unsigned int v8; // edx
  unsigned int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // eax

  LODWORD(v2) = a2;
  v3 = this;
  if ( (dword_1C0253098 & 1) != 0 )
  {
    v4 = dword_1C025309C;
  }
  else
  {
    v4 = DWORD1(xmmword_1C0256404);
    dword_1C0253098 |= 1u;
    dword_1C025309C = DWORD1(xmmword_1C0256404);
  }
  v5 = *((_DWORD *)this + 2);
  v6 = a2 - v5;
  if ( a2 != v5 )
  {
    if ( a2 < v5 )
    {
      v10 = *((_DWORD *)v3 + 2);
      v2 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v6 = v2 - v10;
      if ( (unsigned int)v2 < v10 )
      {
        v11 = -1;
        if ( (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                              - xmmword_1C0256450) <= 0xFFFFFFFF )
          v11 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
              - xmmword_1C0256450;
        if ( v6 > v11 || v6 > 0x240C8400 )
        {
          ++*((_DWORD *)v3 + 3);
          *((_DWORD *)v3 + 2) = v2;
          *((_DWORD *)v3 + 1) = v2 - dword_1C025309C;
          CIT_USER_ACTIVITY_STAT::SetActive((CIT_USER_ACTIVE_TRACKER *)((char *)v3 + 16), 0);
          return;
        }
      }
      v4 = dword_1C025309C;
    }
    if ( *(_DWORD *)v3 )
    {
      *((_DWORD *)v3 + 4) += v6;
    }
    else
    {
      v7 = *((_DWORD *)v3 + 1);
      v8 = *((_DWORD *)v3 + 2) - v7;
      if ( v8 < v4 )
      {
        if ( (int)v2 - v7 > v4 )
        {
          v9 = v4 - v8;
          CIT_USER_ACTIVITY_STAT::SetActive((CIT_USER_ACTIVE_TRACKER *)((char *)v3 + 16), 0);
        }
        else
        {
          v9 = v6;
        }
        *((_DWORD *)v3 + 4) += v9;
      }
    }
    *((_DWORD *)v3 + 2) = v2;
  }
}
