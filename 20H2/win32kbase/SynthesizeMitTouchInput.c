/*
 * XREFs of SynthesizeMitTouchInput @ 0x1C01AE22C
 * Callers:
 *     NtMITSynthesizeTouchInput @ 0x1C012EA90 (NtMITSynthesizeTouchInput.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0032DF0 (HMValidateHandleNoSecure.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0059680 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1C01667A0 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C0195458 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?CreateInjectionDevice@@YAHXZ @ 0x1C01AE0A0 (-CreateInjectionDevice@@YAHXZ.c)
 *     ConvertPointCoordinates @ 0x1C01AE1A0 (ConvertPointCoordinates.c)
 */

char __fastcall SynthesizeMitTouchInput(unsigned int *a1)
{
  unsigned int v2; // eax
  _QWORD *v3; // rdi
  void *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // r12
  __int64 v9; // r14
  unsigned int *v10; // rax
  _OWORD *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  void *v15; // rdx
  CTouchProcessor *v16; // rcx
  char v17; // si
  struct tagRECT v19; // [rsp+30h] [rbp-50h] BYREF
  struct tagRECT v20; // [rsp+40h] [rbp-40h] BYREF
  __int128 v21; // [rsp+50h] [rbp-30h] BYREF
  __int64 v22; // [rsp+60h] [rbp-20h]
  __int128 v23; // [rsp+68h] [rbp-18h] BYREF
  __int64 v24; // [rsp+78h] [rbp-8h]
  __int64 v25; // [rsp+B0h] [rbp+30h] BYREF

  v24 = 0LL;
  v22 = 0LL;
  v2 = *a1 - 1;
  v23 = 0LL;
  v21 = 0LL;
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
  v5 = (__int64)v4;
  if ( v3 && v4 )
  {
    v3[15] = v4;
    v6 = 0LL;
    v3[4] = TouchExtensibility::ghInjectionDevice;
    *((_DWORD *)v3 + 20) = 1;
    v7 = *((_QWORD *)a1 + 12);
    *((_DWORD *)v3 + 7) = 0;
    v3[5] = v7;
    *((_DWORD *)v3 + 6) = *a1;
    if ( !*a1 )
    {
LABEL_12:
      if ( qword_1C024FEC0 )
      {
        qword_1C024FEC0(v3, &v23, Win32FreePool);
        if ( qword_1C024FEC0 )
          qword_1C024FEC0(v5, &v21, Win32FreePool);
      }
      v14 = HMValidateHandleNoSecure((unsigned __int64)TouchExtensibility::hDeviceUser, 19);
      InputTraceLogging::RIM::InjectInput(v14);
      CTouchProcessor::ProcessInjectedInput(v16, v15, (struct RIMCOMPLETEFRAME *)v3, a1[1] != 0, a1[3], a1[2] != 0);
      v17 = 1;
      if ( qword_1C024FED0 )
      {
        qword_1C024FED0(&v21);
        if ( qword_1C024FED0 )
          qword_1C024FED0(&v23);
      }
      goto LABEL_19;
    }
    while ( 1 )
    {
      v25 = 0LL;
      v8 = 18 * v6;
      v9 = 192 * v6;
      v10 = &a1[36 * v6];
      v11 = (_OWORD *)(192 * v6 + v5);
      v11[1] = *((_OWORD *)v10 + 1);
      v11[2] = *((_OWORD *)v10 + 2);
      v11[3] = *((_OWORD *)v10 + 3);
      v11[4] = *((_OWORD *)v10 + 4);
      v11[5] = *((_OWORD *)v10 + 5);
      v11[6] = *((_OWORD *)v10 + 6);
      v11[7] = *((_OWORD *)v10 + 7);
      v11[8] = *((_OWORD *)v10 + 8);
      v11[9] = *((_OWORD *)v10 + 9);
      v12 = *((_QWORD *)v10 + 8);
      *(_QWORD *)(192 * v6 + v5 + 48) = v12;
      v19 = TouchExtensibility::rcHimetricRect;
      v20 = TouchExtensibility::rcLogicalRect;
      if ( !(unsigned int)ConvertPointCoordinates(v12, &v20.left, &v19.left, &v25) )
        break;
      v13 = v25;
      v6 = (unsigned int)(v6 + 1);
      *(_QWORD *)(v9 + v5 + 56) = v25;
      *(_QWORD *)(v9 + v5 + 72) = v13;
      *(_QWORD *)(v9 + v5 + 32) = v3[4];
      *(_DWORD *)(v9 + v5 + 80) = a1[2 * v8 + 20];
      *(_QWORD *)(v9 + v5 + 96) = *(_QWORD *)&a1[2 * v8 + 24];
      LOWORD(v13) = a1[2 * v8 + 5];
      *(_DWORD *)(v9 + v5 + 20) = 0;
      *(_WORD *)(v9 + v5 + 8) = v13;
      if ( (unsigned int)v6 >= *a1 )
        goto LABEL_12;
    }
  }
  v17 = 0;
LABEL_19:
  if ( v3 )
    Win32FreePool((__int64)v3);
  if ( v5 )
    Win32FreePool(v5);
  return v17;
}
