/*
 * XREFs of ?SmStCheckResident@?$SMKM_STORE@USM_TRAITS@@@@SA?AW4_SMST_RESIDENT_CHECK_RESULT@1@PEAXK@Z @ 0x1402455B4
 * Callers:
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140245270 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 * Callees:
 *     MmQueryVirtualMemory @ 0x1406885A0 (MmQueryVirtualMemory.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStCheckResident(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v3; // rdi
  int v4; // ecx
  _QWORD *i; // rdx
  _QWORD v7[4]; // [rsp+48h] [rbp-20h] BYREF

  v2 = 0;
  v7[1] = (a1 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  v7[0] = 0LL;
  v3 = ((a1 & 0xFFF) + 4095 + (unsigned __int64)a2) >> 12;
  v7[2] = 0LL;
  if ( (int)MmQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, 16LL * (unsigned int)v3, 0LL, 0) < 0 )
  {
    return 2;
  }
  else
  {
    v4 = 0;
    if ( (_DWORD)v3 )
    {
      for ( i = v7; (*i & 1) != 0 || (*i & 0xC00000LL) == 0x400000; i += 2 )
      {
        if ( ++v4 >= (unsigned int)v3 )
          return 1;
      }
    }
    else
    {
      return 1;
    }
  }
  return v2;
}
