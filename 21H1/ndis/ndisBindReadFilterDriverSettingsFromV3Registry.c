/*
 * XREFs of ndisBindReadFilterDriverSettingsFromV3Registry @ 0x1C01017B0
 * Callers:
 *     ndisBindReadFilterDriverFromV3Registry @ 0x1C010A298 (ndisBindReadFilterDriverFromV3Registry.c)
 * Callees:
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0100E78 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C0101B94 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 */

bool __fastcall ndisBindReadFilterDriverSettingsFromV3Registry(__int64 a1, __int64 a2)
{
  PVOID *v3; // rbx
  void *v4; // rcx
  int String; // eax
  bool v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  if ( (dword_1C00E48F4 & 1) == 0 )
  {
    dword_1C00E4434 = 1;
    dword_1C00E48F4 |= 1u;
    xmmword_1C00E4420 = xmmword_1C00CD0A8;
    dword_1C00E4430 = 6;
    xmmword_1C00E4438 = xmmword_1C00CD0C0;
    dword_1C00E4448 = 8;
    dword_1C00E4460 = 20;
    xmmword_1C00E4450 = xmmword_1C00CD078;
    dword_1C00E4478 = 22;
    xmmword_1C00E4468 = xmmword_1C00CD060;
    dword_1C00E444C = 2;
    dword_1C00E4464 = 4;
    dword_1C00E447C = 8;
    xmmword_1C00E4480 = xmmword_1C00CD090;
    dword_1C00E4490 = 24;
    dword_1C00E4494 = 16;
  }
  *(_DWORD *)(a1 + 40) = 0;
  v3 = (PVOID *)&xmmword_1C00E4420;
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
    if ( v3 == &qword_1C00E4498 )
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
