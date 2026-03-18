/*
 * XREFs of EtwTiLogSuspendResumeProcess @ 0x1409E6524
 * Callers:
 *     PsThawMultiProcess @ 0x140257280 (PsThawMultiProcess.c)
 *     PsMultiResumeProcess @ 0x140259668 (PsMultiResumeProcess.c)
 *     PsFreezeProcess @ 0x1406C03F0 (PsFreezeProcess.c)
 *     PsSuspendProcess @ 0x1409B2EF0 (PsSuspendProcess.c)
 * Callees:
 *     EtwProviderEnabled @ 0x1402EDE50 (EtwProviderEnabled.c)
 *     EtwpTiFillProcessIdentity @ 0x1402EDEB4 (EtwpTiFillProcessIdentity.c)
 *     EtwpTiFillThreadIdentity @ 0x1402EDFB0 (EtwpTiFillThreadIdentity.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall EtwTiLogSuspendResumeProcess(int a1, __int64 a2, __int64 a3, int a4)
{
  REGHANDLE v7; // rdi
  __int64 v8; // rbp
  int v9; // ebx
  int v10; // ebx
  __int64 *v11; // rbx
  int v12; // eax
  int v13; // eax
  int v14; // r9d
  int v15; // eax
  int v16; // r9d
  unsigned __int64 v17; // [rsp+30h] [rbp-138h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-130h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-128h] BYREF
  _QWORD v20[28]; // [rsp+50h] [rbp-118h] BYREF
  int v21; // [rsp+170h] [rbp+8h] BYREF

  if ( a1 >= 0 )
  {
    v21 = a1;
    if ( KeGetCurrentThread()->PreviousMode == 1 )
    {
      v7 = EtwThreatIntProvRegHandle;
      if ( EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0xC00000uLL) )
      {
        v8 = *(_QWORD *)(a2 + 544);
        if ( a4 )
        {
          v9 = a4 - 1;
          if ( v9 )
          {
            v10 = v9 - 1;
            if ( v10 )
            {
              if ( v10 != 1 )
                return;
              v11 = (__int64 *)&THREATINT_THAW_PROCESS;
            }
            else
            {
              v11 = THREATINT_FREEZE_PROCESS;
            }
          }
          else
          {
            v11 = THREATINT_RESUME_PROCESS;
          }
        }
        else
        {
          v11 = THREATINT_SUSPEND_PROCESS;
        }
        if ( EtwEventEnabled(v7, (PCEVENT_DESCRIPTOR)v11) )
        {
          UserData.Reserved = 0;
          UserData.Ptr = (ULONGLONG)&v21;
          UserData.Size = 4;
          v12 = EtwpTiFillProcessIdentity(v20, v8, &v17);
          v13 = EtwpTiFillThreadIdentity((__int64)(&UserData + (unsigned int)(v12 + 1)), a2);
          v15 = EtwpTiFillProcessIdentity(&UserData.Ptr + 2 * (unsigned int)(v13 + v14), a3, &v18);
          EtwWrite(EtwThreatIntProvRegHandle, (PCEVENT_DESCRIPTOR)v11, 0LL, v15 + v16, &UserData);
        }
      }
    }
  }
}
