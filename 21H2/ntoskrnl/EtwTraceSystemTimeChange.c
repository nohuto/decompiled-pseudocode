/*
 * XREFs of EtwTraceSystemTimeChange @ 0x140999CE8
 * Callers:
 *     PoNotifySystemTimeSet @ 0x1403A7954 (PoNotifySystemTimeSet.c)
 * Callees:
 *     PsGetProcessId @ 0x140269640 (PsGetProcessId.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

char __fastcall EtwTraceSystemTimeChange(__int64 *a1, _QWORD *a2, int a3)
{
  _KPROCESS *Process; // rbx
  unsigned int ProcessId; // eax
  unsigned __int16 *v7; // rbx
  int v8; // edx
  int v9; // r9d
  int v11; // [rsp+38h] [rbp-D0h] BYREF
  int v12; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v13; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v14[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD *v18; // [rsp+78h] [rbp-90h]
  __int64 v19; // [rsp+80h] [rbp-88h]
  int *v20; // [rsp+88h] [rbp-80h]
  __int64 v21; // [rsp+90h] [rbp-78h]
  __int64 v22; // [rsp+98h] [rbp-70h]
  int v23; // [rsp+A0h] [rbp-68h]
  int v24; // [rsp+A4h] [rbp-64h]
  __int64 *v25; // [rsp+A8h] [rbp-60h]
  __int64 v26; // [rsp+B0h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+B8h] [rbp-50h] BYREF
  __int64 *v28; // [rsp+D8h] [rbp-30h]
  __int64 v29; // [rsp+E0h] [rbp-28h]
  __int64 *v30; // [rsp+E8h] [rbp-20h]
  __int64 v31; // [rsp+F0h] [rbp-18h]
  int *v32; // [rsp+F8h] [rbp-10h]
  __int64 v33; // [rsp+100h] [rbp-8h]
  _DWORD *v34; // [rsp+108h] [rbp+0h]
  __int64 v35; // [rsp+110h] [rbp+8h]
  __int64 v36; // [rsp+118h] [rbp+10h]
  _DWORD v37[2]; // [rsp+120h] [rbp+18h] BYREF
  int *v38; // [rsp+128h] [rbp+20h]
  __int64 v39; // [rsp+130h] [rbp+28h]
  int v40; // [rsp+188h] [rbp+80h] BYREF

  v40 = a3;
  v14[0] = 0x20000LL;
  v14[1] = &word_1409A2C40;
  Process = KeGetCurrentThread()->ApcState.Process;
  ProcessId = (unsigned int)PsGetProcessId(Process);
  LODWORD(v13) = ProcessId;
  v7 = (unsigned __int16 *)Process[1].ActiveProcessors.Bitmap[2];
  if ( !v7 || !*v7 )
    v7 = (unsigned __int16 *)v14;
  if ( (unsigned int)dword_140C02BF0 > 5 )
  {
    LOBYTE(ProcessId) = tlgKeywordOn((__int64)&dword_140C02BF0, 0x400000000000LL);
    if ( (_BYTE)ProcessId )
    {
      v15 = *a1;
      v12 = v9;
      v28 = &v15;
      v16 = *a2;
      v30 = &v16;
      v11 = v40;
      v32 = &v11;
      v34 = v37;
      v36 = *((_QWORD *)v7 + 1);
      v37[0] = *v7;
      v38 = &v12;
      v29 = 8LL;
      v31 = 8LL;
      v33 = 4LL;
      v35 = 2LL;
      v37[1] = 0;
      v39 = 4LL;
      LOBYTE(ProcessId) = tlgWriteTransfer_EtwWriteTransfer(
                            (__int64)&dword_140C02BF0,
                            (unsigned __int8 *)&word_14002C93E,
                            0LL,
                            0LL,
                            8u,
                            &v27);
    }
  }
  if ( EtwKernelProvRegHandle )
  {
    UserData.Ptr = (ULONGLONG)a1;
    v20 = &v40;
    *(_QWORD *)&UserData.Size = 8LL;
    v18 = a2;
    v19 = 8LL;
    v21 = 4LL;
    v8 = v7[1];
    v22 = *((_QWORD *)v7 + 1);
    v25 = &v13;
    v23 = v8;
    v24 = 0;
    v26 = 4LL;
    LOBYTE(ProcessId) = EtwWrite(EtwKernelProvRegHandle, &KernelSystemTimeChange, 0LL, 5u, &UserData);
  }
  return ProcessId;
}
