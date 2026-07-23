/*
 * XREFs of HalBuildScatterGatherListV2 @ 0x14020B440
 * Callers:
 *     HalGetScatterGatherList @ 0x140234420 (HalGetScatterGatherList.c)
 * Callees:
 *     HalpCalculateScatterGatherListSize @ 0x14020B700 (HalpCalculateScatterGatherListSize.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalAllocateAdapterChannel @ 0x1404B8CE0 (HalAllocateAdapterChannel.c)
 *     HalpDmaFlushBuffer @ 0x1404C779C (HalpDmaFlushBuffer.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall HalBuildScatterGatherListV2(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        int a5,
        void (__fastcall *a6)(__int64, _QWORD, char *, __int64),
        __int64 a7,
        char a8,
        _DWORD *P,
        unsigned int a10)
{
  int v14; // ebx
  __int64 result; // rax
  _DWORD *v16; // r13
  char *PoolWithTag; // r14
  char *v18; // r9
  __int64 v19; // rcx
  unsigned int v20; // r10d
  unsigned int v21; // ebp
  char *v22; // rbx
  unsigned int v23; // r8d
  __int64 *v24; // rsi
  __int64 *v25; // r13
  __int64 *v26; // rcx
  unsigned int v27; // edx
  unsigned int v28; // edi
  unsigned int v29; // eax
  bool v30; // zf
  unsigned int v31; // edx
  __int64 v32; // r8
  char v33; // r14
  unsigned int v34; // esi
  __int64 v35; // r8
  _QWORD *v36; // rdi
  int AdapterChannel; // ebx
  _DWORD *v38; // rax
  int v39; // [rsp+20h] [rbp-68h]
  int v40; // [rsp+28h] [rbp-60h]
  unsigned int v41; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v42[3]; // [rsp+44h] [rbp-44h] BYREF
  SIZE_T NumberOfBytes; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v45; // [rsp+A8h] [rbp+20h]

  v45 = a4;
  v42[0] = 0;
  v41 = 0;
  LODWORD(NumberOfBytes) = 0;
  if ( !a3 )
    return 3221225485LL;
  v14 = a5;
  result = HalpCalculateScatterGatherListSize(
             a1,
             (_DWORD)a3,
             a4,
             a5,
             (__int64)&NumberOfBytes,
             (__int64)v42,
             (__int64)&v41);
  if ( (int)result >= 0 )
  {
    if ( *(_BYTE *)(a1 + 432) )
    {
      v34 = v41;
      v33 = a8;
    }
    else if ( *(_BYTE *)(a1 + 437) || (v33 = a8) != 0 || (v34 = v41) == 0 )
    {
      v16 = P;
      if ( P )
      {
        if ( a10 >= (unsigned int)NumberOfBytes )
        {
          PoolWithTag = (char *)P;
LABEL_8:
          v18 = PoolWithTag + 16;
          v19 = a3[4] + *((unsigned int *)a3 + 11);
          v20 = a5;
          *((_QWORD *)PoolWithTag + 1) = 0LL;
          v21 = a4 & 0xFFF;
          v22 = PoolWithTag + 16;
          v23 = v19 + *((_DWORD *)a3 + 10) - a4;
          v24 = &a3[((a4 - (v19 & 0xFFFFFFFFFFFFF000uLL)) >> 12) + 6];
          if ( v20 )
          {
            v25 = a3;
            do
            {
              v26 = (__int64 *)*v25;
              v27 = v20;
              v28 = v20;
              if ( v23 <= v20 )
                v27 = v23;
              if ( v26 )
                v28 = v27;
              v29 = v20 - v27;
              v20 = 0;
              if ( v26 )
                v20 = v29;
              v30 = *(_BYTE *)(a1 + 437) == 0;
              a5 = v20;
              if ( v30 )
              {
                if ( v25 == a3 )
                  v35 = v45;
                else
                  v35 = v25[4] + v21;
                LOBYTE(v40) = 0;
                LOBYTE(v39) = a8;
                HalpDmaFlushBuffer(v26, v25, v35, v28, v39, v40);
                v20 = a5;
                v18 = PoolWithTag + 16;
              }
              if ( v28 )
              {
                do
                {
                  v31 = 4096 - v21;
                  v32 = v21 + (*v24 << 12);
                  *((_DWORD *)v22 + 2) = 4096 - v21;
                  *(_QWORD *)v22 = v32;
                  if ( 4096 - v21 > v28 )
                  {
                    *((_DWORD *)v22 + 2) = v28;
                    v31 = v28;
                  }
                  v28 -= v31;
                  if ( v22 != v18 )
                  {
                    if ( v32 == *((_QWORD *)v22 - 3) + *((unsigned int *)v22 - 4)
                      && ((*v24 ^ (*v24 - 1)) & 0xFFFFFFFFFFF00000uLL) == 0 )
                    {
                      *((_DWORD *)v22 - 4) += v31;
                      v22 -= 24;
                    }
                    v18 = PoolWithTag + 16;
                  }
                  v21 = 0;
                  v22 += 24;
                  ++v24;
                }
                while ( v28 );
                v20 = a5;
              }
              v25 = (__int64 *)*v25;
              if ( !v25 )
                break;
              v21 = *((_DWORD *)v25 + 11);
              v24 = v25 + 6;
              v23 = *((_DWORD *)v25 + 10);
            }
            while ( v20 );
            v16 = P;
          }
          *(_DWORD *)PoolWithTag = (v22 - PoolWithTag - 16) / 24;
          if ( v16 )
            *((_QWORD *)PoolWithTag + 1) = 1LL;
          a6(a2, *(_QWORD *)(a2 + 32), PoolWithTag, a7);
          return 0LL;
        }
        return 3221225507LL;
      }
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x206C6148u);
      if ( PoolWithTag )
        goto LABEL_8;
      return 3221225626LL;
    }
    v36 = P;
    if ( P )
    {
      if ( a10 < (unsigned int)NumberOfBytes )
        return 3221225507LL;
      *P |= 1u;
    }
    else
    {
      v38 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x206C6148u);
      v36 = v38;
      if ( !v38 )
        return 3221225626LL;
      *v38 = 0;
    }
    v36[4] = v45;
    v36[15] = a6;
    v36[16] = a7;
    v36[1] = a3;
    v36[2] = 0LL;
    *((_DWORD *)v36 + 10) = v14;
    v36[18] = a1;
    *((_BYTE *)v36 + 152) = v33;
    v30 = *(_BYTE *)(a1 + 432) == 0;
    v36[10] = v36;
    if ( !v30 )
      v34 = v42[0];
    *((_DWORD *)v36 + 11) = v34;
    v36[12] = a2;
    v36[13] = *(_QWORD *)(a2 + 32);
    AdapterChannel = HalAllocateAdapterChannel(a1, v36 + 6, v34, &HalpAllocateAdapterCallbackV2);
    if ( AdapterChannel < 0 )
      ExFreePoolWithTag(v36, 0);
    return (unsigned int)AdapterChannel;
  }
  return result;
}
