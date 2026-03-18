/*
 * XREFs of NtUserTranslateAccelerator @ 0x1C0102EB0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0067BB8 (HMValidateHandle.c)
 *     xxxTranslateAccelerator @ 0x1C0103018 (xxxTranslateAccelerator.c)
 */

__int64 __fastcall NtUserTranslateAccelerator(__int64 a1, unsigned __int64 a2, __int128 *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // r8
  unsigned int v10; // ebx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int128 v19; // [rsp+28h] [rbp-70h] BYREF
  __int64 v20; // [rsp+38h] [rbp-60h]
  __int128 v21; // [rsp+40h] [rbp-58h] BYREF
  __int64 v22; // [rsp+50h] [rbp-48h]
  __int128 v23; // [rsp+58h] [rbp-40h]
  __int128 v24; // [rsp+68h] [rbp-30h]
  __int128 v25; // [rsp+78h] [rbp-20h]

  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (__int128 *)MmUserProbeAddress;
  v23 = *a3;
  v24 = a3[1];
  v25 = a3[2];
  v8 = ValidateHwnd(a1);
  v10 = 0;
  if ( v8 )
  {
    v11 = HMValidateHandle(a2, 8u);
    if ( v11 )
    {
      *(_QWORD *)&v19 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v19;
      *((_QWORD *)&v19 + 1) = v8;
      HMLockObject(v8);
      *(_QWORD *)&v21 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v21;
      *((_QWORD *)&v21 + 1) = v11;
      HMLockObject(v11);
      v10 = xxxTranslateAccelerator(v8);
      ThreadUnlock1(v13, v12, v14);
      ThreadUnlock1(v16, v15, v17);
    }
  }
  UserSessionSwitchLeaveCrit(v7, v6, v9);
  return v10;
}
