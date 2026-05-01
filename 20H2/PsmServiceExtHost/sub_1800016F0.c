/*
 * XREFs of sub_1800016F0 @ 0x1800016F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800018B0 @ 0x1800018B0 (sub_1800018B0.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 *     sub_180062664 @ 0x180062664 (sub_180062664.c)
 *     sub_180062720 @ 0x180062720 (sub_180062720.c)
 */

__int64 __fastcall sub_1800016F0(
        RPC_BINDING_HANDLE ClientBinding,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        void *a7,
        int a8,
        int a9,
        int *a10,
        __int64 *a11)
{
  int v14; // ebx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  HANDLE CurrentProcess; // rbx
  HANDLE v19; // rax
  int v20; // ecx
  signed int v21; // ebx
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  signed int LastError; // eax
  char v27; // [rsp+60h] [rbp-A0h] BYREF
  char v28; // [rsp+61h] [rbp-9Fh]
  int v29; // [rsp+64h] [rbp-9Ch] BYREF
  int v30; // [rsp+68h] [rbp-98h] BYREF
  int v31; // [rsp+6Ch] [rbp-94h] BYREF
  int v32; // [rsp+70h] [rbp-90h] BYREF
  int v33; // [rsp+74h] [rbp-8Ch] BYREF
  int v34; // [rsp+78h] [rbp-88h] BYREF
  __int64 v35; // [rsp+80h] [rbp-80h] BYREF
  HANDLE TargetHandle; // [rsp+88h] [rbp-78h] BYREF
  HANDLE hSourceHandle; // [rsp+90h] [rbp-70h]
  _DWORD RpcCallAttributes[28]; // [rsp+A0h] [rbp-60h] BYREF

  v35 = a3;
  hSourceHandle = a7;
  RpcCallAttributes[0] = 2;
  RpcCallAttributes[1] = 16;
  memset(&RpcCallAttributes[2], 0, 0x68uLL);
  RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes);
  TargetHandle = 0LL;
  v14 = RpcCallAttributes[16];
  v27 = 0;
  if ( (unsigned int)dword_1800B31E0 > 4 && (unsigned __int8)sub_180010470(&dword_1800B31E0, 2LL) )
  {
    v32 = a8;
    v31 = a9;
    v33 = a4;
    v34 = a2;
    v29 = a5;
    v30 = v14;
    sub_180062664(
      v15,
      (unsigned int)&unk_18009A95E,
      v16,
      v17,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31);
  }
  v28 = a5 == v14;
  CurrentProcess = GetCurrentProcess();
  v19 = GetCurrentProcess();
  if ( DuplicateHandle(v19, hSourceHandle, CurrentProcess, &TargetHandle, 0, 0, 2u) )
  {
    v21 = sub_1800018B0(v20, a2, v35, a4, a5, a6, (__int64)TargetHandle, a8, a9, v28, (__int64)&v27, (__int64)a11);
    if ( v21 >= 0 )
      *a10 = v27 != 0;
  }
  else
  {
    LastError = GetLastError();
    v21 = LastError;
    if ( LastError > 0 )
      v21 = (unsigned __int16)LastError | 0x80070000;
  }
  if ( (unsigned int)dword_1800B31E0 > 4 && (unsigned __int8)sub_180010470(&dword_1800B31E0, 2LL) )
  {
    v30 = *a10;
    v35 = *a11;
    v29 = v21;
    sub_180062720(v22, (unsigned int)&unk_18009A90A, v23, v24, (__int64)&v29, (__int64)&v35, (__int64)&v30);
  }
  return (unsigned int)v21;
}
