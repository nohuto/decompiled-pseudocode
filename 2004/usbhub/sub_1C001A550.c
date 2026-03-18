/*
 * XREFs of sub_1C001A550 @ 0x1C001A550
 * Callers:
 *     sub_1C000A080 @ 0x1C000A080 (sub_1C000A080.c)
 *     sub_1C000DC30 @ 0x1C000DC30 (sub_1C000DC30.c)
 *     sub_1C000F880 @ 0x1C000F880 (sub_1C000F880.c)
 *     sub_1C002F8C0 @ 0x1C002F8C0 (sub_1C002F8C0.c)
 *     sub_1C002FB30 @ 0x1C002FB30 (sub_1C002FB30.c)
 *     sub_1C002FCB0 @ 0x1C002FCB0 (sub_1C002FCB0.c)
 *     sub_1C0037328 @ 0x1C0037328 (sub_1C0037328.c)
 *     sub_1C003CAB8 @ 0x1C003CAB8 (sub_1C003CAB8.c)
 *     sub_1C003CB60 @ 0x1C003CB60 (sub_1C003CB60.c)
 *     sub_1C003CEC0 @ 0x1C003CEC0 (sub_1C003CEC0.c)
 *     sub_1C003D1D8 @ 0x1C003D1D8 (sub_1C003D1D8.c)
 *     sub_1C0043AE0 @ 0x1C0043AE0 (sub_1C0043AE0.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001A82C @ 0x1C001A82C (sub_1C001A82C.c)
 *     sub_1C001A964 @ 0x1C001A964 (sub_1C001A964.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C0031838 @ 0x1C0031838 (sub_1C0031838.c)
 *     sub_1C003CE68 @ 0x1C003CE68 (sub_1C003CE68.c)
 *     sub_1C003D2E4 @ 0x1C003D2E4 (sub_1C003D2E4.c)
 *     sub_1C003D3D0 @ 0x1C003D3D0 (sub_1C003D3D0.c)
 *     sub_1C003D4C8 @ 0x1C003D4C8 (sub_1C003D4C8.c)
 *     sub_1C003D790 @ 0x1C003D790 (sub_1C003D790.c)
 *     sub_1C003D8B8 @ 0x1C003D8B8 (sub_1C003D8B8.c)
 */

__int64 __fastcall sub_1C001A550(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  __int64 v6; // rdi
  KIRQL v7; // al
  __int64 v8; // rdx
  __int64 v9; // r14
  KIRQL v10; // r13
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  char v17; // cl
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx

  v3 = a3;
  if ( !a1 )
    sub_1C002DC78(0LL, 0LL);
  v6 = *(_QWORD *)(a1 + 64);
  if ( !v6 )
    goto LABEL_46;
  if ( *(_DWORD *)v6 != 541218120 )
    sub_1C002DC78(a1, v6);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 19, (__int64)&unk_1C0062E08, a3);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 2800));
  v9 = *(int *)(v6 + 2808);
  v10 = v7;
  if ( (dword_1C006B268 & 0x10) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
    {
      v11 = *(_QWORD *)(v8 + 888)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
      *(_DWORD *)v11 = 829576018;
      *(_QWORD *)(v11 + 8) = 0LL;
      *(_QWORD *)(v11 + 16) = v9;
      *(_QWORD *)(v11 + 24) = v3;
    }
  }
  if ( ((_DWORD)v3 == 3 || (_DWORD)v3 == 9) && (_DWORD)v9 == 3 )
  {
    if ( *(_BYTE *)(v6 + 5268) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 5260));
      sub_1C003CE68(a1, v8, 0LL);
    }
    sub_1C000FD80(a1, 16, 1381200434, 3LL, v3);
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 2800), v10);
    return (unsigned int)v9;
  }
  if ( (dword_1C006B268 & 0x10) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 64);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
      *(_DWORD *)v13 = 863130450;
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_QWORD *)(v13 + 16) = v9;
      *(_QWORD *)(v13 + 24) = v3;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 2800), v7);
  if ( (dword_1C006B268 & 0x10) != 0 )
  {
    v14 = *(_QWORD *)(a1 + 64);
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
      *(_DWORD *)v15 = 724267890;
      *(_QWORD *)(v15 + 8) = 0LL;
      *(_QWORD *)(v15 + 16) = a2;
      *(_QWORD *)(v15 + 24) = v3;
    }
  }
  v16 = *(_QWORD *)(a1 + 64);
  if ( !v16 )
LABEL_46:
    sub_1C002DC78(a1, 0LL);
  if ( *(_DWORD *)v16 != 541218120 )
    sub_1C002DC78(a1, *(_QWORD *)(a1 + 64));
  KeWaitForSingleObject((PVOID)(v16 + 2816), Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 64) = 2018792274;
  *(_DWORD *)(a2 + 72) = v3;
  *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
  v9 = *(int *)(v16 + 2808);
  *(_DWORD *)(a2 + 68) = v9;
  v17 = *(_DWORD *)(v16 + 920) + 1;
  *(_QWORD *)(v16 + 1320) = a2;
  v18 = v17 & 7;
  *(_DWORD *)(v16 + 920) = v18;
  v18 *= 32LL;
  *(_DWORD *)(v18 + v16 + 924) = v3;
  *(_DWORD *)(v18 + v16 + 928) = *(_DWORD *)(v16 + 2808);
  if ( (dword_1C006B268 & 0x10) != 0 )
  {
    v19 = *(_QWORD *)(a1 + 64);
    if ( v19 )
    {
      v20 = *(_QWORD *)(v19 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
      *(_DWORD *)v20 = 757953394;
      *(_QWORD *)(v20 + 8) = 0LL;
      *(_QWORD *)(v20 + 16) = a2;
      *(_QWORD *)(v20 + 24) = v9;
    }
  }
  switch ( (_DWORD)v9 )
  {
    case 2:
      return sub_1C001A964(a2, (unsigned int)v3);
    case 6:
      return sub_1C001A82C(a2, (unsigned int)v3);
    case 1:
      return sub_1C003D2E4(a2, (unsigned int)v3);
    case 3:
      return sub_1C003D4C8(a2, (unsigned int)v3);
    case 4:
      return sub_1C003D790(a2, (unsigned int)v3);
    case 5:
      return sub_1C003D8B8(a2, (unsigned int)v3);
  }
  if ( (_DWORD)v9 != 7 )
  {
    sub_1C0031838(a1, a2, (unsigned int)v9);
    return (unsigned int)v9;
  }
  return sub_1C003D3D0(a2, (unsigned int)v3);
}
