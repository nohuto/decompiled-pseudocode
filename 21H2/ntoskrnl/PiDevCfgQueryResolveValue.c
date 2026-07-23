/*
 * XREFs of PiDevCfgQueryResolveValue @ 0x14050E6E4
 * Callers:
 *     PiDevCfgConfigureDeviceKeys @ 0x1407677A4 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x14077C4E8 (PiDevCfgVerifyDeviceAllowed.c)
 * Callees:
 *     PnpValidateStringData @ 0x14036F128 (PnpValidateStringData.c)
 *     PiDevCfgParseVariableName @ 0x140393FBC (PiDevCfgParseVariableName.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     IopGetRegistryValue @ 0x140742C58 (IopGetRegistryValue.c)
 *     PiDevCfgResolveVariable @ 0x14077B730 (PiDevCfgResolveVariable.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgQueryResolveValue(__int64 a1, void *a2, __int64 a3, _QWORD *a4)
{
  int RegistryValue; // edi
  _WORD *v7; // rcx
  __int64 v8; // r14
  _DWORD *PoolWithTag; // rax
  _DWORD *v10; // rsi
  int v12; // [rsp+20h] [rbp-30h] BYREF
  PVOID P; // [rsp+28h] [rbp-28h]
  __int64 v14; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING v15; // [rsp+38h] [rbp-18h] BYREF

  P = 0LL;
  v12 = 0;
  v14 = 0LL;
  v15 = 0LL;
  RegistryValue = IopGetRegistryValue(a2);
  if ( RegistryValue >= 0 )
  {
    *((_WORD *)P + 3) = 0;
    if ( *(_QWORD *)(a1 + 16)
      && (unsigned int)(MEMORY[4] - 1) <= 1
      && PnpValidateStringData(MEMORY[8], MEMORY[0xC])
      && PiDevCfgParseVariableName(v7, &v15, &v12) )
    {
      RegistryValue = PiDevCfgResolveVariable(a1, v15.Buffer, &v14);
      if ( RegistryValue >= 0 )
      {
        v8 = v14;
        PoolWithTag = ExAllocatePoolWithTag(
                        PagedPool,
                        (unsigned int)(MEMORY[0x10] + 26 + *(_DWORD *)(v14 + 36)),
                        0x63647050u);
        v10 = PoolWithTag;
        if ( PoolWithTag )
        {
          *PoolWithTag = MEMORY[0];
          PoolWithTag[4] = MEMORY[0x10];
          PoolWithTag[1] = *(_DWORD *)(v8 + 32);
          PoolWithTag[3] = *(_DWORD *)(v8 + 36);
          PoolWithTag[2] = MEMORY[0x10] + 22;
          memmove(PoolWithTag + 5, (const void *)0x14, MEMORY[0x10]);
          *(_WORD *)(2 * ((unsigned __int64)MEMORY[0x10] >> 1) + 0x14) = 0;
          memmove((char *)v10 + (unsigned int)v10[2], *(const void **)(v8 + 40), *(unsigned int *)(v8 + 36));
          *a4 = v10;
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
    else
    {
      *a4 = 0LL;
    }
  }
  return (unsigned int)RegistryValue;
}
