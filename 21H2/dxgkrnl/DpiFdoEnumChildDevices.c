/*
 * XREFs of DpiFdoEnumChildDevices @ 0x1C020E59C
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01FB06C (DpiFdoStartAdapter.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0011E60 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     DpiAcpiExposeInfo @ 0x1C020E2D0 (DpiAcpiExposeInfo.c)
 *     DpiFdoCreateChildDescriptor @ 0x1C020E8E8 (DpiFdoCreateChildDescriptor.c)
 *     DxgkDWCloneCheckTargetID @ 0x1C020EA70 (DxgkDWCloneCheckTargetID.c)
 *     DpiDxgkDdiQueryChildRelations @ 0x1C020F0B4 (DpiDxgkDdiQueryChildRelations.c)
 *     DpiFdoRemoveChildDescriptors @ 0x1C038B16C (DpiFdoRemoveChildDescriptors.c)
 */

__int64 __fastcall DpiFdoEnumChildDevices(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // r15
  __int64 v3; // r13
  unsigned int v4; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v6; // rsi
  int ChildRelations; // eax
  int ChildDescriptor; // edi
  __int64 v9; // r10
  unsigned int v10; // r12d
  unsigned int v11; // eax
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // r15
  int v17; // eax
  int v18; // ebx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v19; // ebx
  bool v20; // zf
  unsigned int i; // ebx
  unsigned int v23; // eax
  __int64 v24; // rdx
  SIZE_T v25; // rax
  bool v26; // al
  __int64 v27; // rax
  unsigned int v28; // eax
  int v29; // eax
  unsigned int v30; // ecx
  int v31; // eax
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // [rsp+30h] [rbp-68h]
  unsigned int v36; // [rsp+34h] [rbp-64h]
  int v37; // [rsp+38h] [rbp-60h]
  char v39; // [rsp+A8h] [rbp+10h]
  unsigned int v40; // [rsp+B0h] [rbp+18h]
  unsigned int v41; // [rsp+B8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 64);
  v2 = a1;
  v3 = *(_QWORD *)(v1 + 40);
  v4 = 28 * (*(_DWORD *)(v1 + 2680) + 1);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v4, 0x74727044u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
  {
    ChildDescriptor = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    goto LABEL_38;
  }
  memset(PoolWithTag, 0, v4);
  ChildRelations = DpiDxgkDdiQueryChildRelations(v3, *(_QWORD *)(v1 + 48), v6, v4);
  ChildDescriptor = ChildRelations;
  if ( ChildRelations < 0 )
  {
    WdLogSingleEntry2(2LL, *(_QWORD *)(v3 + 200), ChildRelations);
    goto LABEL_38;
  }
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v1 + 3304), 1u);
  KeWaitForSingleObject((PVOID)(v1 + 3408), Executive, 0, 0, 0LL);
  v35 = -1;
  v9 = 0LL;
  v10 = -1;
  v11 = 0;
  v12 = 0xFFFFFFFFLL;
  v39 = 0;
  v13 = -1;
  v40 = -1;
  LOBYTE(v14) = 0;
  v37 = -1;
  v36 = 0;
  *(_DWORD *)(v1 + 3480) = 0;
  *(_WORD *)(v1 + 2698) = 257;
  v41 = 0;
  if ( !*(_DWORD *)(v1 + 2680) )
  {
LABEL_16:
    if ( *(_QWORD *)(v1 + 3184) == v9 )
    {
      if ( !v11 )
      {
        v20 = 0;
LABEL_24:
        if ( v20 )
          *(_DWORD *)(v1 + 3224) = v13;
        if ( v10 != -1 )
        {
          v34 = 7LL * v10;
          if ( v6[v34 + 1] == 6 )
            v6[v34 + 1] = 0x80000000;
          if ( (_BYTE)v14 )
          {
            WdLogSingleEntry1(2LL, 0LL);
            *(_DWORD *)(v1 + 2720) |= 1u;
          }
        }
        if ( *(_BYTE *)(v1 + 1157) == 1 )
          DpiAcpiExposeInfo(v2);
        for ( i = 0; i < *(_DWORD *)(v1 + 2680); ++i )
        {
          LOBYTE(v14) = 1;
          ChildDescriptor = DpiFdoCreateChildDescriptor(
                              v1,
                              v6[7 * i + 6],
                              v14,
                              (unsigned int)v6 + 28 * i,
                              (__int64)&v6[7 * i + 1],
                              v6[7 * i + 5]);
          if ( ChildDescriptor < 0 )
            break;
        }
        goto LABEL_32;
      }
    }
    else
    {
      v20 = v11 == 1;
      if ( v11 <= 1 )
        goto LABEL_24;
    }
LABEL_98:
    ChildDescriptor = -1073741637;
    v24 = -1073741637LL;
LABEL_94:
    WdLogSingleEntry1(2LL, v24);
    goto LABEL_32;
  }
  v15 = 0LL;
  while ( 1 )
  {
    v16 = 7 * v15;
    if ( v6[7 * v15 + 4] == 2 )
    {
      WdLogSingleEntry1(2LL, 0LL);
      v12 = v40;
      v9 = 0LL;
      v6[v16 + 4] = 4;
    }
    v17 = v6[v16];
    if ( v17 == 1 )
    {
      *(_BYTE *)(v1 + 2698) &= DxgkDWCloneCheckTargetID((unsigned int)v6[v16 + 6], v12, v14, -1073741637LL);
      v18 = v6[v16 + 6];
      DXGGLOBAL_GetGlobal();
      *(_BYTE *)(v1 + 2699) &= (v18 & 0xF0000000) == 0;
      if ( *(_DWORD *)(v3 + 28) < 0x104Fu )
      {
        v6[v16 + 1] = -1;
        v19 = D3DKMDT_VOT_OTHER;
        WdLogSingleEntry1(3LL, 0LL);
      }
      else
      {
        v19 = v6[v16 + 1];
        if ( v19 < D3DKMDT_VOT_HD15 )
        {
          if ( (v19 & 0x7FFFFFFFu) <= 0xE )
            v23 = 0x80000000;
          else
            v23 = -1;
          v19 = v23;
          v6[v16 + 1] = v23;
        }
        else
        {
          v6[v16 + 1] = v19;
          if ( (unsigned int)v19 >= D3DKMDT_VOT_MIRACAST
            && (unsigned int)v19 <= (D3DKMDT_VOT_SVIDEO_7PIN|D3DKMDT_VOT_INDIRECT_WIRED) )
          {
            if ( v6[v16 + 4] != 4 )
              goto LABEL_46;
            if ( v19 == D3DKMDT_VOT_MIRACAST )
            {
              ++v36;
              v37 = v6[v16 + 6];
            }
            else if ( !*(_BYTE *)(v1 + 1159) )
            {
              goto LABEL_46;
            }
          }
        }
      }
      if ( !IsInternalVideoOutput(v19) && v19 != D3DKMDT_VOT_LVDS )
        goto LABEL_13;
      v12 = v40;
      if ( v40 != -1 )
      {
        ChildDescriptor = -1073741637;
        v33 = (unsigned int)v6[v16 + 6];
        v32 = (unsigned int)v6[7 * v40 + 6];
        goto LABEL_97;
      }
      *(_DWORD *)(v1 + 3484) = v6[v16 + 6];
      if ( *(_BYTE *)(*(_QWORD *)(v1 + 168) + 108LL) == (_BYTE)v9
        && (*(_BYTE *)(v1 + 1154) == (_BYTE)v9 || *(_BYTE *)(v1 + 480) == (_BYTE)v9)
        && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL) + 28LL) >= 0x4000u
        && *(_BYTE *)(v1 + 2692) == (_BYTE)v9 )
      {
LABEL_46:
        ChildDescriptor = -1073741637;
        v24 = -1073741637LL;
        goto LABEL_94;
      }
      if ( v10 == -1 )
      {
        v10 = v41;
        v35 = v19;
        goto LABEL_14;
      }
      if ( *(_BYTE *)(v1 + 2692) != (_BYTE)v9 )
        goto LABEL_14;
      v25 = RtlCompareMemory((const void *)(v1 + 544), &GUID_BUS_VMBUS, 0x10uLL);
      v9 = 0LL;
      if ( v25 == 16 )
      {
        if ( byte_1C0130498 )
          goto LABEL_13;
      }
      v39 = 1;
      if ( v19 == v35 )
        goto LABEL_66;
      switch ( v19 )
      {
        case D3DKMDT_VOT_INTERNAL:
LABEL_65:
          v27 = v10;
          v10 = v41;
          v35 = v19;
          v6[7 * v27 + 1] = -1;
LABEL_13:
          v12 = v40;
          goto LABEL_14;
        case D3DKMDT_VOT_LVDS:
          v26 = v35 != 0x80000000;
          break;
        case D3DKMDT_VOT_DISPLAYPORT_EMBEDDED:
          v26 = v35 == 13;
          break;
        default:
          goto LABEL_66;
      }
      if ( v26 )
        goto LABEL_65;
LABEL_66:
      v6[v16 + 1] = -1;
      goto LABEL_13;
    }
    if ( v17 != 3 )
    {
      if ( v17 != 2 && *(_DWORD *)(v3 + 28) >= 0x700Au )
      {
        ChildDescriptor = -1073741637;
        v32 = (int)v6[v16];
        v33 = (unsigned int)v6[7 * v15 + 6];
        goto LABEL_97;
      }
      goto LABEL_14;
    }
    v28 = *(_DWORD *)(v3 + 28);
    if ( v28 < 0x7007 )
    {
      ChildDescriptor = -1073741637;
      WdLogSingleEntry2(2LL, v28, 28680LL);
      v9 = 0LL;
      goto LABEL_13;
    }
    if ( v10 != -1 )
      break;
    if ( *(_BYTE *)(*(_QWORD *)(v1 + 168) + 108LL) == (_BYTE)v9
      && (*(_BYTE *)(v1 + 1154) == (_BYTE)v9 || *(_BYTE *)(v1 + 480) == (_BYTE)v9)
      && *(_BYTE *)(v1 + 2692) == (_BYTE)v9
      || *(_BYTE *)(v1 + 2692) == (_BYTE)v9 && byte_1C0130498 == (_BYTE)v9 && (_DWORD)v12 != -1 )
    {
      goto LABEL_98;
    }
    v29 = DxgkDWCloneCheckTargetID((unsigned int)v6[v16 + 6], v12, v14, -1073741637LL);
    v9 = 0LL;
    if ( !v29 )
    {
      ChildDescriptor = -1073741637;
      v24 = (unsigned int)v6[v16 + 6];
      goto LABEL_94;
    }
    v30 = v6[v16 + 1];
    if ( v30 < 4 || v30 > 6 && (v30 <= 7 || v30 > 0xD && v30 != 18 && v30 != 0x80000000) )
    {
      ChildDescriptor = -1073741637;
      v33 = (int)v6[v16 + 1];
      v32 = (unsigned int)v6[7 * v15 + 6];
      goto LABEL_97;
    }
    v31 = v6[v16 + 4];
    if ( v31 != 4 && v31 != 1 )
    {
      ChildDescriptor = -1073741637;
      v24 = (unsigned int)v6[7 * v15 + 6];
      goto LABEL_94;
    }
    v12 = v40;
    if ( v40 == -1 )
    {
      v12 = v41;
      v40 = v41;
      *(_DWORD *)(v1 + 3484) = v6[v16 + 6];
    }
LABEL_14:
    v15 = v41 + 1;
    v41 = v15;
    if ( (unsigned int)v15 >= *(_DWORD *)(v1 + 2680) )
    {
      v11 = v36;
      v2 = a1;
      v13 = v37;
      LOBYTE(v14) = v39;
      goto LABEL_16;
    }
  }
  ChildDescriptor = -1073741637;
  v32 = (unsigned int)v6[7 * v15 + 6];
  v33 = (unsigned int)v6[7 * v10 + 6];
LABEL_97:
  WdLogSingleEntry2(2LL, v33, v32);
LABEL_32:
  KeReleaseMutex((PRKMUTEX)(v1 + 3408), 0);
  ExReleaseResourceLite((PERESOURCE)(v1 + 3304));
  KeLeaveCriticalRegion();
  if ( ChildDescriptor >= 0 )
  {
LABEL_33:
    ExFreePoolWithTag(v6, 0);
    return (unsigned int)ChildDescriptor;
  }
  v2 = a1;
LABEL_38:
  DpiFdoRemoveChildDescriptors(v2);
  if ( v6 )
    goto LABEL_33;
  return (unsigned int)ChildDescriptor;
}
