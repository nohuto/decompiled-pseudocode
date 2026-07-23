/*
 * XREFs of CmpPublishEventForPcaResolver @ 0x14086AC8C
 * Callers:
 *     CmpDoParseKey @ 0x140710550 (CmpDoParseKey.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x14023C620 (PsGetCurrentThreadProcess.c)
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 */

void __fastcall CmpPublishEventForPcaResolver(__int64 a1, unsigned __int16 *a2)
{
  int v4; // ebx
  _KPROCESS *CurrentThreadProcess; // rax
  int v6; // r8d
  unsigned __int16 *v7; // rdx
  __int64 v8; // rax
  int v9; // ecx
  __int16 v10; // [rsp+34h] [rbp-35h] BYREF
  __int16 v11; // [rsp+38h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12[3]; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp+7h] BYREF
  __int64 v14; // [rsp+80h] [rbp+17h]
  int v15; // [rsp+88h] [rbp+1Fh]
  int v16; // [rsp+8Ch] [rbp+23h]
  __int16 *v17; // [rsp+90h] [rbp+27h]
  int v18; // [rsp+98h] [rbp+2Fh]
  int v19; // [rsp+9Ch] [rbp+33h]
  __int64 v20; // [rsp+A0h] [rbp+37h]
  int v21; // [rsp+A8h] [rbp+3Fh]
  int v22; // [rsp+ACh] [rbp+43h]

  memset(v12, 0, sizeof(v12));
  if ( EtwAppCompatProvRegHandle && EtwEventEnabled(EtwAppCompatProvRegHandle, &APPCOMPAT_REG_WRP_ACCESS_DENIED) )
  {
    v4 = *(_DWORD *)(a1 + 160) & 1;
    if ( !v4 )
      CmpAttachToRegistryProcess((__int64)v12);
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    v6 = *a2;
    v7 = (unsigned __int16 *)CurrentThreadProcess[1].ActiveProcessors.Bitmap[2];
    LOWORD(CurrentThreadProcess) = *v7;
    UserData.Reserved = 0;
    v10 = (unsigned __int16)CurrentThreadProcess >> 1;
    v11 = (unsigned __int16)v6 >> 1;
    UserData.Ptr = (ULONGLONG)&v10;
    UserData.Size = 2;
    v8 = *((_QWORD *)v7 + 1);
    v9 = *v7;
    v16 = 0;
    v19 = 0;
    v22 = 0;
    v14 = v8;
    v17 = &v11;
    v20 = *((_QWORD *)a2 + 1);
    v15 = v9;
    v18 = 2;
    v21 = v6;
    EtwWrite(EtwAppCompatProvRegHandle, &APPCOMPAT_REG_WRP_ACCESS_DENIED, 0LL, 4u, &UserData);
    if ( (unsigned __int8)v4 != 1 )
      KiUnstackDetachProcess((__int64)v12, 0LL);
  }
}
