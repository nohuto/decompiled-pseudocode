/*
 * XREFs of ?FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ @ 0x1C000FAEC
 * Callers:
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C000CA48 (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 *     ?BindMouse@CInputConfig@@QEAAJU_LUID@@@Z @ 0x1C01AFC74 (-BindMouse@CInputConfig@@QEAAJU_LUID@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInputConfig::CMouseConfig::FindInputSpace(CInputConfig::CMouseConfig *this)
{
  bool v2; // si
  CInputConfig *v3; // r14
  _QWORD **v4; // rdi
  CInputConfig *v5; // rdx
  CInputConfig *i; // r8
  _QWORD **v7; // rax
  _QWORD **v8; // rcx
  char v9; // al
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9

  *((_QWORD *)this + 1) = 0LL;
  v2 = !*(_DWORD *)this && !*((_DWORD *)this + 1);
  v3 = gpInputConfig;
  v4 = 0LL;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
  v5 = *(CInputConfig **)v3;
  for ( i = **(CInputConfig ***)v3; ; i = *(CInputConfig **)i )
  {
    v7 = 0LL;
    if ( v5 != v3 )
      v7 = (_QWORD **)((char *)v5 + 16);
    if ( !v7 )
      break;
    v8 = 0LL;
    if ( v5 != v3 )
      v8 = (_QWORD **)((char *)v5 + 16);
    if ( v2 )
    {
      v9 = (_BYTE)v8[1] & 1;
    }
    else
    {
      if ( *(_DWORD *)this == *(_DWORD *)v8 && *((_DWORD *)this + 1) == *((_DWORD *)v8 + 1) )
      {
LABEL_13:
        *((_QWORD *)this + 1) = v8;
        break;
      }
      v9 = 0;
    }
    if ( v9 )
      goto LABEL_13;
    if ( ((_DWORD)v8[1] & 1) != 0 || !v4 )
      v4 = v8;
    v5 = i;
  }
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  if ( !*((_QWORD *)this + 1) )
  {
    *((_QWORD *)this + 1) = v4;
    if ( !v4 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
      if ( !*((_QWORD *)this + 1) )
        *((_QWORD *)this + 1) = (char *)this + 16;
    }
  }
}
