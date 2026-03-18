/*
 * XREFs of sub_1C00015B0 @ 0x1C00015B0
 * Callers:
 *     sub_1C000A350 @ 0x1C000A350 (sub_1C000A350.c)
 * Callees:
 *     sub_1C0003E00 @ 0x1C0003E00 (sub_1C0003E00.c)
 *     sub_1C000406C @ 0x1C000406C (sub_1C000406C.c)
 */

void __fastcall sub_1C00015B0(__int64 a1, unsigned int a2)
{
  unsigned int v4; // edx
  char v5; // r8
  int v6; // r8d
  int v7; // eax
  _QWORD *v8; // rbx
  _QWORD *i; // r14
  bool v10; // zf
  int v11; // eax
  unsigned int v12; // eax
  int v13; // edx
  unsigned int v14; // eax

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 3LL) & 1) != 0 )
  {
    if ( byte_1C0007358 )
      sub_1C0003E00();
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&DeviceObject.Queue.Wcb.DeviceObject);
    DeviceObject.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
    v4 = *(_DWORD *)(a1 + 184) | 1;
    v5 = *(_BYTE *)(a1 + 184) | 1;
    *(_DWORD *)(a1 + 184) = v4;
    v6 = v5 & 4;
    if ( v6 || ((v4 >> 1) & 1) != (a2 == 1) )
    {
      if ( v6 )
      {
        v12 = v4;
        v13 = v4 | 8;
        v14 = v12 & 0xFFFFFFF7;
        if ( a2 != 1 )
          v13 = v14;
        *(_DWORD *)(a1 + 184) = v13;
      }
      else
      {
        v7 = 0;
        if ( a2 == 1 )
          v7 = 2;
        *(_DWORD *)(a1 + 184) = v4 & 0xFFFFFFFD | v7;
        if ( a2 == 1 && (++dword_1C0007264 != 0) != byte_1C0007268 && (!dword_1C0007264 || !dword_1C000726C) )
        {
          byte_1C0007268 = dword_1C0007264 != 0;
          PoNotifyMediaBuffering();
        }
        v8 = *(_QWORD **)(a1 + 32);
        for ( i = (_QWORD *)(a1 + 32); v8 != i; v8 = (_QWORD *)*v8 )
        {
          if ( byte_1C0007358 )
            sub_1C000406C(v8 - 10, a2 == 1);
          KeUpdateThreadTag(v8[2], a2);
        }
        if ( a2 != 1 )
        {
          v10 = dword_1C0007264 == 1;
          v11 = --dword_1C0007264;
          if ( !v10 != byte_1C0007268 && (!v11 || !dword_1C000726C) )
          {
            byte_1C0007268 = !v10;
            PoNotifyMediaBuffering();
          }
        }
      }
    }
    DeviceObject.Queue.Wcb.CurrentIrp = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&DeviceObject.Queue.Wcb.DeviceObject, 0);
  }
}
