/*
 * XREFs of ?_FindDefaultInputSpace@CInputConfig@@AEAAXXZ @ 0x1C00A5530
 * Callers:
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C00A4A54 (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInputConfig::_FindDefaultInputSpace(CInputConfig *this)
{
  CInputConfig *v1; // r15
  _QWORD **v2; // rbx
  _QWORD **v3; // rbp
  _QWORD **v4; // rsi
  CInputConfig *v5; // rax
  CInputConfig *v6; // r14
  _QWORD **v7; // rdi
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx

  v1 = gpInputConfig;
  v2 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
  v5 = *(CInputConfig **)v1;
  v6 = **(CInputConfig ***)v1;
  while ( v5 != v1 )
  {
    v7 = (_QWORD **)((char *)v5 + 16);
    if ( v5 == (CInputConfig *)-16LL )
      break;
    if ( !ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
    v9 = *((_DWORD *)v7 + 2);
    if ( *((_BYTE *)v7 + 1416) )
      v2 = v7;
    if ( (v9 & 1) != 0 )
    {
      v3 = v7;
      *((_DWORD *)v7 + 2) = v9 & 0xFFFFFFFE;
    }
    v5 = v6;
    v6 = *(CInputConfig **)v6;
    if ( v4 )
      v7 = v4;
    v4 = v7;
  }
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  if ( !v4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
  if ( v2 )
    goto LABEL_16;
  v2 = v4;
  if ( v3 )
    v2 = v3;
  if ( v2 )
LABEL_16:
    *((_DWORD *)v2 + 2) |= 1u;
}
