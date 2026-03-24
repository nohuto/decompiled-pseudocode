/*
 * XREFs of PciConfigSpaceHandlerWorker @ 0x1C00184A0
 * Callers:
 *     PciConfigInternal @ 0x1C001815C (PciConfigInternal.c)
 *     PciConfigSpaceHandler @ 0x1C0018390 (PciConfigSpaceHandler.c)
 * Callees:
 *     HeapFree @ 0x1C0001F3C (HeapFree.c)
 *     DereferenceObjectEx @ 0x1C0003DA4 (DereferenceObjectEx.c)
 *     AMLIDereferenceHandleEx @ 0x1C000BC6C (AMLIDereferenceHandleEx.c)
 *     GetOpRegionScope @ 0x1C0017C54 (GetOpRegionScope.c)
 *     GetPciAddressWorker @ 0x1C0018A70 (GetPciAddressWorker.c)
 *     AMLIGetParent @ 0x1C001B348 (AMLIGetParent.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C001DBF4 (WPP_RECORDER_SF_Dqss.c)
 *     RtlStringCchPrintfW @ 0x1C00287E0 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C0031C80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0032480 (memset.c)
 *     ACPIWriteEventLogEntry @ 0x1C0054C98 (ACPIWriteEventLogEntry.c)
 *     WPP_RECORDER_SF_ss @ 0x1C005A65C (WPP_RECORDER_SF_ss.c)
 */

__int64 __fastcall PciConfigSpaceHandlerWorker(__int64 a1, void *a2, unsigned int a3, __int64 a4)
{
  ULONG BusDataByOffset; // ebp
  unsigned int *v5; // rbx
  __int64 v6; // rsi
  bool v7; // cl
  unsigned int v8; // eax
  __int64 v9; // rdi
  _QWORD *PoolWithTag; // rax
  int PciAddressWorker; // eax
  int v13; // r14d
  unsigned __int8 CurrentIrql; // di
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rcx
  void *v20; // rax
  void (__fastcall *v21)(_QWORD); // rax
  ULONG v22; // r12d
  const char *v23; // rcx
  __int64 v24; // r10
  ULONG v25; // r11d
  __int64 v26; // rax
  ULONG v27; // r13d
  ULONG Length; // r13d
  int v29; // eax
  __int64 v30; // rcx
  int OpRegionScope; // eax
  __int64 v32; // rcx
  __int64 v33; // rcx
  KIRQL v34; // al
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rcx
  ULONG Offset; // [rsp+20h] [rbp-D8h]
  __int64 v40; // [rsp+40h] [rbp-B8h]
  int v41; // [rsp+54h] [rbp-A4h]
  int v42; // [rsp+58h] [rbp-A0h]
  const char *v43; // [rsp+60h] [rbp-98h]
  _QWORD v44[2]; // [rsp+68h] [rbp-90h] BYREF
  int v45; // [rsp+78h] [rbp-80h] BYREF
  char v46; // [rsp+7Ch] [rbp-7Ch]
  int v47; // [rsp+80h] [rbp-78h] BYREF
  char v48; // [rsp+84h] [rbp-74h]
  __int64 v49; // [rsp+88h] [rbp-70h] BYREF
  wchar_t v50; // [rsp+90h] [rbp-68h]
  wchar_t pszDest[16]; // [rsp+98h] [rbp-60h] BYREF

  BusDataByOffset = 0;
  v49 = *(_QWORD *)L"ACPI";
  v5 = (unsigned int *)a4;
  v50 = aAcpi_1[4];
  _InterlockedIncrement((volatile signed __int32 *)(a4 + 80));
  if ( (int)a2 < 0 )
  {
    v13 = 0;
    goto LABEL_19;
  }
  if ( !*(_QWORD *)(a4 + 56) )
  {
    v29 = *(_DWORD *)(a4 + 76);
    if ( (v29 & 0x1000) != 0 )
      goto LABEL_69;
    v30 = *(_QWORD *)(a4 + 8);
    *(_DWORD *)(a4 + 76) = v29 | 0x1000;
    OpRegionScope = GetOpRegionScope(v30, (__int64)a2, a4, a4 + 56);
    if ( OpRegionScope == 259 )
      return 259LL;
    if ( OpRegionScope < 0 )
    {
      v13 = 0;
      goto LABEL_19;
    }
    v32 = *((_QWORD *)v5 + 1);
    if ( v32 )
    {
      *(_QWORD *)(*(_QWORD *)v32 + 104LL) = *((_QWORD *)v5 + 7);
      v33 = *((_QWORD *)v5 + 7);
      dword_1C0082908 = 0;
      ::pszDest = 0;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v33 + 8));
    }
  }
  a2 = *(void **)(**((_QWORD **)v5 + 7) + 104LL);
  if ( !a2 )
  {
    v13 = 0;
    goto LABEL_19;
  }
  v6 = *((_QWORD *)a2 + 10);
  if ( v6 )
  {
LABEL_13:
    v13 = 0;
    CurrentIrql = KeGetCurrentIrql();
    if ( *v5 )
    {
      if ( *v5 == 1 )
      {
        v22 = v5[4];
        v23 = "+";
        LODWORD(a2) = v5[5];
        v43 = "+";
        LODWORD(v24) = 0;
        v42 = 0;
        v25 = 0;
        v41 = 0;
        LODWORD(a4) = v22;
        v26 = 0LL;
        a3 = v22;
        do
        {
          v27 = *(unsigned __int16 *)((char *)&PciConfigDisallowedRanges + v26);
          if ( v22 < v27 )
          {
            Length = v27 - v22;
            if ( (unsigned int)a2 + (_DWORD)a4 - v22 <= Length )
              Length = (_DWORD)a2 + a4 - v22;
            if ( v6 )
            {
              if ( CurrentIrql < 2u )
              {
                v34 = KfRaiseIrql(2u);
                LODWORD(a4) = v5[4];
                CurrentIrql = v34;
              }
              Offset = Length;
              BusDataByOffset += (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, _QWORD))(v6 + 48))(
                                   *(_QWORD *)(v6 + 8),
                                   0LL,
                                   *((_QWORD *)v5 + 3) + 4 * (v22 - (unsigned __int64)(unsigned int)a4),
                                   v22);
              if ( CurrentIrql < 2u )
                KeLowerIrql(CurrentIrql);
            }
            else
            {
              BusDataByOffset += HalSetBusDataByOffset(
                                   PCIConfiguration,
                                   v5[22],
                                   v5[21],
                                   (PVOID)(*((_QWORD *)v5 + 3) + 4 * (v22 - (unsigned __int64)(unsigned int)a4)),
                                   v22,
                                   Length);
            }
            a3 = v5[4];
            v25 = Length + v41;
            v23 = v43;
            LODWORD(v24) = v42;
            v41 += Length;
          }
          v22 = a3;
          LODWORD(a2) = v5[5];
          LODWORD(a4) = a3;
          if ( a3 <= (unsigned int)*(unsigned __int16 *)v23 + 1 )
            v22 = *(unsigned __int16 *)v23 + 1;
          if ( v22 >= (unsigned int)a2 + a3 )
            break;
          v24 = (unsigned int)(v24 + 1);
          v42 = v24;
          v26 = 4 * v24;
          v23 = (char *)&PciConfigDisallowedRanges + 4 * v24 + 2;
          v43 = v23;
        }
        while ( *(_WORD *)v23 );
        v13 = 0;
        if ( !v25 )
        {
          RtlStringCchPrintfW(pszDest, 0xDuLL, L"0x%x", a3);
          v44[0] = &v49;
          v44[1] = pszDest;
          ACPIWriteEventLogEntry(3221553162LL, v44, 2LL);
        }
      }
      else
      {
        v13 = -1073741822;
      }
    }
    else if ( v6 )
    {
      if ( CurrentIrql < 2u )
        CurrentIrql = KfRaiseIrql(2u);
      Offset = v5[5];
      BusDataByOffset = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v6 + 56))(
                          *(_QWORD *)(v6 + 8),
                          0LL,
                          *((_QWORD *)v5 + 3),
                          v5[4]);
      if ( CurrentIrql < 2u )
        KeLowerIrql(CurrentIrql);
    }
    else
    {
      BusDataByOffset = HalGetBusDataByOffset(PCIConfiguration, v5[22], v5[21], *((PVOID *)v5 + 3), v5[4], v5[5]);
    }
    goto LABEL_19;
  }
  v7 = (_InterlockedCompareExchange((volatile signed __int32 *)a2 + 46, 0, 0) & 1) == 0;
  if ( (v7 & ((_InterlockedCompareExchange((volatile signed __int32 *)a2 + 22, 0, 0) & 2) == 0)) == 0 )
    goto LABEL_6;
  v17 = AMLIGetParent(*((_QWORD *)v5 + 7));
  if ( !v17 )
  {
LABEL_69:
    v13 = -1073741772;
    goto LABEL_19;
  }
  v18 = *(_QWORD *)(*(_QWORD *)v17 + 104LL);
  AMLIDereferenceHandleEx(v17);
  if ( !v18 )
  {
    v13 = -1073741772;
    goto LABEL_19;
  }
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v18 + 184), 0, 0) & 1) == 0 )
  {
    v19 = *(_QWORD *)(v18 + 8);
    v20 = &unk_1C00701BA;
    a3 = 0;
    a2 = &unk_1C00701BA;
    if ( (v19 & 0x200000000000LL) != 0 )
    {
      v20 = *(void **)(v18 + 568);
      a3 = 0;
      if ( (v19 & 0x400000000000LL) != 0 )
        a2 = *(void **)(v18 + 576);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v40 = (__int64)a2;
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_Dqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)a2,
        21,
        10,
        (__int64)&WPP_ae57f2233dfb3a91da68ac54a8788e80_Traceguids,
        1,
        v18,
        (__int64)v20,
        v40);
    }
  }
LABEL_6:
  v8 = v5[19];
  if ( (v8 & 0x100) != 0 )
    goto LABEL_13;
  v9 = *((_QWORD *)v5 + 7);
  v5[19] = v8 | 0x100;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x46706341u);
  LODWORD(a4) = (_DWORD)PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    PoolWithTag[3] = 0LL;
    PoolWithTag[4] = 0LL;
    PoolWithTag[5] = 0LL;
    PoolWithTag[6] = 0LL;
    PoolWithTag[7] = 0LL;
    PoolWithTag[8] = 0LL;
    *PoolWithTag = v9;
    dword_1C0082908 = 0;
    ::pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    PoolWithTag[8] = v5;
    PoolWithTag[7] = PciConfigSpaceHandlerWorker;
    *((_DWORD *)PoolWithTag + 12) = -1;
    PoolWithTag[1] = v5 + 22;
    PoolWithTag[2] = v5 + 21;
    PciAddressWorker = GetPciAddressWorker(v9, 0LL, 0LL);
    if ( PciAddressWorker == 259 )
      return 259LL;
    if ( PciAddressWorker >= 0 )
      goto LABEL_13;
  }
  v13 = 0;
LABEL_19:
  if ( !*v5 && !BusDataByOffset )
    memset(*((void **)v5 + 3), 255, v5[5]);
  if ( v5[20] )
  {
    v21 = (void (__fastcall *)(_QWORD))*((_QWORD *)v5 + 5);
    if ( v5[18] )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v21)(
        *((_QWORD *)v5 + 7),
        (unsigned int)v13,
        0LL,
        *((_QWORD *)v5 + 6));
    else
      v21(*((_QWORD *)v5 + 6));
  }
  if ( v13 < 0 )
  {
    v47 = 0;
    v48 = 0;
    v45 = 0;
    v46 = 0;
    v35 = *((_QWORD *)v5 + 1);
    if ( v35 )
    {
      dword_1C0082780 = *(_DWORD *)(*(_QWORD *)v35 + 40LL);
      byte_1C0082784 = 0;
      v47 = dword_1C0082780;
    }
    v36 = *((_QWORD *)v5 + 7);
    if ( v36 )
    {
      dword_1C0082780 = *(_DWORD *)(*(_QWORD *)v36 + 40LL);
      byte_1C0082784 = 0;
      v45 = dword_1C0082780;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)a2, a3, a4, Offset, (__int64)&v47, (__int64)&v45);
  }
  v15 = *((_QWORD *)v5 + 1);
  if ( v15 )
  {
    dword_1C0082908 = 0;
    ::pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 8), 0xFFFFFFFF) == 1 )
    {
      v37 = *(_QWORD *)v15;
      if ( v15 == *(_QWORD *)v15 + 120LL )
      {
        DereferenceObjectEx(v37);
      }
      else
      {
        DereferenceObjectEx(v37);
        HeapFree((_QWORD *)v15);
      }
    }
    *((_QWORD *)v5 + 1) = 0LL;
  }
  v16 = *((_QWORD *)v5 + 7);
  if ( v16 )
  {
    dword_1C0082908 = 0;
    ::pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 8), 0xFFFFFFFF) == 1 )
    {
      v38 = *(_QWORD *)v16;
      if ( v16 == *(_QWORD *)v16 + 120LL )
      {
        DereferenceObjectEx(v38);
      }
      else
      {
        DereferenceObjectEx(v38);
        HeapFree((_QWORD *)v16);
      }
    }
    *((_QWORD *)v5 + 7) = 0LL;
  }
  ExFreePoolWithTag(v5, 0x46706341u);
  return (unsigned int)v13;
}
