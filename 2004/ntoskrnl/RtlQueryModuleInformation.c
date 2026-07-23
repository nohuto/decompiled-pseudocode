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
  ULONG v6; // esi
  unsigned int v7; // edi
  __int64 result; // rax
  unsigned int *PoolWithQuotaTag; // rbx
  NTSTATUS v10; // eax
  unsigned int v11; // esi
  unsigned int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  _OWORD *v16; // rdx
  __int64 v17; // rcx
  _OWORD *v18; // rax
  __int128 v19; // xmm1
  ULONG ReturnLength[4]; // [rsp+20h] [rbp-178h] BYREF
  _BYTE SystemInformation[304]; // [rsp+30h] [rbp-168h] BYREF

  v6 = 304;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  v7 = 0;
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
  PoolWithQuotaTag = (unsigned int *)SystemInformation;
  while ( 1 )
  {
    ReturnLength[0] = 0;
    v10 = ZwQuerySystemInformation(SystemModuleInformation, PoolWithQuotaTag, v6, ReturnLength);
    v11 = v10;
    if ( ((v10 + 0x80000000) & 0x80000000) == 0 && v10 != -1073741820 )
      break;
    if ( !a3 )
    {
      v11 = 0;
      v12 = a2 * ((ReturnLength[0] - 8) / 0x128);
LABEL_14:
      *a1 = v12;
      break;
    }
    if ( v10 >= 0 )
    {
      v12 = a2 * *PoolWithQuotaTag;
      if ( *a1 < v12 )
      {
        v11 = -1073741789;
      }
      else if ( *PoolWithQuotaTag )
      {
        do
        {
          if ( a2 == 8 )
          {
            *(_QWORD *)(a3 + 8LL * v7) = *(_QWORD *)&PoolWithQuotaTag[74 * v7 + 6];
          }
          else
          {
            v13 = 74LL * v7;
            v14 = a3 + 272LL * v7;
            *(_QWORD *)v14 = *(_QWORD *)&PoolWithQuotaTag[v13 + 6];
            *(_DWORD *)(v14 + 8) = PoolWithQuotaTag[v13 + 8];
            *(_WORD *)(v14 + 12) = HIWORD(PoolWithQuotaTag[v13 + 11]);
            v15 = v13 * 4 + 48;
            v16 = (_OWORD *)(v14 + 14);
            v17 = 2LL;
            v18 = (_OWORD *)((char *)PoolWithQuotaTag + v15);
            do
            {
              *v16 = *v18;
              v16[1] = v18[1];
              v16[2] = v18[2];
              v16[3] = v18[3];
              v16[4] = v18[4];
              v16[5] = v18[5];
              v16[6] = v18[6];
              v16 += 8;
              v19 = v18[7];
              v18 += 8;
              *(v16 - 1) = v19;
              --v17;
            }
            while ( v17 );
          }
          ++v7;
        }
        while ( v7 < *PoolWithQuotaTag );
      }
      goto LABEL_14;
    }
    if ( PoolWithQuotaTag != (unsigned int *)SystemInformation )
      ExFreePoolWithTag(PoolWithQuotaTag, 0);
    PoolWithQuotaTag = (unsigned int *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, ReturnLength[0], 0x546C7452u);
    if ( !PoolWithQuotaTag )
      return 3221225626LL;
    v6 = ReturnLength[0];
  }
  if ( PoolWithQuotaTag != (unsigned int *)SystemInformation )
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
  return v11;
}
