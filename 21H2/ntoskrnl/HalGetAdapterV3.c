/*
 * XREFs of HalGetAdapterV3 @ 0x140845F30
 * Callers:
 *     HalpGetAdapter @ 0x140845CD8 (HalpGetAdapter.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x14023A8D0 (HalpDmaGetAdapterVersion.c)
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ObReferenceObjectByPointer @ 0x1402E0270 (ObReferenceObjectByPointer.c)
 *     HalpDmaFindAdapterByDeviceObject @ 0x1403CD208 (HalpDmaFindAdapterByDeviceObject.c)
 *     HalpAddAdapterToList @ 0x1403CD3EC (HalpAddAdapterToList.c)
 *     HalpDmaIsAutomaticDomain @ 0x140515358 (HalpDmaIsAutomaticDomain.c)
 *     HalpAddAdapterToSystemList @ 0x140518DDC (HalpAddAdapterToSystemList.c)
 *     HalpDmaControllerValidateRequestLineBinding @ 0x140519A0C (HalpDmaControllerValidateRequestLineBinding.c)
 *     HalpFindAdapterByRequestLine @ 0x140519D28 (HalpFindAdapterByRequestLine.c)
 *     HalpFindDmaControllerByRequestLine @ 0x140519E64 (HalpFindDmaControllerByRequestLine.c)
 *     HalpGetCacheCoherency @ 0x140846200 (HalpGetCacheCoherency.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x14084685C (HalpDmaAllocateChildAdapterV3.c)
 */

_QWORD *__fastcall HalGetAdapterV3(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  bool v5; // cf
  bool v6; // zf
  unsigned int v7; // r14d
  unsigned int v8; // r12d
  __int64 v9; // rbx
  _QWORD *AdapterByRequestLine; // rdi
  __int64 v11; // r13
  char v12; // al
  unsigned int v13; // r15d
  BOOL v14; // ebp
  unsigned __int64 v15; // rax
  char v16; // al
  unsigned int v17; // ebp
  unsigned int v18; // r14d
  __int64 *AdapterByDeviceObject; // rax
  int v20; // r9d
  char v21; // al
  int v23; // ebp
  __int64 DmaControllerByRequestLine; // rax
  unsigned int v25; // ecx
  unsigned int v26; // edx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  _QWORD *v29; // rax
  char v30; // [rsp+60h] [rbp-68h] BYREF
  char v31; // [rsp+61h] [rbp-67h]
  char v32; // [rsp+62h] [rbp-66h]
  char v33; // [rsp+63h] [rbp-65h]
  unsigned int v34; // [rsp+64h] [rbp-64h] BYREF
  int v35; // [rsp+68h] [rbp-60h]
  BOOL v36; // [rsp+6Ch] [rbp-5Ch]
  unsigned int v37; // [rsp+70h] [rbp-58h]
  PMDL Mdl; // [rsp+78h] [rbp-50h]
  char v39; // [rsp+D0h] [rbp+8h]
  __int64 v40; // [rsp+D8h] [rbp+10h]

  v40 = a2;
  v5 = *(_DWORD *)a1 < 3u;
  v6 = *(_DWORD *)a1 == 3;
  v30 = 0;
  Mdl = 0LL;
  v7 = 64;
  v32 = 0;
  if ( v6 )
  {
    v8 = *(_DWORD *)(a1 + 40);
  }
  else
  {
    if ( !v5 || !a3 || !*(_BYTE *)(a1 + 4) )
      return 0LL;
    if ( *(_BYTE *)(a1 + 11) )
    {
      v8 = 64;
    }
    else if ( *(_BYTE *)(a1 + 8) || (v8 = 24, *(_BYTE *)(a1 + 5)) )
    {
      v8 = 32;
    }
  }
  if ( !a2 )
    return 0LL;
  v9 = 0LL;
  v35 = 0;
  AdapterByRequestLine = 0LL;
  if ( *(_BYTE *)(a1 + 4) )
  {
    v33 = 0;
    v11 = 0LL;
  }
  else
  {
    v23 = *(_DWORD *)(a1 + 48);
    v9 = *(_QWORD *)(a1 + 56);
    v33 = 1;
    v35 = v23;
    DmaControllerByRequestLine = HalpFindDmaControllerByRequestLine(v23);
    v11 = DmaControllerByRequestLine;
    if ( !DmaControllerByRequestLine )
      return 0LL;
    AdapterByRequestLine = HalpFindAdapterByRequestLine(DmaControllerByRequestLine, v23);
    if ( !AdapterByRequestLine && !HalpDmaControllerValidateRequestLineBinding(v11, a1) )
      return 0LL;
    a2 = v40;
  }
  v12 = *(_BYTE *)(a1 + 4);
  v13 = ((*(_DWORD *)(a1 + 32) & 0x7FFFFFFF) + 4095) & 0xFFFFF000;
  if ( v12 )
  {
    v39 = *(_BYTE *)(a1 + 5);
    v37 = 0;
  }
  else
  {
    v25 = *(_DWORD *)(v11 + 48);
    v8 = *(_DWORD *)(v11 + 76);
    v39 = 1;
    if ( v25 > 8 )
      v25 = 8;
    v37 = v25;
  }
  if ( v8 >= 0x20 || (v36 = 0, v14 = 0, v12) )
  {
    v31 = 1;
    v14 = v8 >= 0x20;
    v36 = v14;
  }
  else
  {
    v31 = 0;
  }
  HalpGetCacheCoherency(v11, a2, &v30);
  if ( v8 < 0x40 )
    v15 = (1LL << v8) - 1;
  else
    v15 = -1LL;
  if ( v15 < HalpMaximumPhysicalMemoryAddress )
  {
    v16 = 0;
  }
  else
  {
    v16 = 1;
    if ( v30 && v39 && !a3 )
    {
      v17 = 0;
      v34 = 0;
      v18 = 0;
      goto LABEL_17;
    }
  }
  if ( v14 )
  {
    if ( v39 && (v30 || !v16) )
      v7 = 512;
  }
  else
  {
    v7 = 16;
  }
  v17 = (v13 >> 12) + 1;
  v34 = v17;
  v26 = v17;
  if ( v17 > v7 )
  {
    v17 = v7;
    v34 = v7;
    v26 = v7;
  }
  v18 = v26;
  v27 = dword_140C4E1D8;
  if ( !v36 )
    v27 = dword_140C4E0F8;
  if ( !v31 )
  {
    v28 = v27 >> 13;
    if ( v26 > v28 )
    {
      v17 = v28;
      v34 = v28;
      v18 = v28;
    }
  }
LABEL_17:
  if ( !v30 )
  {
    Mdl = IoAllocateMdl(0LL, v18 << 12, 0, 0, 0LL);
    if ( !Mdl )
      return 0LL;
  }
  if ( AdapterByRequestLine )
  {
    if ( v18 > *((_DWORD *)AdapterByRequestLine + 56) )
      *((_DWORD *)AdapterByRequestLine + 56) = v17;
    AdapterByRequestLine[56] = *(_QWORD *)(a1 + 56);
    ObReferenceObjectByPointer(AdapterByRequestLine, 0x20000u, HalpDmaAdapterObjectType, 0);
    goto LABEL_28;
  }
  KeWaitForSingleObject(&HalpNewAdapter, WrExecutive, 0, 0, 0LL);
  if ( v33 )
  {
    v29 = HalpFindAdapterByRequestLine(v11, v35);
    AdapterByRequestLine = v29;
    if ( v29 )
    {
      if ( v18 > *((_DWORD *)v29 + 56) )
        *((_DWORD *)v29 + 56) = v17;
      v29[56] = *(_QWORD *)(a1 + 56);
      ObReferenceObjectByPointer(v29, 0x20000u, HalpDmaAdapterObjectType, 0);
      goto LABEL_27;
    }
  }
  AdapterByDeviceObject = HalpDmaFindAdapterByDeviceObject(v40);
  AdapterByRequestLine = AdapterByDeviceObject;
  if ( !AdapterByDeviceObject )
    goto LABEL_21;
  if ( (unsigned int)HalpDmaGetAdapterVersion((__int64)AdapterByDeviceObject) != 3 )
  {
LABEL_83:
    ObfDereferenceObject(AdapterByRequestLine);
    v32 = 1;
LABEL_21:
    LOBYTE(v20) = v39;
    AdapterByRequestLine = (_QWORD *)HalpDmaAllocateChildAdapterV3(
                                       v17,
                                       v13,
                                       v8,
                                       v20,
                                       *(_BYTE *)(a1 + 4),
                                       v31,
                                       v30,
                                       v37,
                                       v9,
                                       a3,
                                       v40,
                                       (__int64)&v34);
    if ( AdapterByRequestLine )
    {
      v6 = v33 == 0;
      *((_BYTE *)AdapterByRequestLine + 516) = v32;
      if ( v6 )
      {
        AdapterByRequestLine[65] = v40;
        HalpAddAdapterToList((__int64)AdapterByRequestLine);
      }
      else
      {
        HalpAddAdapterToSystemList(v11, (__int64)AdapterByRequestLine);
        *((_DWORD *)AdapterByRequestLine + 94) = v35;
        *((_DWORD *)AdapterByRequestLine + 93) = *(_DWORD *)(a1 + 16);
        AdapterByRequestLine[45] = v11;
        *((_DWORD *)AdapterByRequestLine + 111) = *(_DWORD *)(a1 + 24);
        ObReferenceObjectByPointer(AdapterByRequestLine, 0x20000u, HalpDmaAdapterObjectType, 0);
      }
      v21 = v34;
      if ( v34 )
      {
        *((_DWORD *)AdapterByRequestLine + 56) = v34;
        v21 = 1;
      }
      else
      {
        *((_DWORD *)AdapterByRequestLine + 56) = (v13 >> 12) + 1;
      }
      *((_BYTE *)AdapterByRequestLine + 432) = v21;
      AdapterByRequestLine[38] = 0LL;
      goto LABEL_27;
    }
    goto LABEL_85;
  }
  if ( !*(_BYTE *)(a1 + 4)
    || *(_BYTE *)(a1 + 5) != *((_BYTE *)AdapterByRequestLine + 434)
    || *(_BYTE *)(a1 + 9) != *((_BYTE *)AdapterByRequestLine + 436)
    || v8 != *((_DWORD *)AdapterByRequestLine + 110) )
  {
    if ( !HalpDmaIsAutomaticDomain((__int64 *)AdapterByRequestLine[63])
      || *((_DWORD *)AdapterByRequestLine + 128) == 3
      || a3 == 3 )
    {
      ObfDereferenceObject(AdapterByRequestLine);
LABEL_85:
      KeSetEvent(&HalpNewAdapter, 0, 0);
      return 0LL;
    }
    *((_BYTE *)AdapterByRequestLine + 516) = 1;
    goto LABEL_83;
  }
LABEL_27:
  KeSetEvent(&HalpNewAdapter, 0, 0);
LABEL_28:
  *((_BYTE *)AdapterByRequestLine + 435) = *(_BYTE *)(a1 + 7);
  *((_BYTE *)AdapterByRequestLine + 436) = 0;
  if ( *(_DWORD *)a1 )
    *((_BYTE *)AdapterByRequestLine + 436) = *(_BYTE *)(a1 + 9);
  *a4 = *((_DWORD *)AdapterByRequestLine + 56);
  AdapterByRequestLine[37] = Mdl;
  return AdapterByRequestLine;
}
