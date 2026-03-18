/*
 * XREFs of ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C00A4A54
 * Callers:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C00A46B0 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     ?ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z @ 0x1C01B5B60 (-ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     ?_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C001ED6C (-_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?Entry@Iter@CInputConfig@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C0050A48 (-Entry@Iter@CInputConfig@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     ?_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z @ 0x1C00A5040 (-_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z.c)
 *     ?_FindDefaultInputSpace@CInputConfig@@AEAAXXZ @ 0x1C00A5530 (-_FindDefaultInputSpace@CInputConfig@@AEAAXXZ.c)
 *     ?TraceCurrentConfig@InputConfig@@SAXXZ @ 0x1C00A5628 (-TraceCurrentConfig@InputConfig@@SAXXZ.c)
 *     ?FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ @ 0x1C00A57AC (-FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ.c)
 *     ?_EnsureInputSpace@CInputConfig@@AEAAXXZ @ 0x1C00A6F78 (-_EnsureInputSpace@CInputConfig@@AEAAXXZ.c)
 *     ?Reset@CInputSpace@@QEAAXPEAU1@@Z @ 0x1C00A6F98 (-Reset@CInputSpace@@QEAAXPEAU1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CInputConfig::_ConfigureInputSpace(CInputConfig *this, struct CInputSpace *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // edi
  CInputConfig *v6; // rax
  _QWORD *i; // rcx
  struct _LIST_ENTRY *v8; // rax
  CInputConfig *v9; // rcx
  char *v10; // rax
  char *v11; // rsi
  CInputConfig *v12; // rcx
  __int64 v13; // rcx
  CInputConfig **v14; // rax
  CInputConfig *v15; // rcx
  __int64 CurrentProcessWin32Process; // rax
  _QWORD v18[2]; // [rsp+20h] [rbp-28h] BYREF
  CInputConfig *v19; // [rsp+30h] [rbp-18h]
  _QWORD *v20; // [rsp+38h] [rbp-10h]

  v5 = 0;
  if ( !ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
  v18[0] = &CInputConfig::slock;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
  v6 = *(CInputConfig **)this;
  v18[1] = this;
  v19 = v6;
  for ( i = *(_QWORD **)v6; ; i = (_QWORD *)*i )
  {
    v20 = i;
    if ( v6 == this || v6 == (CInputConfig *)-16LL )
      break;
    if ( *((_DWORD *)v6 + 4) == *(_DWORD *)a2 && *((_DWORD *)v6 + 5) == *((_DWORD *)a2 + 1) )
    {
      v8 = CInputConfig::Iter::Entry((CInputConfig::Iter *)v18);
      CInputConfig::_FreeInputSpace(v9, v8);
      break;
    }
    v6 = (CInputConfig *)i;
    v19 = (CInputConfig *)i;
  }
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  if ( *((_DWORD *)a2 + 355) || *((_BYTE *)a2 + 1416) )
  {
    v10 = (char *)Win32AllocPoolZInit(0x5B0uLL, 0x6F436E49u);
    v11 = v10;
    if ( !v10 )
      return (unsigned int)-1073741801;
    CInputSpace::Reset((CInputSpace *)(v10 + 16), a2);
    CInputConfig::_ProcessInputSpace(v12, (struct CInputSpace *)(v11 + 16));
    v14 = (CInputConfig **)*((_QWORD *)this + 1);
    if ( *v14 != this )
      __fastfail(3u);
    *(_QWORD *)v11 = this;
    *((_QWORD *)v11 + 1) = v14;
    *v14 = (CInputConfig *)v11;
    *((_QWORD *)this + 1) = v11;
    if ( !v11[1432] )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
      *((_QWORD *)v11 + 4) = CurrentProcessWin32Process;
      *(_DWORD *)(CurrentProcessWin32Process + 820) |= 0x2000000u;
    }
  }
  CInputConfig::_EnsureInputSpace(this);
  CInputConfig::_FindDefaultInputSpace(v15);
  InputConfig::TraceCurrentConfig();
  CInputConfig::CMouseConfig::FindInputSpace((CInputConfig *)((char *)this + 16));
  return v5;
}
