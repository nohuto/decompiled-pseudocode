/*
 * XREFs of ?OnHeadEventOccurred@MPCHeadUpdateListener@@SAXUMPCMatrix4x4@@PEAUIUnknown@@@Z @ 0x18008D5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FB28 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$RefPtr@UIRemoteTextInputState@@@@QEAAXXZ @ 0x18007F610 (-Release@-$RefPtr@UIRemoteTextInputState@@@@QEAAXXZ.c)
 *     ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x18008D3D4 (-GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCHeadUpdateListener::OnHeadEventOccurred(
        _OWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, char *))
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 v5; // rcx
  struct MPCHeadUpdateListener *Instance; // rax
  char *v7; // rsi
  __int64 *v8; // rcx
  __int64 (__fastcall *v9)(_QWORD, GUID *, char *); // rbx
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  struct MPCHeadUpdateListener *v12; // rax
  void *v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)MPCHeadUpdateListener::GetInstance((__int64)a1) + 152);
  EnterCriticalSection(v4);
  Instance = MPCHeadUpdateListener::GetInstance(v5);
  *(_OWORD *)((char *)Instance + 88) = *a1;
  *(_OWORD *)((char *)Instance + 104) = a1[1];
  *(_OWORD *)((char *)Instance + 120) = a1[2];
  *(_OWORD *)((char *)Instance + 136) = a1[3];
  v7 = (char *)Instance + 80;
  v8 = (__int64 *)((char *)Instance + 80);
  if ( a2 )
  {
    v9 = **a2;
    RefPtr<IRemoteTextInputState>::Release(v8);
    v10 = v9(a2, &GUID_87c24804_a22e_4adb_ba26_d78ef639bcf4, v7);
    v11 = retaddr;
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        78LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadupdatelistener.cpp",
        (const char *)(unsigned int)v10);
  }
  else
  {
    RefPtr<IRemoteTextInputState>::Release(v8);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  v12 = MPCHeadUpdateListener::GetInstance((__int64)v11);
  wil::details::SetEvent(*(wil::details **)(*((_QWORD *)v12 + 9) + 120LL), v13);
}
