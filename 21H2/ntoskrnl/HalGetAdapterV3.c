/*
 * XREFs of HalGetAdapterV3 @ 0x1407C38D0
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
 *     HalpDmaIsAutomaticDomain @ 0x1404C4E90 (HalpDmaIsAutomaticDomain.c)
 *     HalpAddAdapterToSystemList @ 0x1404CE38C (HalpAddAdapterToSystemList.c)
 *     HalpDmaControllerValidateRequestLineBinding @ 0x1404CEFBC (HalpDmaControllerValidateRequestLineBinding.c)
 *     HalpFindAdapterByRequestLine @ 0x1404CF2D8 (HalpFindAdapterByRequestLine.c)
 *     HalpFindDmaControllerByRequestLine @ 0x1404CF414 (HalpFindDmaControllerByRequestLine.c)
 *     HalpGetCacheCoherency @ 0x140764EBC (HalpGetCacheCoherency.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x1407C3BC8 (HalpDmaAllocateChildAdapterV3.c)
 */

_QWORD *__fastcall HalGetAdapterV3(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  bool v5; // cf
  bool v6; // zf
  unsigned int v7; // r14d
  unsigned int v8; // r12d
  __int64 v9; // rbx
  _QWORD *AdapterByRequestLine; // rdi
  __int64 v11; // rbp
  char v12; // al
  unsigned int v13; // r15d
  BOOL v14; // r13d
  unsigned __int64 v15; // rax
  char v16; // al
  unsigned int v17; // ebp
  unsigned int v18; // r14d
  __int64 v19; // r13
  __int64 *AdapterByDeviceObject; // rax
  int v21; // r9d
  bool v22; // r14
  __int64 ChildAdapterV3; // rax
  char v24; // al
  int AdapterVersion; // r14d
  int v27; // r13d
  __int64 DmaControllerByRequestLine; // rax
  unsigned int v29; // ecx
  unsigned int v30; // edx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  _QWORD *v33; // rax
  char v34; // [rsp+60h] [rbp-68h] BYREF
  char v35; // [rsp+61h] [rbp-67h]
  char v36; // [rsp+62h] [rbp-66h]
  bool v37; // [rsp+63h] [rbp-65h]
  unsigned int v38; // [rsp+64h] [rbp-64h] BYREF
  int v39; // [rsp+68h] [rbp-60h]
  unsigned int v40; // [rsp+6Ch] [rbp-5Ch]
  __int64 v41; // [rsp+70h] [rbp-58h]
  PMDL Mdl; // [rsp+78h] [rbp-50h]
  char v43; // [rsp+D0h] [rbp+8h]
  __int64 v44; // [rsp+D8h] [rbp+10h]

  v44 = a2;
  v5 = *(_DWORD *)a1 < 3u;
  v6 = *(_DWORD *)a1 == 3;
  v34 = 0;
  Mdl = 0LL;
  v7 = 64;
  v37 = 0;
  if ( v6 )
  {
    v8 = *(_DWORD *)(a1 + 40);
  }
  else
  {
    if ( !v5 || a3 != 2 || !*(_BYTE *)(a1 + 4) )
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
  v39 = 0;
  AdapterByRequestLine = 0LL;
  if ( *(_BYTE *)(a1 + 4) )
  {
    v36 = 0;
    v11 = 0LL;
    v41 = 0LL;
  }
  else
  {
    v27 = *(_DWORD *)(a1 + 48);
    v9 = *(_QWORD *)(a1 + 56);
    v36 = 1;
    v39 = v27;
    DmaControllerByRequestLine = HalpFindDmaControllerByRequestLine(v27);
    v41 = DmaControllerByRequestLine;
    v11 = DmaControllerByRequestLine;
    if ( !DmaControllerByRequestLine )
      return 0LL;
    AdapterByRequestLine = HalpFindAdapterByRequestLine(DmaControllerByRequestLine, v27);
    if ( !AdapterByRequestLine && !HalpDmaControllerValidateRequestLineBinding(v11, a1) )
      return 0LL;
    a2 = v44;
  }
  v12 = *(_BYTE *)(a1 + 4);
  v13 = ((*(_DWORD *)(a1 + 32) & 0x7FFFFFFF) + 4095) & 0xFFFFF000;
  if ( v12 )
  {
    v43 = *(_BYTE *)(a1 + 5);
    v40 = 0;
  }
  else
  {
    v29 = *(_DWORD *)(v11 + 48);
    v8 = *(_DWORD *)(v11 + 76);
    v43 = 1;
    if ( v29 > 8 )
      v29 = 8;
    v40 = v29;
  }
  if ( v8 >= 0x20 || (v14 = 0, v12) )
  {
    v35 = 1;
    v14 = v8 >= 0x20;
  }
  else
  {
    v35 = 0;
  }
  HalpGetCacheCoherency(v11, a2, &v34);
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
    if ( v34 && v43 && !a3 )
    {
      v17 = 0;
      v38 = 0;
      v18 = 0;
      goto LABEL_17;
    }
  }
  if ( v14 )
  {
    if ( v43 && (v34 || !v16) )
      v7 = 512;
  }
  else
  {
    v7 = 16;
  }
  v17 = (v13 >> 12) + 1;
  v38 = v17;
  v30 = v17;
  if ( v17 > v7 )
  {
    v17 = v7;
    v38 = v7;
    v30 = v7;
  }
  v31 = dword_140C4BCD8;
  v18 = v30;
  if ( !v14 )
    v31 = dword_140C4BBF8;
  if ( !v35 )
  {
    v32 = v31 >> 13;
    if ( v30 > v32 )
    {
      v17 = v32;
      v38 = v32;
      v18 = v32;
    }
  }
LABEL_17:
  if ( !v34 )
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
    goto LABEL_29;
  }
  KeWaitForSingleObject(&HalpNewAdapter, WrExecutive, 0, 0, 0LL);
  v19 = v41;
  if ( v36 )
  {
    v33 = HalpFindAdapterByRequestLine(v41, v39);
    AdapterByRequestLine = v33;
    if ( v33 )
    {
      if ( v18 > *((_DWORD *)v33 + 56) )
        *((_DWORD *)v33 + 56) = v17;
      v33[56] = *(_QWORD *)(a1 + 56);
      ObReferenceObjectByPointer(v33, 0x20000u, HalpDmaAdapterObjectType, 0);
      goto LABEL_28;
    }
  }
  AdapterByDeviceObject = HalpDmaFindAdapterByDeviceObject(v44);
  AdapterByRequestLine = AdapterByDeviceObject;
  if ( !AdapterByDeviceObject )
  {
    v22 = v37;
    goto LABEL_22;
  }
  AdapterVersion = HalpDmaGetAdapterVersion((__int64)AdapterByDeviceObject);
  if ( AdapterVersion != 3 )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)AdapterByRequestLine);
    AdapterByRequestLine = 0LL;
  }
  v22 = AdapterVersion != 3;
  if ( !AdapterByRequestLine )
  {
LABEL_22:
    LOBYTE(v21) = v43;
    ChildAdapterV3 = HalpDmaAllocateChildAdapterV3(
                       v17,
                       v13,
                       v8,
                       v21,
                       *(_BYTE *)(a1 + 4),
                       v35,
                       v34,
                       v40,
                       v9,
                       a3,
                       v44,
                       (__int64)&v38);
    AdapterByRequestLine = (_QWORD *)ChildAdapterV3;
    if ( ChildAdapterV3 )
    {
      v6 = v36 == 0;
      *(_BYTE *)(ChildAdapterV3 + 516) = v22;
      if ( v6 )
      {
        *(_QWORD *)(ChildAdapterV3 + 520) = v44;
        HalpAddAdapterToList(ChildAdapterV3);
      }
      else
      {
        HalpAddAdapterToSystemList(v19, ChildAdapterV3);
        *((_DWORD *)AdapterByRequestLine + 94) = v39;
        *((_DWORD *)AdapterByRequestLine + 93) = *(_DWORD *)(a1 + 16);
        AdapterByRequestLine[45] = v19;
        *((_DWORD *)AdapterByRequestLine + 111) = *(_DWORD *)(a1 + 24);
        ObReferenceObjectByPointer(AdapterByRequestLine, 0x20000u, HalpDmaAdapterObjectType, 0);
      }
      v24 = v38;
      if ( v38 )
      {
        *((_DWORD *)AdapterByRequestLine + 56) = v38;
        v24 = 1;
      }
      else
      {
        *((_DWORD *)AdapterByRequestLine + 56) = (v13 >> 12) + 1;
      }
      *((_BYTE *)AdapterByRequestLine + 432) = v24;
      AdapterByRequestLine[38] = 0LL;
      goto LABEL_28;
    }
    goto LABEL_87;
  }
  if ( !*(_BYTE *)(a1 + 4)
    || *(_BYTE *)(a1 + 5) != *((_BYTE *)AdapterByRequestLine + 434)
    || *(_BYTE *)(a1 + 9) != *((_BYTE *)AdapterByRequestLine + 436)
    || v8 != *((_DWORD *)AdapterByRequestLine + 110) )
  {
    if ( !HalpDmaIsAutomaticDomain((__int64 *)AdapterByRequestLine[63])
      || *((_DWORD *)AdapterByRequestLine + 128) == 2
      || a3 == 2 )
    {
      HalPutDmaAdapter((PADAPTER_OBJECT)AdapterByRequestLine);
LABEL_87:
      KeSetEvent(&HalpNewAdapter, 0, 0);
      return 0LL;
    }
    *((_BYTE *)AdapterByRequestLine + 516) = 1;
    HalPutDmaAdapter((PADAPTER_OBJECT)AdapterByRequestLine);
    v22 = 1;
    goto LABEL_22;
  }
LABEL_28:
  KeSetEvent(&HalpNewAdapter, 0, 0);
LABEL_29:
  *((_BYTE *)AdapterByRequestLine + 435) = *(_BYTE *)(a1 + 7);
  *((_BYTE *)AdapterByRequestLine + 436) = 0;
  if ( *(_DWORD *)a1 )
    *((_BYTE *)AdapterByRequestLine + 436) = *(_BYTE *)(a1 + 9);
  *a4 = *((_DWORD *)AdapterByRequestLine + 56);
  AdapterByRequestLine[37] = Mdl;
  return AdapterByRequestLine;
}
