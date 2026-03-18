/*
 * XREFs of ACPICMExperienceButtonWorker @ 0x1C00ADFF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ACPICMExperienceButtonWorker(__int64 a1, unsigned int a2)
{
  _DWORD *PoolWithTag; // rbx
  int v5; // eax
  char v6; // si
  int v7; // edx
  unsigned int v8; // eax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x2CuLL, 0x52706341u);
  if ( PoolWithTag )
  {
    *(_OWORD *)PoolWithTag = 0LL;
    *((_OWORD *)PoolWithTag + 1) = 0LL;
    *((_QWORD *)PoolWithTag + 4) = 0LL;
    PoolWithTag[10] = 0;
    *PoolWithTag = 1;
    PoolWithTag[6] = 16;
    *(GUID *)(PoolWithTag + 1) = GUID_APPLAUNCH_BUTTON;
    v5 = _strtoui64(*(const char **)(a1 + 576), 0LL, 10);
    v6 = 0;
    for ( PoolWithTag[10] = v5; a2; a2 >>= 1 )
    {
      v7 = (a2 & 1) << v6;
      if ( v7 )
      {
        PoolWithTag[9] = 0;
        v8 = PoolWithTag[9];
        if ( v7 == 2 )
          v8 = 0x80000000;
        PoolWithTag[9] = v8;
        *(_QWORD *)(PoolWithTag + 7) = MEMORY[0xFFFFF78000000014];
        PoolWithTag[5] = 0;
        ZwPowerInformation(SetPowerSettingValue, PoolWithTag, 0x2Cu, 0LL, 0);
        PoolWithTag[5] = 1;
        ZwPowerInformation(SetPowerSettingValue, PoolWithTag, 0x2Cu, 0LL, 0);
      }
      ++v6;
    }
    ExFreePoolWithTag(PoolWithTag, 0);
  }
}
