/*
 * XREFs of IopConnectLineBasedInterrupt @ 0x1407C9BF4
 * Callers:
 *     IoConnectInterruptEx @ 0x140761D90 (IoConnectInterruptEx.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     IoDisconnectInterrupt @ 0x140761BD0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14076238C (IopConnectInterrupt.c)
 *     IopGetInterruptConnectionData @ 0x140762ABC (IopGetInterruptConnectionData.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall IopConnectLineBasedInterrupt(
        struct _DEVICE_OBJECT *a1,
        _QWORD *a2,
        __int64 (__fastcall *a3)(__int64 a1, __int64 a2),
        __int64 a4,
        __int64 a5,
        unsigned __int8 a6)
{
  _BYTE *v6; // rdi
  unsigned int v7; // r12d
  _DWORD *DeviceNode; // r9
  NTSTATUS result; // eax
  int v10; // ebx
  unsigned int *v11; // rsi
  unsigned int v12; // r15d
  unsigned __int8 v13; // r14
  char *v14; // rdx
  __int64 v15; // r8
  char v16; // al
  _BYTE *PoolWithTag; // rax
  unsigned int v18; // r13d
  __int64 v19; // rcx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int64 v24; // rdx
  _OWORD *v25; // rcx
  _OWORD *v26; // rax
  __int128 v27; // xmm1
  char *v28; // rsi
  __int64 v29; // r14
  __int64 v30; // [rsp+50h] [rbp-89h]
  PVOID P[2]; // [rsp+68h] [rbp-71h] BYREF
  _QWORD v32[20]; // [rsp+78h] [rbp-61h] BYREF

  P[0] = 0LL;
  v6 = 0LL;
  *a2 = 0LL;
  v7 = 0;
  if ( !a1 )
    return -1073741811;
  DeviceNode = a1->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 || !a3 )
    return -1073741811;
  result = IopGetInterruptConnectionData(a1, P);
  v10 = result;
  if ( result >= 0 )
  {
    v11 = (unsigned int *)P[0];
    if ( P[0] )
    {
      v12 = 0;
      v13 = 0;
      if ( *(_DWORD *)P[0] )
      {
        v14 = (char *)P[0] + 8;
        v15 = *(unsigned int *)P[0];
        do
        {
          if ( !*(_DWORD *)v14 )
          {
            ++v12;
            v16 = v13;
            if ( v13 < (unsigned __int8)v14[8] )
              v16 = v14[8];
            v13 = v16;
          }
          v14 += 88;
          --v15;
        }
        while ( v15 );
        if ( v12 )
        {
          if ( !a6 )
            goto LABEL_18;
          if ( a6 >= v13 )
          {
            v13 = a6;
LABEL_18:
            PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v12 + 296, 0x6E696F49u);
            v6 = PoolWithTag;
            if ( PoolWithTag )
            {
              memset(PoolWithTag, 0, 8 * v12 + 296);
              v6[288] = v13;
              *((_DWORD *)v6 + 73) = v12;
              memset((char *)v32 + 4, 0, 0x5CuLL);
              v18 = 0;
              for ( LODWORD(v32[0]) = 1; v18 < *v11; ++v18 )
              {
                v19 = 22LL * v18;
                if ( !v11[v19 + 2] )
                {
                  v20 = *(_OWORD *)&v11[v19 + 6];
                  *(_OWORD *)&v32[1] = *(_OWORD *)&v11[v19 + 2];
                  v21 = *(_OWORD *)&v11[v19 + 10];
                  *(_OWORD *)&v32[3] = v20;
                  v22 = *(_OWORD *)&v11[v19 + 14];
                  *(_OWORD *)&v32[5] = v21;
                  v23 = *(_OWORD *)&v11[v19 + 18];
                  *(_OWORD *)&v32[7] = v22;
                  v32[11] = *(_QWORD *)&v11[v19 + 22];
                  *(_OWORD *)&v32[9] = v23;
                  v10 = IopConnectInterrupt(
                          &v6[8 * v7 + 296],
                          (ULONG_PTR)a1,
                          a3,
                          0LL,
                          a4,
                          0,
                          a5,
                          v13,
                          1,
                          v30,
                          (__int64)v32);
                  if ( v10 < 0 )
                    goto LABEL_26;
                  if ( ++v7 >= v12 )
                    break;
                }
              }
              v24 = 2LL;
              v25 = v6;
              v26 = (_OWORD *)(*((_QWORD *)v6 + 37) + 112LL);
              do
              {
                *v25 = *v26;
                v25[1] = v26[1];
                v25[2] = v26[2];
                v25[3] = v26[3];
                v25[4] = v26[4];
                v25[5] = v26[5];
                v25[6] = v26[6];
                v25 += 8;
                v27 = v26[7];
                v26 += 8;
                *(v25 - 1) = v27;
                --v24;
              }
              while ( v24 );
              *v25 = *v26;
              v25[1] = v26[1];
              *a2 = v6;
            }
            else
            {
              v10 = -1073741670;
            }
            goto LABEL_26;
          }
        }
      }
      v10 = -1073741811;
LABEL_26:
      ExFreePoolWithTag(v11, 0);
      if ( v10 < 0 && v6 )
      {
        if ( v7 )
        {
          v28 = v6 + 296;
          v29 = v7;
          do
          {
            IoDisconnectInterrupt((PKINTERRUPT)(*(_QWORD *)v28 + 112LL));
            v28 += 8;
            --v29;
          }
          while ( v29 );
        }
        ExFreePoolWithTag(v6, 0);
      }
      return v10;
    }
  }
  return result;
}
