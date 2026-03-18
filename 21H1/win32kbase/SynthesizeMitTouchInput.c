/*
 * XREFs of SynthesizeMitTouchInput @ 0x1C01B630C
 * Callers:
 *     NtMITSynthesizeTouchInput @ 0x1C0136DD0 (NtMITSynthesizeTouchInput.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0063044 (HMValidateHandleNoSecure.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C008F2E0 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1C016F050 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C019D678 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?CreateInjectionDevice@@YAHXZ @ 0x1C01B6180 (-CreateInjectionDevice@@YAHXZ.c)
 *     ConvertPointCoordinates @ 0x1C01B6280 (ConvertPointCoordinates.c)
 */

char __fastcall SynthesizeMitTouchInput(unsigned int *a1)
{
  unsigned int v2; // eax
  _QWORD *v3; // rdi
  void *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // r12
  __int64 v11; // r14
  unsigned int *v12; // rax
  _OWORD *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  void *v17; // rdx
  CTouchProcessor *v18; // rcx
  char v19; // si
  struct tagRECT v21; // [rsp+30h] [rbp-50h] BYREF
  struct tagRECT v22; // [rsp+40h] [rbp-40h] BYREF
  __int128 v23; // [rsp+50h] [rbp-30h] BYREF
  __int64 v24; // [rsp+60h] [rbp-20h]
  __int128 v25; // [rsp+68h] [rbp-18h] BYREF
  __int64 v26; // [rsp+78h] [rbp-8h]
  __int64 v27; // [rsp+B0h] [rbp+30h] BYREF

  v26 = 0LL;
  v24 = 0LL;
  v2 = *a1 - 1;
  v25 = 0LL;
  v23 = 0LL;
  if ( v2 > 9 )
    return 0;
  if ( !TouchExtensibility::ghInjectionDevice )
    goto LABEL_27;
  if ( !HMValidateHandleNoSecure((unsigned __int64)TouchExtensibility::hDeviceUser, 19) )
    TouchExtensibility::ghInjectionDevice = 0LL;
  if ( !TouchExtensibility::ghInjectionDevice )
  {
LABEL_27:
    if ( !(unsigned int)CreateInjectionDevice() )
      return 0;
  }
  v3 = Win32AllocPoolWithQuotaZInit(0x80uLL, 0x7A747355u);
  v4 = Win32AllocPoolWithQuotaZInit(192LL * *a1, 0x7A747355u);
  v7 = (__int64)v4;
  if ( v3 && v4 )
  {
    v3[15] = v4;
    v8 = 0LL;
    v3[4] = TouchExtensibility::ghInjectionDevice;
    *((_DWORD *)v3 + 20) = 1;
    v9 = *((_QWORD *)a1 + 12);
    *((_DWORD *)v3 + 7) = 0;
    v3[5] = v9;
    *((_DWORD *)v3 + 6) = *a1;
    if ( !*a1 )
    {
LABEL_12:
      if ( qword_1C0257E80 )
      {
        qword_1C0257E80(v3, &v25, Win32FreePool);
        if ( qword_1C0257E80 )
          qword_1C0257E80(v7, &v23, Win32FreePool);
      }
      v16 = HMValidateHandleNoSecure((unsigned __int64)TouchExtensibility::hDeviceUser, 19);
      InputTraceLogging::RIM::InjectInput(v16);
      CTouchProcessor::ProcessInjectedInput(v18, v17, (struct RIMCOMPLETEFRAME *)v3, a1[1] != 0, a1[3], a1[2] != 0);
      v19 = 1;
      if ( qword_1C0257E90 )
      {
        qword_1C0257E90(&v23);
        if ( qword_1C0257E90 )
          qword_1C0257E90(&v25);
      }
      goto LABEL_19;
    }
    while ( 1 )
    {
      v27 = 0LL;
      v10 = 18 * v8;
      v11 = 192 * v8;
      v12 = &a1[36 * v8];
      v13 = (_OWORD *)(192 * v8 + v7);
      v13[1] = *((_OWORD *)v12 + 1);
      v13[2] = *((_OWORD *)v12 + 2);
      v13[3] = *((_OWORD *)v12 + 3);
      v13[4] = *((_OWORD *)v12 + 4);
      v13[5] = *((_OWORD *)v12 + 5);
      v13[6] = *((_OWORD *)v12 + 6);
      v13[7] = *((_OWORD *)v12 + 7);
      v13[8] = *((_OWORD *)v12 + 8);
      v13[9] = *((_OWORD *)v12 + 9);
      v14 = *((_QWORD *)v12 + 8);
      *(_QWORD *)(192 * v8 + v7 + 48) = v14;
      v21 = TouchExtensibility::rcHimetricRect;
      v22 = TouchExtensibility::rcLogicalRect;
      if ( !(unsigned int)ConvertPointCoordinates(v14, &v22.left, &v21.left, &v27) )
        break;
      v15 = v27;
      v8 = (unsigned int)(v8 + 1);
      *(_QWORD *)(v11 + v7 + 56) = v27;
      *(_QWORD *)(v11 + v7 + 72) = v15;
      *(_QWORD *)(v11 + v7 + 32) = v3[4];
      *(_DWORD *)(v11 + v7 + 80) = a1[2 * v10 + 20];
      *(_QWORD *)(v11 + v7 + 96) = *(_QWORD *)&a1[2 * v10 + 24];
      LOWORD(v15) = a1[2 * v10 + 5];
      *(_DWORD *)(v11 + v7 + 20) = 0;
      *(_WORD *)(v11 + v7 + 8) = v15;
      if ( (unsigned int)v8 >= *a1 )
        goto LABEL_12;
    }
  }
  v19 = 0;
LABEL_19:
  if ( v3 )
    Win32FreePool((__int64)v3, v5, v6);
  if ( v7 )
    Win32FreePool(v7, v5, v6);
  return v19;
}
