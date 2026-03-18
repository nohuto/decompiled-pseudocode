/*
 * XREFs of PciConfigSpaceHandlerWorker @ 0x1C000C920
 * Callers:
 *     PciConfigSpaceHandler @ 0x1C000C800 (PciConfigSpaceHandler.c)
 *     PciConfigInternal @ 0x1C001CAAC (PciConfigInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x1C0004A40 (WPP_RECORDER_SF_Dqss.c)
 *     AMLIGetParent @ 0x1C000A040 (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     GetPciAddressWorker @ 0x1C000CDE0 (GetPciAddressWorker.c)
 *     DereferenceObjectEx @ 0x1C00189F4 (DereferenceObjectEx.c)
 *     HeapFree @ 0x1C0018DD0 (HeapFree.c)
 *     GetOpRegionScope @ 0x1C001CE9C (GetOpRegionScope.c)
 *     RtlStringCchPrintfW @ 0x1C001DBA0 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0030080 (memset.c)
 *     ACPIWriteEventLogEntry @ 0x1C00543C8 (ACPIWriteEventLogEntry.c)
 *     WPP_RECORDER_SF_ss @ 0x1C005B568 (WPP_RECORDER_SF_ss.c)
 */

__int64 __fastcall PciConfigSpaceHandlerWorker(__int64 a1, __int64 a2, const char *a3, unsigned int *a4)
{
  int v4; // r13d
  ULONG BusDataByOffset; // ebp
  unsigned int *v6; // rbx
  __int64 v7; // rsi
  bool v8; // cl
  volatile signed __int32 *v9; // rax
  __int64 v10; // r14
  unsigned int v11; // eax
  __int64 v12; // rdi
  __int64 Pool2; // rax
  int PciAddressWorker; // eax
  int v16; // edi
  KIRQL CurrentIrql; // al
  KIRQL v18; // r12
  void (__fastcall *v19)(_QWORD); // rax
  volatile signed __int32 *v20; // rsi
  volatile signed __int32 *v21; // rsi
  ULONG v22; // r14d
  __int64 v23; // r10
  __int64 v24; // rax
  unsigned int v25; // ecx
  ULONG v26; // r15d
  ULONG Length; // r15d
  unsigned int v28; // eax
  __int64 v29; // rcx
  int OpRegionScope; // eax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  const char *v34; // rax
  const char *v35; // rdx
  KIRQL v36; // al
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  ULONG Offset; // [rsp+20h] [rbp-D8h]
  int v42; // [rsp+50h] [rbp-A8h]
  const char *v43; // [rsp+58h] [rbp-A0h]
  _QWORD v44[2]; // [rsp+60h] [rbp-98h] BYREF
  int v45; // [rsp+70h] [rbp-88h] BYREF
  char v46; // [rsp+74h] [rbp-84h]
  int v47; // [rsp+78h] [rbp-80h] BYREF
  char v48; // [rsp+7Ch] [rbp-7Ch]
  __int64 v49; // [rsp+80h] [rbp-78h] BYREF
  wchar_t v50; // [rsp+88h] [rbp-70h]
  wchar_t pszDest[16]; // [rsp+90h] [rbp-68h] BYREF

  v4 = 0;
  BusDataByOffset = 0;
  v49 = *(_QWORD *)L"ACPI";
  v6 = a4;
  v50 = aAcpi_1[4];
  _InterlockedIncrement((volatile signed __int32 *)a4 + 20);
  if ( (int)a2 < 0 )
  {
    v16 = 0;
    goto LABEL_19;
  }
  if ( !*((_QWORD *)a4 + 7) )
  {
    v28 = a4[19];
    if ( (v28 & 0x1000) != 0 )
      goto LABEL_62;
    v29 = *((_QWORD *)a4 + 1);
    a4[19] = v28 | 0x1000;
    OpRegionScope = GetOpRegionScope(v29, a2, a4, a4 + 14);
    if ( OpRegionScope == 259 )
      return 259LL;
    if ( OpRegionScope < 0 )
    {
      v16 = 0;
      goto LABEL_19;
    }
    v31 = *((_QWORD *)v6 + 1);
    if ( v31 )
    {
      *(_QWORD *)(*(_QWORD *)v31 + 104LL) = *((_QWORD *)v6 + 7);
      v32 = *((_QWORD *)v6 + 7);
      dword_1C0081AC8 = 0;
      byte_1C0081ACC = 0;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v32 + 8));
    }
  }
  a2 = *(_QWORD *)(**((_QWORD **)v6 + 7) + 104LL);
  if ( !a2 )
  {
    v16 = 0;
    goto LABEL_19;
  }
  v7 = *(_QWORD *)(a2 + 80);
  if ( v7 )
  {
LABEL_16:
    v16 = 0;
    CurrentIrql = KeGetCurrentIrql();
    v18 = CurrentIrql;
    if ( *v6 )
    {
      if ( *v6 == 1 )
      {
        v22 = v6[4];
        a3 = "+";
        LODWORD(a2) = v6[5];
        v43 = "+";
        LODWORD(v23) = 0;
        v42 = 0;
        LODWORD(a4) = v22;
        v24 = 0LL;
        v25 = v22;
        do
        {
          v26 = *(unsigned __int16 *)((char *)&PciConfigDisallowedRanges + v24);
          if ( v22 < v26 )
          {
            Length = v26 - v22;
            if ( (unsigned int)a2 + (_DWORD)a4 - v22 <= Length )
              Length = a2 + (_DWORD)a4 - v22;
            if ( v7 )
            {
              if ( v18 < 2u )
              {
                v36 = KfRaiseIrql(2u);
                LODWORD(a4) = v6[4];
                v18 = v36;
              }
              Offset = Length;
              BusDataByOffset += (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, _QWORD))(v7 + 48))(
                                   *(_QWORD *)(v7 + 8),
                                   0LL,
                                   *((_QWORD *)v6 + 3) + 4 * (v22 - (unsigned __int64)(unsigned int)a4),
                                   v22);
              if ( v18 < 2u )
                KeLowerIrql(v18);
            }
            else
            {
              BusDataByOffset += HalSetBusDataByOffset(
                                   PCIConfiguration,
                                   v6[22],
                                   v6[21],
                                   (PVOID)(*((_QWORD *)v6 + 3) + 4 * (v22 - (unsigned __int64)(unsigned int)a4)),
                                   v22,
                                   Length);
            }
            v25 = v6[4];
            a3 = v43;
            v4 += Length;
            LODWORD(v23) = v42;
          }
          v22 = v25;
          LODWORD(a2) = v6[5];
          LODWORD(a4) = v25;
          if ( v25 <= (unsigned int)*(unsigned __int16 *)a3 + 1 )
            v22 = *(unsigned __int16 *)a3 + 1;
          if ( v22 >= (unsigned int)a2 + v25 )
            break;
          v23 = (unsigned int)(v23 + 1);
          v42 = v23;
          v24 = 4 * v23;
          a3 = (char *)&PciConfigDisallowedRanges + 4 * v23 + 2;
          v43 = a3;
        }
        while ( *(_WORD *)a3 );
        if ( !v4 )
        {
          RtlStringCchPrintfW(pszDest, 0xDuLL, L"0x%x", v25);
          v44[0] = &v49;
          v44[1] = pszDest;
          ACPIWriteEventLogEntry(3221553162LL, v44, 2LL);
        }
      }
      else
      {
        v16 = -1073741822;
      }
    }
    else if ( v7 )
    {
      if ( CurrentIrql < 2u )
        v18 = KfRaiseIrql(2u);
      Offset = v6[5];
      BusDataByOffset = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v7 + 56))(
                          *(_QWORD *)(v7 + 8),
                          0LL,
                          *((_QWORD *)v6 + 3),
                          v6[4]);
      if ( v18 < 2u )
        KeLowerIrql(v18);
    }
    else
    {
      BusDataByOffset = HalGetBusDataByOffset(PCIConfiguration, v6[22], v6[21], *((PVOID *)v6 + 3), v6[4], v6[5]);
    }
    goto LABEL_19;
  }
  v8 = (_InterlockedCompareExchange((volatile signed __int32 *)(a2 + 184), 0, 0) & 1) == 0;
  if ( (v8 & ((_InterlockedCompareExchange((volatile signed __int32 *)(a2 + 88), 0, 0) & 2) == 0)) == 0 )
    goto LABEL_9;
  v9 = (volatile signed __int32 *)AMLIGetParent(*((_QWORD *)v6 + 7));
  if ( !v9 )
  {
LABEL_62:
    v16 = -1073741772;
    goto LABEL_19;
  }
  v10 = *(_QWORD *)(*(_QWORD *)v9 + 104LL);
  AMLIDereferenceHandleEx(v9);
  if ( !v10 )
  {
    v16 = -1073741772;
    goto LABEL_19;
  }
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v10 + 184), 0, 0) & 1) == 0 )
  {
    v33 = *(_QWORD *)(v10 + 8);
    v34 = (const char *)&unk_1C006FB8B;
    v35 = (const char *)&unk_1C006FB8B;
    if ( (v33 & 0x200000000000LL) != 0 )
    {
      v34 = *(const char **)(v10 + 608);
      if ( (v33 & 0x400000000000LL) != 0 )
        v35 = *(const char **)(v10 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x15u,
        0xAu,
        (__int64)&WPP_94f6cc7e4eb03ed98099c561227e81da_Traceguids,
        1,
        v10,
        v34,
        v35);
  }
LABEL_9:
  v11 = v6[19];
  if ( (v11 & 0x100) != 0 )
    goto LABEL_16;
  v12 = *((_QWORD *)v6 + 7);
  v6[19] = v11 | 0x100;
  Pool2 = ExAllocatePool2(64LL, 72LL, 1181770561LL);
  LODWORD(a4) = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)Pool2 = v12;
    dword_1C0081AC8 = 0;
    byte_1C0081ACC = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    *(_QWORD *)(Pool2 + 64) = v6;
    *(_QWORD *)(Pool2 + 56) = PciConfigSpaceHandlerWorker;
    *(_DWORD *)(Pool2 + 48) = -1;
    *(_QWORD *)(Pool2 + 8) = v6 + 22;
    *(_QWORD *)(Pool2 + 16) = v6 + 21;
    PciAddressWorker = GetPciAddressWorker(v12, 0LL, 0LL);
    if ( PciAddressWorker == 259 )
      return 259LL;
    if ( PciAddressWorker >= 0 )
      goto LABEL_16;
  }
  v16 = 0;
LABEL_19:
  if ( !*v6 && !BusDataByOffset )
    memset(*((void **)v6 + 3), 255, v6[5]);
  if ( v6[20] )
  {
    v19 = (void (__fastcall *)(_QWORD))*((_QWORD *)v6 + 5);
    if ( v6[18] )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v19)(
        *((_QWORD *)v6 + 7),
        (unsigned int)v16,
        0LL,
        *((_QWORD *)v6 + 6));
    else
      v19(*((_QWORD *)v6 + 6));
  }
  if ( v16 < 0 )
  {
    v47 = 0;
    v48 = 0;
    v45 = 0;
    v46 = 0;
    v37 = *((_QWORD *)v6 + 1);
    if ( v37 )
    {
      dword_1C00819A0 = *(_DWORD *)(*(_QWORD *)v37 + 40LL);
      byte_1C00819A4 = 0;
      v47 = dword_1C00819A0;
    }
    v38 = *((_QWORD *)v6 + 7);
    if ( v38 )
    {
      dword_1C00819A0 = *(_DWORD *)(*(_QWORD *)v38 + 40LL);
      byte_1C00819A4 = 0;
      v45 = dword_1C00819A0;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ss(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        (_DWORD)a3,
        (_DWORD)a4,
        Offset,
        (__int64)&v47,
        (__int64)&v45);
  }
  v20 = (volatile signed __int32 *)*((_QWORD *)v6 + 1);
  if ( v20 )
  {
    dword_1C0081AC8 = 0;
    byte_1C0081ACC = 0;
    if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
    {
      v39 = *(_QWORD *)v20;
      if ( v20 == (volatile signed __int32 *)(*(_QWORD *)v20 + 120LL) )
      {
        DereferenceObjectEx(v39);
      }
      else
      {
        DereferenceObjectEx(v39);
        HeapFree(v20);
      }
    }
    *((_QWORD *)v6 + 1) = 0LL;
  }
  v21 = (volatile signed __int32 *)*((_QWORD *)v6 + 7);
  if ( v21 )
  {
    dword_1C0081AC8 = 0;
    byte_1C0081ACC = 0;
    if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
    {
      v40 = *(_QWORD *)v21;
      if ( v21 == (volatile signed __int32 *)(*(_QWORD *)v21 + 120LL) )
      {
        DereferenceObjectEx(v40);
      }
      else
      {
        DereferenceObjectEx(v40);
        HeapFree(v21);
      }
    }
    *((_QWORD *)v6 + 7) = 0LL;
  }
  ExFreePoolWithTag(v6, 0x46706341u);
  return (unsigned int)v16;
}
