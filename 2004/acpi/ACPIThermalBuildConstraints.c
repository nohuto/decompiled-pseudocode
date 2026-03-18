/*
 * XREFs of ACPIThermalBuildConstraints @ 0x1C00918C0
 * Callers:
 *     ACPIThermalWorker @ 0x1C009A7E0 (ACPIThermalWorker.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C000B8E0 (AMLIEvalNameSpaceObject.c)
 *     ACPIThermalActivateConstraint @ 0x1C000E024 (ACPIThermalActivateConstraint.c)
 *     AMLIEvalPkgDataElement @ 0x1C000ECDC (AMLIEvalPkgDataElement.c)
 *     AMLIFreeDataBuffs @ 0x1C001D6E0 (AMLIFreeDataBuffs.c)
 *     memmove @ 0x1C0031EC0 (memmove.c)
 *     memset @ 0x1C0032180 (memset.c)
 */

__int64 __fastcall ACPIThermalBuildConstraints(unsigned __int64 *a1, __int64 a2, char a3, unsigned __int8 a4)
{
  int v5; // ebx
  unsigned int v6; // esi
  __int64 v7; // r15
  unsigned int v8; // r14d
  unsigned int v9; // r12d
  PVOID PoolWithTag; // rax
  __int64 v11; // rdi
  __int128 v13; // [rsp+20h] [rbp-50h] BYREF
  size_t Size[2]; // [rsp+30h] [rbp-40h]
  void *Src; // [rsp+40h] [rbp-30h]
  _OWORD v16[2]; // [rsp+48h] [rbp-28h] BYREF
  unsigned int *v17; // [rsp+68h] [rbp-8h]

  Src = 0LL;
  v17 = 0LL;
  *(_OWORD *)Size = 0LL;
  memset(v16, 0, sizeof(v16));
  v5 = AMLIEvalNameSpaceObject(a1, (__int64)v16, 0, 0LL, 0LL, 0LL, 0LL);
  if ( v5 >= 0 )
  {
    if ( WORD1(v16[0]) == 4 )
    {
      v6 = 0;
      v7 = *(_QWORD *)(a2 + 200);
      v8 = *v17;
      if ( *v17 )
      {
        while ( 1 )
        {
          v5 = AMLIEvalPkgDataElement((__int64)v16, v6, (__int64)&v13);
          if ( v5 < 0 )
            goto LABEL_11;
          if ( WORD1(v13) != 2 )
            break;
          v9 = LODWORD(Size[1]) + 56;
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(LODWORD(Size[1]) + 56), 0x54706341u);
          v11 = (__int64)PoolWithTag;
          if ( !PoolWithTag )
          {
            v5 = -1073741670;
LABEL_17:
            AMLIFreeDataBuffs((__int64)&v13);
            goto LABEL_11;
          }
          memset(PoolWithTag, 0, v9);
          memmove((void *)(v11 + 56), Src, LODWORD(Size[1]));
          AMLIFreeDataBuffs((__int64)&v13);
          *(_QWORD *)(v11 + 32) = a2;
          *(_DWORD *)(v11 + 48) = v6;
          *(_BYTE *)(v11 + 52) = a3;
          *(_BYTE *)(v11 + 54) = a4;
          if ( a3 )
          {
            *(_BYTE *)(v11 + 53) = *(_BYTE *)(v7 + 96);
            *(_BYTE *)(v11 + 55) = 0;
          }
          else
          {
            *(_BYTE *)(v11 + 53) = 100;
            if ( (unsigned int)a4 >= *(_DWORD *)(v7 + 92) )
              *(_BYTE *)(v11 + 55) = 1;
          }
          ACPIThermalActivateConstraint(v11);
          if ( ++v6 >= v8 )
            goto LABEL_11;
        }
        v5 = -1072431095;
        goto LABEL_17;
      }
    }
    else
    {
      v5 = -1072431095;
    }
LABEL_11:
    AMLIFreeDataBuffs((__int64)v16);
  }
  return (unsigned int)v5;
}
