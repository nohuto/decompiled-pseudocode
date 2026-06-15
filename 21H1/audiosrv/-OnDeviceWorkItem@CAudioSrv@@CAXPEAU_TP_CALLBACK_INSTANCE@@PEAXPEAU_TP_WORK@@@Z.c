/*
 * XREFs of ?OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180035C10
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z @ 0x18001C4C0 (-ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ @ 0x180035CE8 (-RemoveAll@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B8FE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x1800BA1C8 (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 */

void __fastcall CAudioSrv::OnDeviceWorkItem(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  __int64 *v5; // r8
  __int64 v6; // rax
  __int64 v7; // rbx
  bool v8; // zf
  int v9; // ecx
  DWORD v10; // eax
  const unsigned __int16 *v11; // rcx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  struct _tagpropertykey v15; // [rsp+30h] [rbp-28h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)(a2 + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 112));
  v5 = (__int64 *)*((_QWORD *)a2 + 19);
  if ( !v5 )
    ATL::AtlThrowImpl(-2147467259);
  v6 = *v5;
  v7 = v5[2];
  *((_QWORD *)a2 + 19) = *v5;
  if ( v6 )
    *(_QWORD *)(v6 + 8) = 0LL;
  else
    *((_QWORD *)a2 + 20) = 0LL;
  *v5 = *((_QWORD *)a2 + 23);
  v8 = (*((_QWORD *)a2 + 21))-- == 1LL;
  *((_QWORD *)a2 + 23) = v5;
  if ( v8 )
    ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAll();
  if ( v3 )
    LeaveCriticalSection(v3);
  v9 = *(_DWORD *)(v7 + 16);
  if ( v9 == 4 )
  {
    v10 = *(_DWORD *)(v7 + 48);
    v11 = *(const unsigned __int16 **)(v7 + 8);
    v15.fmtid = *(GUID *)(v7 + 32);
    v15.pid = v10;
    CPolicyConfig::ProcessPropertyChange(v11, &v15);
  }
  else
  {
    v12 = v9 - 1;
    if ( v12 && (v13 = v12 - 1) != 0 && (v14 = v13 - 1) != 0 )
    {
      if ( v14 == 2 )
        (*(void (__fastcall **)(struct IAudioPolicyManager *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)g_PolicyManager + 368LL))(
          g_PolicyManager,
          *(_QWORD *)(v7 + 8),
          *(unsigned int *)(v7 + 20),
          *(unsigned int *)(v7 + 24));
    }
    else
    {
      CAudioSrv::ProcessDeviceInternal((CAudioSrv *)a2, *(const unsigned __int16 **)(v7 + 8));
    }
  }
  (**(void (__fastcall ***)(__int64, __int64))v7)(v7, 1LL);
}
