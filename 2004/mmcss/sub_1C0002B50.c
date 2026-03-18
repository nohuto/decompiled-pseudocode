/*
 * XREFs of sub_1C0002B50 @ 0x1C0002B50
 * Callers:
 *     sub_1C000A350 @ 0x1C000A350 (sub_1C000A350.c)
 * Callees:
 *     sub_1C0001010 @ 0x1C0001010 (sub_1C0001010.c)
 *     sub_1C0002A30 @ 0x1C0002A30 (sub_1C0002A30.c)
 *     sub_1C0002C20 @ 0x1C0002C20 (sub_1C0002C20.c)
 *     sub_1C0002C60 @ 0x1C0002C60 (sub_1C0002C60.c)
 *     sub_1C0003E84 @ 0x1C0003E84 (sub_1C0003E84.c)
 */

void __fastcall sub_1C0002B50(__int64 a1)
{
  char v1; // di
  __int64 v3; // rcx
  int v4; // eax
  int v5; // eax
  unsigned int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx

  v1 = 0;
  if ( byte_1C0007358 )
    sub_1C0003E84();
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&DeviceObject.Queue.Wcb.DeviceObject);
  DeviceObject.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
  if ( *(_QWORD *)(a1 + 80) )
  {
    sub_1C0002C60(a1 + 56);
    v1 = 1;
  }
  if ( *(_BYTE *)(a1 + 132) && *(_QWORD *)(a1 + 120) )
  {
    sub_1C0002C60(a1 + 96);
  }
  else if ( !v1 )
  {
    goto LABEL_8;
  }
  sub_1C0002C20(a1);
LABEL_8:
  v4 = *(_DWORD *)(a1 + 184);
  if ( (v4 & 4) != 0 )
  {
    --dword_1C000726C;
    v6 = v4 & 0xFFFFFFFB;
    *(_DWORD *)(a1 + 184) = v6;
    if ( (v6 & 8) != 0 )
    {
      ++dword_1C0007264;
      *(_DWORD *)(a1 + 184) = v6 & 0xFFFFFFF5 | 2;
      sub_1C0002A30(v3);
      sub_1C0001010(a1, 1u);
    }
    else
    {
      sub_1C0001010(a1, 0);
      sub_1C0002A30(v7);
    }
  }
  v5 = *(_DWORD *)(a1 + 184);
  if ( (v5 & 2) != 0 )
  {
    *(_DWORD *)(a1 + 184) = v5 & 0xFFFFFFFD;
    sub_1C0001010(a1, 0);
    --dword_1C0007264;
    sub_1C0002A30(v8);
  }
  DeviceObject.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&DeviceObject.Queue.Wcb.DeviceObject, 0);
}
