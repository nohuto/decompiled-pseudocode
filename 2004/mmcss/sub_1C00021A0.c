/*
 * XREFs of sub_1C00021A0 @ 0x1C00021A0
 * Callers:
 *     StartRoutine @ 0x1C0002D50 (StartRoutine.c)
 * Callees:
 *     sub_1C0001010 @ 0x1C0001010 (sub_1C0001010.c)
 *     sub_1C0001DB0 @ 0x1C0001DB0 (sub_1C0001DB0.c)
 *     sub_1C0002990 @ 0x1C0002990 (sub_1C0002990.c)
 *     __security_check_cookie @ 0x1C0002FD0 (__security_check_cookie.c)
 *     sub_1C0003C20 @ 0x1C0003C20 (sub_1C0003C20.c)
 *     sub_1C0003D0C @ 0x1C0003D0C (sub_1C0003D0C.c)
 *     sub_1C0003D90 @ 0x1C0003D90 (sub_1C0003D90.c)
 *     sub_1C00043B8 @ 0x1C00043B8 (sub_1C00043B8.c)
 *     sub_1C0004604 @ 0x1C0004604 (sub_1C0004604.c)
 */

char __fastcall sub_1C00021A0(__int64 a1, unsigned __int32 *a2)
{
  unsigned __int32 *v2; // r14
  unsigned int DpcData_high; // edx
  unsigned int v4; // ecx
  int v5; // r12d
  unsigned int v6; // esi
  int v7; // ebp
  unsigned int v8; // ebx
  __int64 v9; // rdi
  int v10; // eax
  unsigned int v11; // edi
  unsigned int v12; // esi
  struct _DEVICE_OBJECT *SystemArgument1; // r8
  struct _DEVICE_OBJECT *NextDevice; // rcx
  __int64 v15; // rbx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int32 v18; // ebx
  int v19; // edi
  int v20; // ebp
  __int64 v21; // rax
  unsigned __int64 v22; // r13
  __int64 v23; // rcx
  unsigned __int64 DeviceObjectExtension; // rbx
  bool v25; // zf
  __int64 v26; // r15
  __int64 *v27; // rsi
  __int64 v28; // rax
  unsigned __int8 v29; // dl
  unsigned int v30; // ebp
  int v31; // eax
  int v32; // eax
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // rcx
  __int64 v36; // rdx
  int v38; // eax
  const EVENT_DESCRIPTOR *v39; // rdx
  struct _EVENT_DATA_DESCRIPTOR *p_UserData; // rax
  unsigned __int32 v41; // [rsp+30h] [rbp-98h]
  int v42; // [rsp+34h] [rbp-94h]
  int v43; // [rsp+38h] [rbp-90h]
  int v44; // [rsp+40h] [rbp-88h] BYREF
  __int64 v45; // [rsp+48h] [rbp-80h] BYREF
  __int64 v46; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int32 *v47; // [rsp+58h] [rbp-70h]
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-68h] BYREF
  _QWORD v49[2]; // [rsp+70h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+80h] [rbp-48h] BYREF

  v2 = a2;
  v47 = a2;
  if ( byte_1C000722C )
  {
    if ( byte_1C000725C )
    {
      DpcData_high = HIDWORD(DeviceObject.Dpc.DpcData);
      v4 = 2;
    }
    else
    {
      DpcData_high = (unsigned int)DeviceObject.SecurityDescriptor;
      v4 = 1;
    }
    sub_1C0001DB0(v4, DpcData_high, v2);
    if ( (*v2 & 0xC) != 0 )
      return 0;
    v5 = 0;
    while ( 1 )
    {
      if ( !byte_1C000725D )
      {
        v6 = byte_1C0007218;
        v7 = 0;
        v8 = 0;
        if ( !byte_1C0007218 )
          goto LABEL_13;
        v9 = 0LL;
        do
        {
          if ( !(unsigned __int8)PoCpuIdledSinceLastCallImprecise(v8, v9 + qword_1C0007238) )
            ++v7;
          ++v8;
          v9 += 8LL;
        }
        while ( v8 < v6 );
        if ( v7 )
          v10 = 0;
        else
LABEL_13:
          v10 = (2 * dword_1C0007220) | 1;
        dword_1C0007220 = dword_1C0007228 & v10;
      }
      if ( !dword_1C0007220 )
      {
        if ( byte_1C000725C )
        {
          byte_1C000725C = 0;
          if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 4u )
            sub_1C00043B8(off_1C0007000->AttachedDevice, 12LL, &unk_1C0005448);
        }
        return 0;
      }
      if ( dword_1C0007220 == dword_1C0007228 )
      {
        if ( !byte_1C000725C )
        {
          if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 4u )
            sub_1C0004604(off_1C0007000->AttachedDevice, 13LL, &unk_1C0005448, HIDWORD(DeviceObject.Dpc.DpcData));
          byte_1C000725C = 1;
        }
        v11 = HIDWORD(DeviceObject.Dpc.DpcData);
        v12 = 4;
      }
      else
      {
        v11 = *(&DeviceObject.ActiveThreadCount + 1);
        v12 = 3;
      }
      if ( byte_1C0007358 )
        sub_1C0003D90(*v2);
      KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&DeviceObject.Queue.Wcb.DeviceObject);
      DeviceObject.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
      if ( byte_1C000725C )
      {
        SystemArgument1 = (struct _DEVICE_OBJECT *)DeviceObject.Dpc.SystemArgument1;
        if ( DeviceObject.Dpc.SystemArgument1 == &DeviceObject.Dpc.SystemArgument1 )
        {
LABEL_121:
          *v2 |= 0x80u;
          DeviceObject.Queue.Wcb.CurrentIrp = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)&DeviceObject.Queue.Wcb.DeviceObject, 0);
          return 0;
        }
        while ( 1 )
        {
          NextDevice = SystemArgument1->NextDevice;
          if ( NextDevice != (struct _DEVICE_OBJECT *)&SystemArgument1->NextDevice )
            break;
LABEL_139:
          SystemArgument1 = *(struct _DEVICE_OBJECT **)&SystemArgument1->Type;
          if ( SystemArgument1 == (struct _DEVICE_OBJECT *)&DeviceObject.Dpc.SystemArgument1 )
            goto LABEL_121;
        }
        while ( (BYTE4(NextDevice->DeviceExtension) & 1) != 0 )
        {
          NextDevice = *(struct _DEVICE_OBJECT **)&NextDevice->Type;
          if ( NextDevice == (struct _DEVICE_OBJECT *)&SystemArgument1->NextDevice )
            goto LABEL_139;
        }
      }
      if ( qword_1C00071B8 )
        RtlRbRemoveNode(&DeviceObject.SectorSize, &DeviceObject.Reserved);
      v45 = 0LL;
      if ( dword_1C0007048 == 257 )
        v15 = KeQueryInterruptTimePrecise(&v45);
      else
        v15 = MEMORY[0xFFFFF78000000008];
      v16 = *(_QWORD *)&DeviceObject.SectorSize;
      byte_1C00071C4 = 0;
      qword_1C00071B8 = v15 + v11;
      if ( ((__int64)DeviceObject.DeviceObjectExtension & 1) != 0 )
      {
        if ( *(_QWORD *)&DeviceObject.SectorSize )
          v16 = (unsigned __int64)&DeviceObject.SectorSize ^ *(_QWORD *)&DeviceObject.SectorSize;
        else
          v16 = 0LL;
      }
      LOBYTE(SystemArgument1) = 0;
      if ( !v16 )
        goto LABEL_46;
      while ( *(_QWORD *)(v16 + 24) > v15 + (unsigned __int64)v11 )
      {
        v17 = *(_QWORD *)v16;
        if ( ((__int64)DeviceObject.DeviceObjectExtension & 1) != 0 )
        {
          if ( !v17 )
            goto LABEL_46;
          v17 ^= v16;
        }
        if ( !v17 )
          goto LABEL_46;
LABEL_39:
        v16 = v17;
      }
      v17 = *(_QWORD *)(v16 + 8);
      if ( ((__int64)DeviceObject.DeviceObjectExtension & 1) != 0 )
      {
        if ( !v17 )
          goto LABEL_45;
        v17 ^= v16;
      }
      if ( v17 )
        goto LABEL_39;
LABEL_45:
      LOBYTE(SystemArgument1) = 1;
LABEL_46:
      RtlRbInsertNodeEx(&DeviceObject.SectorSize, v16, SystemArgument1, &DeviceObject.Reserved);
      sub_1C0002990(v15);
      DeviceObject.Queue.Wcb.CurrentIrp = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&DeviceObject.Queue.Wcb.DeviceObject, 0);
      if ( byte_1C0007358 )
        sub_1C0003D0C(v12, v11);
      v18 = _InterlockedExchange(&dword_1C0007260, 0);
      while ( 2 )
      {
        v41 = v18;
        if ( !v18 )
          dword_1C0007048 = KeWaitForSingleObject(
                              *(PVOID *)&DeviceObject.Queue.Wcb.NumberOfChannels,
                              Executive,
                              0,
                              1u,
                              0LL);
        if ( !*(_QWORD *)&DeviceObject.SectorSize )
          goto LABEL_97;
        v19 = 0;
        v43 = 0;
        v20 = 0;
        v42 = 0;
        v46 = 0LL;
        if ( dword_1C0007048 == 257 )
          v21 = KeQueryInterruptTimePrecise(&v46);
        else
          v21 = MEMORY[0xFFFFF78000000008];
        v22 = v21 + 2000;
        KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&DeviceObject.Queue.Wcb.DeviceObject);
        DeviceObject.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
        qword_1C0007040 = 2LL;
        if ( ((__int64)DeviceObject.DeviceObjectExtension & 1) != 0 )
        {
          if ( DeviceObject.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
            goto LABEL_83;
          DeviceObjectExtension = (unsigned __int64)DeviceObject.DeviceObjectExtension ^ ((unsigned __int64)&DeviceObject.SectorSize
                                                                                        + 1);
        }
        else
        {
          DeviceObjectExtension = (unsigned __int64)DeviceObject.DeviceObjectExtension;
        }
        if ( !DeviceObjectExtension )
          goto LABEL_82;
        while ( 2 )
        {
          if ( *(_QWORD *)(DeviceObjectExtension + 24) <= v22 )
          {
            RtlRbRemoveNode(&DeviceObject.SectorSize, DeviceObjectExtension);
            v25 = *(_DWORD *)(DeviceObjectExtension + 32) == 1;
            *(_QWORD *)(DeviceObjectExtension + 24) = 0LL;
            if ( v25 )
            {
              if ( *(_BYTE *)(DeviceObjectExtension + 36) )
              {
                v26 = DeviceObjectExtension - 96;
              }
              else
              {
                v38 = *(_DWORD *)(DeviceObjectExtension + 128);
                v26 = DeviceObjectExtension - 56;
                if ( (v38 & 1) != 0 )
                {
                  v42 = 1;
                  ++dword_1C000726C;
                  v5 = 1;
                  *(_DWORD *)(v26 + 184) = v38 | 4;
                }
              }
              v27 = *(__int64 **)(v26 + 32);
              if ( v27 != (__int64 *)(v26 + 32) )
              {
                do
                {
                  if ( (*((_BYTE *)v27 + 68) & 1) == 0 )
                  {
                    if ( byte_1C000722C )
                    {
                      v28 = *(v27 - 1);
                      if ( *(_QWORD *)(v28 + 120) || !*(_BYTE *)(v28 + 132) && *(_QWORD *)(v28 + 80) )
                      {
                        v23 = *(unsigned __int8 *)(*(v27 - 2) + 40);
                        v29 = *(_BYTE *)(*(v27 - 2) + 40);
                        if ( (unsigned __int8)v23 > *((_BYTE *)v27 + 24) )
                          v29 = *((_BYTE *)v27 + 24);
                      }
                      else
                      {
                        v29 = *((_BYTE *)v27 + 24);
                      }
                    }
                    else
                    {
                      v29 = *((_BYTE *)v27 + 26);
                    }
                    v30 = v29;
                    if ( *((unsigned __int8 *)v27 + 27) != v29 )
                    {
                      *((_BYTE *)v27 + 27) = v29;
                      if ( byte_1C0007358 )
                        sub_1C0003C20(v27 - 10, v29);
                      KeSetActualBasePriorityThread(v27[2], v30);
                    }
                  }
                  v27 = (__int64 *)*v27;
                }
                while ( v27 != (__int64 *)(v26 + 32) );
                v19 = v43;
              }
              v31 = *(_DWORD *)(v26 + 184);
              if ( (v31 & 2) != 0 )
              {
                if ( *(_BYTE *)(DeviceObjectExtension + 36) || !*(_BYTE *)(v26 + 132) || v5 )
                {
                  *(_DWORD *)(v26 + 184) = v31 & 0xFFFFFFFD;
                  sub_1C0001010(v26, 0);
                  --dword_1C0007264;
                  goto LABEL_74;
                }
              }
              else
              {
LABEL_74:
                if ( v5 )
                  sub_1C0001010(v26, 2u);
              }
              v5 = 0;
              if ( byte_1C0007358 )
              {
                if ( *(_BYTE *)(DeviceObjectExtension + 36) )
                {
                  v49[0] = v26 + 144;
                  v39 = &EventDescriptor;
                  p_UserData = (struct _EVENT_DATA_DESCRIPTOR *)v49;
                  v49[1] = 4LL;
                }
                else
                {
                  UserData.Ptr = v26 + 144;
                  v39 = &stru_1C0005348;
                  p_UserData = &UserData;
                  *(_QWORD *)&UserData.Size = 4LL;
                }
                EtwWrite(RegHandle, v39, 0LL, 1u, p_UserData);
              }
              v32 = 32;
            }
            else
            {
              v32 = 16;
            }
            v19 |= v32;
            v43 = v19;
            if ( ((__int64)DeviceObject.DeviceObjectExtension & 1) != 0 )
            {
              if ( DeviceObject.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
                break;
              DeviceObjectExtension = (unsigned __int64)DeviceObject.DeviceObjectExtension ^ ((unsigned __int64)&DeviceObject.SectorSize
                                                                                            + 1);
            }
            else
            {
              DeviceObjectExtension = (unsigned __int64)DeviceObject.DeviceObjectExtension;
            }
            if ( !DeviceObjectExtension )
              break;
            continue;
          }
          break;
        }
        v20 = v42;
LABEL_82:
        v18 = v41;
LABEL_83:
        if ( (v19 & 0x20) != 0 )
        {
          if ( v20 )
          {
            if ( byte_1C0007268 )
            {
              byte_1C0007268 = 0;
              v23 = 0LL;
              goto LABEL_126;
            }
          }
          else
          {
            LOBYTE(v23) = dword_1C0007264 != 0;
            if ( (dword_1C0007264 != 0) != byte_1C0007268 && (!dword_1C0007264 || !dword_1C000726C) )
            {
              byte_1C0007268 = dword_1C0007264 != 0;
LABEL_126:
              PoNotifyMediaBuffering(v23);
            }
          }
        }
        if ( (v19 & 0x10) == 0 )
        {
          v33 = v22 - 2000;
          if ( ((__int64)DeviceObject.DeviceObjectExtension & 1) == 0 )
          {
            v34 = (__int64)DeviceObject.DeviceObjectExtension;
            goto LABEL_89;
          }
          if ( DeviceObject.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
            goto LABEL_154;
          v34 = (unsigned __int64)DeviceObject.DeviceObjectExtension ^ ((unsigned __int64)&DeviceObject.SectorSize + 1);
LABEL_89:
          if ( !v34 )
          {
LABEL_154:
            if ( qword_1C0007040 != 1 )
            {
              qword_1C0007040 = 1LL;
              ExCancelTimer(*(_QWORD *)&DeviceObject.Queue.Wcb.NumberOfChannels, 0LL);
            }
          }
          else if ( v34 != qword_1C0007040 )
          {
            v35 = *(_QWORD *)(v34 + 24);
            if ( v33 > v35 )
            {
              v36 = 0LL;
            }
            else
            {
              v36 = v33 - v35;
              if ( v36 < -2000 )
                v36 += 2000LL;
            }
            qword_1C0007040 = v34;
            ExSetTimer(
              *(_QWORD *)&DeviceObject.Queue.Wcb.NumberOfChannels,
              v36,
              0LL,
              &DeviceObject.Queue.Wcb.DeviceContext);
          }
        }
        DeviceObject.Queue.Wcb.CurrentIrp = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&DeviceObject.Queue.Wcb.DeviceObject, 0);
        if ( v20 )
        {
          if ( byte_1C0007358 )
          {
            v50.Ptr = (ULONGLONG)&v44;
            v44 = 1;
            *(_QWORD *)&v50.Size = 4LL;
            EtwWrite(RegHandle, &stru_1C0005338, 0LL, 1u, &v50);
          }
          PoLatencySensitivityHint(4LL);
        }
        v18 |= _InterlockedExchange(&dword_1C0007260, 0) | v19;
        if ( (v18 & 0xFFFFFFDF) == 0 )
        {
LABEL_97:
          if ( byte_1C0007358 )
            sub_1C0003D90(v18);
          v18 = 0;
          continue;
        }
        break;
      }
      v2 = v47;
      *v47 = v18;
      if ( (v18 & 0xC) != 0 )
        return 0;
    }
  }
  sub_1C0001DB0(0, HIDWORD(DeviceObject.SecurityDescriptor), a2);
  return 1;
}
