/*
 * XREFs of RIMIDE_CreateGenericHidDevice @ 0x1C016D500
 * Callers:
 *     NtUserInitializeGenericHidInjection @ 0x1C0134B80 (NtUserInitializeGenericHidInjection.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     rimHidP_GetUsageValue @ 0x1C0165C3C (rimHidP_GetUsageValue.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C016A2F4 (RIMIDECreatePseudoHIDDevice.c)
 */

__int64 __fastcall RIMIDE_CreateGenericHidDevice(__int64 a1, __int64 *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  char *v8; // rcx
  __int16 v9; // dx
  unsigned __int16 v10; // cx
  __int64 v11; // rax
  __int64 v13; // [rsp+48h] [rbp-61h]
  unsigned int v14[4]; // [rsp+50h] [rbp-59h] BYREF
  __int128 v15[4]; // [rsp+60h] [rbp-49h] BYREF
  _OWORD v16[4]; // [rsp+A0h] [rbp-9h] BYREF

  v4 = 0;
  memset(v16, 0, sizeof(v16));
  v5 = *(unsigned __int16 *)(a1 + 40);
  v6 = *(_QWORD *)(a1 + 32);
  v14[0] = 1;
  if ( gpfnHidP_GetCollectionDescription )
    v7 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _OWORD *))gpfnHidP_GetCollectionDescription)(
           v6,
           v5,
           1LL,
           v16);
  else
    v7 = -1073741637;
  if ( v7 >= 0 )
  {
    v8 = *(char **)(a1 + 48);
    if ( v8 )
      rimHidP_GetUsageValue(
        HidP_Feature,
        0xDu,
        0,
        0x55u,
        v14,
        *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)&v16[0] + 32LL),
        v8,
        *(unsigned __int16 *)(a1 + 56));
    v13 = *(_QWORD *)(a1 + 24);
    v15[1] = v16[1];
    v15[0] = v16[0];
    v9 = *(_WORD *)(*(_QWORD *)&v16[0] + 2LL);
    v10 = **(_WORD **)&v16[0];
    v15[2] = v16[2];
    v15[3] = v16[3];
    v11 = RIMIDECreatePseudoHIDDevice(v10, v9, v14[0], 1u, 0LL, v15, 1, 0, 0, v13);
    if ( v11 )
    {
      *a2 = v11;
      return 1;
    }
  }
  return v4;
}
