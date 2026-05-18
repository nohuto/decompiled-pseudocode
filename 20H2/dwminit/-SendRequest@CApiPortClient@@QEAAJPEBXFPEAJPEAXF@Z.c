/*
 * XREFs of ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z @ 0x1800042B8
 * Callers:
 *     DwmpRequestProcessShutdown @ 0x180003E20 (DwmpRequestProcessShutdown.c)
 *     DwmpRequestUnloadUserRegKeys @ 0x180003E84 (DwmpRequestUnloadUserRegKeys.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180003D0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Translate@CApiPortClient@@CAJJ@Z @ 0x180004100 (-Translate@CApiPortClient@@CAJJ@Z.c)
 *     ?IsConnected@CApiPortClient@@AEAA_NXZ @ 0x180004440 (-IsConnected@CApiPortClient@@AEAA_NXZ.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x18000446C (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?DisconnectIfDeferred@CPortClient@@QEAAXXZ @ 0x1800049CC (-DisconnectIfDeferred@CPortClient@@QEAAXXZ.c)
 *     ?SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXFPEAJ@Z @ 0x180004B2C (-SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXFPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180006350 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApiPortClient::SendRequest(CApiPortClient *this, unsigned int *a2, __int16 a3, int *a4)
{
  unsigned int v6; // ebx
  CApiPortClient *v7; // rcx
  CApiPortClient *v8; // rcx
  int IsConnected; // esi
  int v10; // eax
  __int64 v11; // rcx
  volatile signed __int32 *v12; // rdi
  __int16 v13; // r9
  unsigned int v14; // ebp
  int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  void *v19; // [rsp+20h] [rbp-48h]
  __int16 v20; // [rsp+28h] [rbp-40h]
  int v21; // [rsp+80h] [rbp+18h] BYREF

  LOWORD(v21) = a3;
  v6 = -2144980991;
  EnterCriticalSection(&CriticalSection);
  IsConnected = CApiPortClient::IsConnected(v7);
  if ( !byte_18000B7B8 )
  {
    do
    {
      v10 = CApiPortClient::EnsureConnected(v8);
      v6 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 2LL, v10, 0xA6u);
        goto LABEL_17;
      }
      v12 = (volatile signed __int32 *)*(&hObject + 1);
      if ( *(&hObject + 1) )
        _InterlockedAdd((volatile signed __int32 *)*(&hObject + 1) + 14, 1u);
      LeaveCriticalSection(&CriticalSection);
      v14 = CPortClient::SendComplexSyncRequest((CPortClient *)v12, *a2, a2, v13, v19, v20, &v21);
      if ( v12 && _InterlockedExchangeAdd(v12 + 14, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v12)(v12, 1LL);
      EnterCriticalSection(&CriticalSection);
      v8 = (CApiPortClient *)*(&hObject + 1);
      if ( *(&hObject + 1) && _InterlockedCompareExchange((volatile signed __int32 *)*(&hObject + 1) + 14, 1, 1) == 1 )
        CPortClient::DisconnectIfDeferred(v8);
      if ( v14 != -805306313 )
        break;
      v15 = IsConnected--;
    }
    while ( v15 > 0 );
    v16 = CApiPortClient::Translate(v14);
    v6 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 2LL, v16, 0xC5u);
    else
      *a4 = CApiPortClient::Translate(v21);
  }
LABEL_17:
  LeaveCriticalSection(&CriticalSection);
  return v6;
}
