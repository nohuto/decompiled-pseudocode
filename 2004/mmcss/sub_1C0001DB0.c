/*
 * XREFs of sub_1C0001DB0 @ 0x1C0001DB0
 * Callers:
 *     sub_1C00021A0 @ 0x1C00021A0 (sub_1C00021A0.c)
 * Callees:
 *     sub_1C0001F40 @ 0x1C0001F40 (sub_1C0001F40.c)
 *     sub_1C0002150 @ 0x1C0002150 (sub_1C0002150.c)
 *     sub_1C0002990 @ 0x1C0002990 (sub_1C0002990.c)
 *     sub_1C0003D0C @ 0x1C0003D0C (sub_1C0003D0C.c)
 *     sub_1C0003D90 @ 0x1C0003D90 (sub_1C0003D90.c)
 */

__int64 __fastcall sub_1C0001DB0(unsigned int a1, unsigned int a2, unsigned __int32 *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rbx
  unsigned __int64 v9; // r8
  unsigned __int8 v10; // al
  unsigned __int64 v11; // rax
  __int32 i; // eax
  __int64 result; // rax
  unsigned __int32 v14; // [rsp+58h] [rbp+10h] BYREF

  v4 = a2;
  if ( qword_1C00071B8 )
    RtlRbRemoveNode(&DeviceObject.SectorSize, &DeviceObject.Reserved);
  v6 = sub_1C0002150();
  v7 = *(_QWORD *)&DeviceObject.SectorSize;
  v8 = v6;
  byte_1C00071C4 = 0;
  v9 = v6 + v4;
  qword_1C00071B8 = v6 + v4;
  if ( ((__int64)DeviceObject.DeviceObjectExtension & 1) != 0 )
  {
    if ( *(_QWORD *)&DeviceObject.SectorSize )
      v7 = (unsigned __int64)&DeviceObject.SectorSize ^ *(_QWORD *)&DeviceObject.SectorSize;
    else
      v7 = 0LL;
  }
  v10 = 0;
  if ( v7 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v7 + 24) > v9 )
      {
        v11 = *(_QWORD *)v7;
        if ( ((__int64)DeviceObject.DeviceObjectExtension & 1) != 0 )
        {
          if ( !v11 )
            goto LABEL_18;
          v11 ^= v7;
        }
        if ( !v11 )
        {
LABEL_18:
          v10 = 0;
          break;
        }
      }
      else
      {
        v11 = *(_QWORD *)(v7 + 8);
        if ( ((__int64)DeviceObject.DeviceObjectExtension & 1) != 0 )
        {
          if ( !v11 )
            goto LABEL_19;
          v11 ^= v7;
        }
        if ( !v11 )
        {
LABEL_19:
          v10 = 1;
          break;
        }
      }
      v7 = v11;
    }
  }
  RtlRbInsertNodeEx(&DeviceObject.SectorSize, v7, v10, &DeviceObject.Reserved);
  sub_1C0002990(v8);
  DeviceObject.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&DeviceObject.Queue.Wcb.DeviceObject, 0);
  if ( byte_1C0007358 )
    sub_1C0003D0C(a1, (unsigned int)v4);
  for ( i = _InterlockedExchange(&dword_1C0007260, 0); ; i = 0 )
  {
    v14 = i;
    if ( !i )
      dword_1C0007048 = KeWaitForSingleObject(*(PVOID *)&DeviceObject.Queue.Wcb.NumberOfChannels, Executive, 0, 1u, 0LL);
    if ( (unsigned __int8)sub_1C0001F40(&v14) )
      break;
    if ( byte_1C0007358 )
      sub_1C0003D90(v14);
  }
  result = v14;
  *a3 = v14;
  return result;
}
