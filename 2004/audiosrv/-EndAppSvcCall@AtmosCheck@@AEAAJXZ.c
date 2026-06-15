/*
 * XREFs of ?EndAppSvcCall@AtmosCheck@@AEAAJXZ @ 0x18013590C
 * Callers:
 *     wil::details::lambda_call__lambda_3b6b659d1684d014bd1c24c0e9fd72b4___::_lambda_call__lambda_3b6b659d1684d014bd1c24c0e9fd72b4___ @ 0x180073658 (wil--details--lambda_call__lambda_3b6b659d1684d014bd1c24c0e9fd72b4___--_lambda_call__lambda_3b6b.c)
 *     wil::details::lambda_call__lambda_d661e650f447fa74bc3da82c7b092f42___::_lambda_call__lambda_d661e650f447fa74bc3da82c7b092f42___ @ 0x1800736B8 (wil--details--lambda_call__lambda_d661e650f447fa74bc3da82c7b092f42___--_lambda_call__lambda_d661.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AtmosCheck::EndAppSvcCall(AtmosCheck *this)
{
  _DWORD *v2; // rdx
  unsigned __int64 v3; // r8
  _DWORD *v4; // rcx
  __int64 v5; // rax
  unsigned __int64 v6; // r9
  DWORD CurrentThreadId; // [rsp+30h] [rbp+8h]

  CurrentThreadId = GetCurrentThreadId();
  CoDisableCallCancellation(0LL);
  v2 = (_DWORD *)*((_QWORD *)this + 66);
  v3 = *((_QWORD *)this + 67);
  while ( v2 != (_DWORD *)v3 && CurrentThreadId != *v2 )
    ++v2;
  if ( v2 != (_DWORD *)v3 )
  {
    v4 = v2 + 1;
    v5 = 0LL;
    v6 = (v3 - (unsigned __int64)(v2 + 1) + 3) >> 2;
    if ( (unsigned __int64)(v2 + 1) > v3 )
      v6 = 0LL;
    if ( v6 )
    {
      do
      {
        if ( CurrentThreadId != *v4 )
          *v2++ = *v4;
        ++v4;
        ++v5;
      }
      while ( v5 != v6 );
    }
  }
  *((_QWORD *)this + 67) = v2;
  return 0LL;
}
