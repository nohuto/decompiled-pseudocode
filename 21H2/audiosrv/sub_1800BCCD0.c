/*
 * XREFs of sub_1800BCCD0 @ 0x1800BCCD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_180045410 @ 0x180045410 (sub_180045410.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     sub_1800BCA78 @ 0x1800BCA78 (sub_1800BCA78.c)
 *     sub_180132B98 @ 0x180132B98 (sub_180132B98.c)
 */

__int64 __fastcall sub_1800BCCD0(
        RPC_BINDING_HANDLE BindingHandle,
        wchar_t *a2,
        HKEY a3,
        int a4,
        LPHANDLE lpTargetHandle,
        _QWORD *a6)
{
  char *FileW; // r13
  char *v9; // r15
  int v10; // esi
  __int64 v11; // rcx
  __int64 *v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int64 v15; // r8
  wchar_t *v16; // rbx
  DWORD LastError; // edi
  int v18; // esi
  wchar_t *v19; // rcx
  int v20; // ebx
  __int64 v21; // rax
  unsigned __int64 v22; // rbx
  _WORD *v23; // rax
  HANDLE CurrentProcess; // rax
  char v26; // [rsp+44h] [rbp-BCh]
  int v28; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int Pid; // [rsp+54h] [rbp-ACh] BYREF
  HKEY phkResult[2]; // [rsp+58h] [rbp-A8h] BYREF
  RPC_BINDING_HANDLE Binding; // [rsp+68h] [rbp-98h]
  struct _TP_TIMER *pv[8]; // [rsp+70h] [rbp-90h] BYREF
  WCHAR FileName[264]; // [rsp+B0h] [rbp-50h] BYREF

  phkResult[1] = a3;
  Binding = BindingHandle;
  v26 = a4;
  memset(FileName, 0, 0x208uLL);
  v28 = a4;
  FileW = 0LL;
  v9 = 0LL;
  v10 = 0;
  v12 = sub_180008448(v11, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v12[1], v13, (struct _TP_TIMER *)L"s_sndevtResolveSoundAlias");
  v16 = a2;
  if ( !a2 )
  {
    LastError = -2147418096;
LABEL_3:
    v18 = 0;
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
      LastError = RegOpenCurrentUser(1u, phkResult);
      if ( LastError )
        goto LABEL_21;
      v19 = aDefault_0;
      if ( !v10 )
        v19 = v16;
      v20 = sub_180132B98(v19, FileName, v15, &v28);
      RegCloseKey(phkResult[0]);
      if ( !v20 )
      {
        if ( (v26 & 2) == 0 && v10 != 1 )
          goto LABEL_16;
        LastError = 1168;
LABEL_21:
        v18 = 1;
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
      v16 = a2;
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
    v16 = a2;
    v10 = 1;
  }
  LastError = I_RpcBindingInqLocalClientPID(Binding, &Pid);
  if ( LastError )
    goto LABEL_21;
  v9 = (char *)OpenProcess(0x40u, 0, Pid);
  LastError = RpcRevertToSelf();
  if ( LastError )
    goto LABEL_21;
  v18 = 0;
  if ( !v9
    || (CurrentProcess = GetCurrentProcess(), !DuplicateHandle(CurrentProcess, FileW, v9, lpTargetHandle, 0, 0, 2u)) )
  {
    LastError = GetLastError();
  }
LABEL_22:
  if ( a6 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( FileName[v21] );
    v22 = 2 * v21 + 2;
    v23 = (_WORD *)sub_180045410(v22);
    *a6 = v23;
    if ( v23 )
    {
      sub_1800BCA78(v23, v22, FileName, 0LL, 0LL, 1536);
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
  if ( v18 == 1 )
    RpcRevertToSelf();
  if ( (unsigned __int64)(FileW - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(FileW);
  if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v9);
LABEL_54:
  sub_18000F690((__int64)pv, v14, v15);
  return LastError;
}
