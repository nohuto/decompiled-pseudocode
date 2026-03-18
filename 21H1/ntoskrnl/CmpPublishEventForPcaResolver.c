/*
 * XREFs of CmpPublishEventForPcaResolver @ 0x1408661BC
 * Callers:
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 * Callees:
 *     EtwWrite @ 0x140256BF0 (EtwWrite.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     EtwEventEnabled @ 0x14026B690 (EtwEventEnabled.c)
 *     PsGetCurrentThreadProcess @ 0x14030E2D0 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 */

void __fastcall CmpPublishEventForPcaResolver(__int64 a1, unsigned __int16 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  _DWORD *v6; // r9
  int v7; // ebx
  _KPROCESS *CurrentThreadProcess; // rax
  int v9; // r8d
  unsigned __int16 *v10; // rdx
  __int64 v11; // rax
  int v12; // ecx
  __int64 v13; // r8
  _DWORD *v14; // r9
  __int16 v15; // [rsp+34h] [rbp-35h] BYREF
  __int16 v16; // [rsp+38h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17[3]; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp+7h] BYREF
  __int64 v19; // [rsp+80h] [rbp+17h]
  int v20; // [rsp+88h] [rbp+1Fh]
  int v21; // [rsp+8Ch] [rbp+23h]
  __int16 *v22; // [rsp+90h] [rbp+27h]
  int v23; // [rsp+98h] [rbp+2Fh]
  int v24; // [rsp+9Ch] [rbp+33h]
  __int64 v25; // [rsp+A0h] [rbp+37h]
  int v26; // [rsp+A8h] [rbp+3Fh]
  int v27; // [rsp+ACh] [rbp+43h]

  memset(v17, 0, sizeof(v17));
  if ( EtwAppCompatProvRegHandle && EtwEventEnabled(EtwAppCompatProvRegHandle, &APPCOMPAT_REG_WRP_ACCESS_DENIED) )
  {
    v7 = *(_DWORD *)(a1 + 160) & 1;
    if ( !v7 )
      CmpAttachToRegistryProcess((__int64)v17, v4, v5, v6);
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    v9 = *a2;
    v10 = (unsigned __int16 *)CurrentThreadProcess[1].ActiveProcessors.Bitmap[2];
    LOWORD(CurrentThreadProcess) = *v10;
    UserData.Reserved = 0;
    v15 = (unsigned __int16)CurrentThreadProcess >> 1;
    v16 = (unsigned __int16)v9 >> 1;
    UserData.Ptr = (ULONGLONG)&v15;
    UserData.Size = 2;
    v11 = *((_QWORD *)v10 + 1);
    v12 = *v10;
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v19 = v11;
    v22 = &v16;
    v25 = *((_QWORD *)a2 + 1);
    v20 = v12;
    v23 = 2;
    v26 = v9;
    EtwWrite(EtwAppCompatProvRegHandle, &APPCOMPAT_REG_WRP_ACCESS_DENIED, 0LL, 4u, &UserData);
    if ( (unsigned __int8)v7 != 1 )
      KiUnstackDetachProcess((__int64)v17, 0LL, v13, v14);
  }
}
