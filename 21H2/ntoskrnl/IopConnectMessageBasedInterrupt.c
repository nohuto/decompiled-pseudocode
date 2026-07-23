/*
 * XREFs of IopConnectMessageBasedInterrupt @ 0x140762014
 * Callers:
 *     IoConnectInterruptEx @ 0x140761D90 (IoConnectInterruptEx.c)
 * Callees:
 *     HalGetMessageRoutingInfo @ 0x140376ED0 (HalGetMessageRoutingInfo.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     IoDisconnectInterrupt @ 0x140761BD0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14076238C (IopConnectInterrupt.c)
 *     IopGetInterruptConnectionData @ 0x140762ABC (IopGetInterruptConnectionData.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopConnectMessageBasedInterrupt(
        int a1,
        struct _DEVICE_OBJECT *a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7)
{
  unsigned int v7; // ebx
  int v11; // r14d
  unsigned int *v12; // rsi
  char v13; // r15
  _DWORD *DeviceNode; // rcx
  int InterruptConnectionData; // edi
  unsigned int v16; // r8d
  __int64 v17; // rcx
  unsigned __int8 v18; // r9
  unsigned int *PoolWithTag; // rax
  __int64 v20; // rax
  _QWORD *v21; // r14
  char v22; // al
  __int128 v23; // xmm1
  unsigned int v24; // eax
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int64 v28; // r12
  __int128 v29; // xmm0
  int v30; // eax
  __int128 v31; // xmm0
  int v33; // [rsp+38h] [rbp-C8h]
  int v34; // [rsp+40h] [rbp-C0h]
  char v35; // [rsp+60h] [rbp-A0h]
  int P; // [rsp+68h] [rbp-98h]
  __int64 v37; // [rsp+70h] [rbp-90h] BYREF
  __int64 v38; // [rsp+78h] [rbp-88h]
  struct _DEVICE_OBJECT *v39; // [rsp+80h] [rbp-80h]
  _QWORD *v40; // [rsp+88h] [rbp-78h]
  __int128 v41; // [rsp+90h] [rbp-70h] BYREF
  __int128 v42; // [rsp+A0h] [rbp-60h]
  _OWORD v43[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v44[12]; // [rsp+D0h] [rbp-30h] BYREF

  v7 = 0;
  v40 = a3;
  v39 = a2;
  *a3 = 0LL;
  v38 = a4;
  v37 = 0LL;
  v35 = 0;
  v11 = 0;
  v41 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v42 = 0LL;
  memset(v43, 0, 24);
  memset(v44, 0, sizeof(v44));
  if ( a2 && (DeviceNode = a2->DeviceObjectExtension->DeviceNode) != 0LL && (DeviceNode[99] & 0x20000) == 0 && a4 )
  {
    InterruptConnectionData = IopGetInterruptConnectionData(a2);
    if ( InterruptConnectionData >= 0 )
    {
      v16 = 0;
      if ( !MEMORY[0] )
        goto LABEL_37;
      v17 = 16LL;
      do
      {
        v18 = v13;
        if ( (unsigned int)(*(_DWORD *)(v17 - 8) - 1) <= 2 )
        {
          ++v11;
          if ( a1 == 5 )
          {
            v35 = 1;
          }
          else if ( a1 == 3 )
          {
            if ( a7 )
            {
              if ( a7 < *(_BYTE *)v17 )
                goto LABEL_37;
              v13 = a7;
            }
            else if ( a6 )
            {
              v13 = *(_BYTE *)v17;
              if ( *(_BYTE *)v17 <= v18 )
                v13 = v18;
            }
            else
            {
              v13 = 0;
            }
          }
        }
        ++v16;
        v17 += 88LL;
      }
      while ( v16 < MEMORY[0] );
      if ( v11 )
      {
        PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(48 * v11 + 8), 0x6E696F49u);
        v12 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, (unsigned int)(48 * v11 + 8));
          v20 = 0LL;
          *(_BYTE *)v12 = v13;
          for ( P = 0; (unsigned int)v20 < MEMORY[0]; P = v20 )
          {
            v21 = (_QWORD *)(88 * v20 + 8);
            if ( (unsigned int)(*(_DWORD *)(88 * v20 + 8) - 1) <= 2 )
            {
              if ( v35 )
              {
                v22 = 0;
              }
              else if ( v13 )
              {
                v22 = v13;
              }
              else
              {
                v22 = *(_BYTE *)(88 * v20 + 0x10);
              }
              v23 = *((_OWORD *)v21 + 1);
              LOBYTE(v34) = 1;
              LOBYTE(v33) = v22;
              v24 = v12[1];
              *(_OWORD *)&v44[1] = *(_OWORD *)v21;
              v25 = *((_OWORD *)v21 + 2);
              *(_OWORD *)&v44[3] = v23;
              LODWORD(v44[0]) = 1;
              v26 = *((_OWORD *)v21 + 3);
              *(_OWORD *)&v44[5] = v25;
              v27 = *((_OWORD *)v21 + 4);
              *(_OWORD *)&v44[7] = v26;
              *(_QWORD *)&v26 = v21[10];
              *(_OWORD *)&v44[9] = v27;
              v44[11] = v26;
              InterruptConnectionData = IopConnectInterrupt(&v37, v39, 0LL, v38, a5, v24, a6, v33, v34);
              if ( InterruptConnectionData < 0 )
                goto LABEL_29;
              v28 = 6LL * v12[1];
              if ( *(_DWORD *)v21 == 3 )
              {
                v29 = *(_OWORD *)(v21 + 3);
                DWORD2(v41) = *((_DWORD *)v21 + 1);
                v30 = *((_DWORD *)v21 + 18);
                v42 = v29;
                LODWORD(v41) = 0;
                v31 = *(_OWORD *)(v21 + 5);
                LODWORD(v43[0]) = v30;
                *(_OWORD *)((char *)v43 + 4) = v31;
                InterruptConnectionData = HalGetMessageRoutingInfo((int *)&v41, v44);
                if ( InterruptConnectionData < 0 )
                  goto LABEL_29;
                v21 = &v44[1];
              }
              *(_QWORD *)&v12[2 * v28 + 2] = v21[9];
              v12[2 * v28 + 8] = *((_DWORD *)v21 + 20);
              *(_QWORD *)&v12[2 * v28 + 4] = v21[3];
              *(_QWORD *)&v12[2 * v28 + 6] = v37 + 112;
              v12[2 * v28 + 9] = *((_DWORD *)v21 + 1);
              LOBYTE(v12[2 * v28 + 10]) = *((_BYTE *)v21 + 8);
              v12[2 * v28 + 11] = *((_DWORD *)v21 + 4);
              v12[2 * v28 + 12] = *((_DWORD *)v21 + 3);
              ++v12[1];
            }
            v20 = (unsigned int)(P + 1);
          }
          InterruptConnectionData = 0;
          *v40 = v12;
        }
        else
        {
          InterruptConnectionData = -1073741670;
        }
      }
      else
      {
LABEL_37:
        InterruptConnectionData = -1073741811;
      }
    }
LABEL_29:
    if ( InterruptConnectionData < 0 && v12 )
    {
      if ( v12[1] )
      {
        do
          IoDisconnectInterrupt(*(PKINTERRUPT *)&v12[12 * v7++ + 6]);
        while ( v7 < v12[1] );
      }
      ExFreePoolWithTag(v12, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)InterruptConnectionData;
}
