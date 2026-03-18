/*
 * XREFs of RtlQueryModuleInformation @ 0x140775DB0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140297DA0 (ExAllocatePoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1403F3C80 (ZwQuerySystemInformation.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlQueryModuleInformation(unsigned int *a1, int a2, __int64 a3)
{
  unsigned int v6; // edi
  __int64 result; // rax
  unsigned int *PoolWithQuotaTag; // rbx
  int SystemInformation; // eax
  unsigned int v10; // esi
  unsigned int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  _OWORD *v15; // rdx
  __int64 v16; // rcx
  _OWORD *v17; // rax
  __int128 v18; // xmm1
  _BYTE P[304]; // [rsp+30h] [rbp-168h] BYREF

  memset(P, 0, sizeof(P));
  v6 = 0;
  if ( a2 == 272 )
  {
    result = (a3 & 7) != 0 ? 0xC00000F1 : 0;
    goto LABEL_3;
  }
  if ( a2 != 8 )
    return 3221225712LL;
  if ( (a3 & 7) != 0 )
  {
    result = 3221225713LL;
LABEL_3:
    if ( (int)result < 0 )
      return result;
  }
  PoolWithQuotaTag = (unsigned int *)P;
  while ( 1 )
  {
    SystemInformation = ZwQuerySystemInformation(11LL, (__int64)PoolWithQuotaTag);
    v10 = SystemInformation;
    if ( ((SystemInformation + 0x80000000) & 0x80000000) == 0 && SystemInformation != -1073741820 )
      break;
    if ( !a3 )
    {
      v10 = 0;
      v11 = 14510024 * a2;
LABEL_14:
      *a1 = v11;
      break;
    }
    if ( SystemInformation >= 0 )
    {
      v11 = a2 * *PoolWithQuotaTag;
      if ( *a1 < v11 )
      {
        v10 = -1073741789;
      }
      else if ( *PoolWithQuotaTag )
      {
        do
        {
          if ( a2 == 8 )
          {
            *(_QWORD *)(a3 + 8LL * v6) = *(_QWORD *)&PoolWithQuotaTag[74 * v6 + 6];
          }
          else
          {
            v12 = 74LL * v6;
            v13 = a3 + 272LL * v6;
            *(_QWORD *)v13 = *(_QWORD *)&PoolWithQuotaTag[v12 + 6];
            *(_DWORD *)(v13 + 8) = PoolWithQuotaTag[v12 + 8];
            *(_WORD *)(v13 + 12) = HIWORD(PoolWithQuotaTag[v12 + 11]);
            v14 = v12 * 4 + 48;
            v15 = (_OWORD *)(v13 + 14);
            v16 = 2LL;
            v17 = (_OWORD *)((char *)PoolWithQuotaTag + v14);
            do
            {
              *v15 = *v17;
              v15[1] = v17[1];
              v15[2] = v17[2];
              v15[3] = v17[3];
              v15[4] = v17[4];
              v15[5] = v17[5];
              v15[6] = v17[6];
              v15 += 8;
              v18 = v17[7];
              v17 += 8;
              *(v15 - 1) = v18;
              --v16;
            }
            while ( v16 );
          }
          ++v6;
        }
        while ( v6 < *PoolWithQuotaTag );
      }
      goto LABEL_14;
    }
    if ( PoolWithQuotaTag != (unsigned int *)P )
      ExFreePoolWithTag(PoolWithQuotaTag, 0);
    PoolWithQuotaTag = (unsigned int *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0LL, 0x546C7452u);
    if ( !PoolWithQuotaTag )
      return 3221225626LL;
  }
  if ( PoolWithQuotaTag != (unsigned int *)P )
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
  return v10;
}
