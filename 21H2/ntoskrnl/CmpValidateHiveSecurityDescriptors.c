/*
 * XREFs of CmpValidateHiveSecurityDescriptors @ 0x140662298
 * Callers:
 *     CmCheckRegistry @ 0x1406F8F20 (CmCheckRegistry.c)
 * Callees:
 *     SetFailureLocation @ 0x140242D88 (SetFailureLocation.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpResetCachedSecurity @ 0x1405CD224 (CmpResetCachedSecurity.c)
 *     CmpDestroySecurityCache @ 0x1405E07A8 (CmpDestroySecurityCache.c)
 *     CmpCheckSecurityCellAccess @ 0x14060385C (CmpCheckSecurityCellAccess.c)
 *     CmpAdjustSecurityCacheSize @ 0x1406198B0 (CmpAdjustSecurityCacheSize.c)
 *     CmpAddSecurityCellToCache @ 0x140662770 (CmpAddSecurityCellToCache.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x140662AA0 (RtlValidRelativeSecurityDescriptor.c)
 *     HvIsCellAllocated @ 0x1406E22D0 (HvIsCellAllocated.c)
 *     CmpInitSecurityCache @ 0x1406F8190 (CmpInitSecurityCache.c)
 *     HvpMarkCellDirty @ 0x14071F800 (HvpMarkCellDirty.c)
 */

__int64 __fastcall CmpValidateHiveSecurityDescriptors(
        ULONG_PTR BugCheckParameter2,
        int a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // rbx
  _DWORD *v7; // r14
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // r9d
  unsigned int v14; // r12d
  unsigned int v15; // edi
  __int64 v16; // rax
  unsigned int v17; // eax
  ULONG v18; // edx
  __int64 v19; // r8
  int v20; // eax
  unsigned int v21; // ebx
  unsigned int v22; // ebx
  signed int v23; // eax
  __int64 v24; // rdi
  __int64 v25; // rax
  unsigned int v26; // r13d
  ULONG v27; // edx
  int v28; // eax
  __int64 v29; // rdx
  unsigned int v31; // [rsp+20h] [rbp-38h]
  unsigned int v32; // [rsp+20h] [rbp-38h]
  unsigned int v33; // [rsp+20h] [rbp-38h]
  int v34; // [rsp+30h] [rbp-28h]
  unsigned int v35; // [rsp+34h] [rbp-24h]
  __int64 v36; // [rsp+38h] [rbp-20h] BYREF
  __int64 v37; // [rsp+40h] [rbp-18h] BYREF
  __int64 v38; // [rsp+48h] [rbp-10h]
  unsigned int v39; // [rsp+A0h] [rbp+48h]

  v37 = 0LL;
  v36 = 0LL;
  v6 = a4;
  v7 = 0LL;
  v8 = *(_DWORD *)(BugCheckParameter2 + 1864);
  LODWORD(v37) = -1;
  LODWORD(v36) = -1;
  v34 = v8;
  if ( !(unsigned __int8)HvIsCellAllocated(
                           BugCheckParameter2,
                           *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL),
                           0LL) )
  {
    v9 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL);
    v31 = 0;
LABEL_5:
    v10 = -1073741492;
    SetFailureLocation(v9, 0, 9, 0xC000014C, v31);
    return v10;
  }
  v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
          BugCheckParameter2,
          *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL),
          &v37);
  v38 = v11;
  if ( !v11 )
  {
    v9 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL);
    v31 = 16;
    goto LABEL_5;
  }
  if ( -4 - *(_DWORD *)(v11 - 4) < 76 )
  {
    v12 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL);
    v32 = 24;
    v10 = -1073741492;
    v13 = -1073741492;
    goto LABEL_14;
  }
  v14 = *(_DWORD *)(v11 + 44);
  v15 = v14;
  v39 = 0;
  v35 = v14;
  while ( 1 )
  {
    if ( !(unsigned __int8)HvIsCellAllocated(BugCheckParameter2, v14, v6) )
    {
      if ( v15 != v14 )
        goto LABEL_47;
      v33 = 128;
      goto LABEL_70;
    }
    v16 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            v14,
            &v36);
    v7 = (_DWORD *)v16;
    if ( !v16 )
    {
      v32 = 144;
      goto LABEL_58;
    }
    v17 = -4 - *(_DWORD *)(v16 - 4);
    if ( v17 < 0x14 || (v18 = v7[4], v18 + 20 < v18) || v18 + 20 > v17 )
    {
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v36);
      SetFailureLocation(a5, 1, 9, 0xC000014C, 0x98u);
      goto LABEL_47;
    }
    if ( v14 != v15 && v7[2] != v39 )
    {
      v32 = 160;
      goto LABEL_58;
    }
    if ( !RtlValidRelativeSecurityDescriptor(v7 + 5, v18, 0) )
      break;
    if ( v34 )
    {
      v20 = CmpResetCachedSecurity(BugCheckParameter2, v14);
      v10 = v20;
      if ( v20 < 0 )
      {
        v32 = 184;
        goto LABEL_27;
      }
    }
    else
    {
      LOBYTE(v19) = 1;
      v20 = CmpAddSecurityCellToCache(BugCheckParameter2, v14, v19);
      v10 = v20;
      if ( v20 < 0 )
      {
        v32 = 176;
LABEL_27:
        v13 = v20;
        goto LABEL_28;
      }
    }
    v21 = v14;
    v14 = v7[1];
    v39 = v21;
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v36);
    v15 = v35;
    if ( v14 == v35 )
    {
      v7 = (_DWORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
                       BugCheckParameter2,
                       v14,
                       &v36);
      if ( v7[2] == v21 )
      {
        if ( !v34 )
          CmpAdjustSecurityCacheSize(BugCheckParameter2);
        if ( (a2 & 0x2000000) != 0 && *(_DWORD *)(BugCheckParameter2 + 1864) > 1u )
        {
          v22 = 0;
          while ( 1 )
          {
            v23 = CmpCheckSecurityCellAccess(
                    BugCheckParameter2,
                    *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 1880) + 16LL * v22));
            v10 = v23;
            if ( v23 < 0 )
              break;
            if ( ++v22 >= *(_DWORD *)(BugCheckParameter2 + 1864) )
              goto LABEL_42;
          }
          SetFailureLocation(a5, 0, 9, v23, 0xD0u);
          if ( v10 != -1073741670 )
            v10 = -1073741492;
        }
        else
        {
LABEL_42:
          v10 = 0;
        }
        goto LABEL_71;
      }
      v32 = 200;
      v10 = -1073741492;
      v13 = -1073741492;
LABEL_28:
      v12 = a5;
      goto LABEL_14;
    }
    v6 = a4;
  }
  (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v36);
  SetFailureLocation(a5, 1, 9, 0xC000014C, 0xA8u);
LABEL_47:
  if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
  {
    v33 = 112;
LABEL_70:
    v10 = -1073741492;
    SetFailureLocation(a5, 0, 9, 0xC000014C, v33);
    v7 = 0LL;
    goto LABEL_71;
  }
  v24 = v38;
  if ( !(unsigned __int8)HvIsCellAllocated(BugCheckParameter2, *(unsigned int *)(v38 + 44), 0LL) )
  {
    v33 = 32;
    goto LABEL_70;
  }
  v25 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
          BugCheckParameter2,
          *(unsigned int *)(v24 + 44),
          &v36);
  v7 = (_DWORD *)v25;
  if ( !v25 )
  {
    v32 = 48;
    goto LABEL_58;
  }
  v26 = -4 - *(_DWORD *)(v25 - 4);
  if ( v26 < 0x14 || (v27 = *(_DWORD *)(v25 + 16), v27 + 20 < v27) || v27 + 20 > v26 )
  {
    v32 = 80;
LABEL_58:
    v10 = -1073741492;
    v13 = -1073741492;
  }
  else
  {
    if ( !RtlValidRelativeSecurityDescriptor((PSECURITY_DESCRIPTOR)(v25 + 20), v27, 0) )
    {
      v32 = 64;
      goto LABEL_58;
    }
    if ( (unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v24 + 44)) )
    {
      v28 = *(_DWORD *)(v24 + 44);
      v7[2] = v28;
      v7[1] = v28;
      CmpDestroySecurityCache(BugCheckParameter2);
      CmpInitSecurityCache(BugCheckParameter2);
      v10 = -1073741267;
      v29 = *(_QWORD *)(BugCheckParameter2 + 64);
      *a3 = 1;
      *(_DWORD *)(v29 + 4088) |= 4u;
      goto LABEL_71;
    }
    v10 = -1073741443;
    v32 = 96;
    v13 = -1073741443;
  }
  v12 = a5;
LABEL_14:
  SetFailureLocation(v12, 0, 9, v13, v32);
LABEL_71:
  (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v37);
  if ( v7 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v36);
  return v10;
}
