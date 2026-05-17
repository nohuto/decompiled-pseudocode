/*
 * XREFs of _RtlRemoteCall@28 @ 0x4B366400
 * Callers:
 *     <none>
 * Callees:
 *     _LdrControlFlowGuardEnforced@0 @ 0x4B2D0100 (_LdrControlFlowGuardEnforced@0.c)
 *     _NtWriteVirtualMemory@20 @ 0x4B2F2D20 (_NtWriteVirtualMemory@20.c)
 *     _ZwResumeThread@8 @ 0x4B2F2EA0 (_ZwResumeThread@8.c)
 *     _NtGetContextThread@8 @ 0x4B2F38A0 (_NtGetContextThread@8.c)
 *     _ZwSetContextThread@8 @ 0x4B2F4230 (_ZwSetContextThread@8.c)
 *     _ZwSuspendThread@8 @ 0x4B2F4540 (_ZwSuspendThread@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __stdcall RtlRemoteCall(int a1, int a2, int a3, unsigned int a4, const void *a5, char a6, char a7)
{
  int result; // eax
  unsigned int v8; // edi
  int v9; // edi
  int v10; // [esp+8h] [ebp-2F4h]
  int v11; // [esp+14h] [ebp-2E8h]
  int v12; // [esp+14h] [ebp-2E8h]
  _DWORD v13[49]; // [esp+18h] [ebp-2E4h] BYREF
  int v14; // [esp+DCh] [ebp-220h]
  int v15; // [esp+2E4h] [ebp-18h] BYREF
  _BYTE v16[16]; // [esp+2E8h] [ebp-14h] BYREF

  if ( LdrControlFlowGuardEnforced() )
    return -1073741822;
  v8 = a4;
  if ( a4 > 4 )
    return -1073741811;
  if ( a7 || (result = ZwSuspendThread(a2, 0), result >= 0) )
  {
    v13[0] = 65543;
    result = NtGetContextThread(a2, (int)v13);
    v11 = result;
    if ( result < 0 )
    {
      if ( !a7 )
      {
        ZwResumeThread(a2, 0);
        return v11;
      }
      return result;
    }
    v12 = v14;
    if ( a6 )
    {
      v12 = v14 - 716;
      result = NtWriteVirtualMemory(a1, v14 - 716, (int)v13, 716, 0);
      v10 = result;
      if ( result < 0 )
      {
        if ( !a7 )
        {
          ZwResumeThread(a2, 0);
          return v10;
        }
        return result;
      }
      v15 = v12;
      memcpy(v16, a5, 4 * a4);
      v8 = a4 + 1;
    }
    else
    {
      memcpy(&v15, a5, 4 * a4);
    }
    if ( !v8 || (v12 -= 4 * v8, v9 = NtWriteVirtualMemory(a1, v12, (int)&v15, 4 * v8, 0), v9 >= 0) )
    {
      v14 = v12;
      v13[46] = a3;
      v9 = ZwSetContextThread(a2, (int)v13);
    }
    if ( !a7 )
      ZwResumeThread(a2, 0);
    return v9;
  }
  return result;
}
