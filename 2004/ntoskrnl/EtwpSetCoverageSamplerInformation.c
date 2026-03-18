/*
 * XREFs of EtwpSetCoverageSamplerInformation @ 0x1409443AC
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140934F60 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     NtClose @ 0x1405F78C0 (NtClose.c)
 *     ObInsertObject @ 0x14060D6D0 (ObInsertObject.c)
 *     ObCreateObject @ 0x14060ECE0 (ObCreateObject.c)
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
 *     ExCheckFullProcessInformationAccess @ 0x1406BC87C (ExCheckFullProcessInformationAccess.c)
 *     EtwpCovSampApplyBounds @ 0x14093E954 (EtwpCovSampApplyBounds.c)
 *     EtwpCovSampSplitSegments @ 0x1409426E8 (EtwpCovSampSplitSegments.c)
 *     EtwpCoverageSamplerInitialize @ 0x140942DE4 (EtwpCoverageSamplerInitialize.c)
 *     EtwpCoverageSamplerSetBloomFilter @ 0x140943A54 (EtwpCoverageSamplerSetBloomFilter.c)
 *     EtwpCoverageSamplerStart @ 0x140943BFC (EtwpCoverageSamplerStart.c)
 *     EtwpCoverageSamplerStop @ 0x140943EC8 (EtwpCoverageSamplerStop.c)
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
  int v36; // r9d
  char v37; // r11
  unsigned int v38; // r8d
  char i; // cl
  unsigned int v40; // edx
  _OWORD *v41; // rax
  char *v42; // rcx
  _OWORD *v43; // rax
  __int64 v44; // rcx
  char v46; // [rsp+50h] [rbp-318h]
  PVOID Object; // [rsp+58h] [rbp-310h] BYREF
  HANDLE v48; // [rsp+60h] [rbp-308h] BYREF
  HANDLE Handle[2]; // [rsp+68h] [rbp-300h] BYREF
  __int128 v50; // [rsp+78h] [rbp-2F0h] BYREF
  __int128 v51; // [rsp+88h] [rbp-2E0h] BYREF
  __int128 v52; // [rsp+98h] [rbp-2D0h]
  _BYTE v53[8]; // [rsp+B0h] [rbp-2B8h] BYREF
  HANDLE v54; // [rsp+B8h] [rbp-2B0h]
  char v55; // [rsp+C0h] [rbp-2A8h] BYREF
  unsigned int v56; // [rsp+C8h] [rbp-2A0h] BYREF
  unsigned int v57; // [rsp+CCh] [rbp-29Ch] BYREF
  unsigned int v58; // [rsp+D0h] [rbp-298h] BYREF
  unsigned int v59; // [rsp+D4h] [rbp-294h] BYREF
  unsigned int v60; // [rsp+D8h] [rbp-290h] BYREF
  unsigned int v61; // [rsp+DCh] [rbp-28Ch] BYREF
  unsigned int v62; // [rsp+E0h] [rbp-288h] BYREF
  unsigned int v63; // [rsp+E4h] [rbp-284h] BYREF
  unsigned int v64; // [rsp+E8h] [rbp-280h] BYREF
  unsigned int v65; // [rsp+ECh] [rbp-27Ch] BYREF
  unsigned int v66; // [rsp+F0h] [rbp-278h] BYREF
  unsigned int v67; // [rsp+F4h] [rbp-274h] BYREF
  unsigned int v68; // [rsp+F8h] [rbp-270h] BYREF
  unsigned int v69; // [rsp+FCh] [rbp-26Ch] BYREF
  unsigned int v70; // [rsp+100h] [rbp-268h] BYREF
  unsigned int v71; // [rsp+104h] [rbp-264h] BYREF
  unsigned int v72; // [rsp+108h] [rbp-260h] BYREF
  unsigned int v73[64]; // [rsp+10Ch] [rbp-25Ch] BYREF
  __int16 v74; // [rsp+20Eh] [rbp-15Ah]
  __int16 v75; // [rsp+30Eh] [rbp-5Ah]
  _QWORD v76[4]; // [rsp+310h] [rbp-58h] BYREF

  v4 = (unsigned int)Length;
  v5 = Address;
  v6 = 0LL;
  Object = 0LL;
  v48 = 0LL;
  DWORD1(v50) = 0;
  HIDWORD(v51) = 0;
  v46 = 0;
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
      v50 = *v5;
      v51 = v5[1];
      *(_QWORD *)&v52 = *((_QWORD *)v5 + 4);
      Object = 0LL;
      inserted = ObReferenceObjectByHandle(Handle[1], 1u, qword_140C196D0, AccessMode, &Object, 0LL);
      v6 = Object;
      if ( inserted >= 0 )
      {
        inserted = EtwpCoverageSamplerSetBloomFilter((ULONG_PTR)Object, (__int64)&v51, AccessMode);
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
  v10 = v53;
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
  EtwpCovSampApplyBounds(&v56, 0x400u, 0x10u, 0x4000u);
  EtwpCovSampApplyBounds(&v72, 0x100u, v12, v13);
  EtwpCovSampApplyBounds(v73, 0x800u, v14, 0x10000u);
  v15 = v73[0];
  if ( ((v73[0] - 1) & v73[0]) != 0 )
  {
    v16 = -1;
    if ( v73[0] )
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
  if ( (v55 & 0x40) != 0 )
    v15 = 0;
  v73[0] = v15;
  EtwpCovSampApplyBounds(&v64, 0x3E8u, 1u, 0x6B49D200u);
  EtwpCovSampApplyBounds(&v66, 1u, v17, v18);
  EtwpCovSampApplyBounds(&v68, 1u, v19, v20);
  EtwpCovSampApplyBounds(&v70, 1u, v21, v22);
  EtwpCovSampApplyBounds(&v65, 0, 0, v23);
  EtwpCovSampApplyBounds(&v67, 0, v24, v25);
  EtwpCovSampApplyBounds(&v69, 0, v26, v27);
  EtwpCovSampApplyBounds(&v71, 0, v28, v29);
  EtwpCovSampApplyBounds(&v59, 8u, 1u, 0x80u);
  EtwpCovSampApplyBounds(&v60, 0x20000u, 0x4000u, 0x100000u);
  EtwpCovSampApplyBounds(&v61, 4u, 2u, 0x100u);
  v32 = v61;
  if ( v55 < 0 )
    v32 = 0;
  v61 = v32;
  EtwpCovSampApplyBounds(&v62, 4u, v30, v31);
  EtwpCovSampApplyBounds(&v63, 0x10u, 4u, v33);
  EtwpCovSampApplyBounds(&v57, 0x400u, 0x10u, 0x8000000u);
  EtwpCovSampApplyBounds(&v58, 0x10000u, v34, v35);
  v38 = 4 * v72;
  if ( v57 >= 4 * v72 )
    v38 = v57;
  if ( ((v38 - 1) & v38) != 0 )
  {
    for ( i = v37; v38; v38 >>= 1 )
      ++i;
    v38 = 1 << i;
  }
  v57 = v38;
  v40 = v58;
  if ( ((v58 - 1) & v58) != 0 )
  {
    if ( v58 )
    {
      do
      {
        ++v37;
        v40 >>= 1;
      }
      while ( v40 );
    }
    v40 = 1 << v37;
  }
  if ( v40 < v38 )
    v40 = v38;
  v58 = v40;
  v75 = 0;
  v74 = 0;
  LODWORD(v50) = 48;
  *((_QWORD *)&v50 + 1) = 0LL;
  DWORD2(v51) = 0;
  *(_QWORD *)&v51 = 0LL;
  v52 = 0LL;
  LOBYTE(v36) = AccessMode;
  inserted = ObCreateObject(0, (int)qword_140C196D0, (int)&v50, v36);
  v6 = Object;
  if ( inserted >= 0 )
  {
    EtwpCoverageSamplerInitialize((__int64)Object);
    v41 = (char *)Object + 24;
    v42 = &v55;
    do
    {
      *v41 = *(_OWORD *)v42;
      v41[1] = *((_OWORD *)v42 + 1);
      v41[2] = *((_OWORD *)v42 + 2);
      v41[3] = *((_OWORD *)v42 + 3);
      v41[4] = *((_OWORD *)v42 + 4);
      v41[5] = *((_OWORD *)v42 + 5);
      v41[6] = *((_OWORD *)v42 + 6);
      v41 += 8;
      *(v41 - 1) = *((_OWORD *)v42 + 7);
      v42 += 128;
      --v8;
    }
    while ( v8 );
    *v41 = *(_OWORD *)v42;
    v41[1] = *((_OWORD *)v42 + 1);
    v41[2] = *((_OWORD *)v42 + 2);
    v41[3] = *((_OWORD *)v42 + 3);
    v41[4] = *((_OWORD *)v42 + 4);
    v6[283] = EtwpCovSampSplitSegments((wchar_t *)v6 + 180, (__int64)(v6 + 242));
    v6[282] = EtwpCovSampSplitSegments((wchar_t *)v6 + 52, (__int64)(v6 + 202));
    if ( !v76[0]
      || (inserted = EtwpCoverageSamplerSetBloomFilter((ULONG_PTR)v6, (__int64)v76, AccessMode), inserted >= 0) )
    {
      Handle[0] = 0LL;
      inserted = ObReferenceObjectByHandle(
                   (HANDLE)v76[3],
                   0x1F0003u,
                   (POBJECT_TYPE)ExEventObjectType,
                   AccessMode,
                   Handle,
                   0LL);
      *((HANDLE *)v6 + 145) = Handle[0];
      if ( inserted >= 0 )
      {
        v46 = 1;
        inserted = EtwpCoverageSamplerStart(v6);
        if ( inserted >= 0 )
        {
          ObfReferenceObject(v6);
          inserted = ObInsertObject(v6, 0LL, 1u, 0, 0LL, &v48);
          if ( inserted >= 0 )
          {
            v54 = v48;
            v53[6] = 0;
            v43 = v53;
            v44 = 5LL;
            do
            {
              *v5 = *v43;
              v5[1] = v43[1];
              v5[2] = v43[2];
              v5[3] = v43[3];
              v5[4] = v43[4];
              v5[5] = v43[5];
              v5[6] = v43[6];
              v5 += 8;
              *(v5 - 1) = v43[7];
              v43 += 8;
              --v44;
            }
            while ( v44 );
            v48 = 0LL;
            goto LABEL_50;
          }
        }
      }
    }
  }
LABEL_51:
  if ( v48 )
    NtClose(v48);
  if ( v6 )
  {
    if ( inserted < 0 && v46 )
      EtwpCoverageSamplerStop((__int64)v6);
    HalPutDmaAdapter((PADAPTER_OBJECT)v6);
  }
  return (unsigned int)inserted;
}
