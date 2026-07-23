/*
 * XREFs of _TppCritSetThread@4 @ 0x4B2B807E
 * Callers:
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 * Callees:
 *     _TppCritSetThread@4 @ 0x4B2B807E (_TppCritSetThread@4.c)
 *     _ZwSetInformationThread@16 @ 0x4B2F2A30 (_ZwSetInformationThread@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenProcessTokenEx@16 @ 0x4B2F2C80 (_ZwOpenProcessTokenEx@16.c)
 *     _ZwAdjustPrivilegesToken@24 @ 0x4B2F2D90 (_ZwAdjustPrivilegesToken@24.c)
 *     _NtDuplicateToken@24 @ 0x4B2F2DA0 (_NtDuplicateToken@24.c)
 *     _ZwSetInformationObject@16 @ 0x4B2F2F40 (_ZwSetInformationObject@16.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 */

int __thiscall TppCritSetThread(HANDLE *this)
{
  int result; // eax
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+10h] [ebp-74h] BYREF
  int v3; // [esp+28h] [ebp-5Ch]
  NTSTATUS v4; // [esp+2Ch] [ebp-58h]
  _DWORD v5[2]; // [esp+30h] [ebp-54h] BYREF
  HANDLE *v6; // [esp+38h] [ebp-4Ch]
  HANDLE TokenHandle; // [esp+3Ch] [ebp-48h] BYREF
  int ThreadInformation; // [esp+40h] [ebp-44h] BYREF
  HANDLE NewTokenHandle; // [esp+44h] [ebp-40h] BYREF
  __int16 ObjectInformation; // [esp+48h] [ebp-3Ch] BYREF
  _TOKEN_PRIVILEGES NewState; // [esp+4Ch] [ebp-38h] BYREF
  _DWORD v12[4]; // [esp+5Ch] [ebp-28h] BYREF
  CPPEH_RECORD ms_exc; // [esp+6Ch] [ebp-18h]

  v6 = this;
  ObjectAttributes.Length = 24;
  memset(&ObjectAttributes.RootDirectory, 0, 20);
  *this = 0;
  result = (int)NtCurrentTeb()->ProcessEnvironmentBlock;
  if ( (*(_DWORD *)(result + 104) & 0x100000) != 0 )
  {
    result = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFF, 2u, 0, &TokenHandle);
    if ( result >= 0 )
    {
      ms_exc.registration.TryLevel = 0;
      v12[0] = 12;
      v12[1] = 2;
      v12[2] = 0;
      ObjectAttributes.SecurityQualityOfService = v12;
      if ( NtDuplicateToken(TokenHandle, 0x24u, &ObjectAttributes, 0, TokenImpersonation, &NewTokenHandle) < 0 )
        goto LABEL_15;
      ms_exc.registration.TryLevel = 1;
      ObjectInformation = 256;
      if ( ZwSetInformationObject(NewTokenHandle, ObjectHandleFlagInformation, &ObjectInformation, 2u) >= 0 )
      {
        ms_exc.registration.TryLevel = 2;
        if ( ZwSetInformationThread((HANDLE)0xFFFFFFFE, ThreadImpersonationToken, &NewTokenHandle, 4u) >= 0 )
        {
          ms_exc.registration.TryLevel = 3;
          NewState.PrivilegeCount = 1;
          v3 = 20;
          v4 = 0;
          NewState.Privileges[0].Luid.LowPart = 20;
          NewState.Privileges[0].Luid.HighPart = 0;
          NewState.Privileges[0].Attributes = 2;
          if ( ZwAdjustPrivilegesToken(NewTokenHandle, 0, &NewState, 0x10u, 0, 0) >= 0 )
          {
            ThreadInformation = 1;
            v4 = ZwSetInformationThread((HANDLE)0xFFFFFFFE, ThreadBreakOnTermination, &ThreadInformation, 4u);
            if ( v4 >= 0 )
            {
              *v6 = NewTokenHandle;
              NewTokenHandle = 0;
              ms_exc.registration.TryLevel = 3;
              v5[1] = 0;
            }
          }
          ms_exc.registration.TryLevel = 2;
          v5[0] = 0;
          ZwSetInformationThread((HANDLE)0xFFFFFFFE, ThreadImpersonationToken, v5, 4u);
        }
        ms_exc.registration.TryLevel = 1;
        if ( NewTokenHandle )
        {
          ObjectInformation = 0;
          return ZwSetInformationObject(NewTokenHandle, ObjectHandleFlagInformation, &ObjectInformation, 2u);
        }
      }
      ms_exc.registration.TryLevel = 0;
      if ( !NewTokenHandle )
      {
LABEL_15:
        ms_exc.registration.TryLevel = -2;
        return NtClose(TokenHandle);
      }
      return NtClose(NewTokenHandle);
    }
  }
  return result;
}
