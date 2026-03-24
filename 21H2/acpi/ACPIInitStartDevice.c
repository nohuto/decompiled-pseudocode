/*
 * XREFs of ACPIInitStartDevice @ 0x1C000D968
 * Callers:
 *     ACPIEcStartDevice @ 0x1C00539F0 (ACPIEcStartDevice.c)
 *     ACPICMButtonStart @ 0x1C009089C (ACPICMButtonStart.c)
 *     ACPIInternalDeviceClockIrpStartDevice @ 0x1C0090920 (ACPIInternalDeviceClockIrpStartDevice.c)
 *     ACPIBusIrpStartDevice @ 0x1C0090F10 (ACPIBusIrpStartDevice.c)
 *     ACPIFilterIrpStartDevice @ 0x1C0091520 (ACPIFilterIrpStartDevice.c)
 *     ACPIProcessorContainerStartDevice @ 0x1C00B2210 (ACPIProcessorContainerStartDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002D40 (ACPIInternalGetDeviceExtension.c)
 *     FreeDataBuffs @ 0x1C0003350 (FreeDataBuffs.c)
 *     AMLIDereferenceHandleEx @ 0x1C000BC6C (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000BCA0 (AMLIEvalNameSpaceObject.c)
 *     ACPIDeviceInternalDeviceRequest @ 0x1C000DD10 (ACPIDeviceInternalDeviceRequest.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C000DE20 (ACPIThermalAcquireCoolingInterfaces.c)
 *     WPP_RECORDER_SF_qss @ 0x1C001DAB8 (WPP_RECORDER_SF_qss.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C001DBF4 (WPP_RECORDER_SF_Dqss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00209B0 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIGetNamedChild @ 0x1C0020D50 (AMLIGetNamedChild.c)
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00321C0 (memmove.c)
 *     PnpCmResourcesToBiosResources @ 0x1C0090950 (PnpCmResourcesToBiosResources.c)
 */

__int64 __fastcall ACPIInitStartDevice(
        ULONG_PTR a1,
        __int64 a2,
        void (__fastcall *a3)(_QWORD *, __int64, _QWORD),
        __int64 a4,
        __int64 a5)
{
  int v5; // edi
  int v6; // r14d
  _QWORD *DeviceExtension; // rax
  __int64 v9; // r8
  unsigned __int64 *v10; // r12
  __int64 v11; // r15
  _QWORD *v12; // rbx
  __int64 v13; // r13
  __int64 v14; // r9
  _DWORD *v15; // r14
  unsigned int *v16; // rsi
  void *v17; // rdi
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  int v21; // edx
  __int64 v22; // rcx
  void *v23; // rax
  unsigned int v24; // ebx
  int v26; // esi
  unsigned int v27; // esi
  PVOID v28; // rax
  void *v29; // r14
  char v30; // si
  _OWORD *v31; // rax
  _QWORD *v32; // r13
  KIRQL v33; // al
  void *v34; // rcx
  KIRQL v35; // di
  void *v36; // rcx
  unsigned int v37; // edx
  _BYTE *v38; // rcx
  size_t v39; // r15
  PVOID PoolWithTag; // rax
  PVOID v41; // r14
  __int64 v42; // rax
  void *v43; // rdx
  void *v44; // rcx
  __int64 v45; // rax
  void *v46; // rdx
  void *v47; // rcx
  void *v48; // rcx
  __int64 v49; // rcx
  int v50; // edx
  void *v51; // rax
  __int64 v52; // rcx
  int v53; // edx
  void *v54; // rax
  __int64 v55; // rcx
  int v56; // edx
  void *v57; // rax
  __int64 v58; // rcx
  int v59; // edx
  void *v60; // rax
  __int64 v61; // rax
  int v62; // edx
  void *v63; // rcx
  __int64 v64; // [rsp+30h] [rbp-50h]
  __int64 v65; // [rsp+38h] [rbp-48h]
  size_t v66; // [rsp+50h] [rbp-30h]
  __int128 v67; // [rsp+58h] [rbp-28h] BYREF
  size_t Size[2]; // [rsp+68h] [rbp-18h]
  void *v69; // [rsp+78h] [rbp-8h]
  _DWORD *Src; // [rsp+C8h] [rbp+48h]

  v67 = 0LL;
  v69 = 0LL;
  v5 = a4;
  *(_OWORD *)Size = 0LL;
  v6 = (int)a3;
  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(a1);
  v10 = 0LL;
  v11 = 0LL;
  v12 = DeviceExtension;
  v13 = DeviceExtension[90];
  v14 = 1LL;
  if ( a2 )
  {
    v15 = *(_DWORD **)(a2 + 8);
    v16 = *(unsigned int **)(a2 + 16);
    Src = v15;
    if ( !v15 || *v15 != 1 )
      goto LABEL_12;
    v17 = &unk_1C00701BA;
    if ( v16 && *v16 == 1 && (DeviceExtension[120] & 0x100000000LL) != 0 )
    {
      v9 = v16[4];
      v37 = 0;
      if ( (_DWORD)v9 )
      {
        v38 = v16 + 5;
        while ( *v38 != 2 || (v38[2] & 0x20) == 0 )
        {
          ++v37;
          v38 += 20;
          if ( v37 >= (unsigned int)v9 )
            goto LABEL_48;
        }
        v39 = (unsigned int)(20 * (v9 + 1));
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v39, 0x53706341u);
        v41 = PoolWithTag;
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, v16, v39);
          v48 = (void *)v12[80];
          if ( v48 )
            ExFreePoolWithTag(v48, 0);
          v12[80] = v41;
          v15 = Src;
        }
        else
        {
          v42 = v12[1];
          v43 = &unk_1C00701BA;
          v44 = &unk_1C00701BA;
          if ( (v42 & 0x200000000000LL) != 0 )
          {
            v43 = (void *)v12[71];
            v9 = 0x400000000000LL;
            if ( (v42 & 0x400000000000LL) != 0 )
              v44 = (void *)v12[72];
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v65 = (__int64)v43;
            LOBYTE(v43) = 2;
            WPP_RECORDER_SF_Lqss(
              WPP_GLOBAL_Control->DeviceExtension,
              (_DWORD)v43,
              1,
              21,
              (__int64)&WPP_067b6e12806a352c39fbc5798cfde2dc_Traceguids,
              v39,
              (char)v12,
              v65,
              (__int64)v44);
          }
          v15 = Src;
        }
      }
      else
      {
LABEL_48:
        v45 = DeviceExtension[1];
        v46 = &unk_1C00701BA;
        v47 = &unk_1C00701BA;
        if ( (v45 & 0x200000000000LL) != 0 )
        {
          v46 = (void *)v12[71];
          if ( (v45 & 0x400000000000LL) != 0 )
            v47 = (void *)v12[72];
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v64 = (__int64)v46;
          LOBYTE(v46) = 2;
          WPP_RECORDER_SF_qss(
            WPP_GLOBAL_Control->DeviceExtension,
            (_DWORD)v46,
            17,
            20,
            (__int64)&WPP_067b6e12806a352c39fbc5798cfde2dc_Traceguids,
            (char)v12,
            v64,
            (__int64)v47);
        }
        _InterlockedAnd64(v12 + 1, 0xFFFFFFFFFFFEFFFFuLL);
        _InterlockedAnd64(v12 + 120, 0xFFFFFFFEFFFFFFFFuLL);
        _InterlockedAnd64(v12 + 120, 0xFFFFFFFFFFEFFFFFuLL);
      }
    }
    v10 = (unsigned __int64 *)AMLIGetNamedChild(v13, 1397900127LL, v9, v14);
    v20 = AMLIGetNamedChild(v13, 1397904223LL, v18, v19);
    v11 = v20;
    if ( v10 && v20 )
    {
      v26 = AMLIEvalNameSpaceObject(v10, (__int64)&v67, 0, 0LL);
      if ( v26 < 0 )
      {
        v49 = v12[1];
        v50 = 0;
        v51 = &unk_1C00701BA;
        if ( (v49 & 0x200000000000LL) != 0 )
        {
          v17 = (void *)v12[71];
          v50 = 0;
          if ( (v49 & 0x400000000000LL) != 0 )
            v51 = (void *)v12[72];
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v50) = 2;
          WPP_RECORDER_SF_Lqss(
            WPP_GLOBAL_Control->DeviceExtension,
            v50,
            1,
            23,
            (__int64)&WPP_067b6e12806a352c39fbc5798cfde2dc_Traceguids,
            v26,
            (char)v12,
            (__int64)v17,
            (__int64)v51);
        }
        goto LABEL_89;
      }
      if ( WORD1(v67) != 3 || !LODWORD(Size[1]) || !v69 )
      {
        v61 = v12[1];
        v62 = 0;
        v63 = &unk_1C00701BA;
        if ( (v61 & 0x200000000000LL) != 0 )
        {
          v17 = (void *)v12[71];
          v62 = 0;
          if ( (v61 & 0x400000000000LL) != 0 )
            v63 = (void *)v12[72];
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v62) = 2;
          WPP_RECORDER_SF_Dqss(
            WPP_GLOBAL_Control->DeviceExtension,
            v62,
            1,
            24,
            (__int64)&WPP_067b6e12806a352c39fbc5798cfde2dc_Traceguids,
            SBYTE2(v67),
            (char)v12,
            (__int64)v17,
            (__int64)v63);
        }
        dword_1C0082908 = 0;
        pszDest = 0;
        FreeDataBuffs((__int64)&v67, 1u);
        v26 = -1073741823;
        goto LABEL_89;
      }
      v27 = 20 * (v15[4] + 1);
      v66 = v27;
      v28 = ExAllocatePoolWithTag(PagedPool, v27, 0x53706341u);
      v29 = v28;
      if ( v28 )
      {
        memmove(v28, Src, v27);
        v30 = LOBYTE(Size[1]) + 40;
        v31 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(LODWORD(Size[1]) + 40), 0x4F706341u);
        v32 = v31;
        if ( v31 )
        {
          *v31 = v67;
          v31[1] = *(_OWORD *)Size;
          *((_QWORD *)v31 + 4) = (char *)v31 + 40;
          memmove((char *)v31 + 40, v69, LODWORD(Size[1]));
          dword_1C0082908 = 0;
          pszDest = 0;
          FreeDataBuffs((__int64)&v67, 1u);
          v26 = PnpCmResourcesToBiosResources(v12, v29, v32[4], *((unsigned int *)v32 + 6));
          if ( v26 < 0 )
          {
            v58 = v12[1];
            v59 = 0;
            v60 = &unk_1C00701BA;
            if ( (v58 & 0x200000000000LL) != 0 )
            {
              v17 = (void *)v12[71];
              v59 = 0;
              if ( (v58 & 0x400000000000LL) != 0 )
                v60 = (void *)v12[72];
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v59) = 2;
              WPP_RECORDER_SF_Lqss(
                WPP_GLOBAL_Control->DeviceExtension,
                v59,
                1,
                27,
                (__int64)&WPP_067b6e12806a352c39fbc5798cfde2dc_Traceguids,
                v26,
                (char)v12,
                (__int64)v17,
                (__int64)v60);
            }
            ExFreePoolWithTag(v29, 0);
            ExFreePoolWithTag(v32, 0);
            goto LABEL_89;
          }
          memmove(v29, Src, v66);
          v33 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
          v34 = (void *)v12[81];
          v35 = v33;
          if ( v34 )
            ExFreePoolWithTag(v34, 0);
          v12[81] = v32;
          KeReleaseSpinLock(&AcpiDeviceTreeLock, v35);
          v36 = (void *)v12[79];
          if ( v36 )
            ExFreePoolWithTag(v36, 0);
          v12[79] = v29;
          goto LABEL_11;
        }
        v55 = v12[1];
        v56 = 0;
        v57 = &unk_1C00701BA;
        if ( (v55 & 0x200000000000LL) != 0 )
        {
          v17 = (void *)v12[71];
          v56 = 0;
          if ( (v55 & 0x400000000000LL) != 0 )
            v57 = (void *)v12[72];
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v56) = 2;
          WPP_RECORDER_SF_Lqss(
            WPP_GLOBAL_Control->DeviceExtension,
            v56,
            1,
            26,
            (__int64)&WPP_067b6e12806a352c39fbc5798cfde2dc_Traceguids,
            v30,
            (char)v12,
            (__int64)v17,
            (__int64)v57);
        }
        dword_1C0082908 = 0;
        pszDest = 0;
        FreeDataBuffs((__int64)&v67, 1u);
        ExFreePoolWithTag(v29, 0);
      }
      else
      {
        v52 = v12[1];
        v53 = 0;
        v54 = &unk_1C00701BA;
        if ( (v52 & 0x200000000000LL) != 0 )
        {
          v17 = (void *)v12[71];
          v53 = 0;
          if ( (v52 & 0x400000000000LL) != 0 )
            v54 = (void *)v12[72];
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v53) = 2;
          WPP_RECORDER_SF_Lqss(
            WPP_GLOBAL_Control->DeviceExtension,
            v53,
            1,
            25,
            (__int64)&WPP_067b6e12806a352c39fbc5798cfde2dc_Traceguids,
            v27,
            (char)v12,
            (__int64)v17,
            (__int64)v54);
        }
        dword_1C0082908 = 0;
        pszDest = 0;
        FreeDataBuffs((__int64)&v67, 1u);
      }
      v26 = -1073741670;
LABEL_89:
      a3(v12, a4, (unsigned int)v26);
      if ( v10 )
        AMLIDereferenceHandleEx((__int64)v10);
      if ( v11 )
        AMLIDereferenceHandleEx(v11);
      return (unsigned int)v26;
    }
    v22 = v12[1];
    v23 = &unk_1C00701BA;
    if ( (v22 & 0x200000000000LL) != 0 )
    {
      v17 = (void *)v12[71];
      v21 = 0;
      if ( (v22 & 0x400000000000LL) != 0 )
        v23 = (void *)v12[72];
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v21) = 2;
      WPP_RECORDER_SF_qss(
        WPP_GLOBAL_Control->DeviceExtension,
        v21,
        1,
        22,
        (__int64)&WPP_067b6e12806a352c39fbc5798cfde2dc_Traceguids,
        (char)v12,
        (__int64)v17,
        (__int64)v23);
    }
LABEL_11:
    v5 = a4;
LABEL_12:
    v6 = (int)a3;
  }
  ACPIThermalAcquireCoolingInterfaces(v12);
  *(_BYTE *)(*(_QWORD *)(a5 + 184) + 3LL) |= 1u;
  if ( (v12[120] & 0xC0000LL) == 0xC0000 && *((_DWORD *)v12 + 86) == 1 )
  {
    v26 = 0;
    goto LABEL_89;
  }
  v24 = ACPIDeviceInternalDeviceRequest((_DWORD)v12, 1, v6, v5, 4);
  if ( v24 == -1073741802 )
    v24 = 259;
  if ( v10 )
    AMLIDereferenceHandleEx((__int64)v10);
  if ( v11 )
    AMLIDereferenceHandleEx(v11);
  return v24;
}
