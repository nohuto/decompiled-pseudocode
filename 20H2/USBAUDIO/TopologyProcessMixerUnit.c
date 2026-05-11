/*
 * XREFs of TopologyProcessMixerUnit @ 0x1C00266D0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0013800 (memset.c)
 *     PropertyInitializeMixerControlRange @ 0x1C002A600 (PropertyInitializeMixerControlRange.c)
 */

__int64 __fastcall TopologyProcessMixerUnit(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        unsigned int *a6)
{
  _DWORD *v6; // rsi
  _DWORD *v8; // r13
  __int64 v9; // rbp
  unsigned int v10; // r8d
  _DWORD *v11; // r14
  int v12; // ecx
  int v13; // r10d
  __int64 v14; // r9
  _DWORD *v15; // rdx
  int v16; // eax
  SIZE_T v17; // rbx
  char *v18; // r15
  NTSTATUS v19; // ebx
  unsigned int v20; // r12d
  int v21; // r9d
  char *v22; // r8
  __int64 v23; // r10
  unsigned int v24; // r13d
  char *v25; // rdx
  char *v26; // r15
  int v27; // ebp
  unsigned int v28; // esi
  NTSTATUS v29; // eax
  int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // edx
  __int64 v33; // rcx
  _DWORD *v34; // rcx
  unsigned int v35; // eax
  int v37; // [rsp+20h] [rbp-88h]
  char *v38; // [rsp+28h] [rbp-80h]
  __int64 v39; // [rsp+30h] [rbp-78h]
  __int64 v40; // [rsp+38h] [rbp-70h]
  __int64 v41; // [rsp+48h] [rbp-60h]
  char *PoolWithTag; // [rsp+58h] [rbp-50h]
  unsigned int v44; // [rsp+B8h] [rbp+10h]
  int v45; // [rsp+C0h] [rbp+18h]
  int v46; // [rsp+C0h] [rbp+18h]
  int v47; // [rsp+C8h] [rbp+20h]

  v6 = a5;
  v8 = a6;
  v44 = 0;
  v45 = 7;
  v9 = a3 + 168LL * *a5;
  v10 = *(_DWORD *)(a2 + 32);
  v11 = (_DWORD *)(a4 + 16LL * *a6);
  v41 = v9;
  v40 = *(_QWORD *)(a2 + 72);
  if ( !v10 )
    return (unsigned int)-1073741438;
  v12 = 0;
  v13 = *(_DWORD *)(a2 + 24);
  v14 = v10;
  v15 = (_DWORD *)(*(_QWORD *)(a2 + 56) + 4LL);
  do
  {
    v16 = *v15 * v13;
    v15 += 3;
    v12 += v16;
    --v14;
  }
  while ( v14 );
  if ( v12 )
  {
    v17 = 32 * v12 + 24 * v10;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v17, 0x41627845u);
    v18 = PoolWithTag;
    if ( PoolWithTag )
    {
      v38 = &PoolWithTag[24 * *(unsigned int *)(a2 + 32)];
      memset(PoolWithTag, 0, v17);
      *(_DWORD *)(v9 + 88) = *(_DWORD *)(a2 + 28);
      v19 = 0;
      v20 = 0;
      v37 = 0;
      v21 = 0;
      v47 = 0;
      if ( *(_DWORD *)(a2 + 32) )
      {
        v22 = v38;
        do
        {
          if ( v19 < 0 )
            break;
          v23 = 3LL * v20;
          *v11 = *(_DWORD *)(*(_QWORD *)(a2 + 56) + 12LL * v20);
          v11[1] = 0;
          v11[2] = *v6;
          v11[3] = 1;
          v11 += 4;
          ++*v6;
          ++*v8;
          v24 = 0;
          v39 = v9 + 168LL * v20;
          *(_DWORD *)(v39 + 76) = 4;
          *(_DWORD *)(v39 + 80) = *(_DWORD *)(a2 + 16);
          *(_QWORD *)(v39 + 8) = &KSNODETYPE_SUPERMIX;
          *(_QWORD *)(v39 + 16) = &KSNODETYPE_SUPERMIX;
          *(_QWORD *)(v39 + 136) = USBCntrlGetSetMixerLevels;
          v25 = &v18[24 * v20];
          *(_QWORD *)(v39 + 128) = v25;
          *(_DWORD *)v25 = v20;
          *((_DWORD *)v25 + 1) = v21;
          *((_DWORD *)v25 + 2) = *(_DWORD *)(*(_QWORD *)(a2 + 56) + 12LL * v20 + 4);
          *((_DWORD *)v25 + 3) = *(_DWORD *)(a2 + 24);
          *((_QWORD *)v25 + 2) = v22;
          if ( *(_DWORD *)(*(_QWORD *)(a2 + 56) + 12LL * v20 + 4) )
          {
            v26 = v38;
            v27 = v45;
            do
            {
              if ( v19 < 0 )
                break;
              v28 = 0;
              if ( *(_DWORD *)(a2 + 24) )
              {
                do
                {
                  v46 = v27;
                  if ( v19 < 0 )
                    break;
                  *((_DWORD *)v26 + 1) = v24 + 1;
                  *((_DWORD *)v26 + 2) = ++v28;
                  v26[1] = (*(_BYTE *)(v44 + v40) & (unsigned __int8)(1 << v27)) != 0;
                  v29 = PropertyInitializeMixerControlRange(a1, v39, v26);
                  v30 = v27--;
                  v19 = v29;
                  if ( !v30 )
                    v27 = 7;
                  v26 += 32;
                  v31 = v44 + 1;
                  if ( v46 )
                    v31 = v44;
                  v44 = v31;
                }
                while ( v28 < *(_DWORD *)(a2 + 24) );
                v21 = v47;
                v23 = 3LL * v20;
                v45 = v27;
                v38 = v26;
              }
              ++v21;
              ++v24;
              v47 = v21;
            }
            while ( v24 < *(_DWORD *)(*(_QWORD *)(a2 + 56) + 4 * v23 + 4) );
            v6 = a5;
            v9 = v41;
            v18 = PoolWithTag;
            v20 = v37;
            v22 = v38;
          }
          v8 = a6;
          v37 = ++v20;
        }
        while ( v20 < *(_DWORD *)(a2 + 32) );
      }
      v32 = 0;
      v33 = 168LL * v20;
      *(_DWORD *)(v33 + v9 + 76) = 6;
      *(_DWORD *)(v33 + v9 + 80) = *(_DWORD *)(a2 + 16);
      *(_QWORD *)(v33 + v9 + 8) = &KSNODETYPE_SUM;
      if ( *(_DWORD *)(a2 + 32) )
      {
        v34 = v11 + 2;
        do
        {
          v35 = *v6 - v32;
          *(v34 - 1) = 0;
          *(v34 - 2) = (v35 - 1) | 0x80000000;
          ++v32;
          *v34 = *v6;
          v34[1] = v32;
          v34 += 4;
          ++*v8;
        }
        while ( v32 < *(_DWORD *)(a2 + 32) );
      }
      ++*v6;
      if ( v19 < 0 || (v19 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v18, ExFreePool), v19 < 0) )
        ExFreePool(v18);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741438;
  }
  return (unsigned int)v19;
}
