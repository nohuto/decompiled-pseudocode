/*
 * XREFs of sub_1C0002990 @ 0x1C0002990
 * Callers:
 *     sub_1C0001DB0 @ 0x1C0001DB0 (sub_1C0001DB0.c)
 *     sub_1C0001F40 @ 0x1C0001F40 (sub_1C0001F40.c)
 *     sub_1C00021A0 @ 0x1C00021A0 (sub_1C00021A0.c)
 *     sub_1C0002A80 @ 0x1C0002A80 (sub_1C0002A80.c)
 *     sub_1C0004B1C @ 0x1C0004B1C (sub_1C0004B1C.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1C0002990(unsigned __int64 a1)
{
  __int64 DeviceObjectExtension; // rax
  unsigned __int64 v2; // rdx
  __int64 v3; // rcx

  if ( ((__int64)DeviceObject.DeviceObjectExtension & 1) != 0 )
  {
    if ( DeviceObject.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
      goto LABEL_13;
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
      v2 = *(_QWORD *)(DeviceObjectExtension + 24);
      if ( a1 > v2 )
      {
        v3 = 0LL;
      }
      else
      {
        v3 = a1 - v2;
        if ( v3 < -2000 )
          v3 += 2000LL;
      }
      qword_1C0007040 = DeviceObjectExtension;
      ExSetTimer(*(_QWORD *)&DeviceObject.Queue.Wcb.NumberOfChannels, v3, 0LL, &DeviceObject.Queue.Wcb.DeviceContext);
    }
    return;
  }
LABEL_13:
  if ( qword_1C0007040 != 1 )
  {
    qword_1C0007040 = 1LL;
    ExCancelTimer(*(_QWORD *)&DeviceObject.Queue.Wcb.NumberOfChannels, 0LL);
  }
}
