/*
 * XREFs of ServiceStart @ 0x180061DF0
 * Callers:
 *     ?AudioSrvStartupThread@@YAKPEAX@Z @ 0x180061D60 (-AudioSrvStartupThread@@YAKPEAX@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180052318 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ReportStatusToSCMgr @ 0x180061EC4 (ReportStatusToSCMgr.c)
 *     ?MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z @ 0x180061F30 (-MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z.c)
 *     ??0CAudioSrv@@QEAA@XZ @ 0x180062240 (--0CAudioSrv@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006A33C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18006AD3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ServiceStart(struct SERVICE_STATUS_HANDLE__ *a1, int a2, __int64 a3, __int64 a4)
{
  CAudioSrv *v5; // rax
  unsigned int v6; // edx
  const unsigned __int16 **v7; // r8
  CAudioSrv *v8; // rbx
  unsigned int v9; // ebx
  __int64 v10; // r9
  unsigned int v12; // [rsp+30h] [rbp-48h] BYREF
  char v13[32]; // [rsp+38h] [rbp-40h] BYREF
  unsigned int *v14; // [rsp+58h] [rbp-20h]
  int v15; // [rsp+60h] [rbp-18h]
  int v16; // [rsp+64h] [rbp-14h]

  if ( !a2 )
    ReportStatusToSCMgr(1LL, 2147500037LL, 0LL, a4);
  v5 = (CAudioSrv *)operator new(0x220uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v5;
  if ( v5 )
  {
    memset_0(v5, 0, 0x220uLL);
    v5 = CAudioSrv::CAudioSrv(v8);
  }
  g_AudioService = (unsigned __int64)v5;
  if ( !v5 )
    return 14LL;
  v9 = MyServiceInitialization(a1, v6, v7);
  if ( !v9 )
  {
    ReportStatusToSCMgr(4LL, 0LL, 0LL, v10);
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)g_AudioService + 104LL))(g_AudioService);
  }
  if ( (unsigned int)dword_18019C4B8 > 4 )
  {
    v16 = 0;
    v14 = &v12;
    v12 = v9;
    v15 = 4;
    tlgWriteTransfer_EtwEventWriteTransfer((__int64)&dword_18019C4B8, byte_180169A90, 0LL, 0LL, 3, (__int64)v13);
  }
  return v9;
}
