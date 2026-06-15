/*
 * XREFs of _lambda_87f555b56693a8b4c492a05e321e535a_::operator() @ 0x180073A74
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_87f555b56693a8b4c492a05e321e535a___::Run @ 0x180074800 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_87f555b56693a8b4c492a05e321e535a___--Run.c)
 * Callees:
 *     ?AddArrayToLicenseMap@AtmosCheck@@AEAAJPEBG@Z @ 0x18006043C (-AddArrayToLicenseMap@AtmosCheck@@AEAAJPEBG@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180134524 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU__ea_180134524.c)
 *     ?PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x180137090 (-PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z.c)
 */

int __fastcall lambda_87f555b56693a8b4c492a05e321e535a_::operator()(__int64 a1)
{
  const unsigned __int16 **v1; // rax
  __int64 v2; // rbx
  const unsigned __int16 *v4; // rdx
  const unsigned __int16 **v5; // rax
  const unsigned __int16 *v6; // rdx
  int result; // eax
  __int64 v8; // rcx
  __int64 *v9; // rax
  int v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h]

  v1 = *(const unsigned __int16 ***)(a1 + 8);
  v2 = 0LL;
  if ( v1 )
    v4 = *v1;
  else
    v4 = 0LL;
  AtmosCheck::AddArrayToLicenseMap(*(AtmosCheck **)a1, v4);
  v5 = *(const unsigned __int16 ***)(a1 + 8);
  LOBYTE(v10) = 0;
  if ( v5 )
    v6 = *v5;
  else
    v6 = 0LL;
  result = AtmosCheck::PerformLicenseCheckForEndpoint(*(AtmosCheck **)a1, v6, (bool *)&v10);
  if ( (unsigned int)dword_18019D520 > 5 )
  {
    v10 = result;
    v9 = *(__int64 **)(a1 + 8);
    if ( v9 )
      v2 = *v9;
    v11 = v2;
    return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
             v8,
             &unk_18016DE5E);
  }
  return result;
}
