/*
 * XREFs of sub_1C0004874 @ 0x1C0004874
 * Callers:
 *     sub_1C0001AB0 @ 0x1C0001AB0 (sub_1C0001AB0.c)
 * Callees:
 *     sub_1C0001800 @ 0x1C0001800 (sub_1C0001800.c)
 *     sub_1C0001940 @ 0x1C0001940 (sub_1C0001940.c)
 *     sub_1C0004A34 @ 0x1C0004A34 (sub_1C0004A34.c)
 *     sub_1C0004B1C @ 0x1C0004B1C (sub_1C0004B1C.c)
 *     sub_1C000AA60 @ 0x1C000AA60 (sub_1C000AA60.c)
 *     sub_1C000B820 @ 0x1C000B820 (sub_1C000B820.c)
 *     sub_1C000B920 @ 0x1C000B920 (sub_1C000B920.c)
 *     sub_1C000B950 @ 0x1C000B950 (sub_1C000B950.c)
 */

__int64 __fastcall sub_1C0004874(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r14d
  unsigned __int8 v5; // bp
  char v6; // di
  __int64 **v7; // rdi
  __int64 **i; // rsi
  __int64 **v9; // rcx
  __int64 *j; // r15
  unsigned int v11; // r13d
  char v12; // al
  __int64 result; // rax
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF
  char v15; // [rsp+78h] [rbp+10h] BYREF
  __int64 v16; // [rsp+80h] [rbp+18h]

  v4 = 0;
  v14 = 0LL;
  v5 = a2;
  if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 4u )
    sub_1C0004A34(off_1C0007000->AttachedDevice, a2, a3, a1, *(_QWORD *)(a1 + 80), (unsigned __int8)a2);
  v6 = 0;
  v15 = 0;
  sub_1C000B950(a1);
  if ( *(_BYTE *)(a1 + 88) != v5 )
  {
    v7 = *(__int64 ***)(a1 + 64);
    for ( i = (__int64 **)(a1 + 64); v7 != i; v7 = (__int64 **)*v7 )
    {
      v9 = v7 - 14;
      if ( v5 )
        sub_1C000B820(v9);
      else
        sub_1C000AA60(v9);
    }
    v16 = KeQueryInterruptTimePrecise(&v14);
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&DeviceObject.Queue.Wcb.DeviceObject);
    DeviceObject.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
    for ( j = *i; j != (__int64 *)i; v4 = v11 )
    {
      v11 = v4 + 1;
      if ( (*(_BYTE *)(*(_QWORD *)(*(j - 5) + 136) + 3LL) & 1) == 0 )
        v11 = v4;
      v12 = v5 & 1 | *((_BYTE *)j + 36) & 0xFE;
      *((_BYTE *)j + 36) = v12;
      if ( (v12 & 1) != 0 )
      {
        if ( *((_BYTE *)j - 5) != 0xFF )
          KeSetBasePriorityThread((PKTHREAD)*(j - 2), *((_DWORD *)j + 8));
        *((_BYTE *)j - 5) = -1;
      }
      else
      {
        sub_1C0001940((__int64)(j - 14));
      }
      j = (__int64 *)*j;
    }
    sub_1C0004B1C(v5, v4, v16, &v15);
    v6 = v15;
    *(_BYTE *)(a1 + 88) = v5;
  }
  result = sub_1C000B920(a1);
  if ( v6 )
    return sub_1C0001800(0);
  return result;
}
