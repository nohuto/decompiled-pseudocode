/*
 * XREFs of s_sndevtResolveSoundAlias @ 0x1800BD850
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180008A50 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FBA0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     MIDL_user_allocate @ 0x180045D00 (MIDL_user_allocate.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     memset_0 @ 0x18006B69C (memset_0.c)
 *     ?StringCbCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x1800BD5F8 (-StringCbCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z.c)
 *     ?_GetSoundAlias@@YAHPEBGPEAG_KAEAKHPEAUHKEY__@@0@Z @ 0x180133718 (-_GetSoundAlias@@YAHPEBGPEAG_KAEAKHPEAUHKEY__@@0@Z.c)
 */

__int64 __fastcall s_sndevtResolveSoundAlias(
        RPC_BINDING_HANDLE BindingHandle,
        const unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned int a4,
        LPHANDLE lpTargetHandle,
        wchar_t **a6)
{
  char *FileW; // r13
  char *v9; // r15
  int v10; // esi
  __int64 v11; // rcx
  struct _TP_TIMER **v12; // rax
  __int64 v13; // r8
  const unsigned __int16 *v14; // rbx
  DWORD LastError; // edi
  int v16; // esi
  unsigned __int64 v17; // r8
  const unsigned __int16 *v18; // rcx
  int SoundAlias; // ebx
  __int64 v20; // rax
  size_t v21; // rbx
  wchar_t *v22; // rax
  HANDLE CurrentProcess; // rax
  int dwCreationDisposition; // [rsp+20h] [rbp-E0h]
  char v26; // [rsp+44h] [rbp-BCh]
  unsigned int v28; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int Pid; // [rsp+54h] [rbp-ACh] BYREF
  HKEY phkResult; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int16 *v31; // [rsp+60h] [rbp-A0h]
  RPC_BINDING_HANDLE Binding; // [rsp+68h] [rbp-98h]
  struct _TP_TIMER *pv[8]; // [rsp+70h] [rbp-90h] BYREF
  wchar_t FileName[264]; // [rsp+B0h] [rbp-50h] BYREF

  v31 = a3;
  Binding = BindingHandle;
  v26 = a4;
  memset_0(FileName, 0, 0x208uLL);
  v28 = a4;
  FileW = 0LL;
  v9 = 0LL;
  v10 = 0;
  v12 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                               v11,
                               _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v12[1], v13, (struct _TP_TIMER *)L"s_sndevtResolveSoundAlias");
  v14 = a2;
  if ( !a2 )
  {
    LastError = -2147418096;
LABEL_3:
    v16 = 0;
    goto LABEL_22;
  }
  if ( lpTargetHandle )
  {
    *lpTargetHandle = (HANDLE)-1LL;
    if ( !a6 )
      goto LABEL_9;
  }
  else if ( !a6 )
  {
    LastError = -2147418096;
    goto LABEL_54;
  }
  *a6 = 0LL;
LABEL_9:
  LastError = RpcImpersonateClient(BindingHandle);
  if ( LastError )
    goto LABEL_3;
  while ( 1 )
  {
    while ( 1 )
    {
      FileName[0] = 0;
      LastError = RegOpenCurrentUser(1u, &phkResult);
      if ( LastError )
        goto LABEL_21;
      v18 = (const unsigned __int16 *)&szSystemDefaultSound;
      if ( !v10 )
        v18 = v14;
      SoundAlias = _GetSoundAlias(v18, FileName, v17, &v28, dwCreationDisposition, phkResult, v31);
      RegCloseKey(phkResult);
      if ( !SoundAlias )
      {
        if ( (v26 & 2) == 0 && v10 != 1 )
          goto LABEL_16;
        LastError = 1168;
LABEL_21:
        v16 = 1;
        goto LABEL_22;
      }
      if ( FileName[0] )
        break;
      if ( (v26 & 2) != 0 || v10 == 1 )
      {
        LastError = 2;
        goto LABEL_21;
      }
LABEL_16:
      v14 = a2;
      v10 = 1;
    }
    if ( !lpTargetHandle )
      goto LABEL_21;
    FileW = (char *)CreateFileW(FileName, 0x80000000, 3u, 0LL, 3u, 0x60000080u, 0LL);
    if ( FileW != (char *)-1LL )
      break;
    if ( (v26 & 2) != 0 || v10 == 1 )
    {
      LastError = GetLastError();
      goto LABEL_21;
    }
    v14 = a2;
    v10 = 1;
  }
  LastError = I_RpcBindingInqLocalClientPID(Binding, &Pid);
  if ( LastError )
    goto LABEL_21;
  v9 = (char *)OpenProcess(0x40u, 0, Pid);
  LastError = RpcRevertToSelf();
  if ( LastError )
    goto LABEL_21;
  v16 = 0;
  if ( !v9
    || (CurrentProcess = GetCurrentProcess(), !DuplicateHandle(CurrentProcess, FileW, v9, lpTargetHandle, 0, 0, 2u)) )
  {
    LastError = GetLastError();
  }
LABEL_22:
  if ( a6 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( FileName[v20] );
    v21 = 2 * v20 + 2;
    v22 = (wchar_t *)MIDL_user_allocate(v21);
    *a6 = v22;
    if ( v22 )
    {
      StringCbCopyExW(v22, v21, FileName, 0LL, 0LL, 0x600u);
      goto LABEL_43;
    }
    if ( LastError )
    {
      LastError = 14;
LABEL_43:
      if ( LastError && lpTargetHandle )
      {
        if ( (char *)*lpTargetHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(*lpTargetHandle);
        *lpTargetHandle = (HANDLE)-1LL;
      }
    }
  }
  if ( v16 == 1 )
    RpcRevertToSelf();
  if ( (unsigned __int64)(FileW - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(FileW);
  if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v9);
LABEL_54:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return LastError;
}
