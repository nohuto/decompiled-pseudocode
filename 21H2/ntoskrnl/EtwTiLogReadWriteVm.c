/*
 * XREFs of EtwTiLogReadWriteVm @ 0x140690354
 * Callers:
 *     MiReadWriteVirtualMemory @ 0x1406E58F0 (MiReadWriteVirtualMemory.c)
 * Callees:
 *     EtwpTiFillThreadIdentity @ 0x14027E480 (EtwpTiFillThreadIdentity.c)
 *     EtwpTiFillProcessIdentity @ 0x14027E4B8 (EtwpTiFillProcessIdentity.c)
 *     EtwProviderEnabled @ 0x14027E6F0 (EtwProviderEnabled.c)
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

char __fastcall EtwTiLogReadWriteVm(int a1, __int64 a2, __int64 a3, int a4, char a5, char a6)
{
  struct _KTHREAD *CurrentThread; // rax
  REGHANDLE v10; // rsi
  ULONGLONG v11; // r8
  __int64 *v12; // rax
  __int64 *v13; // rbx
  int v14; // eax
  int v15; // eax
  int v16; // r9d
  int v17; // eax
  int v18; // r9d
  unsigned int v19; // r9d
  __int64 v20; // rax
  __int64 v21; // rax
  REGHANDLE v22; // rcx
  unsigned __int64 v24; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v27[32]; // [rsp+50h] [rbp-B0h] BYREF
  int v28; // [rsp+190h] [rbp+90h] BYREF

  v28 = a1;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->PreviousMode == 1 )
  {
    v10 = EtwThreatIntProvRegHandle;
    v11 = 196608LL;
    if ( a4 != 16 )
      v11 = 786432LL;
    LOBYTE(CurrentThread) = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, v11);
    if ( (_BYTE)CurrentThread )
    {
      if ( a2 == a3 )
      {
        v13 = THREATINT_READVM_LOCAL;
        v12 = THREATINT_WRITEVM_LOCAL;
      }
      else
      {
        v12 = (__int64 *)&THREATINT_WRITEVM_REMOTE;
        v13 = THREATINT_READVM_REMOTE;
      }
      if ( a4 != 16 )
        v13 = v12;
      LOBYTE(CurrentThread) = EtwEventEnabled(v10, (PCEVENT_DESCRIPTOR)v13);
      if ( (_BYTE)CurrentThread )
      {
        UserData.Reserved = 0;
        UserData.Ptr = (ULONGLONG)&v28;
        UserData.Size = 4;
        v14 = EtwpTiFillProcessIdentity(v27, a2, &v24);
        v15 = EtwpTiFillThreadIdentity((__int64)(&UserData + (unsigned int)(v14 + 1)), (__int64)KeGetCurrentThread());
        v17 = EtwpTiFillProcessIdentity(&UserData.Ptr + 2 * (unsigned int)(v15 + v16), a3, &v25);
        v19 = v17 + v18;
        v20 = 2LL * v19++;
        *(&UserData.Reserved + 2 * v20) = 0;
        *(&UserData.Ptr + v20) = (ULONGLONG)&a5;
        *(&UserData.Size + 2 * v20) = 8;
        v21 = 2LL * v19;
        *(&UserData.Reserved + 2 * v21) = 0;
        *(&UserData.Ptr + v21) = (ULONGLONG)&a6;
        v22 = EtwThreatIntProvRegHandle;
        *(&UserData.Size + 2 * v21) = 8;
        LOBYTE(CurrentThread) = EtwWrite(v22, (PCEVENT_DESCRIPTOR)v13, 0LL, v19 + 1, &UserData);
      }
    }
  }
  return (char)CurrentThread;
}
