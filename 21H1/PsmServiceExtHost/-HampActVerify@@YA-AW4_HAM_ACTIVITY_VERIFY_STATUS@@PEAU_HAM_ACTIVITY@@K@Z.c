/*
 * XREFs of ?HampActVerify@@YA?AW4_HAM_ACTIVITY_VERIFY_STATUS@@PEAU_HAM_ACTIVITY@@K@Z @ 0x18008147C
 * Callers:
 *     ?HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180080E10 (-HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     CempListEntryIsNull @ 0x180008768 (CempListEntryIsNull.c)
 */

__int64 __fastcall HampActVerify(__int64 a1)
{
  __int64 v1; // r9
  unsigned int v2; // r8d
  __int64 v3; // rax
  unsigned int v4; // r11d
  __int64 v5; // rcx
  int v6; // r10d
  char v8; // dl
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8

  v1 = a1;
  v2 = 1;
  if ( ((*(_QWORD *)(a1 + 40) >> 57) & 7) != 5 )
    return v2;
  v3 = *(_QWORD *)(a1 + 88);
  LOBYTE(v4) = 2;
  if ( !v3
    || (v5 = *(_QWORD *)(v3 + 8), (*(_BYTE *)(v5 + 544) & 1) != 0)
    || (*(_QWORD *)(v3 + 16) != -1LL) == (unsigned __int8)(*(_BYTE *)(v5 + 548) - 2) <= 1u )
  {
    v6 = *(_DWORD *)(v1 + 544);
    if ( (v6 & 3) == 2 )
      return 8LL;
    v8 = *(_BYTE *)(v1 + 548);
    if ( v8 )
    {
      if ( *(_BYTE *)(v1 + 548) != 1 )
      {
        switch ( *(_BYTE *)(v1 + 548) )
        {
          case 2:
            if ( (v6 & 1) == 0 && !*(_QWORD *)(v1 + 520) )
              return 10;
            break;
          case 3:
            if ( (v6 & 4) == 0 )
              return 6;
            break;
          case 4:
            if ( (v6 & 1) == 0
              && (!(unsigned int)CempListEntryIsNull((_QWORD *)(v1 + 48))
               || !(unsigned int)CempListEntryIsNull((_QWORD *)(v9 + 96))) )
            {
              return v4;
            }
            v8 = *(_BYTE *)(v1 + 548);
            break;
          default:
            return 5;
        }
      }
    }
    else
    {
      v2 = 4;
      if ( (v6 & 4) != 0 )
        return v2;
    }
    if ( (v8 == (char)v4) == (*(_BYTE *)(v1 + 549) != 6) )
    {
      if ( v8 == (_BYTE)v4 || !*(_QWORD *)(v1 + 520) )
      {
        v10 = *(_QWORD *)(v1 + 536);
        v11 = *(_QWORD *)(v1 + 528);
        if ( (v11 == 0) != (v10 == 0) || (*(_BYTE *)(v1 + 544) & 0x20) != 0 && (v11 || v10) )
          return 12;
        else
          return 0;
      }
      else
      {
        return 11;
      }
    }
    else
    {
      return 7;
    }
  }
  return 3;
}
