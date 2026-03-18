/*
 * XREFs of SymCryptParallelSha256Process @ 0x1403EBAD4
 * Callers:
 *     KeComputeParallelSha256 @ 0x1403BA3A0 (KeComputeParallelSha256.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x14035E220 (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptRestoreYmm @ 0x1403C5CBC (SymCryptRestoreYmm.c)
 *     SymCryptSaveYmm @ 0x1403C5CD4 (SymCryptSaveYmm.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     SymCryptParallelHashProcess @ 0x1403EC04C (SymCryptParallelHashProcess.c)
 *     SymCryptParallelHashProcess_serial @ 0x1403EC2FC (SymCryptParallelHashProcess_serial.c)
 *     memset @ 0x14040A280 (memset.c)
 *     SymCryptRestoreXmm @ 0x14050FAD0 (SymCryptRestoreXmm.c)
 */

__int64 __fastcall SymCryptParallelSha256Process(int a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  _BYTE v11[64]; // [rsp+40h] [rbp-78h] BYREF

  memset(v11, 0, sizeof(v11));
  if ( (((unsigned __int8)g_SymCryptCpuFeaturesNotPresent | (unsigned __int8)SymCryptCpuFeaturesNeverPresent()) & 0x10) != 0
    || (unsigned int)SymCryptSaveYmm((struct _XSTATE_SAVE *)v11) )
  {
    if ( (((unsigned __int8)g_SymCryptCpuFeaturesNotPresent | (unsigned __int8)SymCryptCpuFeaturesNeverPresent()) & 2) != 0
      || (unsigned int)SymCryptCpuFeaturesNeverPresent() )
    {
      return SymCryptParallelHashProcess_serial(
               (unsigned int)&SymCryptParallelSha256Algorithm_default,
               a1,
               a2,
               a3,
               a4,
               a5,
               a6);
    }
    else
    {
      SymCryptParallelHashProcess((unsigned int)&SymCryptParallelSha256Algorithm_default, a1, a2, a3, a4, a5, a6, 4);
      return SymCryptRestoreXmm(v11);
    }
  }
  else
  {
    SymCryptParallelHashProcess((unsigned int)&SymCryptParallelSha256Algorithm_default, a1, a2, a3, a4, a5, a6, 8);
    return SymCryptRestoreYmm();
  }
}
