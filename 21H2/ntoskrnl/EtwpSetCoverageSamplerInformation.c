/*
 * XREFs of EtwpSetCoverageSamplerInformation @ 0x140947B0C
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140938730 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ExCheckFullProcessInformationAccess @ 0x140619F60 (ExCheckFullProcessInformationAccess.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     ObInsertObject @ 0x1406AB4A0 (ObInsertObject.c)
 *     ObCreateObject @ 0x1406ABDC0 (ObCreateObject.c)
 *     NtClose @ 0x140707D60 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     EtwpCovSampApplyBounds @ 0x1409420B4 (EtwpCovSampApplyBounds.c)
 *     EtwpCovSampSplitSegments @ 0x140945E48 (EtwpCovSampSplitSegments.c)
 *     EtwpCoverageSamplerInitialize @ 0x140946544 (EtwpCoverageSamplerInitialize.c)
 *     EtwpCoverageSamplerSetBloomFilter @ 0x1409471B4 (EtwpCoverageSamplerSetBloomFilter.c)
 *     EtwpCoverageSamplerStart @ 0x14094735C (EtwpCoverageSamplerStart.c)
 *     EtwpCoverageSamplerStop @ 0x140947628 (EtwpCoverageSamplerStop.c)
 */

__int64 __fastcall EtwpSetCoverageSamplerInformation(_OWORD *Address, SIZE_T Length, KPROCESSOR_MODE AccessMode)
{
  SIZE_T v4; // r15
  _OWORD *v5; // r14
  _DWORD *v6; // rsi
  int inserted; // edi
  __int64 v8; // r13
  _OWORD *v9; // rax
  _OWORD *v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // r8d
  unsigned int v13; // r11d
  unsigned int v14; // r11d
  unsigned int v15; // r8d
  char v16; // cl
  unsigned int v17; // r8d
  unsigned int v18; // r9d
  unsigned int v19; // r8d
  unsigned int v20; // r9d
  unsigned int v21; // r8d
  unsigned int v22; // r9d
  unsigned int v23; // r9d
  unsigned int v24; // r8d
  unsigned int v25; // r9d
  unsigned int v26; // r8d
  unsigned int v27; // r9d
  unsigned int v28; // r8d
  unsigned int v29; // r9d
  unsigned int v30; // r8d
  unsigned int v31; // r9d
  unsigned int v32; // eax
  unsigned int v33; // r9d
  unsigned int v34; // r8d
  unsigned int v35; // r9d
  char v36; // r11
  unsigned int v37; // r8d
  char i; // cl
  unsigned int v39; // edx
  _OWORD *v40; // rax
  char *v41; // rcx
  _OWORD *v42; // rax
  __int64 v43; // rcx
  char v45; // [rsp+50h] [rbp-318h]
  PVOID Object; // [rsp+58h] [rbp-310h] BYREF
  HANDLE v47; // [rsp+60h] [rbp-308h] BYREF
  HANDLE Handle[2]; // [rsp+68h] [rbp-300h] BYREF
  __int128 v49; // [rsp+78h] [rbp-2F0h] BYREF
  __int128 v50; // [rsp+88h] [rbp-2E0h] BYREF
  __int128 v51; // [rsp+98h] [rbp-2D0h]
  _BYTE v52[8]; // [rsp+B0h] [rbp-2B8h] BYREF
  HANDLE v53; // [rsp+B8h] [rbp-2B0h]
  char v54; // [rsp+C0h] [rbp-2A8h] BYREF
  unsigned int v55; // [rsp+C8h] [rbp-2A0h] BYREF
  unsigned int v56; // [rsp+CCh] [rbp-29Ch] BYREF
  unsigned int v57; // [rsp+D0h] [rbp-298h] BYREF
  unsigned int v58; // [rsp+D4h] [rbp-294h] BYREF
  unsigned int v59; // [rsp+D8h] [rbp-290h] BYREF
  unsigned int v60; // [rsp+DCh] [rbp-28Ch] BYREF
  unsigned int v61; // [rsp+E0h] [rbp-288h] BYREF
  unsigned int v62; // [rsp+E4h] [rbp-284h] BYREF
  unsigned int v63; // [rsp+E8h] [rbp-280h] BYREF
  unsigned int v64; // [rsp+ECh] [rbp-27Ch] BYREF
  unsigned int v65; // [rsp+F0h] [rbp-278h] BYREF
  unsigned int v66; // [rsp+F4h] [rbp-274h] BYREF
  unsigned int v67; // [rsp+F8h] [rbp-270h] BYREF
  unsigned int v68; // [rsp+FCh] [rbp-26Ch] BYREF
  unsigned int v69; // [rsp+100h] [rbp-268h] BYREF
  unsigned int v70; // [rsp+104h] [rbp-264h] BYREF
  unsigned int v71; // [rsp+108h] [rbp-260h] BYREF
  unsigned int v72[64]; // [rsp+10Ch] [rbp-25Ch] BYREF
  __int16 v73; // [rsp+20Eh] [rbp-15Ah]
  __int16 v74; // [rsp+30Eh] [rbp-5Ah]
  _QWORD v75[4]; // [rsp+310h] [rbp-58h] BYREF

  v4 = (unsigned int)Length;
  v5 = Address;
  v6 = 0LL;
  Object = 0LL;
  v47 = 0LL;
  DWORD1(v49) = 0;
  HIDWORD(v50) = 0;
  v45 = 0;
  if ( (unsigned int)Length < 0x10 )
    goto LABEL_2;
  *(_OWORD *)Handle = *Address;
  if ( BYTE5(Handle[0]) != 0xCF )
    goto LABEL_4;
  if ( BYTE4(Handle[0]) )
  {
    if ( BYTE4(Handle[0]) != 2 )
    {
      if ( BYTE4(Handle[0]) != 3 )
      {
        inserted = -1073741821;
        goto LABEL_51;
      }
LABEL_4:
      inserted = -1073741637;
      goto LABEL_51;
    }
    inserted = ExCheckFullProcessInformationAccess(AccessMode);
    if ( inserted < 0 )
      goto LABEL_51;
    if ( (_DWORD)v4 == 40 )
    {
      v49 = *v5;
      v50 = v5[1];
      *(_QWORD *)&v51 = *((_QWORD *)v5 + 4);
      Object = 0LL;
      inserted = ObReferenceObjectByHandle(Handle[1], 1u, qword_140C198B0, AccessMode, &Object, 0LL);
      v6 = Object;
      if ( inserted >= 0 )
      {
        inserted = EtwpCoverageSamplerSetBloomFilter((ULONG_PTR)Object, (__int64)&v50, AccessMode);
        if ( inserted >= 0 )
        {
LABEL_50:
          inserted = 0;
          goto LABEL_51;
        }
      }
      goto LABEL_51;
    }
LABEL_2:
    inserted = -1073741820;
    goto LABEL_51;
  }
  if ( !AccessMode )
    goto LABEL_4;
  inserted = ExCheckFullProcessInformationAccess(AccessMode);
  if ( inserted < 0 )
    goto LABEL_51;
  if ( (unsigned int)v4 < 0x280 )
    goto LABEL_2;
  v8 = 4LL;
  ProbeForWrite(v5, v4, 4u);
  v9 = v5;
  v10 = v52;
  v11 = 5LL;
  do
  {
    *v10 = *v9;
    v10[1] = v9[1];
    v10[2] = v9[2];
    v10[3] = v9[3];
    v10[4] = v9[4];
    v10[5] = v9[5];
    v10[6] = v9[6];
    v10 += 8;
    *(v10 - 1) = v9[7];
    v9 += 8;
    --v11;
  }
  while ( v11 );
  EtwpCovSampApplyBounds(&v55, 0x400u, 0x10u, 0x4000u);
  EtwpCovSampApplyBounds(&v71, 0x100u, v12, v13);
  EtwpCovSampApplyBounds(v72, 0x800u, v14, 0x10000u);
  v15 = v72[0];
  if ( ((v72[0] - 1) & v72[0]) != 0 )
  {
    v16 = -1;
    if ( v72[0] )
    {
      do
      {
        ++v16;
        v15 >>= 1;
      }
      while ( v15 );
    }
    v15 = 1 << v16;
  }
  if ( (v54 & 0x40) != 0 )
    v15 = 0;
  v72[0] = v15;
  EtwpCovSampApplyBounds(&v63, 0x3E8u, 1u, 0x6B49D200u);
  EtwpCovSampApplyBounds(&v65, 1u, v17, v18);
  EtwpCovSampApplyBounds(&v67, 1u, v19, v20);
  EtwpCovSampApplyBounds(&v69, 1u, v21, v22);
  EtwpCovSampApplyBounds(&v64, 0, 0, v23);
  EtwpCovSampApplyBounds(&v66, 0, v24, v25);
  EtwpCovSampApplyBounds(&v68, 0, v26, v27);
  EtwpCovSampApplyBounds(&v70, 0, v28, v29);
  EtwpCovSampApplyBounds(&v58, 8u, 1u, 0x80u);
  EtwpCovSampApplyBounds(&v59, 0x20000u, 0x4000u, 0x100000u);
  EtwpCovSampApplyBounds(&v60, 4u, 2u, 0x100u);
  v32 = v60;
  if ( v54 < 0 )
    v32 = 0;
  v60 = v32;
  EtwpCovSampApplyBounds(&v61, 4u, v30, v31);
  EtwpCovSampApplyBounds(&v62, 0x10u, 4u, v33);
  EtwpCovSampApplyBounds(&v56, 0x400u, 0x10u, 0x8000000u);
  EtwpCovSampApplyBounds(&v57, 0x10000u, v34, v35);
  v37 = 4 * v71;
  if ( v56 >= 4 * v71 )
    v37 = v56;
  if ( ((v37 - 1) & v37) != 0 )
  {
    for ( i = v36; v37; v37 >>= 1 )
      ++i;
    v37 = 1 << i;
  }
  v56 = v37;
  v39 = v57;
  if ( ((v57 - 1) & v57) != 0 )
  {
    if ( v57 )
    {
      do
      {
        ++v36;
        v39 >>= 1;
      }
      while ( v39 );
    }
    v39 = 1 << v36;
  }
  if ( v39 < v37 )
    v39 = v37;
  v57 = v39;
  v74 = 0;
  v73 = 0;
  LODWORD(v49) = 48;
  *((_QWORD *)&v49 + 1) = 0LL;
  DWORD2(v50) = 0;
  *(_QWORD *)&v50 = 0LL;
  v51 = 0LL;
  inserted = ObCreateObject(0, (int)qword_140C198B0, (int)&v49, AccessMode);
  v6 = Object;
  if ( inserted >= 0 )
  {
    EtwpCoverageSamplerInitialize((__int64)Object);
    v40 = (char *)Object + 24;
    v41 = &v54;
    do
    {
      *v40 = *(_OWORD *)v41;
      v40[1] = *((_OWORD *)v41 + 1);
      v40[2] = *((_OWORD *)v41 + 2);
      v40[3] = *((_OWORD *)v41 + 3);
      v40[4] = *((_OWORD *)v41 + 4);
      v40[5] = *((_OWORD *)v41 + 5);
      v40[6] = *((_OWORD *)v41 + 6);
      v40 += 8;
      *(v40 - 1) = *((_OWORD *)v41 + 7);
      v41 += 128;
      --v8;
    }
    while ( v8 );
    *v40 = *(_OWORD *)v41;
    v40[1] = *((_OWORD *)v41 + 1);
    v40[2] = *((_OWORD *)v41 + 2);
    v40[3] = *((_OWORD *)v41 + 3);
    v40[4] = *((_OWORD *)v41 + 4);
    v6[283] = EtwpCovSampSplitSegments((wchar_t *)v6 + 180, (__int64)(v6 + 242));
    v6[282] = EtwpCovSampSplitSegments((wchar_t *)v6 + 52, (__int64)(v6 + 202));
    if ( !v75[0]
      || (inserted = EtwpCoverageSamplerSetBloomFilter((ULONG_PTR)v6, (__int64)v75, AccessMode), inserted >= 0) )
    {
      Handle[0] = 0LL;
      inserted = ObReferenceObjectByHandle(
                   (HANDLE)v75[3],
                   0x1F0003u,
                   (POBJECT_TYPE)ExEventObjectType,
                   AccessMode,
                   Handle,
                   0LL);
      *((HANDLE *)v6 + 145) = Handle[0];
      if ( inserted >= 0 )
      {
        v45 = 1;
        inserted = EtwpCoverageSamplerStart(v6);
        if ( inserted >= 0 )
        {
          ObfReferenceObject(v6);
          inserted = ObInsertObject(v6, 0LL, 1u, 0, 0LL, &v47);
          if ( inserted >= 0 )
          {
            v53 = v47;
            v52[6] = 0;
            v42 = v52;
            v43 = 5LL;
            do
            {
              *v5 = *v42;
              v5[1] = v42[1];
              v5[2] = v42[2];
              v5[3] = v42[3];
              v5[4] = v42[4];
              v5[5] = v42[5];
              v5[6] = v42[6];
              v5 += 8;
              *(v5 - 1) = v42[7];
              v42 += 8;
              --v43;
            }
            while ( v43 );
            v47 = 0LL;
            goto LABEL_50;
          }
        }
      }
    }
  }
LABEL_51:
  if ( v47 )
    NtClose(v47);
  if ( v6 )
  {
    if ( inserted < 0 && v45 )
      EtwpCoverageSamplerStop((__int64)v6);
    HalPutDmaAdapter((PADAPTER_OBJECT)v6);
  }
  return (unsigned int)inserted;
}
