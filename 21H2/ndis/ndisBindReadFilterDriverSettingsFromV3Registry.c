/*
 * XREFs of ndisBindReadFilterDriverSettingsFromV3Registry @ 0x1C010177C
 * Callers:
 *     ndisBindReadFilterDriverFromV3Registry @ 0x1C010A30C (ndisBindReadFilterDriverFromV3Registry.c)
 * Callees:
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0100E44 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C0101B60 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 */

bool __fastcall ndisBindReadFilterDriverSettingsFromV3Registry(__int64 a1, __int64 a2)
{
  PVOID *v3; // rbx
  void *v4; // rcx
  int String; // eax
  bool v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  if ( (dword_1C00E49F4 & 1) == 0 )
  {
    dword_1C00E4534 = 1;
    dword_1C00E49F4 |= 1u;
    xmmword_1C00E4520 = xmmword_1C00CD108;
    dword_1C00E4530 = 6;
    xmmword_1C00E4538 = xmmword_1C00CD120;
    dword_1C00E4548 = 8;
    dword_1C00E4560 = 20;
    xmmword_1C00E4550 = xmmword_1C00CD0D8;
    dword_1C00E4578 = 22;
    xmmword_1C00E4568 = xmmword_1C00CD0C0;
    dword_1C00E454C = 2;
    dword_1C00E4564 = 4;
    dword_1C00E457C = 8;
    xmmword_1C00E4580 = xmmword_1C00CD0F0;
    dword_1C00E4590 = 24;
    dword_1C00E4594 = 16;
  }
  *(_DWORD *)(a1 + 40) = 0;
  v3 = (PVOID *)&xmmword_1C00E4520;
  v8 = a2;
  while ( 1 )
  {
    v7 = 0;
    if ( (unsigned int)NetSetupPropertyBag::ReadBoolean(
                         (NetSetupPropertyBag *)&v8,
                         (const struct _NETSETUPPROPKEY *)v3,
                         &v7) )
      break;
    if ( v7 )
      *(_DWORD *)(a1 + 40) |= *((_DWORD *)v3 + 5);
    v3 += 3;
    if ( v3 == &qword_1C00E4598 )
    {
      v4 = *(void **)(a1 + 48);
      *(_QWORD *)(a1 + 48) = 0LL;
      if ( v4 )
        ExFreePoolWithTag(v4, 0x7274534Bu);
      String = NetSetupPropertyBag::ReadString(
                 (NetSetupPropertyBag *)&v8,
                 (const struct _NETSETUPPROPKEY *)&unk_1C00C94C8,
                 (void **)(a1 + 48));
      return !String || String == -1073741772;
    }
  }
  return 0;
}
