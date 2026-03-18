/*
 * XREFs of ?CheckMcdmDdiSubmission@DXGADAPTER@@AEAAJXZ @ 0x1C0026D90
 * Callers:
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0203930 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C001D470 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGADAPTER::CheckMcdmDdiSubmission(DXGADAPTER *this)
{
  int v3; // eax
  int v4; // r15d
  char v5; // r12
  char v6; // r13
  unsigned int NumDifferentPhysicalAdapters; // eax
  unsigned int v8; // edx
  char v9; // r8
  char v10; // r10
  __int64 v11; // r11
  unsigned __int16 *v12; // rcx
  __int64 v13; // r9
  unsigned int v14; // eax
  _BYTE *v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rax
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  int v24; // edx
  int v25; // r8d
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  int v29; // edx
  int v30; // ecx
  int v31; // r8d
  int v32; // edx
  int v33; // ecx
  int v34; // r8d
  __int64 v35; // rax
  int v36; // edx
  int v37; // ecx
  int v38; // r8d
  int v39; // edx
  int v40; // ecx
  int v41; // r8d
  int v42; // edx
  int v43; // ecx
  int v44; // r8d
  int v45; // edx
  int v46; // ecx
  int v47; // r8d
  int v48; // edx
  int v49; // ecx
  int v50; // r8d
  int v51; // edx
  int v52; // ecx
  int v53; // r8d
  int v54; // edx
  int v55; // ecx
  int v56; // r8d
  int v57; // edx
  int v58; // ecx
  int v59; // r8d
  int v60; // edx
  int v61; // ecx
  int v62; // r8d
  int v63; // edx
  int v64; // ecx
  int v65; // r8d
  int v66; // edx
  int v67; // ecx
  int v68; // r8d
  int v69; // edx
  int v70; // ecx
  int v71; // r8d
  int v72; // edx
  int v73; // ecx
  int v74; // r8d
  int v75; // edx
  int v76; // ecx
  int v77; // r8d
  int v78; // edx
  int v79; // ecx
  int v80; // r8d
  int v81; // edx
  int v82; // ecx
  int v83; // r8d
  int v84; // edx
  int v85; // ecx
  int v86; // r8d
  int v87; // edx
  int v88; // ecx
  int v89; // r8d
  int v90; // edx
  int v91; // ecx
  int v92; // r8d
  int v93; // edx
  int v94; // ecx
  int v95; // r8d
  int v96; // edx
  int v97; // ecx
  int v98; // r8d
  int v99; // edx
  int v100; // ecx
  int v101; // r8d
  int v102; // edx
  int v103; // ecx
  int v104; // r8d
  int v105; // edx
  int v106; // ecx
  int v107; // r8d
  int v108; // edx
  int v109; // ecx
  int v110; // r8d
  char v111; // [rsp+90h] [rbp+8h]

  if ( (*((_DWORD *)this + 666) & 8) == 0 )
    return 0LL;
  v3 = *((_DWORD *)this + 109);
  if ( (v3 & 8) != 0 || (v3 & 0x4000) != 0 )
    return 0LL;
  v4 = 0;
  v111 = 0;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(this);
    if ( v8 >= NumDifferentPhysicalAdapters )
      break;
    v12 = (unsigned __int16 *)(*((_QWORD *)this + 335) + 344LL * v8);
    v13 = *((_QWORD *)v12 + 4);
    if ( v13 )
    {
      v14 = *v12;
      if ( (unsigned __int16)v11 < (unsigned __int16)v14 )
      {
        v15 = (_BYTE *)(v13 + 73);
        v16 = v14;
        do
        {
          if ( *(v15 - 1) != (_BYTE)v11 || *v15 != (_BYTE)v11 )
          {
            v5 = 1;
            if ( (*(v15 - 5) & 1) != 0 )
              v10 = 1;
            if ( *v15 != (_BYTE)v11 )
              v6 = 1;
          }
          v15 += 74;
          --v16;
        }
        while ( v16 );
        v111 = v10;
      }
    }
  }
  v17 = *((_QWORD *)this + 64);
  if ( v9 )
  {
    if ( !v17 )
    {
      WdLogSingleEntry1(2LL, 267LL);
      v11 = 0LL;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      {
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v19,
          v18,
          v20,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiPatch is required.",
          267LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v11 = 0LL;
      }
      v4 = 1;
    }
    if ( *((_QWORD *)this + 91) == v11 )
    {
      WdLogSingleEntry1(2LL, 268LL);
      v11 = 0LL;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      {
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v22,
          v21,
          v23,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiRender is required.",
          268LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v11 = 0LL;
      }
      ++v4;
    }
    if ( *((_QWORD *)this + 65) == v11 )
    {
      WdLogSingleEntry1(2LL, 269LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          0,
          v24,
          v25,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiSubmitCommand is required.",
          269LL,
          0LL,
          0LL,
          0LL,
          0LL);
      ++v4;
    }
  }
  else
  {
    if ( v17 )
    {
      WdLogSingleEntry1(2LL, 273LL);
      v11 = 0LL;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        {
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v27,
            v26,
            v28,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiPatch is not used.",
            273LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v11 = 0LL;
        }
      }
    }
    if ( *((_QWORD *)this + 91) != v11 )
    {
      WdLogSingleEntry1(2LL, 274LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v30,
            v29,
            v31,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiRender is not used.",
            274LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((__int64 (__fastcall **)(void *const, const struct _DXGKARG_SUBMITCOMMAND *))this + 65) != DXGADAPTER::DefaultDdiSubmitCommand )
    {
      WdLogSingleEntry1(2LL, 275LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v33,
            v32,
            v34,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiSubmitCommand is not used.",
            275LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
  }
  v35 = *((_QWORD *)this + 121);
  if ( v5 )
  {
    if ( !v35 )
    {
      WdLogSingleEntry1(2LL, 280LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v37,
          v36,
          v38,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiCreateProcess is required.",
          280LL,
          0LL,
          0LL,
          0LL,
          0LL);
      ++v4;
    }
    if ( !*((_QWORD *)this + 122) )
    {
      WdLogSingleEntry1(2LL, 281LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v40,
          v39,
          v41,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiDestroyProcess is required.",
          281LL,
          0LL,
          0LL,
          0LL,
          0LL);
      ++v4;
    }
    if ( !*((_QWORD *)this + 118) )
    {
      WdLogSingleEntry1(2LL, 282LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v43,
          v42,
          v44,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiGetRootPageTableSize is required.",
          282LL,
          0LL,
          0LL,
          0LL,
          0LL);
      ++v4;
    }
    if ( !*((_QWORD *)this + 117) )
    {
      WdLogSingleEntry1(2LL, 283LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v46,
          v45,
          v47,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiSetRootPageTable is required.",
          283LL,
          0LL,
          0LL,
          0LL,
          0LL);
      ++v4;
    }
    if ( !*((_QWORD *)this + 116) )
    {
      WdLogSingleEntry1(2LL, 284LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v49,
          v48,
          v50,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiSubmitCommandVirtual is required.",
          284LL,
          0LL,
          0LL,
          0LL,
          0LL);
      ++v4;
    }
  }
  else
  {
    if ( v35 )
    {
      WdLogSingleEntry1(2LL, 290LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v52,
            v51,
            v53,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiCreateProcess is not used.",
            290LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((_QWORD *)this + 122) )
    {
      WdLogSingleEntry1(2LL, 291LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v55,
            v54,
            v56,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiDestroyProcess is not used.",
            291LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((_QWORD *)this + 118) )
    {
      WdLogSingleEntry1(2LL, 292LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v58,
            v57,
            v59,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiGetRootPageTableSize is not used.",
            292LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((_QWORD *)this + 117) )
    {
      WdLogSingleEntry1(2LL, 293LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v61,
            v60,
            v62,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiSetRootPageTable is not used.",
            293LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((_QWORD *)this + 116) )
    {
      WdLogSingleEntry1(2LL, 294LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v64,
            v63,
            v65,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiSubmitCommandVirtual is not used.",
            294LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((_QWORD *)this + 119) )
    {
      WdLogSingleEntry1(2LL, 295LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v67,
            v66,
            v68,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiMapCpuHostAperture is not used.",
            295LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((_QWORD *)this + 120) )
    {
      WdLogSingleEntry1(2LL, 296LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v70,
            v69,
            v71,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiUnmapCpuHostAperture is not used.",
            296LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
  }
  if ( v6 )
  {
    if ( !*((_QWORD *)this + 163) )
    {
      WdLogSingleEntry1(2LL, 301LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v73,
          v72,
          v74,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiBeginExclusiveAccess is required.",
          301LL,
          0LL,
          0LL,
          0LL,
          0LL);
      ++v4;
    }
    if ( !*((_QWORD *)this + 164) )
    {
      WdLogSingleEntry1(2LL, 302LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v76,
          v75,
          v77,
          0,
          0,
          -1,
          (__int64)L"DxgkDdiEndExclusiveAccess is required.",
          302LL,
          0LL,
          0LL,
          0LL,
          0LL);
      ++v4;
    }
  }
  if ( !v111 )
  {
    if ( *((_QWORD *)this + 137) )
    {
      WdLogSingleEntry1(2LL, 307LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v79,
            v78,
            v80,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiCreateHwQueue is not used.",
            307LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((_QWORD *)this + 138) )
    {
      WdLogSingleEntry1(2LL, 308LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v82,
            v81,
            v83,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiDestroyHwQueue is not used.",
            308LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((_QWORD *)this + 140) )
    {
      WdLogSingleEntry1(2LL, 309LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v85,
            v84,
            v86,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiResetHwEngine is not used.",
            309LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((_QWORD *)this + 161) )
    {
      WdLogSingleEntry1(2LL, 310LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v88,
            v87,
            v89,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiResumeContext is not used.",
            310LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((_QWORD *)this + 141) )
    {
      WdLogSingleEntry1(2LL, 311LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v91,
            v90,
            v92,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiResumeHwEngine is not used.",
            311LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((_QWORD *)this + 159) )
    {
      WdLogSingleEntry1(2LL, 312LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v94,
            v93,
            v95,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiSetContextSchedulingProperties is not used.",
            312LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((_QWORD *)this + 156) )
    {
      WdLogSingleEntry1(2LL, 313LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v97,
            v96,
            v98,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiSetSchedulingLogBuffer is not used.",
            313LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((_QWORD *)this + 157) )
    {
      WdLogSingleEntry1(2LL, 314LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v100,
            v99,
            v101,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiSetupPriorityBands is not used.",
            314LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((_QWORD *)this + 167) )
    {
      WdLogSingleEntry1(2LL, 315LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v103,
            v102,
            v104,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiSignalMonitoredFence is not used.",
            315LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((_QWORD *)this + 139) )
    {
      WdLogSingleEntry1(2LL, 316LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v106,
            v105,
            v107,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiSubmitCommandToHwQueue is not used.",
            316LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((_QWORD *)this + 160) )
    {
      WdLogSingleEntry1(2LL, 317LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v109,
            v108,
            v110,
            0,
            0,
            -1,
            (__int64)L"DxgkDdiSuspendContext is not used.",
            317LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
  }
  if ( !v4 )
    return 0LL;
  else
    return 3221225561LL;
}
