/*
 * XREFs of _lambda_d067b8c1a96ccdcf665bc865bd58c864_::operator() @ 0x1800510E8
 * Callers:
 *     ?DoesMonitorSupportTaskbar@ImmersiveMonitorHelper@@AEAA_NPEAUIImmersiveMonitor@@@Z @ 0x1800510A8 (-DoesMonitorSupportTaskbar@ImmersiveMonitorHelper@@AEAA_NPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_d067b8c1a96ccdcf665bc865bd58c864_::operator()(_QWORD **a1)
{
  int v2; // ebx
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, __int64, SID *, GUID *); // rbx
  int v5; // eax
  __int64 v7; // rdx
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+20h]
  int v11; // [rsp+60h] [rbp+28h] BYREF
  int v12; // [rsp+68h] [rbp+30h] BYREF
  __int64 v13; // [rsp+70h] [rbp+38h] BYREF
  __int64 v14; // [rsp+78h] [rbp+40h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)**a1 + 48LL))(**a1, &v11);
  if ( v2 < 0 )
  {
    v7 = 269LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
      (const char *)(unsigned int)v2,
      v9);
    return (unsigned int)v2;
  }
  if ( !v11 )
    return 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)**a1 + 40LL))(**a1, &v14);
  if ( v2 < 0 )
  {
    v7 = 273LL;
    goto LABEL_10;
  }
  v13 = 0LL;
  v3 = a1[1][9];
  v4 = *(__int64 (__fastcall **)(__int64, __int64, SID *, GUID *))(*(_QWORD *)v3 + 72LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  v5 = v4(v3, v14, &SID_EdgeUi, &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e);
  v2 = v5;
  if ( v5 < 0 )
  {
    v8 = 275LL;
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v13 + 80LL))(v13, &v12);
    v2 = v5;
    if ( v5 >= 0 )
    {
      *(_BYTE *)a1[2] = v12 != -1;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
      return 0LL;
    }
    v8 = 277LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
    (const char *)(unsigned int)v5,
    (int)&v13);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  return (unsigned int)v2;
}
