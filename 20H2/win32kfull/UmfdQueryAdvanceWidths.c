/*
 * XREFs of UmfdQueryAdvanceWidths @ 0x1C0060120
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C0060230 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall UmfdQueryAdvanceWidths(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, int a6)
{
  int v6; // ebx
  void **v12; // [rsp+38h] [rbp-59h] BYREF
  int v13; // [rsp+40h] [rbp-51h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-49h]
  __int64 v15; // [rsp+50h] [rbp-41h]
  char v16; // [rsp+58h] [rbp-39h]
  __int64 v17; // [rsp+60h] [rbp-31h]
  __int64 v18; // [rsp+68h] [rbp-29h]
  int v19; // [rsp+70h] [rbp-21h]
  __int64 v20; // [rsp+78h] [rbp-19h]
  __int64 v21; // [rsp+80h] [rbp-11h]
  int v22; // [rsp+88h] [rbp-9h]
  __int64 v23; // [rsp+8Ch] [rbp-5h]
  int v24; // [rsp+94h] [rbp+3h]
  __int128 v25; // [rsp+98h] [rbp+7h]
  __int128 ThreadInformation; // [rsp+A8h] [rbp+17h] BYREF

  v6 = 0;
  v13 = 8;
  CurrentThread = KeGetCurrentThread();
  v16 = 0;
  ThreadInformation = 0LL;
  if ( ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAmILastThread|0x20, &ThreadInformation, 0x10u, 0LL) >= 0 )
  {
    v15 = ThreadInformation;
    v16 = 1;
  }
  v24 = 0;
  v12 = &QueryAdvanceWidthsRequest::`vftable';
  v21 = a5;
  LOBYTE(v6) = a3 != 1;
  v22 = a6;
  v23 = (unsigned int)(v6 - 1);
  v25 = 0LL;
  v17 = a1;
  v18 = a2;
  v19 = a3;
  v20 = a4;
  UmfdClientSendAndWaitForCompletion(*(unsigned int *)(*(_QWORD *)(a2 + 24) + 8LL), &v12);
  return (unsigned int)v23;
}
