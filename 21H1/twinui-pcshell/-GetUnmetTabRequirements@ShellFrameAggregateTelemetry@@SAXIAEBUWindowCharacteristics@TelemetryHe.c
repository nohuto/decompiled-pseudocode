/*
 * XREFs of ?GetUnmetTabRequirements@ShellFrameAggregateTelemetry@@SAXIAEBUWindowCharacteristics@TelemetryHelpers@@@Z @ 0x18024EFF8
 * Callers:
 *     _lambda_49c0b2fb711056d9762ca69f307c87f4_::operator() @ 0x180249214 (_lambda_49c0b2fb711056d9762ca69f307c87f4_--operator().c)
 * Callees:
 *     _tlgKeywordOn @ 0x180022ED4 (_tlgKeywordOn.c)
 *     ?CensorAppID@SQM@@YAPEBGPEBG@Z @ 0x18005F064 (-CensorAppID@SQM@@YAPEBGPEBG@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U1@U1@U?$_tlgWrapSz@G@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@333322AEBU?$_tlgWrapSz@G@@4@Z @ 0x180245738 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U1@U1@U-$_tlgWrapSz@G@@U3.c)
 */

void __fastcall ShellFrameAggregateTelemetry::GetUnmetTabRequirements(
        int a1,
        const struct TelemetryHelpers::WindowCharacteristics *a2)
{
  const unsigned __int16 *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // [rsp+70h] [rbp+17h] BYREF
  int v8; // [rsp+74h] [rbp+1Bh] BYREF
  int v9; // [rsp+78h] [rbp+1Fh] BYREF
  const WCHAR *v10; // [rsp+80h] [rbp+27h] BYREF
  const WCHAR *v11; // [rsp+88h] [rbp+2Fh] BYREF
  __int64 v12; // [rsp+90h] [rbp+37h] BYREF
  LPCWSTR v13; // [rsp+98h] [rbp+3Fh] BYREF
  __int64 v14; // [rsp+A0h] [rbp+47h] BYREF
  int v15; // [rsp+D0h] [rbp+77h] BYREF
  int v16; // [rsp+D8h] [rbp+7Fh] BYREF

  if ( (unsigned int)dword_180597718 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_180597718, 0x400000000000LL) )
    {
      v10 = SQM::CensorAppID(*((LPCWSTR *)a2 + 69), v4);
      v9 = a1;
      v11 = (const WCHAR *)((char *)a2 + 36);
      v12 = *((_QWORD *)a2 + 1);
      v13 = *(LPCWSTR *)a2;
      v15 = *((_DWORD *)a2 + 6);
      v16 = *((_DWORD *)a2 + 8);
      v7 = *((_DWORD *)a2 + 5);
      v8 = *((_DWORD *)a2 + 4);
      v14 = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        v5,
        byte_1804E317F,
        v6,
        (__int64)&v14,
        (__int64)&v9,
        (__int64)&v8,
        (__int64)&v7,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v13,
        (__int64)&v12,
        &v11,
        &v10);
    }
  }
}
