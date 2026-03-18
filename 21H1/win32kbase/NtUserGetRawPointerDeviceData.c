/*
 * XREFs of NtUserGetRawPointerDeviceData @ 0x1C013A210
 * Callers:
 *     <none>
 * Callees:
 *     EnterSharedCrit @ 0x1C008A1D0 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C008F360 (Win32AllocPoolWithQuota.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 *     ?GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C0198FB8 (-GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PRO.c)
 */

__int64 __fastcall NtUserGetRawPointerDeviceData(
        int a1,
        unsigned int a2,
        unsigned int a3,
        char *a4,
        volatile void *Address)
{
  __int64 v6; // rbx
  __int64 v9; // rdx
  int PointerRawDataInternal; // edi
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rcx
  void *v15; // rsi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v17; // rcx
  CTouchProcessor *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  struct tagTHREADINFO *v23; // [rsp+60h] [rbp-58h]
  unsigned __int16 v24; // [rsp+C0h] [rbp+8h]

  v24 = a1;
  v6 = a3;
  v23 = EnterSharedCrit(0LL, 1);
  PointerRawDataInternal = 0;
  if ( !a1
    || HIWORD(a1)
    || !a2
    || !(_DWORD)v6
    || !a4
    || !Address
    || (v11 = v6 * a2, v11 > 0xFFFFFFFF)
    || (v12 = 28LL * (unsigned int)v6, v12 > 0xFFFFFFFF) )
  {
    v13 = 87LL;
    goto LABEL_20;
  }
  if ( (unsigned int)v12 >= 0x2710000 || (v15 = (void *)Win32AllocPoolWithQuota((unsigned int)v12, 0x78707355u)) == 0LL )
  {
    v13 = 8LL;
LABEL_20:
    UserSetLastError(v13, v9);
    goto LABEL_21;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v14);
  ProbeForWrite(Address, 4LL * (unsigned int)v11, CurrentProcessWow64Process != 0 ? 1 : 4);
  if ( v12 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v17) == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&a4[v12] > MmUserProbeAddress || &a4[v12] < a4 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(v15, a4, (unsigned int)v12);
  PointerRawDataInternal = CTouchProcessor::GetPointerRawDataInternal(
                             v18,
                             v23,
                             v24,
                             a2,
                             a3,
                             (const struct tagPOINTER_DEVICE_PROPERTY *)v15,
                             v11,
                             (int *)Address);
  Win32FreePool((__int64)v15, v19, v20);
LABEL_21:
  UserSessionSwitchLeaveCrit(v21);
  return PointerRawDataInternal;
}
