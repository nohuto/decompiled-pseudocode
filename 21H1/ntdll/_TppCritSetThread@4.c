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

_PEB *__thiscall TppCritSetThread(HANDLE *this)
{
  _PEB *result; // eax
  _DWORD v2[5]; // [esp+10h] [ebp-74h] BYREF
  _DWORD *v3; // [esp+24h] [ebp-60h]
  int v4; // [esp+28h] [ebp-5Ch]
  int v5; // [esp+2Ch] [ebp-58h]
  _DWORD v6[2]; // [esp+30h] [ebp-54h] BYREF
  HANDLE *v7; // [esp+38h] [ebp-4Ch]
  HANDLE v8; // [esp+3Ch] [ebp-48h] BYREF
  int v9; // [esp+40h] [ebp-44h] BYREF
  HANDLE Handle; // [esp+44h] [ebp-40h] BYREF
  __int16 v11; // [esp+48h] [ebp-3Ch] BYREF
  _DWORD v12[4]; // [esp+4Ch] [ebp-38h] BYREF
  _DWORD v13[4]; // [esp+5Ch] [ebp-28h] BYREF
  CPPEH_RECORD ms_exc; // [esp+6Ch] [ebp-18h]

  v7 = this;
  v2[0] = 24;
  memset(&v2[1], 0, 16);
  v3 = 0;
  *this = 0;
  result = NtCurrentTeb()->ProcessEnvironmentBlock;
  if ( (result->NtGlobalFlag & 0x100000) != 0 )
  {
    result = (_PEB *)ZwOpenProcessTokenEx(-1, 2, 0, &v8);
    if ( (int)result >= 0 )
    {
      ms_exc.registration.TryLevel = 0;
      v13[0] = 12;
      v13[1] = 2;
      v13[2] = 0;
      v3 = v13;
      if ( (int)NtDuplicateToken(v8, 36, v2, 0, 2, &Handle) < 0 )
        goto LABEL_15;
      ms_exc.registration.TryLevel = 1;
      v11 = 256;
      if ( (int)ZwSetInformationObject(Handle, 4, &v11, 2) >= 0 )
      {
        ms_exc.registration.TryLevel = 2;
        if ( (int)ZwSetInformationThread(-2, 5, &Handle, 4) >= 0 )
        {
          ms_exc.registration.TryLevel = 3;
          v12[0] = 1;
          v4 = 20;
          v5 = 0;
          v12[1] = 20;
          v12[2] = 0;
          v12[3] = 2;
          if ( (int)ZwAdjustPrivilegesToken(Handle, 0, v12, 16, 0, 0) >= 0 )
          {
            v9 = 1;
            v5 = ZwSetInformationThread(-2, 18, &v9, 4);
            if ( v5 >= 0 )
            {
              *v7 = Handle;
              Handle = 0;
              ms_exc.registration.TryLevel = 3;
              v6[1] = 0;
            }
          }
          ms_exc.registration.TryLevel = 2;
          v6[0] = 0;
          ZwSetInformationThread(-2, 5, v6, 4);
        }
        ms_exc.registration.TryLevel = 1;
        if ( Handle )
        {
          v11 = 0;
          return (_PEB *)ZwSetInformationObject(Handle, 4, &v11, 2);
        }
      }
      ms_exc.registration.TryLevel = 0;
      if ( !Handle )
      {
LABEL_15:
        ms_exc.registration.TryLevel = -2;
        return (_PEB *)NtClose(v8);
      }
      return (_PEB *)NtClose(Handle);
    }
  }
  return result;
}
