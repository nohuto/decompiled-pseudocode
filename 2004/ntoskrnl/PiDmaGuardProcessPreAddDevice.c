/*
 * XREFs of PiDmaGuardProcessPreAddDevice @ 0x14075A39C
 * Callers:
 *     PipCallDriverAddDevice @ 0x140727744 (PipCallDriverAddDevice.c)
 * Callees:
 *     PipDmgSaveDeviceDmarPolicy @ 0x14075A404 (PipDmgSaveDeviceDmarPolicy.c)
 *     PipDmgGetDeviceDmarPolicy @ 0x14075A5D0 (PipDmgGetDeviceDmarPolicy.c)
 */

__int64 __fastcall PiDmaGuardProcessPreAddDevice(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v5; // r8
  unsigned int DeviceDmarPolicy; // eax

  v2 = *a1;
  result = 0LL;
  v5 = *(_QWORD *)(*a1 + 720);
  if ( v5 )
  {
    if ( (*(_BYTE *)(v5 + 16) & 0x10) != 0 )
    {
      DeviceDmarPolicy = 1;
    }
    else if ( (*(_DWORD *)(v2 + 560) & 0x100000) != 0 )
    {
      DeviceDmarPolicy = 2;
    }
    else
    {
      DeviceDmarPolicy = PipDmgGetDeviceDmarPolicy();
    }
    return PipDmgSaveDeviceDmarPolicy(v2, a2, DeviceDmarPolicy);
  }
  return result;
}
