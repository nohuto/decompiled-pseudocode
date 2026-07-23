/*
 * XREFs of EtwpTraceHandle @ 0x14093784C
 * Callers:
 *     ObCloseHandleTableEntry @ 0x14070CA40 (ObCloseHandleTableEntry.c)
 *     ObpCreateHandle @ 0x14070D930 (ObpCreateHandle.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     EtwpTraceKernelEventWithFilter @ 0x1405A9D3C (EtwpTraceKernelEventWithFilter.c)
 *     ExCheckSingleFilter @ 0x1405B382C (ExCheckSingleFilter.c)
 *     ObQueryNameStringMode @ 0x1406C7460 (ObQueryNameStringMode.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall EtwpTraceHandle(unsigned __int16 a1, __int64 a2, char *a3, __int64 a4)
{
  int v5; // r9d
  unsigned int v6; // r12d
  unsigned int v7; // esi
  bool v8; // zf
  __int64 v9; // r15
  unsigned int v10; // edi
  __int64 v11; // r8
  int v12; // ebx
  _WORD *v13; // r14
  int v14; // eax
  _WORD *PoolWithTag; // rbx
  unsigned __int16 v16; // r14
  char *v17; // rsi
  unsigned int v18; // r8d
  int v19; // eax
  int v20; // ecx
  __int64 v21; // rax
  unsigned int NumberOfBytes; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 NumberOfBytes_4; // [rsp+34h] [rbp-CCh]
  int v24; // [rsp+38h] [rbp-C8h]
  char *v25; // [rsp+40h] [rbp-C0h] BYREF
  int v26; // [rsp+48h] [rbp-B8h]
  __int16 v27; // [rsp+4Ch] [rbp-B4h]
  __int16 v28; // [rsp+4Eh] [rbp-B2h]
  char *v29; // [rsp+58h] [rbp-A8h]
  __int64 v30; // [rsp+60h] [rbp-A0h]
  char **v31; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v32[2]; // [rsp+70h] [rbp-90h]
  int v33; // [rsp+80h] [rbp-80h]
  int v34; // [rsp+84h] [rbp-7Ch]
  _BYTE P[272]; // [rsp+A0h] [rbp-60h] BYREF

  v29 = a3;
  v5 = *(_DWORD *)(a4 + 192);
  v6 = 0;
  v30 = a2;
  v7 = *(_DWORD *)(EtwpHostSiloState + 4224);
  v8 = !_BitScanForward((unsigned int *)&v9, v7);
  NumberOfBytes_4 = a1;
  NumberOfBytes = 0;
  v28 = 0;
  v24 = v5;
  if ( !v8 )
  {
    v10 = 1;
    do
    {
      v7 &= v7 - 1;
      v11 = 32LL * (unsigned int)v9 + EtwpHostSiloState + 4260;
      if ( v11 )
      {
        if ( (*(_DWORD *)(v11 + 16) & 0x40) != 0 )
        {
          v12 = 0;
          v13 = (_WORD *)((char *)&EtwpObjectTypeFilter + 20 * v9);
          if ( *v13 )
          {
            while ( 1 )
            {
              v14 = ExCheckSingleFilter(v5, *(_DWORD *)&v13[2 * v12 + 2]);
              v5 = v24;
              if ( v14 )
                break;
              if ( ++v12 >= (unsigned int)(unsigned __int16)*v13 )
                goto LABEL_10;
            }
            v6 |= 1 << v9;
          }
        }
      }
LABEL_10:
      v8 = !_BitScanForward((unsigned int *)&v9, v7);
    }
    while ( !v8 );
    if ( v6 )
    {
      PoolWithTag = P;
      v16 = NumberOfBytes_4;
      v17 = v29;
      v26 = v30;
      v27 = *(unsigned __int8 *)(a4 + 40);
      v31 = &v25;
      v25 = v29;
      v32[0] = 14LL;
      if ( NumberOfBytes_4 == 4385 )
      {
        v18 = 272;
        for ( NumberOfBytes = 272; ; v18 = NumberOfBytes )
        {
          v19 = ObQueryNameStringMode(v17, (__int64)PoolWithTag, v18, &NumberOfBytes, 0);
          if ( v19 != -1073741820 )
            break;
          if ( PoolWithTag != (_WORD *)P )
            ExFreePoolWithTag(PoolWithTag, 0);
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x74777445u);
          if ( !PoolWithTag )
            goto LABEL_23;
        }
        if ( !v19 )
        {
          v20 = 0x2000;
          if ( *PoolWithTag < 0x2000u )
            v20 = (unsigned __int16)*PoolWithTag;
          v10 = 2;
          v32[1] = *((_QWORD *)PoolWithTag + 1);
          v33 = v20;
          v34 = 0;
        }
      }
LABEL_23:
      v21 = 2LL * v10;
      v32[v21 - 1] = &EtwpNull;
      v32[v21] = 2LL;
      EtwpTraceKernelEventWithFilter((__int64)&v31, v10 + 1, v6, v16, 0x10501902u);
      if ( PoolWithTag )
      {
        if ( PoolWithTag != (_WORD *)P )
          ExFreePoolWithTag(PoolWithTag, 0);
      }
    }
  }
}
