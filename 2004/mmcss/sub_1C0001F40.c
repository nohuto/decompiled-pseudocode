/*
 * XREFs of sub_1C0001F40 @ 0x1C0001F40
 * Callers:
 *     sub_1C0001DB0 @ 0x1C0001DB0 (sub_1C0001DB0.c)
 *     sub_1C0002CC0 @ 0x1C0002CC0 (sub_1C0002CC0.c)
 * Callees:
 *     sub_1C0001010 @ 0x1C0001010 (sub_1C0001010.c)
 *     sub_1C0002150 @ 0x1C0002150 (sub_1C0002150.c)
 *     sub_1C0002990 @ 0x1C0002990 (sub_1C0002990.c)
 *     sub_1C0002A30 @ 0x1C0002A30 (sub_1C0002A30.c)
 *     sub_1C0002C20 @ 0x1C0002C20 (sub_1C0002C20.c)
 *     sub_1C0003EF4 @ 0x1C0003EF4 (sub_1C0003EF4.c)
 *     sub_1C0003F64 @ 0x1C0003F64 (sub_1C0003F64.c)
 *     sub_1C00042F0 @ 0x1C00042F0 (sub_1C00042F0.c)
 */

char __fastcall sub_1C0001F40(_DWORD *a1)
{
  char result; // al
  int v3; // ebx
  int v4; // r15d
  unsigned __int64 v5; // rbp
  unsigned __int64 DeviceObjectExtension; // rsi
  bool v7; // zf
  int v8; // eax
  int v9; // r12d
  __int64 v10; // r13
  int v11; // eax
  int v12; // eax

  result = DeviceObject.SectorSize;
  if ( !*(_QWORD *)&DeviceObject.SectorSize )
    return result;
  v3 = 0;
  v4 = 0;
  v5 = sub_1C0002150() + 2000;
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&DeviceObject.Queue.Wcb.DeviceObject);
  DeviceObject.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
  qword_1C0007040 = 2LL;
  if ( ((__int64)DeviceObject.DeviceObjectExtension & 1) == 0 )
  {
    DeviceObjectExtension = (unsigned __int64)DeviceObject.DeviceObjectExtension;
    goto LABEL_4;
  }
  if ( DeviceObject.DeviceObjectExtension != (struct _DEVOBJ_EXTENSION *)1 )
  {
    DeviceObjectExtension = (unsigned __int64)DeviceObject.DeviceObjectExtension ^ ((unsigned __int64)&DeviceObject.SectorSize
                                                                                  + 1);
LABEL_4:
    if ( DeviceObjectExtension )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(DeviceObjectExtension + 24) > v5 )
          goto LABEL_11;
        RtlRbRemoveNode(&DeviceObject.SectorSize, DeviceObjectExtension);
        v7 = *(_DWORD *)(DeviceObjectExtension + 32) == 1;
        *(_QWORD *)(DeviceObjectExtension + 24) = 0LL;
        if ( !v7 )
        {
          v8 = 16;
          goto LABEL_8;
        }
        v9 = 0;
        if ( *(_BYTE *)(DeviceObjectExtension + 36) )
        {
          v10 = DeviceObjectExtension - 96;
        }
        else
        {
          v12 = *(_DWORD *)(DeviceObjectExtension + 128);
          v10 = DeviceObjectExtension - 56;
          if ( (v12 & 1) != 0 )
          {
            v4 = 1;
            ++dword_1C000726C;
            v9 = 1;
            *(_DWORD *)(v10 + 184) = v12 | 4;
          }
        }
        sub_1C0002C20(v10);
        v11 = *(_DWORD *)(v10 + 184);
        if ( (v11 & 2) == 0 )
          goto LABEL_23;
        if ( *(_BYTE *)(DeviceObjectExtension + 36) || !*(_BYTE *)(v10 + 132) || v9 )
          break;
LABEL_25:
        if ( byte_1C0007358 )
        {
          if ( *(_BYTE *)(DeviceObjectExtension + 36) )
            sub_1C0003F64(v10);
          else
            sub_1C0003EF4(v10);
        }
        v8 = 32;
LABEL_8:
        v3 |= v8;
        if ( ((__int64)DeviceObject.DeviceObjectExtension & 1) != 0 )
        {
          if ( DeviceObject.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
            goto LABEL_11;
          DeviceObjectExtension = (unsigned __int64)DeviceObject.DeviceObjectExtension ^ ((unsigned __int64)&DeviceObject.SectorSize
                                                                                        + 1);
        }
        else
        {
          DeviceObjectExtension = (unsigned __int64)DeviceObject.DeviceObjectExtension;
        }
        if ( !DeviceObjectExtension )
          goto LABEL_11;
      }
      *(_DWORD *)(v10 + 184) = v11 & 0xFFFFFFFD;
      sub_1C0001010(v10, 0);
      --dword_1C0007264;
LABEL_23:
      if ( v9 )
        sub_1C0001010(v10, 2u);
      goto LABEL_25;
    }
  }
LABEL_11:
  if ( (v3 & 0x20) != 0 )
  {
    if ( v4 )
    {
      if ( byte_1C0007268 )
      {
        byte_1C0007268 = 0;
        PoNotifyMediaBuffering(0LL);
      }
    }
    else
    {
      sub_1C0002A30();
    }
  }
  if ( (v3 & 0x10) == 0 )
    sub_1C0002990(v5 - 2000);
  DeviceObject.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&DeviceObject.Queue.Wcb.DeviceObject, 0);
  if ( v4 )
  {
    if ( byte_1C0007358 )
      sub_1C00042F0();
    PoLatencySensitivityHint(4LL);
  }
  *a1 |= _InterlockedExchange(&dword_1C0007260, 0) | v3;
  return (*a1 & 0xFFFFFFDF) != 0;
}
