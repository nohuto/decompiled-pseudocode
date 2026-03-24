/*
 * XREFs of CmpPublishEventForPcaResolver @ 0x14086AB2C
 * Callers:
 *     CmpDoParseKey @ 0x1406F9170 (CmpDoParseKey.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     EtwEventEnabled @ 0x14021BF30 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14025DC90 (EtwWrite.c)
 *     PsGetCurrentThreadProcess @ 0x1402BDFE0 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
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
  __int16 v13; // [rsp+34h] [rbp-35h] BYREF
  __int16 v14; // [rsp+38h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15[3]; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp+7h] BYREF
  __int64 v17; // [rsp+80h] [rbp+17h]
  int v18; // [rsp+88h] [rbp+1Fh]
  int v19; // [rsp+8Ch] [rbp+23h]
  __int16 *v20; // [rsp+90h] [rbp+27h]
  int v21; // [rsp+98h] [rbp+2Fh]
  int v22; // [rsp+9Ch] [rbp+33h]
  __int64 v23; // [rsp+A0h] [rbp+37h]
  int v24; // [rsp+A8h] [rbp+3Fh]
  int v25; // [rsp+ACh] [rbp+43h]

  memset(v15, 0, sizeof(v15));
  if ( EtwAppCompatProvRegHandle && EtwEventEnabled(EtwAppCompatProvRegHandle, &APPCOMPAT_REG_WRP_ACCESS_DENIED) )
  {
    v7 = *(_DWORD *)(a1 + 160) & 1;
    if ( !v7 )
      CmpAttachToRegistryProcess((__int64)v15, v4, v5, v6);
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    v9 = *a2;
    v10 = (unsigned __int16 *)CurrentThreadProcess[1].ActiveProcessors.Bitmap[2];
    LOWORD(CurrentThreadProcess) = *v10;
    UserData.Reserved = 0;
    v13 = (unsigned __int16)CurrentThreadProcess >> 1;
    v14 = (unsigned __int16)v9 >> 1;
    UserData.Ptr = (ULONGLONG)&v13;
    UserData.Size = 2;
    v11 = *((_QWORD *)v10 + 1);
    v12 = *v10;
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v17 = v11;
    v20 = &v14;
    v23 = *((_QWORD *)a2 + 1);
    v18 = v12;
    v21 = 2;
    v24 = v9;
    EtwWrite(EtwAppCompatProvRegHandle, &APPCOMPAT_REG_WRP_ACCESS_DENIED, 0LL, 4u, &UserData);
    if ( (unsigned __int8)v7 != 1 )
      KiUnstackDetachProcess((__int64)v15, 0);
  }
}
