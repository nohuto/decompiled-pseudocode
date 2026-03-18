/*
 * XREFs of ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C0163F24
 * Callers:
 *     RIMSetDeviceOutputConfig @ 0x1C0164BD4 (RIMSetDeviceOutputConfig.c)
 * Callees:
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C000C308 (--0CLockedInputSpace@@QEAA@XZ.c)
 *     EngMulDiv @ 0x1C0032350 (EngMulDiv.c)
 *     RIMGetVirtualDesktopPhysicalSize @ 0x1C00B57A0 (RIMGetVirtualDesktopPhysicalSize.c)
 *     HMValidateSharedHandleNoRip @ 0x1C00BBA08 (HMValidateSharedHandleNoRip.c)
 *     RIMGetMonitorPhysicalSize @ 0x1C0164870 (RIMGetMonitorPhysicalSize.c)
 *     rimUpdatePointerDeviceOrientation @ 0x1C0165F3C (rimUpdatePointerDeviceOrientation.c)
 *     ?GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z @ 0x1C01ADB3C (-GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z.c)
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
  __int64 v10; // r8
  __int64 v11; // r9
  _OWORD *v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  unsigned __int64 v15; // xmm0_8
  __int64 v16; // rdx
  __int64 v17; // rax
  _OWORD *v18; // rax
  INT v19; // r14d
  INT v20; // ebp
  INT v21; // eax
  INT v22; // ebx
  INT v23; // r15d
  INT v24; // edi
  INT v25; // esi
  INT v26; // ebx
  _QWORD v27[2]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v28[16]; // [rsp+30h] [rbp-38h] BYREF

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
  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v27);
  if ( *((_DWORD *)a2 + 59)
    && InputConfig::GetInputSpace(*(struct _LUID *)((char *)a2 + 240), (struct CLockedInputSpace *)v27) )
  {
    *(_QWORD *)((char *)a2 + 228) = *((_QWORD *)a2 + 30);
    if ( *((_DWORD *)a2 + 62) )
      v12 = (_OWORD *)((char *)a2 + 252);
    else
      v12 = (_OWORD *)(v27[0] + 24LL);
    *((_OWORD *)a2 + 10) = *v12;
  }
  else
  {
    *((_DWORD *)a2 + 59) = 0;
    *(_OWORD *)((char *)a2 + 252) = 0LL;
    *((_QWORD *)a2 + 30) = 0LL;
    *((_DWORD *)a2 + 62) = 0;
  }
  v13 = *((_DWORD *)a2 + 78);
  if ( (v13 & 8) == 0 || (v13 & 0x2000) != 0 )
  {
    if ( *((_DWORD *)a1 + 336) && (*(_DWORD *)(v6 + 16) & 2) != 0 )
    {
      v19 = *((_DWORD *)a2 + 37);
      *((_DWORD *)a2 + 56) = *(_DWORD *)(v6 + 164);
      v20 = *(_DWORD *)(v6 + 176);
      v21 = EngMulDiv(*(_DWORD *)(v6 + 192), v19, v20);
      v22 = *(_DWORD *)(v6 + 180);
      v23 = v21;
      v24 = *((_DWORD *)a2 + 38);
      v25 = EngMulDiv(*(_DWORD *)(v6 + 188), v24, v22);
      v26 = EngMulDiv(*(_DWORD *)(v6 + 196), v24, v22);
      *((_DWORD *)a2 + 52) = EngMulDiv(*(_DWORD *)(v6 + 184), v19, v20);
      *((_DWORD *)a2 + 53) = v25;
      *((_DWORD *)a2 + 54) = v23;
      *((_DWORD *)a2 + 55) = v26;
      *((_DWORD *)a2 + 46) = *((_DWORD *)a2 + 54) - *((_DWORD *)a2 + 52);
      *((_DWORD *)a2 + 47) = v26 - *((_DWORD *)a2 + 53);
      rimUpdatePointerDeviceOrientation(a2);
    }
  }
  else
  {
    v14 = *((_QWORD *)a2 + 20);
    v15 = _mm_srli_si128(*((__m128i *)a2 + 10), 8).m128i_u64[0];
    v16 = (unsigned int)(HIDWORD(v15) - HIDWORD(v14));
    *((_DWORD *)a2 + 50) = v15 - v14;
    *((_DWORD *)a2 + 51) = v16;
    if ( *((_DWORD *)a1 + 336) )
    {
      v17 = HMValidateSharedHandleNoRip(*((_QWORD *)a1 + 169), v16, v10, v11);
      v18 = (_OWORD *)RIMGetMonitorPhysicalSize(v28, v17);
    }
    else
    {
      v18 = (_OWORD *)RIMGetVirtualDesktopPhysicalSize((__int64)v28);
    }
    *((_OWORD *)a2 + 11) = *v18;
  }
  ExReleaseResourceLite(*(PERESOURCE *)v27[1]);
  KeLeaveCriticalRegion();
}
