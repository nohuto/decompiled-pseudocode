/*
 * XREFs of HalGetAdapterV2 @ 0x1407649D0
 * Callers:
 *     HalpGetAdapter @ 0x14076490C (HalpGetAdapter.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x140234490 (HalpDmaGetAdapterVersion.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     IoAllocateMdl @ 0x140299F00 (IoAllocateMdl.c)
 *     ObReferenceObjectByPointer @ 0x1402A5010 (ObReferenceObjectByPointer.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     HalpAddAdapterToList @ 0x14037940C (HalpAddAdapterToList.c)
 *     HalpDmaFindAdapterByDeviceObject @ 0x1403794BC (HalpDmaFindAdapterByDeviceObject.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpDmaIsAutomaticDomain @ 0x1404C4E90 (HalpDmaIsAutomaticDomain.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x140764C4C (HalpDmaAllocateChildAdapterV2.c)
 *     HalpGetCacheCoherency @ 0x140764EBC (HalpGetCacheCoherency.c)
 */

__int64 __fastcall HalGetAdapterV2(__int64 a1, __int64 a2, _DWORD *a3)
{
  bool v4; // cc
  char v5; // si
  char v6; // cl
  unsigned int v7; // r15d
  int v8; // ebx
  char v9; // r12
  char v10; // r14
  char v11; // al
  unsigned int v12; // esi
  unsigned int v13; // ebp
  __int64 v14; // r13
  __int64 v15; // r12
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  __int64 *AdapterByDeviceObject; // rax
  __int64 *v20; // rbp
  __int64 ChildAdapterV2; // rax
  __int64 v22; // rbx
  char v23; // al
  unsigned int v25; // edx
  unsigned int v26; // r8d
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  int AdapterVersion; // ebx
  bool IsAutomaticDomain; // r13
  __int64 v31; // rax
  char v32; // [rsp+40h] [rbp-58h]
  PMDL Mdl; // [rsp+48h] [rbp-50h]
  char v34; // [rsp+A0h] [rbp+8h]
  __int64 v35; // [rsp+A8h] [rbp+10h]
  unsigned int v37; // [rsp+B8h] [rbp+20h] BYREF

  v35 = a2;
  v4 = *(_DWORD *)a1 <= 2u;
  LOBYTE(v37) = 0;
  Mdl = 0LL;
  if ( !v4 )
    return 0LL;
  if ( *(_BYTE *)(a1 + 4) && (*(_DWORD *)(a1 + 20) != 1 || *(_DWORD *)(a1 + 16) > 7u) )
  {
    v5 = 0;
    v34 = 0;
  }
  else
  {
    v5 = 1;
    v34 = 1;
    if ( !(*(unsigned __int8 (**)(void))(DmaDispatch + 8))() )
      return 0LL;
    a2 = v35;
  }
  v6 = *(_BYTE *)(a1 + 4);
  v7 = *(_DWORD *)(a1 + 32) & 0x7FFFFFFF;
  if ( v6 && *(_BYTE *)(a1 + 5) )
    *(_BYTE *)(a1 + 8) = 1;
  if ( *(_BYTE *)(a1 + 11) )
  {
    *(_BYTE *)(a1 + 8) = 1;
  }
  else if ( !*(_BYTE *)(a1 + 8) )
  {
    v8 = 0;
    v9 = 0;
    if ( !v6 )
      goto LABEL_12;
    goto LABEL_11;
  }
  v8 = 1;
LABEL_11:
  v9 = 1;
LABEL_12:
  v32 = v9;
  if ( v5 || !a2 )
  {
    v10 = 1;
    goto LABEL_15;
  }
  HalpGetCacheCoherency(0LL, a2, &v37);
  v10 = v37;
  if ( !(_BYTE)v37 )
    return 0LL;
LABEL_15:
  v11 = *(_BYTE *)(a1 + 5);
  if ( v11 && v10 && ((unsigned __int64)HalpMaximumPhysicalMemoryAddress < 0x100000000LL || *(_BYTE *)(a1 + 11)) )
  {
    v12 = 0;
    v37 = 0;
    v13 = 0;
  }
  else
  {
    if ( v8 )
    {
      v25 = 64;
      if ( v11 )
        v25 = v10 != 0 ? 512 : 64;
    }
    else
    {
      v25 = 16;
    }
    v12 = (v7 >> 12) + ((v7 & 0xFFF) != 0) + 1;
    v37 = v12;
    v26 = v12;
    if ( v12 > v25 )
    {
      v12 = v25;
      v37 = v25;
      v26 = v25;
    }
    v27 = dword_140C4BE98;
    v13 = v26;
    if ( !v8 )
      v27 = dword_140C4BDB8;
    if ( !v9 )
    {
      v28 = v27 >> 13;
      if ( v26 > v28 )
      {
        v12 = v28;
        v37 = v28;
        v13 = v28;
      }
    }
  }
  if ( !v10 )
  {
    Mdl = IoAllocateMdl(0LL, v13 << 12, 0, 0, 0LL);
    if ( !Mdl )
      return 0LL;
  }
  v14 = *(unsigned int *)(a1 + 16);
  v15 = v14;
  if ( v34 )
  {
    v22 = *(_QWORD *)(HalpDmaAdapters + 8 * v14);
    if ( v22 )
    {
      if ( v13 > *(_DWORD *)(v22 + 224) )
        *(_DWORD *)(v22 + 224) = v12;
      ObReferenceObjectByPointer((PVOID)v22, 0x20000u, HalpDmaAdapterObjectType, 0);
      goto LABEL_31;
    }
  }
  KeWaitForSingleObject(&HalpNewAdapter, WrExecutive, 0, 0, 0LL);
  if ( v34 )
  {
    v22 = *(_QWORD *)(HalpDmaAdapters + 8 * v14);
    if ( v22 )
    {
      if ( v13 > *(_DWORD *)(v22 + 224) )
        *(_DWORD *)(v22 + 224) = v12;
      ObReferenceObjectByPointer((PVOID)v22, 0x20000u, HalpDmaAdapterObjectType, 0);
      goto LABEL_30;
    }
  }
  if ( v35 )
  {
    AdapterByDeviceObject = HalpDmaFindAdapterByDeviceObject(v35);
    v20 = AdapterByDeviceObject;
    if ( AdapterByDeviceObject )
    {
      AdapterVersion = HalpDmaGetAdapterVersion((__int64)AdapterByDeviceObject);
      IsAutomaticDomain = HalpDmaIsAutomaticDomain((__int64 *)v20[63]);
      HalPutDmaAdapter((PADAPTER_OBJECT)v20);
      if ( AdapterVersion != 2 && !IsAutomaticDomain )
        goto LABEL_72;
      LODWORD(v14) = v15;
    }
  }
  LOBYTE(v18) = *(_BYTE *)(a1 + 5);
  LOBYTE(v17) = *(_BYTE *)(a1 + 11);
  LOBYTE(v16) = *(_BYTE *)(a1 + 8);
  ChildAdapterV2 = HalpDmaAllocateChildAdapterV2(v12, v16, v17, v18, *(_BYTE *)(a1 + 4), v32, v10, (__int64)&v37);
  v22 = ChildAdapterV2;
  if ( !ChildAdapterV2 )
  {
LABEL_72:
    KeSetEvent(&HalpNewAdapter, 0, 0);
    return 0LL;
  }
  *(_BYTE *)(ChildAdapterV2 + 516) = 1;
  if ( v34 )
  {
    *(_QWORD *)(HalpDmaAdapters + 8 * v15) = ChildAdapterV2;
    v31 = (*(__int64 (__fastcall **)(__int64))(DmaDispatch + 24))(a1);
    if ( v31 )
    {
      *(_QWORD *)(v22 + 424) = v31;
      ObReferenceObjectByPointer((PVOID)v22, 0x20000u, HalpDmaAdapterObjectType, 0);
      goto LABEL_27;
    }
    goto LABEL_72;
  }
LABEL_27:
  if ( v37 )
  {
    *(_DWORD *)(v22 + 224) = v37;
    v23 = 1;
  }
  else
  {
    *(_DWORD *)(v22 + 224) = (v7 >> 12) + ((v7 & 0xFFF) != 0) + 1;
    v23 = 0;
  }
  *(_BYTE *)(v22 + 432) = v23;
  *(_QWORD *)(v22 + 304) = 0LL;
LABEL_30:
  KeSetEvent(&HalpNewAdapter, 0, 0);
LABEL_31:
  *(_BYTE *)(v22 + 436) = 0;
  if ( *(_DWORD *)a1 )
    *(_BYTE *)(v22 + 436) = *(_BYTE *)(a1 + 9);
  *a3 = *(_DWORD *)(v22 + 224);
  *(_QWORD *)(v22 + 296) = Mdl;
  if ( v34 )
  {
    *(_DWORD *)(v22 + 372) = v14;
  }
  else
  {
    *(_QWORD *)(v22 + 520) = v35;
    HalpAddAdapterToList(v22);
  }
  return v22;
}
