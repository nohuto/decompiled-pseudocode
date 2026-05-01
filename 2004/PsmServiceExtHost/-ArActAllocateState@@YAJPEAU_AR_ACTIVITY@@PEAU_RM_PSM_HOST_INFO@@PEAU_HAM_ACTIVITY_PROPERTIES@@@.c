/*
 * XREFs of ?ArActAllocateState@@YAJPEAU_AR_ACTIVITY@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180083E74
 * Callers:
 *     ?ArActCreate@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@PEAU_ACTIVITY_RESTARTER@@PEAPEAU_AR_ACTIVITY@@@Z @ 0x180084040 (-ArActCreate@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIE.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

__int64 __fastcall ArActAllocateState(
        struct _AR_ACTIVITY *a1,
        struct _RM_PSM_HOST_INFO *a2,
        struct _HAM_ACTIVITY_PROPERTIES *a3)
{
  __int64 v3; // rax
  _OWORD *v6; // rdx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int64 v14; // rax
  __int64 result; // rax
  _DWORD v16[100]; // [rsp+30h] [rbp-1A8h] BYREF

  v3 = 3LL;
  v6 = v16;
  do
  {
    v7 = *((_OWORD *)a3 + 1);
    *v6 = *(_OWORD *)a3;
    v8 = *((_OWORD *)a3 + 2);
    v6[1] = v7;
    v9 = *((_OWORD *)a3 + 3);
    v6[2] = v8;
    v10 = *((_OWORD *)a3 + 4);
    v6[3] = v9;
    v11 = *((_OWORD *)a3 + 5);
    v6[4] = v10;
    v12 = *((_OWORD *)a3 + 6);
    v6[5] = v11;
    v13 = *((_OWORD *)a3 + 7);
    a3 = (struct _HAM_ACTIVITY_PROPERTIES *)((char *)a3 + 128);
    v6[6] = v12;
    v6 += 8;
    *(v6 - 1) = v13;
    --v3;
  }
  while ( v3 );
  *(_QWORD *)v6 = *(_QWORD *)a3;
  v14 = *((_QWORD *)a1 + 4);
  v16[0] |= 0x200000u;
  result = HamCreateActivity(*(_QWORD *)((v14 & 0xFFFFFFFFFFFFFFFCuLL) + 72), a1, a2, v16, (char *)a1 + 40);
  if ( (int)result >= 0 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
      __fastfail(0xEu);
    return 0LL;
  }
  return result;
}
