/*
 * XREFs of EtwTiLogSetContextThread @ 0x1405F6208
 * Callers:
 *     PspWow64SetContextThread @ 0x1405F5270 (PspWow64SetContextThread.c)
 *     PspSetContextThreadInternal @ 0x14063CA8C (PspSetContextThreadInternal.c)
 * Callees:
 *     EtwpTiVadQueryEventWrite @ 0x140244288 (EtwpTiVadQueryEventWrite.c)
 *     EtwpTiFillThreadIdentity @ 0x14027E480 (EtwpTiFillThreadIdentity.c)
 *     EtwpTiFillProcessIdentity @ 0x14027E4B8 (EtwpTiFillProcessIdentity.c)
 *     EtwProviderEnabled @ 0x14027E6F0 (EtwProviderEnabled.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     EtwpTiParseContextRecord @ 0x14093C654 (EtwpTiParseContextRecord.c)
 */

char __fastcall EtwTiLogSetContextThread(char a1, __int64 a2, __int64 a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  char v8; // bl
  __int64 v9; // r15
  __int64 Process; // rdi
  const EVENT_DESCRIPTOR *v11; // r14
  int v12; // eax
  int v13; // eax
  int v14; // r9d
  int v15; // eax
  int v16; // r9d
  int v17; // eax
  int v18; // r9d
  __int64 v19; // rsi
  unsigned int v20; // edi
  __int64 v21; // rsi
  __int16 v22; // ax
  _BYTE *v23; // r8
  __int64 v24; // rcx
  char v25; // dl
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v31; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v33; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34[38]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v35[96]; // [rsp+2C0h] [rbp+1C0h] BYREF
  unsigned int v36; // [rsp+388h] [rbp+288h] BYREF

  v36 = a4;
  LOBYTE(CurrentThread) = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0xC000uLL);
  v8 = 0;
  if ( (_BYTE)CurrentThread )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = *(_QWORD *)(a2 + 544);
    Process = (__int64)CurrentThread->ApcState.Process;
    if ( Process != v9 )
    {
      v11 = (const EVENT_DESCRIPTOR *)THREATINT_SETTHREADCONTEXT_REMOTE_KERNEL_CALLER;
      if ( a1 )
        v11 = &THREATINT_SETTHREADCONTEXT_REMOTE;
      LOBYTE(CurrentThread) = EtwEventEnabled(EtwThreatIntProvRegHandle, v11);
      if ( (_BYTE)CurrentThread )
      {
        v12 = EtwpTiFillProcessIdentity(v34, Process, &v32);
        v13 = EtwpTiFillThreadIdentity((__int64)&v34[v12], (__int64)KeGetCurrentThread());
        v15 = EtwpTiFillProcessIdentity(&v34[v13 + v14].Ptr, v9, &v33);
        v17 = EtwpTiFillThreadIdentity((__int64)&v34[v15 + v16], a2);
        v19 = (unsigned int)(v17 + v18);
        v20 = v19 + 1;
        v21 = v19;
        if ( EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x4000000uLL) )
        {
          v22 = EtwpTiParseContextRecord(v35, v36, a3);
          v23 = v35;
          v24 = v20;
          LOWORD(v31) = v22;
          v25 = v22;
          *(_QWORD *)&v34[v21].Size = 4LL;
          ++v20;
          v34[v21].Ptr = (ULONGLONG)&v36;
          v34[v24].Ptr = (ULONGLONG)&v31;
          *(_QWORD *)&v34[v24].Size = 2LL;
          v26 = 12LL;
          do
          {
            v27 = v20++;
            v27 *= 2LL;
            *(&v34[0].Ptr + v27) = (ULONGLONG)v23;
            v23 += 8;
            *((_QWORD *)&v34[0].Size + v27) = 8LL;
            --v26;
          }
          while ( v26 );
        }
        else
        {
          LOWORD(v31) = 0;
          v34[v21].Ptr = (ULONGLONG)&qword_14003BB30;
          v25 = 0;
          *(_QWORD *)&v34[v21].Size = 2LL;
          v28 = 12LL;
          do
          {
            v29 = v20++;
            v29 *= 2LL;
            *(&v34[0].Ptr + v29) = (ULONGLONG)&qword_14003BB30;
            *((_QWORD *)&v34[0].Size + v29) = 8LL;
            --v28;
          }
          while ( v28 );
        }
        if ( (v25 & 1) != 0 && EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x8000000uLL) )
          v8 = 1;
        LOBYTE(CurrentThread) = EtwpTiVadQueryEventWrite(v34, 38, v20, v9, (__int64)v35, 1, v11, v8, v31);
      }
    }
  }
  return (char)CurrentThread;
}
