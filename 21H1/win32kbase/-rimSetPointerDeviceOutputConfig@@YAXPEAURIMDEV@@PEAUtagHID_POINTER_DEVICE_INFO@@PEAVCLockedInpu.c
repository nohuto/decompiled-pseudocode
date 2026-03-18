/*
 * XREFs of ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C016C7D4
 * Callers:
 *     RIMSetDeviceOutputConfig @ 0x1C016D484 (RIMSetDeviceOutputConfig.c)
 * Callees:
 *     HMValidateSharedHandleNoRip @ 0x1C000EC88 (HMValidateSharedHandleNoRip.c)
 *     RIMGetVirtualDesktopPhysicalSize @ 0x1C0047C60 (RIMGetVirtualDesktopPhysicalSize.c)
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C0063F80 (--0CLockedInputSpace@@QEAA@XZ.c)
 *     EngMulDiv @ 0x1C006C3E0 (EngMulDiv.c)
 *     RIMGetMonitorPhysicalSize @ 0x1C016D120 (RIMGetMonitorPhysicalSize.c)
 *     rimUpdatePointerDeviceOrientation @ 0x1C016E7EC (rimUpdatePointerDeviceOrientation.c)
 *     ?GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z @ 0x1C01B5C1C (-GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z.c)
 */

void __fastcall rimSetPointerDeviceOutputConfig(
        struct RIMDEV *a1,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        struct CLockedInputSpace *a3,
        struct CLockedInputSpaceRegion *a4)
{
  _QWORD *v4; // rax
  __int64 v6; // r12
  __int128 v7; // xmm0
  __int128 v9; // xmm0
  _OWORD *v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  unsigned __int64 v13; // xmm0_8
  __int64 v14; // rax
  _OWORD *v15; // rax
  INT v16; // r14d
  INT v17; // ebp
  INT v18; // eax
  INT v19; // ebx
  INT v20; // r15d
  INT v21; // edi
  INT v22; // esi
  INT v23; // ebx
  _QWORD v24[2]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v25[16]; // [rsp+30h] [rbp-38h] BYREF

  v4 = *(_QWORD **)a3;
  v6 = *(_QWORD *)a4;
  v7 = *(_OWORD *)((char *)a2 + 124);
  *((_DWORD *)a2 + 56) = 1;
  *((_OWORD *)a2 + 12) = v7;
  v9 = *(_OWORD *)((char *)a2 + 140);
  *((_OWORD *)a2 + 13) = v9;
  *((_OWORD *)a2 + 11) = v9;
  *((_OWORD *)a2 + 10) = *(_OWORD *)v6;
  *(_QWORD *)((char *)a2 + 228) = *v4;
  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v24);
  if ( *((_DWORD *)a2 + 59)
    && InputConfig::GetInputSpace(*(struct _LUID *)((char *)a2 + 240), (struct CLockedInputSpace *)v24) )
  {
    *(_QWORD *)((char *)a2 + 228) = *((_QWORD *)a2 + 30);
    if ( *((_DWORD *)a2 + 62) )
      v10 = (_OWORD *)((char *)a2 + 252);
    else
      v10 = (_OWORD *)(v24[0] + 24LL);
    *((_OWORD *)a2 + 10) = *v10;
  }
  else
  {
    *((_DWORD *)a2 + 59) = 0;
    *(_OWORD *)((char *)a2 + 252) = 0LL;
    *((_QWORD *)a2 + 30) = 0LL;
    *((_DWORD *)a2 + 62) = 0;
  }
  v11 = *((_DWORD *)a2 + 78);
  if ( (v11 & 8) == 0 || (v11 & 0x2000) != 0 )
  {
    if ( *((_DWORD *)a1 + 334) && (*(_DWORD *)(v6 + 16) & 2) != 0 )
    {
      v16 = *((_DWORD *)a2 + 37);
      *((_DWORD *)a2 + 56) = *(_DWORD *)(v6 + 164);
      v17 = *(_DWORD *)(v6 + 176);
      v18 = EngMulDiv(*(_DWORD *)(v6 + 192), v16, v17);
      v19 = *(_DWORD *)(v6 + 180);
      v20 = v18;
      v21 = *((_DWORD *)a2 + 38);
      v22 = EngMulDiv(*(_DWORD *)(v6 + 188), v21, v19);
      v23 = EngMulDiv(*(_DWORD *)(v6 + 196), v21, v19);
      *((_DWORD *)a2 + 52) = EngMulDiv(*(_DWORD *)(v6 + 184), v16, v17);
      *((_DWORD *)a2 + 53) = v22;
      *((_DWORD *)a2 + 54) = v20;
      *((_DWORD *)a2 + 55) = v23;
      *((_DWORD *)a2 + 46) = *((_DWORD *)a2 + 54) - *((_DWORD *)a2 + 52);
      *((_DWORD *)a2 + 47) = v23 - *((_DWORD *)a2 + 53);
      rimUpdatePointerDeviceOrientation(a2);
    }
  }
  else
  {
    v12 = *((_QWORD *)a2 + 20);
    v13 = _mm_srli_si128(*((__m128i *)a2 + 10), 8).m128i_u64[0];
    *((_DWORD *)a2 + 50) = v13 - v12;
    *((_DWORD *)a2 + 51) = HIDWORD(v13) - HIDWORD(v12);
    if ( *((_DWORD *)a1 + 334) )
    {
      v14 = HMValidateSharedHandleNoRip(*((_QWORD *)a1 + 168));
      v15 = (_OWORD *)RIMGetMonitorPhysicalSize(v25, v14);
    }
    else
    {
      v15 = (_OWORD *)RIMGetVirtualDesktopPhysicalSize((__int64)v25);
    }
    *((_OWORD *)a2 + 11) = *v15;
  }
  ExReleaseResourceLite(*(PERESOURCE *)v24[1]);
  KeLeaveCriticalRegion();
}
