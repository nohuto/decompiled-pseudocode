/*
 * XREFs of ?GetApplicationSpecificEndpointInfoForProcess@CWindowsPolicyManager@@UEAAJKPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x18000B3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003F90 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x18001A650 (-GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z.c)
 *     ?TryFindProcessFromProcessId@CApplicationManager@@QEAAJKPEAPEAVCProcess@@@Z @ 0x180023314 (-TryFindProcessFromProcessId@CApplicationManager@@QEAAJKPEAPEAVCProcess@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::GetApplicationSpecificEndpointInfoForProcess(
        CWindowsPolicyManager *this,
        unsigned int a2,
        struct IApplicationSpecificEndpointInfo **a3)
{
  int ProcessFromProcessId; // eax
  struct CProcess *v5; // rbx
  unsigned int v6; // edi
  __int64 v7; // rdx
  struct CProcess *v8; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CProcess *v11; // [rsp+48h] [rbp+20h] BYREF

  *a3 = 0LL;
  v11 = 0LL;
  ProcessFromProcessId = CApplicationManager::TryFindProcessFromProcessId(g_ApplicationManager, a2, &v11);
  v5 = v11;
  v6 = ProcessFromProcessId;
  if ( ProcessFromProcessId >= 0 )
  {
    if ( !v11
      || (ProcessFromProcessId = CProcess::GetApplicationSpecificEndpointInfo((struct CProcess *)((char *)v11 + 16), a3),
          v6 = ProcessFromProcessId,
          ProcessFromProcessId >= 0) )
    {
      v6 = 0;
      goto LABEL_8;
    }
    v7 = 320LL;
  }
  else
  {
    v7 = 317LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
    (const char *)(unsigned int)ProcessFromProcessId);
LABEL_8:
  if ( v5 && _InterlockedExchangeAdd((volatile signed __int32 *)v5 + 2, 0xFFFFFFFF) == 1 )
  {
    v8 = v11;
    (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v11 + 32LL))(v11);
    (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v8 + 24LL))(v8, 1LL);
  }
  return v6;
}
