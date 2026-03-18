/*
 * XREFs of ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C000CA48
 * Callers:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C000C6A4 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     ?ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z @ 0x1C01AFE00 (-ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     ?Entry@Iter@CInputConfig@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C000C408 (-Entry@Iter@CInputConfig@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C000C440 (-_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?Reset@CInputSpace@@QEAAXPEAU1@@Z @ 0x1C000C5D4 (-Reset@CInputSpace@@QEAAXPEAU1@@Z.c)
 *     ?_EnsureInputSpace@CInputConfig@@AEAAXXZ @ 0x1C000C684 (-_EnsureInputSpace@CInputConfig@@AEAAXXZ.c)
 *     ?_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z @ 0x1C000CBCC (-_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z.c)
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 *     ?_FindDefaultInputSpace@CInputConfig@@AEAAXXZ @ 0x1C000F870 (-_FindDefaultInputSpace@CInputConfig@@AEAAXXZ.c)
 *     ?TraceCurrentConfig@InputConfig@@SAXXZ @ 0x1C000F968 (-TraceCurrentConfig@InputConfig@@SAXXZ.c)
 *     ?FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ @ 0x1C000FAEC (-FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CInputConfig::_ConfigureInputSpace(CInputConfig *this, struct CInputSpace *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // edi
  CInputConfig *v9; // rax
  _QWORD *i; // rcx
  struct _LIST_ENTRY *v11; // rax
  CInputConfig *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rsi
  CInputConfig *v18; // rcx
  __int64 v19; // rcx
  CInputConfig **v20; // rax
  CInputConfig *v21; // rcx
  __int64 CurrentProcessWin32Process; // rax
  _QWORD v24[2]; // [rsp+20h] [rbp-28h] BYREF
  CInputConfig *v25; // [rsp+30h] [rbp-18h]
  _QWORD *v26; // [rsp+38h] [rbp-10h]

  v8 = 0;
  if ( !ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6, v7);
  v24[0] = &CInputConfig::slock;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
  v9 = *(CInputConfig **)this;
  v24[1] = this;
  v25 = v9;
  for ( i = *(_QWORD **)v9; ; i = (_QWORD *)*i )
  {
    v26 = i;
    if ( v9 == this || v9 == (CInputConfig *)-16LL )
      break;
    if ( *((_DWORD *)v9 + 4) == *(_DWORD *)a2 && *((_DWORD *)v9 + 5) == *((_DWORD *)a2 + 1) )
    {
      v11 = CInputConfig::Iter::Entry((CInputConfig::Iter *)v24);
      CInputConfig::_FreeInputSpace(v12, v11);
      break;
    }
    v9 = (CInputConfig *)i;
    v25 = (CInputConfig *)i;
  }
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  if ( *((_DWORD *)a2 + 355) || *((_BYTE *)a2 + 1416) )
  {
    v16 = Win32AllocPoolZInit(0x5B0uLL);
    v17 = v16;
    if ( !v16 )
      return (unsigned int)-1073741801;
    CInputSpace::Reset((CInputSpace *)(v16 + 16), (struct CInputSpace ***)a2);
    CInputConfig::_ProcessInputSpace(v18, (struct CInputSpace *)(v17 + 16));
    v20 = (CInputConfig **)*((_QWORD *)this + 1);
    if ( *v20 != this )
      __fastfail(3u);
    *(_QWORD *)v17 = this;
    *(_QWORD *)(v17 + 8) = v20;
    *v20 = (CInputConfig *)v17;
    *((_QWORD *)this + 1) = v17;
    if ( !*(_BYTE *)(v17 + 1432) )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v19, v13, v14, v15);
      *(_QWORD *)(v17 + 32) = CurrentProcessWin32Process;
      *(_DWORD *)(CurrentProcessWin32Process + 820) |= 0x2000000u;
    }
  }
  CInputConfig::_EnsureInputSpace(this, v13, v14, v15);
  CInputConfig::_FindDefaultInputSpace(v21);
  InputConfig::TraceCurrentConfig();
  CInputConfig::CMouseConfig::FindInputSpace((CInputConfig *)((char *)this + 16));
  return v8;
}
