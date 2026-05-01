/*
 * XREFs of ?get_ExpectedAppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJPEA_K@Z @ 0x18000F840
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAppMemoryInformation@CMemoryManager@System@Windows@@AEAAJPEA_K0PEAU_PROCESS_JOB_MEMORY_INFO@@@Z @ 0x180001A88 (-GetAppMemoryInformation@CMemoryManager@System@Windows@@AEAAJPEA_K0PEAU_PROCESS_JOB_MEMORY_INFO@.c)
 */

signed int __fastcall Windows::System::CMemoryManager::get_ExpectedAppMemoryUsageLimit(
        Windows::System::CMemoryManager *this,
        unsigned __int64 *a2)
{
  signed int result; // eax
  unsigned __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  result = Windows::System::CMemoryManager::GetAppMemoryInformation(this, 0LL, &v4, 0LL);
  if ( result >= 0 )
  {
    *a2 = v4;
    return 0;
  }
  return result;
}
