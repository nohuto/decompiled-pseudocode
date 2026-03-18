/*
 * XREFs of CmpValidateHiveSecurityDescriptors @ 0x1405E14A0
 * Callers:
 *     CmCheckRegistry @ 0x1405DF080 (CmCheckRegistry.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x140268230 (CmpFindSecurityCellCacheIndex.c)
 *     SetFailureLocation @ 0x1403238E8 (SetFailureLocation.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     CmpInitSecurityCache @ 0x1405DE7F0 (CmpInitSecurityCache.c)
 *     CmpAddSecurityCellToCache @ 0x1405E1948 (CmpAddSecurityCellToCache.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x1405E1E10 (RtlValidRelativeSecurityDescriptor.c)
 *     CmpAdjustSecurityCacheSize @ 0x1405E20F8 (CmpAdjustSecurityCacheSize.c)
 *     HvIsCellAllocated @ 0x140675890 (HvIsCellAllocated.c)
 *     CmpDestroySecurityCache @ 0x1406A31E8 (CmpDestroySecurityCache.c)
 *     CmpCheckSecurityCellAccess @ 0x1406C8B6C (CmpCheckSecurityCellAccess.c)
 *     HvpMarkCellDirty @ 0x140707C20 (HvpMarkCellDirty.c)
 */

__int64 __fastcall CmpValidateHiveSecurityDescriptors(
        ULONG_PTR BugCheckParameter2,
        int a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // rax
  unsigned int v11; // r13d
  int v12; // edi
  unsigned int v13; // r15d
  char IsCellAllocated; // al
  __int64 v15; // r12
  __int64 v16; // rax
  _DWORD *v17; // r15
  unsigned int v18; // eax
  ULONG v19; // edx
  __int64 v20; // r8
  int v21; // eax
  void (__fastcall *v22)(ULONG_PTR, __int64 *); // rax
  unsigned int v23; // ebx
  int v24; // r9d
  int v25; // r8d
  unsigned int v26; // ebx
  int v27; // eax
  __int64 v28; // r15
  __int64 v29; // rax
  unsigned int v30; // edi
  ULONG v31; // edx
  __int64 v32; // rbx
  int v33; // eax
  __int64 v34; // rdx
  int v36; // [rsp+20h] [rbp-38h]
  int v37; // [rsp+20h] [rbp-38h]
  int v38; // [rsp+20h] [rbp-38h]
  unsigned int v39; // [rsp+30h] [rbp-28h]
  int v40; // [rsp+34h] [rbp-24h]
  __int64 v41; // [rsp+38h] [rbp-20h] BYREF
  __int64 v42; // [rsp+40h] [rbp-18h] BYREF
  __int64 v43; // [rsp+48h] [rbp-10h]
  unsigned int v44; // [rsp+A0h] [rbp+48h] BYREF
  int v45; // [rsp+A8h] [rbp+50h]
  _BYTE *v46; // [rsp+B0h] [rbp+58h]
  __int64 v47; // [rsp+B8h] [rbp+60h]

  v47 = a4;
  v46 = a3;
  v45 = a2;
  v42 = 0LL;
  v41 = 0LL;
  v6 = a4;
  v7 = *(_DWORD *)(BugCheckParameter2 + 1864);
  LODWORD(v42) = -1;
  LODWORD(v41) = -1;
  v40 = v7;
  if ( !(unsigned __int8)HvIsCellAllocated(
                           BugCheckParameter2,
                           *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL),
                           0LL) )
  {
    v8 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL);
    v36 = 0;
LABEL_5:
    v9 = -1073741492;
    SetFailureLocation(v8, 0, 9, -1073741492, v36);
    return v9;
  }
  v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
          BugCheckParameter2,
          *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL),
          &v42);
  v43 = v10;
  if ( !v10 )
  {
    v8 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL);
    v36 = 16;
    goto LABEL_5;
  }
  v11 = *(_DWORD *)(v10 + 44);
  v12 = -4;
  v13 = v11;
  v39 = v11;
  v44 = 0;
  while ( 1 )
  {
    IsCellAllocated = HvIsCellAllocated(BugCheckParameter2, v11, v6);
    v15 = a5;
    if ( !IsCellAllocated )
    {
      if ( v13 != v11 )
        goto LABEL_42;
      v38 = 128;
      goto LABEL_65;
    }
    v16 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            v11,
            &v41);
    v17 = (_DWORD *)v16;
    if ( !v16 )
    {
      v37 = 144;
      goto LABEL_53;
    }
    v18 = v12 - *(_DWORD *)(v16 - 4);
    if ( v18 < 0x14 || (v19 = v17[4], v19 + 20 < v19) || v19 + 20 > v18 )
    {
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v41);
      SetFailureLocation(v15, 1, 9, -1073741492, 152);
      goto LABEL_42;
    }
    if ( v11 != v39 && v17[2] != v44 )
    {
      v37 = 160;
      goto LABEL_53;
    }
    if ( !RtlValidRelativeSecurityDescriptor(v17 + 5, v19, 0) )
    {
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v41);
      SetFailureLocation(v15, 1, 9, -1073741492, 168);
LABEL_42:
      if ( (v45 & 0x20000) == 0 && (BYTE3(NlsMbCodePageTag) || (CmpBootType & 6) != 0) )
      {
        v28 = v43;
        if ( !(unsigned __int8)HvIsCellAllocated(BugCheckParameter2, *(unsigned int *)(v43 + 44), 0LL) )
        {
          v38 = 32;
          goto LABEL_65;
        }
        v29 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
                BugCheckParameter2,
                *(unsigned int *)(v28 + 44),
                &v41);
        v17 = (_DWORD *)v29;
        if ( !v29 )
        {
          v37 = 48;
          goto LABEL_53;
        }
        v30 = v12 - *(_DWORD *)(v29 - 4);
        if ( v30 < 0x14 || (v31 = *(_DWORD *)(v29 + 16), v31 + 20 < v31) || v31 + 20 > v30 )
        {
          v37 = 80;
LABEL_53:
          v9 = -1073741492;
          v24 = -1073741492;
        }
        else
        {
          if ( !RtlValidRelativeSecurityDescriptor((PSECURITY_DESCRIPTOR)(v29 + 20), v31, 0) )
          {
            v37 = 64;
            goto LABEL_53;
          }
          v32 = v43;
          if ( (unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v43 + 44)) )
          {
            v33 = *(_DWORD *)(v32 + 44);
            v17[2] = v33;
            v17[1] = v33;
            CmpDestroySecurityCache(BugCheckParameter2);
            CmpInitSecurityCache(BugCheckParameter2);
            v9 = -1073741267;
            v34 = *(_QWORD *)(BugCheckParameter2 + 64);
            *v46 = 1;
            *(_DWORD *)(v34 + 4088) |= 4u;
            goto LABEL_66;
          }
          v9 = -1073741443;
          v37 = 96;
          v24 = -1073741443;
        }
LABEL_54:
        SetFailureLocation(v15, 0, 9, v24, v37);
        goto LABEL_66;
      }
      v38 = 112;
LABEL_65:
      v9 = -1073741492;
      SetFailureLocation(v15, 0, 9, -1073741492, v38);
      v17 = 0LL;
      goto LABEL_66;
    }
    if ( v40 )
    {
      v44 = 0;
      if ( !CmpFindSecurityCellCacheIndex(BugCheckParameter2, v11, &v44) )
      {
        v37 = 192;
        goto LABEL_29;
      }
    }
    else
    {
      LOBYTE(v20) = 1;
      v21 = CmpAddSecurityCellToCache(BugCheckParameter2, v11, v20);
      v9 = v21;
      if ( v21 < 0 )
      {
        v37 = 176;
        v24 = v21;
        goto LABEL_54;
      }
      v12 = v40 - 4;
    }
    v22 = *(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16);
    v23 = v11;
    v11 = v17[1];
    v44 = v23;
    v22(BugCheckParameter2, &v41);
    v13 = v39;
    if ( v11 == v39 )
      break;
    v6 = v47;
  }
  v17 = (_DWORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
                    BugCheckParameter2,
                    v11,
                    &v41);
  if ( v17[2] != v23 )
  {
    v37 = 200;
LABEL_29:
    v9 = -1073741492;
    v24 = -1073741492;
    goto LABEL_54;
  }
  if ( !v40 )
    CmpAdjustSecurityCacheSize(BugCheckParameter2);
  if ( (v45 & 0x2000000) != 0 && *(_DWORD *)(BugCheckParameter2 + 1864) > 1u )
  {
    v26 = 0;
    while ( 1 )
    {
      LOBYTE(v25) = 1;
      v27 = CmpCheckSecurityCellAccess(
              BugCheckParameter2,
              *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 1880) + 16LL * v26),
              v25,
              131097,
              0);
      v9 = v27;
      if ( v27 < 0 )
        break;
      if ( ++v26 >= *(_DWORD *)(BugCheckParameter2 + 1864) )
        goto LABEL_37;
    }
    SetFailureLocation(v15, 0, 9, v27, 208);
    if ( v9 != -1073741670 )
      v9 = -1073741492;
  }
  else
  {
LABEL_37:
    v9 = 0;
  }
LABEL_66:
  (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v42);
  if ( v17 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v41);
  return v9;
}
