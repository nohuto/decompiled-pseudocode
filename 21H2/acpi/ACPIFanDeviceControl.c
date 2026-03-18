/*
 * XREFs of ACPIFanDeviceControl @ 0x1C0003160
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qDDqss @ 0x1C0002EC8 (WPP_RECORDER_SF_qDDqss.c)
 *     ACPIFanLoop @ 0x1C0003664 (ACPIFanLoop.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C000E14C (WPP_RECORDER_SF_qqss.c)
 *     ACPISetDeviceWorker @ 0x1C00215BC (ACPISetDeviceWorker.c)
 *     Feature_Servicing_Acpi_Fan_Dispatch_36967340__private_IsEnabled @ 0x1C002F2E4 (Feature_Servicing_Acpi_Fan_Dispatch_36967340__private_IsEnabled.c)
 */

__int64 __fastcall ACPIFanDeviceControl(ULONG_PTR a1, __int64 a2)
{
  char v2; // bp
  char v4; // r13
  unsigned int v5; // esi
  __int64 DeviceExtension; // rax
  _DWORD *v7; // r15
  const char *v8; // r14
  __int64 v9; // rbx
  int v10; // edx
  void *v11; // r8
  void *v12; // rcx
  __int64 v13; // rax
  int v14; // edx
  void *v15; // r8
  void *v16; // rcx
  __int64 v17; // rax
  KIRQL v18; // dl
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  const char *v22; // rax
  unsigned __int16 v23; // r9
  int v24; // edx
  void *v25; // r8
  void *v26; // rcx
  __int64 v27; // rax
  int IsEnabled; // eax
  const char *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 *v32; // rdi
  __int64 v33; // rax
  __int64 **v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rcx
  const char *v38; // rax
  int v40; // [rsp+20h] [rbp-68h]
  char v41; // [rsp+30h] [rbp-58h]
  char v42; // [rsp+30h] [rbp-58h]
  char v43; // [rsp+30h] [rbp-58h]
  char v44; // [rsp+38h] [rbp-50h]
  char v45; // [rsp+40h] [rbp-48h]
  const char *v46; // [rsp+48h] [rbp-40h]
  const char *v47; // [rsp+50h] [rbp-38h]

  v2 = 0;
  v4 = 0;
  if ( *(_BYTE *)(a2 + 64) )
  {
    v5 = -1073741822;
    *(_DWORD *)(a2 + 48) = -1073741822;
    IofCompleteRequest((PIRP)a2, 0);
    return v5;
  }
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v7 = *(_DWORD **)(a2 + 184);
  v8 = (const char *)&unk_1C006FB8B;
  v9 = DeviceExtension;
  switch ( v7[6] )
  {
    case 0x294240:
      v24 = 0;
      v25 = &unk_1C006FB8B;
      v26 = &unk_1C006FB8B;
      if ( DeviceExtension )
      {
        v27 = *(_QWORD *)(DeviceExtension + 8);
        v24 = v9;
        if ( (v27 & 0x200000000000LL) != 0 )
        {
          v25 = *(void **)(v9 + 608);
          if ( (v27 & 0x400000000000LL) != 0 )
            v26 = *(void **)(v9 + 616);
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v43 = v24;
        LOBYTE(v24) = 4;
        WPP_RECORDER_SF_qqss(
          WPP_GLOBAL_Control->DeviceExtension,
          v24,
          16,
          26,
          (__int64)&WPP_91517f0b10833e548608c253cc4d22bc_Traceguids,
          a2,
          v43,
          (__int64)v25,
          (__int64)v26);
      }
      if ( v7[2] >= 0xCu )
        goto LABEL_27;
      v5 = -1073741789;
LABEL_44:
      *(_QWORD *)(a2 + 56) = 0LL;
      *(_DWORD *)(a2 + 48) = v5;
      IofCompleteRequest((PIRP)a2, 0);
      IsEnabled = Feature_Servicing_Acpi_Fan_Dispatch_36967340__private_IsEnabled();
      v29 = (const char *)&unk_1C006FB8B;
      if ( !IsEnabled )
        v5 = -1073741637;
      if ( v9 )
      {
        v30 = *(_QWORD *)(v9 + 8);
        v2 = v9;
        if ( (v30 & 0x200000000000LL) != 0 )
        {
          v8 = *(const char **)(v9 + 608);
          if ( (v30 & 0x400000000000LL) != 0 )
            v29 = *(const char **)(v9 + 616);
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v47 = v29;
        v23 = 29;
        v46 = v8;
        v45 = v2;
        v44 = v5;
        goto LABEL_52;
      }
      return v5;
    case 0x294244:
      v14 = 0;
      v15 = &unk_1C006FB8B;
      v16 = &unk_1C006FB8B;
      if ( DeviceExtension )
      {
        v17 = *(_QWORD *)(DeviceExtension + 8);
        v14 = v9;
        if ( (v17 & 0x200000000000LL) != 0 )
        {
          v15 = *(void **)(v9 + 608);
          if ( (v17 & 0x400000000000LL) != 0 )
            v16 = *(void **)(v9 + 616);
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v42 = v14;
        LOBYTE(v14) = 4;
        WPP_RECORDER_SF_qqss(
          WPP_GLOBAL_Control->DeviceExtension,
          v14,
          16,
          27,
          (__int64)&WPP_91517f0b10833e548608c253cc4d22bc_Traceguids,
          a2,
          v42,
          (__int64)v15,
          (__int64)v16);
      }
      v5 = v7[2] < 0x14u ? 0xC0000023 : 0;
      if ( (*(_BYTE *)(v9 + 320) & 0xF) != 0xF )
        v5 = -1073741808;
      break;
    case 0x298248:
      v10 = 0;
      v11 = &unk_1C006FB8B;
      v12 = &unk_1C006FB8B;
      if ( DeviceExtension )
      {
        v13 = *(_QWORD *)(DeviceExtension + 8);
        v10 = v9;
        if ( (v13 & 0x200000000000LL) != 0 )
        {
          v11 = *(void **)(v9 + 608);
          if ( (v13 & 0x400000000000LL) != 0 )
            v12 = *(void **)(v9 + 616);
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v41 = v10;
        LOBYTE(v10) = 4;
        WPP_RECORDER_SF_qqss(
          WPP_GLOBAL_Control->DeviceExtension,
          v10,
          16,
          28,
          (__int64)&WPP_91517f0b10833e548608c253cc4d22bc_Traceguids,
          a2,
          v41,
          (__int64)v11,
          (__int64)v12);
      }
      v4 = 1;
      v5 = v7[4] < 8u ? 0xC0000023 : 0;
      if ( (*(_BYTE *)(v9 + 320) & 0xF) != 0xF )
        v5 = -1073741808;
      if ( **(_DWORD **)(a2 + 24) >= *(_DWORD *)(*(_QWORD *)(a2 + 24) + 4LL) )
        v5 = -1073741811;
      break;
    default:
      v5 = -1073741637;
      goto LABEL_44;
  }
  if ( v5 )
    goto LABEL_44;
LABEL_27:
  v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 184));
  if ( *(char *)(v9 + 8) < 0 || (*(_DWORD *)(v9 + 192) & 0x10000000) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v9 + 184), v18);
    v5 = -1073741810;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_DWORD *)(a2 + 48) = -1073741810;
    IofCompleteRequest((PIRP)a2, 0);
    v37 = *(_QWORD *)(v9 + 8);
    v38 = (const char *)&unk_1C006FB8B;
    if ( (v37 & 0x200000000000LL) != 0 )
    {
      v8 = *(const char **)(v9 + 608);
      if ( (v37 & 0x400000000000LL) != 0 )
        v38 = *(const char **)(v9 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDDqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v35,
        v36,
        0x1Eu,
        v40,
        a2,
        v7[6],
        14,
        v9,
        v8,
        v38);
  }
  else
  {
    _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)&ACPIFanCancelRequest);
    if ( *(_BYTE *)(a2 + 68) && _InterlockedExchange64((volatile __int64 *)(a2 + 104), 0LL) )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(v9 + 184), v18);
      v5 = -1073741536;
      *(_QWORD *)(a2 + 56) = 0LL;
      *(_DWORD *)(a2 + 48) = -1073741536;
      IofCompleteRequest((PIRP)a2, 0);
      v21 = *(_QWORD *)(v9 + 8);
      v22 = (const char *)&unk_1C006FB8B;
      if ( (v21 & 0x200000000000LL) != 0 )
      {
        v8 = *(const char **)(v9 + 608);
        if ( (v21 & 0x400000000000LL) != 0 )
          v22 = *(const char **)(v9 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v47 = v22;
        v23 = 31;
        v46 = v8;
        v45 = v9;
        v44 = 32;
LABEL_52:
        WPP_RECORDER_SF_qDDqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v19,
          v20,
          v23,
          v40,
          a2,
          v7[6],
          v44,
          v45,
          v46,
          v47);
      }
    }
    else
    {
      v31 = *(_QWORD *)(a2 + 184);
      v5 = 259;
      v32 = (__int64 *)(a2 + 168);
      *(_BYTE *)(v31 + 3) |= 1u;
      if ( v4 )
        v33 = v9 + 232;
      else
        v33 = v9 + 216;
      v34 = *(__int64 ***)(v33 + 8);
      if ( *v34 != (__int64 *)v33 )
        __fastfail(3u);
      *v32 = v33;
      v32[1] = (__int64)v34;
      *v34 = v32;
      *(_QWORD *)(v33 + 8) = v32;
      KeReleaseSpinLock((PKSPIN_LOCK)(v9 + 184), v18);
      if ( v4 )
        ACPISetDeviceWorker(v9, 256LL);
      ACPIFanLoop(v9, 0LL);
    }
  }
  return v5;
}
