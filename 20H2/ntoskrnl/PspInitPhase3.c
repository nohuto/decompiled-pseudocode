/*
 * XREFs of PspInitPhase3 @ 0x140A77164
 * Callers:
 *     Phase1InitializationIoReady @ 0x140A4AA48 (Phase1InitializationIoReady.c)
 *     PsInitSystem @ 0x140A4ABB8 (PsInitSystem.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     VslpEnterIumSecureMode @ 0x1402E51E8 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     PspMapSystemDll @ 0x1406EF9E8 (PspMapSystemDll.c)
 *     PspGetSystemDllSecureHandle @ 0x140A967D8 (PspGetSystemDllSecureHandle.c)
 */

bool PspInitPhase3()
{
  int SystemDllSecureHandle; // ebx
  int v2; // eax
  __int64 v3; // rbx
  __int64 v4; // [rsp+20h] [rbp-69h] BYREF
  __int64 v5; // [rsp+28h] [rbp-61h] BYREF
  _OWORD v6[3]; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v7[14]; // [rsp+60h] [rbp-29h] BYREF

  memset(v6, 0, sizeof(v6));
  v5 = 0LL;
  if ( !VslVsmEnabled )
    return 1;
  KiStackAttachProcess((_KPROCESS *)PsSecureSystemProcess, 0, (__int64)v6);
  SystemDllSecureHandle = PspGetSystemDllSecureHandle(PspSystemDlls, &v5);
  if ( SystemDllSecureHandle >= 0 )
  {
    SystemDllSecureHandle = PspMapSystemDll((struct _KPROCESS *)PsSecureSystemProcess, (__int64)PspSystemDlls, 0, 0);
    if ( SystemDllSecureHandle >= 0 )
    {
      v4 = 0LL;
      if ( (int)PspGetSystemDllSecureHandle(off_140D2D288, &v4) < 0 )
      {
        v3 = v4;
      }
      else
      {
        v2 = PspMapSystemDll((struct _KPROCESS *)PsSecureSystemProcess, (__int64)off_140D2D288, 0, 0);
        v3 = v4;
        if ( v2 < 0 )
          v3 = 0LL;
      }
      memset(v7, 0, 0x68uLL);
      v7[1] = v5;
      v7[2] = v3;
      SystemDllSecureHandle = VslpEnterIumSecureMode(2u, 4, 0, (__int64)v7);
    }
  }
  KiUnstackDetachProcess((__int64)v6, 0);
  return SystemDllSecureHandle >= 0;
}
