/*
 * XREFs of PspInitPhase3 @ 0x140A70188
 * Callers:
 *     Phase1InitializationIoReady @ 0x140A3EF44 (Phase1InitializationIoReady.c)
 *     PsInitSystem @ 0x140A3F0F4 (PsInitSystem.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     VslpEnterIumSecureMode @ 0x14032A7E0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PspMapSystemDll @ 0x14064D080 (PspMapSystemDll.c)
 *     PspGetSystemDllSecureHandle @ 0x140A914E8 (PspGetSystemDllSecureHandle.c)
 */

bool __fastcall PspInitPhase3(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int SystemDllSecureHandle; // ebx
  __int64 v6; // r8
  _DWORD *v7; // r9
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // [rsp+20h] [rbp-69h] BYREF
  __int64 v11; // [rsp+28h] [rbp-61h] BYREF
  _OWORD v12[3]; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v13[14]; // [rsp+60h] [rbp-29h] BYREF

  memset(v12, 0, sizeof(v12));
  v11 = 0LL;
  if ( !VslVsmEnabled )
    return 1;
  KiStackAttachProcess((_KPROCESS *)PsSecureSystemProcess, 0LL, (__int64)v12, a4);
  SystemDllSecureHandle = PspGetSystemDllSecureHandle(PspSystemDlls, &v11);
  if ( SystemDllSecureHandle >= 0 )
  {
    SystemDllSecureHandle = PspMapSystemDll((struct _KPROCESS *)PsSecureSystemProcess, (__int64)PspSystemDlls, 0, 0);
    if ( SystemDllSecureHandle >= 0 )
    {
      v10 = 0LL;
      if ( (int)PspGetSystemDllSecureHandle(off_140D2C290, &v10) < 0 )
      {
        v9 = v10;
      }
      else
      {
        v8 = PspMapSystemDll((struct _KPROCESS *)PsSecureSystemProcess, (__int64)off_140D2C290, 0, 0);
        v9 = v10;
        if ( v8 < 0 )
          v9 = 0LL;
      }
      memset(v13, 0, 0x68uLL);
      v13[1] = v11;
      v13[2] = v9;
      SystemDllSecureHandle = VslpEnterIumSecureMode(2u, 4, 0, (__int64)v13);
    }
  }
  KiUnstackDetachProcess((__int64)v12, 0LL, v6, v7);
  return SystemDllSecureHandle >= 0;
}
