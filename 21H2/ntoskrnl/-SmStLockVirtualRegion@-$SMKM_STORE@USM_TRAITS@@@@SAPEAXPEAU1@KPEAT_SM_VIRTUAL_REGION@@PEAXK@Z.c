/*
 * XREFs of ?SmStLockVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z @ 0x1402910BC
 * Callers:
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14028FAE0 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 * Callees:
 *     ?SmStCheckLockInProgressRegionComplete@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGION@@K@Z @ 0x14022B5AC (-SmStCheckLockInProgressRegionComplete@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGIO.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x1402911E4 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     ?SmStFindVirtualLockedRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_SM_VIRTUAL_LOCKED_REGION@@PEAU1@KPEAX@Z @ 0x140291610 (-SmStFindVirtualLockedRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_SM_VIRTUAL_LOCKED_REGION@@PEAU1@K.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStLockVirtualRegion(
        __int64 a1,
        unsigned int a2,
        __int64 *a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v9; // rdx
  __int64 VirtualLockedRegion; // rax
  __int64 v11; // r8
  _QWORD *v12; // r15
  int v13; // edx
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v19; // [rsp+20h] [rbp-30h] BYREF
  __int64 v20; // [rsp+28h] [rbp-28h]
  _OWORD v21[2]; // [rsp+30h] [rbp-20h] BYREF

  if ( *a3 < 0 )
  {
    v16 = a4;
    goto LABEL_8;
  }
  v9 = *(_QWORD *)(a1 + 6576);
  if ( v9 && !(unsigned int)SMKM_STORE<SM_TRAITS>::SmStCheckLockInProgressRegionComplete(a1, v9, 0) )
    return 0LL;
  VirtualLockedRegion = SMKM_STORE<SM_TRAITS>::SmStFindVirtualLockedRegion(a1, (a5 >> 7) & 7, 0LL);
  *(_QWORD *)((char *)&v21[1] + 4) &= v11;
  HIDWORD(v21[1]) &= v11;
  v12 = (_QWORD *)VirtualLockedRegion;
  v20 = *(unsigned int *)(a1 + 6208);
  *(_QWORD *)(a1 + 6576) = a3;
  v19 = a4;
  LODWORD(v21[0]) = v13;
  *(_OWORD *)((char *)v21 + 4) = 0LL;
  if ( (a5 & 1) != 0 )
    DWORD1(v21[0]) |= 1u;
  v14 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *, _QWORD))SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand)(
          a1,
          4LL,
          &v19,
          (a5 & 0x20 | 0x10) >> 2);
  if ( v14 < 0 )
  {
    if ( v14 == -1073741536 )
      return 3LL;
    *(_QWORD *)(a1 + 6576) = 0LL;
    return 0LL;
  }
  *(_QWORD *)(a1 + 6576) = 0LL;
  if ( (SDWORD2(v21[1]) & 0x80000000) == 0 )
  {
    v15 = *((_QWORD *)&v21[0] + 1);
    *v12 = *((_QWORD *)&v21[0] + 1);
    v16 = *(_QWORD *)(v15 + 24);
LABEL_8:
    v17 = *(_QWORD *)(a1 + 6568);
    if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      _bittestandreset(*(signed __int32 **)(v17 + 16), a2);
    if ( (*(_BYTE *)(a1 + 6021) & 0x20) != 0 && *a3 >= 0 )
    {
      v20 = *(unsigned int *)(a1 + 6208);
      v19 = a4;
      memset(v21, 0, sizeof(v21));
      ((void (__fastcall *)(__int64, __int64, __int64 *, __int64))SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand)(
        a1,
        6LL,
        &v19,
        8LL);
    }
    return v16;
  }
  v16 = 0LL;
  if ( DWORD2(v21[1]) == -1073740749 )
  {
    v16 = 1LL;
    *(_WORD *)a3 |= 0x4000u;
  }
  return v16;
}
