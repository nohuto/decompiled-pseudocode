/*
 * XREFs of sub_1800BC7E0 @ 0x1800BC7E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800BB8C4 @ 0x1800BB8C4 (sub_1800BB8C4.c)
 *     sub_1800BBB74 @ 0x1800BBB74 (sub_1800BBB74.c)
 *     sub_1800BBCBC @ 0x1800BBCBC (sub_1800BBCBC.c)
 *     sub_1800BBCE4 @ 0x1800BBCE4 (sub_1800BBCE4.c)
 *     sub_1800BC578 @ 0x1800BC578 (sub_1800BC578.c)
 */

__int64 __fastcall sub_1800BC7E0(RPC_BINDING_HANDLE BindingHandle, __int64 a2, _DWORD *a3)
{
  __int64 v4; // rdi
  char v7; // r14
  __int64 *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  int v11; // ebx
  unsigned __int64 v12; // r8
  int LastError; // eax
  HANDLE CurrentProcess; // rax
  int v15; // eax
  __int64 *v16; // rdx
  __int64 v17; // rax
  void *v18; // rdi
  HANDLE hSourceHandle; // [rsp+40h] [rbp-C0h] BYREF
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v22; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v23; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+70h] [rbp-90h]
  __int128 v25; // [rsp+78h] [rbp-88h]
  int v26; // [rsp+88h] [rbp-78h]
  struct _TP_TIMER *pv[8]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v28[6]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int Pid; // [rsp+150h] [rbp+50h] BYREF
  HANDLE TargetHandle; // [rsp+158h] [rbp+58h] BYREF

  v24 = 0LL;
  PreparsedData = 0LL;
  v4 = -1LL;
  v26 = 10;
  hSourceHandle = (HANDLE)-1LL;
  v23 = 0LL;
  TargetHandle = (HANDLE)-1LL;
  v25 = 0LL;
  v7 = 0;
  v8 = sub_180008448((__int64)BindingHandle, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v8[1], v9, (struct _TP_TIMER *)L"s_ccCreateHandsfreeHidFileFromAudioId");
  *a3 = 0;
  v11 = sub_1800BB8C4(a2, &v22);
  if ( v11 >= 0 )
  {
    v11 = sub_1800BBCE4((__int64)&v22, (__int64)&v23);
    if ( v11 >= 0 )
    {
      v11 = sub_1800BBB74(&v23, (__int64 *)&hSourceHandle, v28, &PreparsedData);
      if ( v11 >= 0 )
      {
        LastError = I_RpcBindingInqLocalClientPID(BindingHandle, &Pid);
        if ( LastError )
        {
          if ( LastError <= 0 )
          {
            v11 = LastError;
            goto LABEL_13;
          }
LABEL_10:
          v11 = (unsigned __int16)LastError | 0x80070000;
          goto LABEL_13;
        }
        if ( RpcImpersonateClient(BindingHandle) )
          goto LABEL_13;
        v7 = 1;
        v4 = (__int64)OpenProcess(0x40u, 0, Pid);
        if ( !v4
          || (CurrentProcess = GetCurrentProcess(),
              !DuplicateHandle(CurrentProcess, hSourceHandle, (HANDLE)v4, &TargetHandle, 0xC0000000, 0, 0)) )
        {
          LastError = GetLastError();
          v11 = LastError;
          if ( LastError <= 0 )
            goto LABEL_13;
          goto LABEL_10;
        }
        v15 = (int)TargetHandle;
        TargetHandle = 0LL;
        v11 = 0;
        *a3 = v15;
      }
    }
  }
LABEL_13:
  if ( (char *)TargetHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(TargetHandle);
    TargetHandle = 0LL;
  }
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle((HANDLE)v4);
  if ( v7 )
    RpcRevertToSelf();
  if ( PreparsedData )
    HidD_FreePreparsedData(PreparsedData);
  if ( (char *)hSourceHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hSourceHandle);
  while ( v24 )
  {
    v16 = (__int64 *)v23;
    if ( !(_QWORD)v23 )
      sub_1800B8610(-2147467259);
    v17 = *(_QWORD *)v23;
    v18 = *(void **)(v23 + 16);
    *(_QWORD *)&v23 = v17;
    if ( v17 )
      *(_QWORD *)(v17 + 8) = 0LL;
    else
      v23 = 0uLL;
    sub_1800BBCBC((__int64)&v23, v16);
    CoTaskMemFree(v18);
  }
  sub_18000F690((__int64)pv, v10, v12);
  sub_1800BC578((__int64 *)&v23);
  return (unsigned int)v11;
}
