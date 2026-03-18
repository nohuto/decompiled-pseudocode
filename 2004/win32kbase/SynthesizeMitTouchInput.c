/*
 * XREFs of SynthesizeMitTouchInput @ 0x1C01B05AC
 * Callers:
 *     NtMITSynthesizeTouchInput @ 0x1C0130DE0 (NtMITSynthesizeTouchInput.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C006DF18 (HMValidateHandleNoSecure.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0098B90 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1C0168D00 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C0197988 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?CreateInjectionDevice@@YAHXZ @ 0x1C01B0420 (-CreateInjectionDevice@@YAHXZ.c)
 *     ConvertPointCoordinates @ 0x1C01B0520 (ConvertPointCoordinates.c)
 */

char __fastcall SynthesizeMitTouchInput(unsigned int *a1)
{
  unsigned int v2; // eax
  _QWORD *v3; // rdi
  void *v4; // rax
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // r12
  __int64 v10; // r14
  unsigned int *v11; // rax
  _OWORD *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r9
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
  v6 = (__int64)v4;
  if ( v3 && v4 )
  {
    v3[15] = v4;
    v7 = 0LL;
    v3[4] = TouchExtensibility::ghInjectionDevice;
    *((_DWORD *)v3 + 20) = 1;
    v8 = *((_QWORD *)a1 + 12);
    *((_DWORD *)v3 + 7) = 0;
    v3[5] = v8;
    *((_DWORD *)v3 + 6) = *a1;
    if ( !*a1 )
    {
LABEL_12:
      if ( qword_1C0251EC0 )
      {
        qword_1C0251EC0(v3, &v25, Win32FreePool, v5);
        if ( qword_1C0251EC0 )
          qword_1C0251EC0(v6, &v23, Win32FreePool, v15);
      }
      v16 = HMValidateHandleNoSecure((unsigned __int64)TouchExtensibility::hDeviceUser, 19);
      InputTraceLogging::RIM::InjectInput(v16);
      CTouchProcessor::ProcessInjectedInput(v18, v17, (struct RIMCOMPLETEFRAME *)v3, a1[1] != 0, a1[3], a1[2] != 0);
      v19 = 1;
      if ( qword_1C0251ED0 )
      {
        qword_1C0251ED0(&v23);
        if ( qword_1C0251ED0 )
          qword_1C0251ED0(&v25);
      }
      goto LABEL_19;
    }
    while ( 1 )
    {
      v27 = 0LL;
      v9 = 18 * v7;
      v10 = 192 * v7;
      v11 = &a1[36 * v7];
      v12 = (_OWORD *)(192 * v7 + v6);
      v12[1] = *((_OWORD *)v11 + 1);
      v12[2] = *((_OWORD *)v11 + 2);
      v12[3] = *((_OWORD *)v11 + 3);
      v12[4] = *((_OWORD *)v11 + 4);
      v12[5] = *((_OWORD *)v11 + 5);
      v12[6] = *((_OWORD *)v11 + 6);
      v12[7] = *((_OWORD *)v11 + 7);
      v12[8] = *((_OWORD *)v11 + 8);
      v12[9] = *((_OWORD *)v11 + 9);
      v13 = *((_QWORD *)v11 + 8);
      *(_QWORD *)(192 * v7 + v6 + 48) = v13;
      v21 = TouchExtensibility::rcHimetricRect;
      v22 = TouchExtensibility::rcLogicalRect;
      if ( !(unsigned int)ConvertPointCoordinates(v13, &v22.left, &v21.left, &v27) )
        break;
      v14 = v27;
      v7 = (unsigned int)(v7 + 1);
      *(_QWORD *)(v10 + v6 + 56) = v27;
      *(_QWORD *)(v10 + v6 + 72) = v14;
      *(_QWORD *)(v10 + v6 + 32) = v3[4];
      *(_DWORD *)(v10 + v6 + 80) = a1[2 * v9 + 20];
      *(_QWORD *)(v10 + v6 + 96) = *(_QWORD *)&a1[2 * v9 + 24];
      LOWORD(v14) = a1[2 * v9 + 5];
      *(_DWORD *)(v10 + v6 + 20) = 0;
      *(_WORD *)(v10 + v6 + 8) = v14;
      if ( (unsigned int)v7 >= *a1 )
        goto LABEL_12;
    }
  }
  v19 = 0;
LABEL_19:
  if ( v3 )
    Win32FreePool((__int64)v3);
  if ( v6 )
    Win32FreePool(v6);
  return v19;
}
