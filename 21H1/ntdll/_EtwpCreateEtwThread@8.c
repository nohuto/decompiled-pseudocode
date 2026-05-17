/*
 * XREFs of _EtwpCreateEtwThread@8 @ 0x4B2F04A0
 * Callers:
 *     _EtwpStartUmLogger@16 @ 0x4B2F0075 (_EtwpStartUmLogger@16.c)
 * Callees:
 *     _RtlpCreateUserThreadEx@44 @ 0x4B2F0524 (_RtlpCreateUserThreadEx@44.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwResumeThread@8 @ 0x4B2F2EA0 (_ZwResumeThread@8.c)
 *     _ZwTerminateThread@8 @ 0x4B2F2EB0 (_ZwTerminateThread@8.c)
 */

HANDLE __thiscall EtwpCreateEtwThread(void *this, int a2, int a3)
{
  HANDLE v3; // esi
  int v4; // eax
  HANDLE Handle; // [esp+8h] [ebp-4h] BYREF

  if ( (int)RtlpCreateUserThreadEx(1, 0, 0, 0, this, a2, a3, &Handle, 0) < 0 )
    return 0;
  v3 = Handle;
  v4 = ZwResumeThread(Handle, 0);
  if ( v4 < 0 )
  {
    ZwTerminateThread(v3, v4);
    NtClose(v3);
    return 0;
  }
  return v3;
}
