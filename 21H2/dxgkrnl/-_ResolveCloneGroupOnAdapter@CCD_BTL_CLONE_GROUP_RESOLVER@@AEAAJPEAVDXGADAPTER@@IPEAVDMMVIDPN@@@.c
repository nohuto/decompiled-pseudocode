/*
 * XREFs of ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1C01AF874
 * Callers:
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_0_1_ @ 0x1C01B03F0 (_BtlPreAcquireSharedAccess_-CCD_BTL_CLONE_GROUP_RESOLVER--_ResolveAdaptersCallback_0_1_.c)
 * Callees:
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C01A8564 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?QueryUnicodeMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_UNICODE_STRING@@@Z @ 0x1C01AF7FC (-QueryUnicodeMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_UNICODE_STRING@@@Z.c)
 *     ?QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z @ 0x1C01AFBA0 (-QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z.c)
 *     ?DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@3PEAE44@Z @ 0x1C01AFC48 (-DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TEC.c)
 */

__int64 __fastcall CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveCloneGroupOnAdapter(
        CCD_SET_STRING_ID **this,
        struct DXGADAPTER *a2,
        unsigned int a3,
        struct DMMVIDPN *a4)
{
  __int64 v4; // rdi
  struct DMMVIDPN *v5; // r13
  int v8; // eax
  unsigned int v9; // ebx
  CCD_SET_STRING_ID *v10; // rcx
  int PathSourceFromTarget; // r14d
  unsigned int v12; // ebx
  int v13; // eax
  __int64 TargetIdFromCcdMonitorId; // r13
  CCD_SET_STRING_ID *v15; // r10
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // r8d
  char v19; // r9
  __int64 v20; // r8
  unsigned int v21; // r9d
  __int64 v22; // rdx
  __int64 v23; // r8
  unsigned int v25; // r9d
  unsigned int v26; // r8d
  CCD_SET_STRING_ID *v27; // rdx
  __int64 v28; // rcx
  CCD_SET_STRING_ID *v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v32; // [rsp+28h] [rbp-58h]
  unsigned __int8 v33; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int8 v34[3]; // [rsp+51h] [rbp-2Fh] BYREF
  unsigned int v35; // [rsp+54h] [rbp-2Ch] BYREF
  unsigned int v36; // [rsp+58h] [rbp-28h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v37; // [rsp+5Ch] [rbp-24h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v38; // [rsp+60h] [rbp-20h] BYREF
  unsigned int v39; // [rsp+64h] [rbp-1Ch] BYREF
  int v40; // [rsp+68h] [rbp-18h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-10h] BYREF
  unsigned int v42; // [rsp+B0h] [rbp+30h] BYREF
  struct DMMVIDPN *v43; // [rsp+C8h] [rbp+48h]

  v43 = a4;
  v4 = a3;
  v39 = 0;
  v36 = 0;
  v5 = a4;
  v8 = CCD_SET_STRING_ID::QueryCloneInfo(*this, a3, &v36, &v39, &v42);
  v9 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry5(1LL, v8, a2, v4, *this, v4);
    return v9;
  }
  else
  {
    v10 = *this;
    PathSourceFromTarget = -1;
    v12 = v4;
    if ( (unsigned int)v4 >= *((unsigned __int16 *)*this + 16) )
    {
LABEL_21:
      if ( v5 )
        return 3221226021LL;
      PathSourceFromTarget = 0;
      v25 = *(_DWORD *)(*((_QWORD *)a2 + 349) + 96LL);
      if ( !v25 )
        return 3221226021LL;
      while ( 1 )
      {
        v26 = 0;
        if ( !*((_WORD *)*this + 16) )
          break;
        v27 = this[1];
        while ( 1 )
        {
          v28 = 296LL * v26;
          if ( _bittest64((const signed __int64 *)((char *)v27 + v28 + 56), 0x2Du) )
          {
            if ( *(_DWORD *)((char *)v27 + v28 + 80) == PathSourceFromTarget
              && *(_DWORD *)((char *)v27 + v28 + 72) == *((_DWORD *)a2 + 101)
              && *(_DWORD *)((char *)v27 + v28 + 76) == *((_DWORD *)a2 + 102) )
            {
              break;
            }
          }
          if ( ++v26 >= *((unsigned __int16 *)*this + 16) )
            goto LABEL_27;
        }
        if ( ++PathSourceFromTarget >= v25 )
          return 3221226021LL;
      }
LABEL_27:
      if ( PathSourceFromTarget == -1 )
        return 3221226021LL;
    }
    else
    {
      while ( 1 )
      {
        v42 = 0;
        v13 = CCD_SET_STRING_ID::QueryCloneInfo(v10, v12, &v42, 0LL, 0LL);
        TargetIdFromCcdMonitorId = v13;
        if ( v13 < 0 )
        {
          v31 = 1LL;
          goto LABEL_47;
        }
        if ( v42 != v36 )
          goto LABEL_33;
        v15 = *this;
        v40 = 0;
        if ( v12 >= *((unsigned __int16 *)v15 + 16) )
        {
          WdLogSingleEntry4(1LL, v15, *((unsigned __int16 *)v15 + 16), v12, &v40);
          v32 = (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v12;
          v9 = -1073741811;
          WdLogSingleEntry5(1LL, -1073741811LL, a2, v4, *this, v32);
          return v9;
        }
        v16 = *(unsigned __int16 *)(*((_QWORD *)v15 + 3) + 8LL * v12 + 4);
        v40 = v16;
        if ( (_WORD)v16 )
        {
          WdLogSingleEntry5(1LL, a2, v4, v15, v16, v12);
          return 3221225474LL;
        }
        v35 = -1;
        v37 = D3DKMDT_VOT_UNINITIALIZED;
        v38 = D3DKMDT_VOT_UNINITIALIZED;
        v34[0] = 0;
        LOBYTE(v42) = 0;
        UnicodeString = 0LL;
        v33 = 0;
        v17 = CCD_SET_STRING_ID::QueryUnicodeMonitorId(v15, v12, &UnicodeString);
        TargetIdFromCcdMonitorId = v17;
        if ( v17 < 0 )
        {
LABEL_42:
          v31 = 2LL;
LABEL_47:
          WdLogSingleEntry5(v31, TargetIdFromCcdMonitorId, a2, v4, *this, v12);
          return (unsigned int)TargetIdFromCcdMonitorId;
        }
        TargetIdFromCcdMonitorId = (int)DmmGetTargetIdFromCcdMonitorId(
                                          a2,
                                          &UnicodeString,
                                          v18,
                                          &v35,
                                          &v37,
                                          &v38,
                                          v34,
                                          (unsigned __int8 *)&v42,
                                          &v33);
        RtlFreeUnicodeString(&UnicodeString);
        UnicodeString = 0LL;
        if ( (_DWORD)TargetIdFromCcdMonitorId == -1073741275 )
          break;
        if ( (int)TargetIdFromCcdMonitorId < 0 )
          goto LABEL_42;
        v19 = v42;
        if ( v12 != (_DWORD)v4 && (_BYTE)v42 )
          goto LABEL_33;
        v5 = v43;
        v20 = 296LL * v12;
        *(_DWORD *)((char *)this[1] + v20 + 84) = v35;
        *(_DWORD *)((char *)this[1] + v20 + 144) = v37;
        *(_DWORD *)((char *)this[1] + v20 + 148) = v38;
        *((_BYTE *)this[1] + v20 + 185) = (v33 != 0 ? 4 : 0) | (v19 != 0 ? 2 : 0) | (v34[0] != 0);
        *(_DWORD *)((char *)this[1] + v20 + 240) = v39 | 0xFE520000;
        *(_QWORD *)((char *)this[1] + v20 + 56) |= 0xCC00000000000uLL;
        if ( v5 )
        {
          if ( PathSourceFromTarget == -1 )
          {
            PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget((struct DMMVIDPN *)((char *)v5 + 96), v35);
            if ( PathSourceFromTarget != -1 )
            {
              v21 = 0;
              if ( (_DWORD)v4 )
              {
                v29 = this[1];
                while ( 1 )
                {
                  v30 = 296LL * v21;
                  if ( _bittest64((const signed __int64 *)((char *)v29 + v30 + 56), 0x2Du) )
                  {
                    if ( *(_DWORD *)((char *)v29 + v30 + 80) == PathSourceFromTarget
                      && *(_DWORD *)((char *)v29 + v30 + 72) == *((_DWORD *)a2 + 101)
                      && *(_DWORD *)((char *)v29 + v30 + 76) == *((_DWORD *)a2 + 102) )
                    {
                      break;
                    }
                  }
                  if ( ++v21 >= (unsigned int)v4 )
                    goto LABEL_15;
                }
                PathSourceFromTarget = -1;
              }
            }
          }
        }
LABEL_15:
        v10 = *this;
        if ( ++v12 >= *((unsigned __int16 *)*this + 16) )
          goto LABEL_16;
      }
      if ( v12 == (_DWORD)v4 )
        return 3221226021LL;
LABEL_33:
      v5 = v43;
LABEL_16:
      if ( PathSourceFromTarget == -1 )
        goto LABEL_21;
    }
    if ( (unsigned int)v4 < v12 )
    {
      v22 = 296 * v4;
      v23 = v12 - (unsigned int)v4;
      do
      {
        v22 += 296LL;
        *(_QWORD *)((char *)this[1] + v22 - 224) = *(_QWORD *)((char *)a2 + 404);
        *(_DWORD *)((char *)this[1] + v22 - 216) = PathSourceFromTarget;
        *(_QWORD *)((char *)this[1] + v22 - 240) |= 0x300000000000uLL;
        --v23;
      }
      while ( v23 );
    }
    return 0LL;
  }
}
