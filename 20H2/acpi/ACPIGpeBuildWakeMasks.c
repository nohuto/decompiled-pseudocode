/*
 * XREFs of ACPIGpeBuildWakeMasks @ 0x1C001AD48
 * Callers:
 *     ACPIGpeBuildWakeMasks @ 0x1C001AD48 (ACPIGpeBuildWakeMasks.c)
 *     ACPITableLoadCallBack @ 0x1C0030100 (ACPITableLoadCallBack.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x1C0017CC0 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIGpeIndexToGpeRegister @ 0x1C0019EA8 (ACPIGpeIndexToGpeRegister.c)
 *     ACPIGpeBuildWakeMasks @ 0x1C001AD48 (ACPIGpeBuildWakeMasks.c)
 *     ACPIExtListEnumNext @ 0x1C001AE90 (ACPIExtListEnumNext.c)
 */

void __fastcall ACPIGpeBuildWakeMasks(__int64 a1)
{
  __int64 v1; // r10
  __int64 *v2; // rdx
  KSPIN_LOCK *v3; // r9
  int v4; // r8d
  __int64 *v5; // rbx
  bool v6; // zf
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r11
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // r9d
  PKSPIN_LOCK v13; // r9
  _QWORD v14[2]; // [rsp+20h] [rbp-40h] BYREF
  KSPIN_LOCK *v15; // [rsp+30h] [rbp-30h]
  KIRQL NewIrql[8]; // [rsp+38h] [rbp-28h]
  __int64 *v17; // [rsp+40h] [rbp-20h]
  __int64 v18; // [rsp+48h] [rbp-18h]
  int v19; // [rsp+50h] [rbp-10h]
  int v20; // [rsp+54h] [rbp-Ch]

  *(_QWORD *)NewIrql = 0LL;
  v1 = a1 + 760;
  v2 = *(__int64 **)(a1 + 760);
  v3 = 0LL;
  v20 = 0;
  v4 = 0;
  v5 = 0LL;
  v14[0] = a1 + 760;
  v6 = v2 == (__int64 *)(a1 + 760);
  v15 = 0LL;
  v7 = *v2;
  v8 = (__int64)(v2 - 97);
  v9 = 776LL;
  v17 = v2 - 97;
  v14[1] = v7;
  if ( !v6 )
    v5 = v2 - 97;
  v18 = 776LL;
  v19 = 0;
  while ( v8 + v9 != v1 )
  {
    if ( v4 == 1 )
    {
      ACPIInitReferenceDeviceExtension(v8);
      KeReleaseSpinLock(v13, NewIrql[0]);
    }
    ACPIGpeBuildWakeMasks(v5);
    if ( (v5[1] & 0x10000) != 0 && (v5[120] & 0x500000000LL) == 0 )
    {
      v11 = (unsigned int)ACPIGpeIndexToGpeRegister(*((unsigned int *)v5 + 116));
      v12 = 1 << (v5[58] & 7);
      if ( ((unsigned __int8)v12 & *((_BYTE *)GpeEnable + v11)) != 0 )
      {
        if ( (v5[1] & 0x800000000LL) != 0 )
        {
          *((_BYTE *)GpeSpecialHandler + v11) |= v12;
          *((_BYTE *)GpeWakeHandler + v11) &= ~(_BYTE)v12;
        }
        else if ( ((unsigned __int8)v12 & *((_BYTE *)GpeSpecialHandler + v11)) == 0 )
        {
          *((_BYTE *)GpeWakeHandler + v11) |= v12;
        }
      }
    }
    v10 = ACPIExtListEnumNext(v14);
    v4 = v19;
    v5 = (__int64 *)v10;
    v9 = v18;
    v8 = (__int64)v17;
    v3 = v15;
    v1 = v14[0];
  }
  if ( v4 )
    KeReleaseSpinLock(v3, NewIrql[0]);
}
