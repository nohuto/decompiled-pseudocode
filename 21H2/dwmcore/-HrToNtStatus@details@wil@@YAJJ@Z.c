/*
 * XREFs of ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x1800F8904
 * Callers:
 *     ??$ReportFailure_Hr@$00@details@wil@@YAXPEAXIPEBD110J@Z @ 0x180024084 (--$ReportFailure_Hr@$00@details@wil@@YAXPEAXIPEBD110J@Z.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEAUFailureInfo@2@@Z @ 0x1800242E0 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEA.c)
 *     ??$ReportFailure_GetLastError@$02@details@wil@@YAKPEAXIPEBD110@Z @ 0x180176F78 (--$ReportFailure_GetLastError@$02@details@wil@@YAKPEAXIPEBD110@Z.c)
 *     ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z @ 0x180177004 (--$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z.c)
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z @ 0x1801770B0 (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z.c)
 *     ??$ReportFailure_Hr@$02@details@wil@@YAXPEAXIPEBD110J@Z @ 0x180177124 (--$ReportFailure_Hr@$02@details@wil@@YAXPEAXIPEBD110J@Z.c)
 *     ??$ReportFailure_NoReturn@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x18017718C (--$ReportFailure_NoReturn@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ??$ReportFailure_GetLastError@$01@details@wil@@YAKPEAXIPEBD110@Z @ 0x1801E8C3C (--$ReportFailure_GetLastError@$01@details@wil@@YAKPEAXIPEBD110@Z.c)
 *     ??$ReportFailure_Win32@$00@details@wil@@YAJPEAXIPEBD110K@Z @ 0x1801E8CEC (--$ReportFailure_Win32@$00@details@wil@@YAJPEAXIPEBD110K@Z.c)
 *     ??$ReportFailure_HrMsg@$02@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x1801FB234 (--$ReportFailure_HrMsg@$02@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::HrToNtStatus(wil::details *this)
{
  if ( (int)this <= -2147024662 )
  {
    if ( (_DWORD)this == -2147024662 )
    {
      LODWORD(this) = -2147483643;
      return (unsigned int)this;
    }
    if ( (int)this > -2147024809 )
    {
      switch ( (_DWORD)this )
      {
        case 0x80070070:
          LODWORD(this) = -1073741697;
          return (unsigned int)this;
        case 0x8007007A:
          LODWORD(this) = -1073741789;
          return (unsigned int)this;
        case 0x8007007B:
          LODWORD(this) = -1073741773;
          return (unsigned int)this;
        case 0x8007007E:
          LODWORD(this) = -1073741515;
          return (unsigned int)this;
      }
    }
    else
    {
      switch ( (_DWORD)this )
      {
        case 0x80070057:
          LODWORD(this) = -1073741811;
          return (unsigned int)this;
        case 0x80004005:
          LODWORD(this) = -1073741823;
          return (unsigned int)this;
        case 0x80070001:
          LODWORD(this) = -1073741822;
          return (unsigned int)this;
        case 0x80070002:
          LODWORD(this) = -1073741772;
          return (unsigned int)this;
        case 0x80070003:
          LODWORD(this) = -1073741766;
          return (unsigned int)this;
        case 0x8007000E:
          LODWORD(this) = -1073741801;
          return (unsigned int)this;
      }
    }
  }
  else if ( (int)this <= -2147023746 )
  {
    switch ( (_DWORD)this )
    {
      case 0x8007047E:
        LODWORD(this) = -1073741735;
        return (unsigned int)this;
      case 0x80070216:
        LODWORD(this) = -1073741675;
        return (unsigned int)this;
      case 0x8007023E:
        LODWORD(this) = -1073741787;
        return (unsigned int)this;
      case 0x80070246:
        LODWORD(this) = -1073741471;
        return (unsigned int)this;
      case 0x80070247:
        LODWORD(this) = -1073741469;
        return (unsigned int)this;
      case 0x80070272:
        LODWORD(this) = -1073741197;
        return (unsigned int)this;
    }
  }
  else
  {
    switch ( (_DWORD)this )
    {
      case 0x8007050C:
        LODWORD(this) = -1073740757;
        return (unsigned int)this;
      case 0x8007054F:
        goto LABEL_10;
      case 0x800705B9:
        LODWORD(this) = -1073700733;
        return (unsigned int)this;
      case 0:
        LODWORD(this) = 0;
        return (unsigned int)this;
    }
  }
  if ( ((unsigned int)this & 0x10000000) != 0 )
  {
    LODWORD(this) = (unsigned int)this & 0xEFFFFFFF;
    return (unsigned int)this;
  }
  if ( ((unsigned int)this & 0x1FFF0000) == 0x70000 )
  {
    LODWORD(this) = (unsigned __int16)this;
    if ( (_WORD)this )
      LODWORD(this) = (unsigned __int16)this | 0xC0070000;
  }
  else
  {
    if ( ((unsigned int)this & 0x1FFF0000) != 0x90000 )
    {
LABEL_10:
      LODWORD(this) = -1073741595;
      return (unsigned int)this;
    }
    if ( (int)this > 0 )
      LODWORD(this) = (unsigned __int16)this | 0xC0090000;
  }
  return (unsigned int)this;
}
