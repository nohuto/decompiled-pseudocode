/*
 * XREFs of EtwTiLogSuspendResumeProcess @ 0x14093BC7C
 * Callers:
 *     PsThawProcess @ 0x1406001EC (PsThawProcess.c)
 *     PsFreezeProcess @ 0x140600364 (PsFreezeProcess.c)
 *     PsResumeProcess @ 0x14061E370 (PsResumeProcess.c)
 *     PsSuspendProcess @ 0x14090C980 (PsSuspendProcess.c)
 * Callees:
 *     EtwpTiFillThreadIdentity @ 0x14027E480 (EtwpTiFillThreadIdentity.c)
 *     EtwpTiFillProcessIdentity @ 0x14027E4B8 (EtwpTiFillProcessIdentity.c)
 *     EtwProviderEnabled @ 0x14027E6F0 (EtwProviderEnabled.c)
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
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
