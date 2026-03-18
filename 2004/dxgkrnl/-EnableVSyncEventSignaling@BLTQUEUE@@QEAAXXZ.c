/*
 * XREFs of ?EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ @ 0x1C00DE5A8
 * Callers:
 *     ?WaitForVSync@REMOTE_VSYNC@@QEAAJXZ @ 0x1C00DE550 (-WaitForVSync@REMOTE_VSYNC@@QEAAJXZ.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0211048 (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000AE58 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C005DCD0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall BLTQUEUE::EnableVSyncEventSignaling(BLTQUEUE *this)
{
  LARGE_INTEGER PerformanceCounter; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  const CHAR *v6; // r9
  __int64 v7; // r10
  __int64 v8; // rax
  const CHAR *v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  *((_BYTE *)this + 563) = 1;
  *((LARGE_INTEGER *)this + 103) = PerformanceCounter;
  KeSetEvent((PRKEVENT)((char *)this + 512), 0, 0);
  if ( *((_DWORD *)this + 34) == 3 )
  {
    Current = DXGPROCESS::GetCurrent();
    if ( Current )
    {
      if ( !*((_BYTE *)Current + 489) )
      {
        *((_BYTE *)Current + 489) = 1;
        if ( (unsigned int)dword_1C00B09E8 > 5 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C00B09E8, 0x400000080000LL) )
          {
            v8 = *(_QWORD *)(v7 + 64);
            if ( v8 )
              v6 = *(const CHAR **)(v8 + 80);
            v9 = v6;
            v10 = 33556480LL;
            v11 = 1LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
              v4,
              byte_1C0081795,
              v5,
              (__int64)&v11,
              (__int64)&v10,
              &v9);
          }
        }
      }
    }
  }
}
