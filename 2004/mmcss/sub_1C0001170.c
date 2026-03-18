/*
 * XREFs of sub_1C0001170 @ 0x1C0001170
 * Callers:
 *     sub_1C000A350 @ 0x1C000A350 (sub_1C000A350.c)
 * Callees:
 *     sub_1C0001010 @ 0x1C0001010 (sub_1C0001010.c)
 *     sub_1C0002A30 @ 0x1C0002A30 (sub_1C0002A30.c)
 *     sub_1C0003C20 @ 0x1C0003C20 (sub_1C0003C20.c)
 *     sub_1C0003FD4 @ 0x1C0003FD4 (sub_1C0003FD4.c)
 */

void __fastcall sub_1C0001170(__int64 a1, ULONG a2, ULONG a3)
{
  ULONG v3; // edi
  ULONG ActiveThreadCount; // ebx
  unsigned __int64 v6; // r15
  __int64 v7; // r8
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int8 v13; // al
  unsigned __int64 v14; // rax
  __int64 *i; // rdi
  __int64 v16; // rax
  unsigned __int8 v17; // cl
  unsigned int v18; // esi
  __int64 DeviceObjectExtension; // rbp
  unsigned __int64 v20; // rax
  __int64 v21; // r15
  int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // [rsp+50h] [rbp+8h] BYREF

  v24 = 0LL;
  v3 = a3;
  ActiveThreadCount = a2;
  if ( a2 < DeviceObject.ActiveThreadCount )
    ActiveThreadCount = DeviceObject.ActiveThreadCount;
  if ( a3 != -1 )
  {
    if ( a3 < DeviceObject.ActiveThreadCount )
      v3 = DeviceObject.ActiveThreadCount;
    if ( v3 >= ActiveThreadCount )
      v3 = -1;
  }
  if ( byte_1C0007358 )
    sub_1C0003FD4(a1, ActiveThreadCount, v3);
  v6 = KeQueryInterruptTimePrecise(&v24);
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&DeviceObject.Queue.Wcb.DeviceObject);
  DeviceObject.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
  if ( *(_QWORD *)(a1 + 80) )
  {
    *(_QWORD *)(a1 + 80) = 0LL;
    if ( *(_BYTE *)(a1 + 92) )
      *(_BYTE *)(a1 + 92) = 0;
    RtlRbRemoveNode(&DeviceObject.SectorSize, a1 + 56);
    if ( qword_1C0007040 == a1 + 56 )
      qword_1C0007040 = 2LL;
  }
  *(_BYTE *)(a1 + 92) = 0;
  v8 = v6 + ActiveThreadCount;
  *(_QWORD *)(a1 + 80) = v8;
  v9 = *(_QWORD *)&DeviceObject.SectorSize;
  if ( ((__int64)DeviceObject.DeviceObjectExtension & 1) != 0 )
  {
    if ( *(_QWORD *)&DeviceObject.SectorSize )
      v9 = (unsigned __int64)&DeviceObject.SectorSize ^ *(_QWORD *)&DeviceObject.SectorSize;
    else
      v9 = 0LL;
  }
  LOBYTE(v7) = 0;
  if ( v9 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v9 + 24) > v8 )
      {
        v10 = *(_QWORD *)v9;
        if ( ((__int64)DeviceObject.DeviceObjectExtension & 1) != 0 )
        {
          if ( !v10 )
            break;
          v10 ^= v9;
        }
        if ( !v10 )
          break;
      }
      else
      {
        v10 = *(_QWORD *)(v9 + 8);
        if ( ((__int64)DeviceObject.DeviceObjectExtension & 1) != 0 )
        {
          if ( !v10 )
            goto LABEL_31;
          v10 ^= v9;
        }
        if ( !v10 )
        {
LABEL_31:
          LOBYTE(v7) = 1;
          break;
        }
      }
      v9 = v10;
    }
  }
  RtlRbInsertNodeEx(&DeviceObject.SectorSize, v9, v7, a1 + 56);
  if ( *(_BYTE *)(a1 + 132) && *(_QWORD *)(a1 + 120) )
  {
    *(_QWORD *)(a1 + 120) = 0LL;
    if ( *(_BYTE *)(a1 + 132) )
      *(_BYTE *)(a1 + 132) = 0;
    RtlRbRemoveNode(&DeviceObject.SectorSize, a1 + 96);
    if ( qword_1C0007040 == a1 + 96 )
      qword_1C0007040 = 2LL;
  }
  if ( v3 == -1 )
  {
    *(_BYTE *)(a1 + 132) = 0;
  }
  else
  {
    v11 = v6 + v3;
    *(_BYTE *)(a1 + 132) = 1;
    *(_QWORD *)(a1 + 120) = v11;
    v12 = *(_QWORD *)&DeviceObject.SectorSize;
    if ( ((__int64)DeviceObject.DeviceObjectExtension & 1) != 0 )
    {
      if ( *(_QWORD *)&DeviceObject.SectorSize )
        v12 = (unsigned __int64)&DeviceObject.SectorSize ^ *(_QWORD *)&DeviceObject.SectorSize;
      else
        v12 = 0LL;
    }
    v13 = 0;
    if ( v12 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(v12 + 24) > v11 )
        {
          v14 = *(_QWORD *)v12;
          if ( ((__int64)DeviceObject.DeviceObjectExtension & 1) != 0 )
          {
            if ( !v14 )
              goto LABEL_47;
            v14 ^= v12;
          }
          if ( !v14 )
          {
LABEL_47:
            v13 = 0;
            break;
          }
        }
        else
        {
          v14 = *(_QWORD *)(v12 + 8);
          if ( ((__int64)DeviceObject.DeviceObjectExtension & 1) != 0 )
          {
            if ( !v14 )
              goto LABEL_48;
            v14 ^= v12;
          }
          if ( !v14 )
          {
LABEL_48:
            v13 = 1;
            break;
          }
        }
        v12 = v14;
      }
    }
    RtlRbInsertNodeEx(&DeviceObject.SectorSize, v12, v13, a1 + 96);
  }
  for ( i = *(__int64 **)(a1 + 32); i != (__int64 *)(a1 + 32); i = (__int64 *)*i )
  {
    if ( (*((_BYTE *)i + 68) & 1) == 0 )
    {
      if ( byte_1C000722C )
      {
        v16 = *(i - 1);
        if ( *(_QWORD *)(v16 + 120) || !*(_BYTE *)(v16 + 132) && *(_QWORD *)(v16 + 80) )
        {
          v17 = *(_BYTE *)(*(i - 2) + 40);
          if ( v17 > *((_BYTE *)i + 24) )
            v17 = *((_BYTE *)i + 24);
        }
        else
        {
          v17 = *((_BYTE *)i + 24);
        }
      }
      else
      {
        v17 = *((_BYTE *)i + 26);
      }
      v18 = v17;
      if ( *((unsigned __int8 *)i + 27) != v17 )
      {
        *((_BYTE *)i + 27) = v17;
        if ( byte_1C0007358 )
          sub_1C0003C20(i - 10, v17);
        KeSetActualBasePriorityThread(i[2], v18);
      }
    }
  }
  if ( ((__int64)DeviceObject.DeviceObjectExtension & 1) != 0 )
  {
    if ( DeviceObject.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
      goto LABEL_90;
    DeviceObjectExtension = (unsigned __int64)DeviceObject.DeviceObjectExtension ^ ((unsigned __int64)&DeviceObject.SectorSize
                                                                                  + 1);
  }
  else
  {
    DeviceObjectExtension = (__int64)DeviceObject.DeviceObjectExtension;
  }
  if ( DeviceObjectExtension )
  {
    if ( DeviceObjectExtension != qword_1C0007040 )
    {
      v20 = *(_QWORD *)(DeviceObjectExtension + 24);
      if ( v6 > v20 )
      {
        v21 = 0LL;
      }
      else
      {
        v21 = v6 - v20;
        if ( v21 < -2000 )
          v21 += 2000LL;
      }
      qword_1C0007040 = DeviceObjectExtension;
      ExSetTimer(*(_QWORD *)&DeviceObject.Queue.Wcb.NumberOfChannels, v21, 0LL, &DeviceObject.Queue.Wcb.DeviceContext);
    }
    goto LABEL_69;
  }
LABEL_90:
  if ( qword_1C0007040 != 1 )
  {
    qword_1C0007040 = 1LL;
    ExCancelTimer(*(_QWORD *)&DeviceObject.Queue.Wcb.NumberOfChannels, 0LL);
  }
LABEL_69:
  v22 = *(_DWORD *)(a1 + 184);
  if ( (v22 & 4) != 0 )
  {
    --dword_1C000726C;
    v23 = v22 & 0xFFFFFFFB;
    *(_DWORD *)(a1 + 184) = v23;
    if ( (v23 & 8) != 0 )
    {
      ++dword_1C0007264;
      *(_DWORD *)(a1 + 184) = v23 & 0xFFFFFFF5 | 2;
      sub_1C0002A30();
      sub_1C0001010(a1, 1u);
    }
    else
    {
      sub_1C0001010(a1, 0);
      sub_1C0002A30();
    }
  }
  DeviceObject.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&DeviceObject.Queue.Wcb.DeviceObject, 0);
}
