/*
 * XREFs of ExpGetSystemFlushInformation @ 0x14060BC30
 * Callers:
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x14060BD5C (ExpGetSystemFirmwareTableInformation.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpGetSystemFlushInformation(__int64 a1)
{
  int v2; // edx
  __int64 v4; // r15
  unsigned int *PoolWithTag; // rax
  unsigned int *v6; // r14
  __int64 v7; // rdx
  unsigned int *v8; // rdx
  unsigned int *v9; // rcx
  unsigned int *i; // rax
  __int64 v11; // rax
  char *v12; // r8
  _DWORD Src[3]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v14; // [rsp+44h] [rbp-34h]

  v2 = (KeFeatureBits >> 34) & 4 | 1;
  if ( (KeFeatureBits & 0x800000000LL) != 0 )
    v2 = (KeFeatureBits >> 34) & 4 | 3;
  *(_DWORD *)a1 = v2;
  *(_DWORD *)(a1 + 4) = KeGetCurrentPrcb()->CFlushSize;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( !ExpPlatformCapabilitiesCached )
  {
    v4 = 0LL;
    v14 = 0LL;
    Src[0] = 1094930505;
    Src[1] = 1;
    Src[2] = 1414088270;
    if ( (unsigned int)ExpGetSystemFirmwareTableInformation(Src) == -1073741789 )
    {
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0LL, 0x54425057u);
      v6 = PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = 1094930505;
        PoolWithTag[1] = 1;
        PoolWithTag[2] = 1414088270;
        PoolWithTag[3] = -16;
        if ( (int)ExpGetSystemFirmwareTableInformation(PoolWithTag) >= 0 )
        {
          v7 = v6[5];
          if ( (unsigned int)v7 >= 0xFFFFFFF0 )
          {
            v8 = (unsigned int *)((char *)v6 + v7 + 16);
            v9 = v6 + 14;
            for ( i = v6 + 15; i <= v8; i = (unsigned int *)(v12 + 4) )
            {
              v11 = *((unsigned __int16 *)v9 + 1);
              v12 = (char *)v9 + v11;
              if ( (unsigned int *)((char *)v9 + v11) > v8 || !(_WORD)v11 )
                break;
              if ( *(_WORD *)v9 == 7 && (unsigned int)v11 >= 0x10 )
              {
                if ( (v9[2] & 1) != 0 )
                  v4 = 1LL;
                break;
              }
              v9 = (unsigned int *)((char *)v9 + v11);
            }
          }
        }
        ExFreePoolWithTag(v6, 0);
      }
    }
    ExpPlatformFlushCapabilities = v4;
    ExpPlatformCapabilitiesCached = 1;
  }
  *(_QWORD *)(a1 + 8) = ExpPlatformFlushCapabilities;
  return 0LL;
}
