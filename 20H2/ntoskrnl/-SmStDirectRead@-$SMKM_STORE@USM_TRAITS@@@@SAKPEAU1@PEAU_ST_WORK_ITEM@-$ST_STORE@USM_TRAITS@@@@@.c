/*
 * XREFs of ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x14025CA90
 * Callers:
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x140256F90 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 * Callees:
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x14025BFF8 (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x14025CBD8 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x1402AD400 (KeExpandKernelStackAndCalloutInternal.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStDirectRead(__int64 a1, __int128 *a2)
{
  __int64 v2; // rsi
  unsigned int v3; // ebx
  __int64 Context; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm0
  __int128 v10; // xmm1
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-39h] BYREF
  __int128 v12; // [rsp+40h] [rbp-29h]
  __int128 v13; // [rsp+50h] [rbp-19h]
  __int128 v14; // [rsp+60h] [rbp-9h]
  _OWORD v15[3]; // [rsp+70h] [rbp+7h] BYREF

  v2 = 0LL;
  memset(v15, 0, sizeof(v15));
  v3 = 0;
  *(_OWORD *)BugCheckParameter3 = 0LL;
  v12 = 0LL;
  if ( KeGetCurrentThread()->ApcStateIndex != 1 || KeGetCurrentThread()->ApcState.Process == *(_KPROCESS **)(a1 + 6584) )
  {
    KiStackAttachProcess(*(_QWORD *)(a1 + 6584));
    v3 = 2;
    Context = ST_STORE<SM_TRAITS>::StAcquireReadContext(a1);
    v2 = Context;
    if ( Context )
    {
      v7 = *a2;
      BugCheckParameter3[0] = a1;
      v13 = v7;
      v8 = a2[1];
      v3 = 3;
      BugCheckParameter3[1] = (ULONG_PTR)a2;
      *(_QWORD *)&v12 = Context;
      v14 = v8;
      if ( (int)KeExpandKernelStackAndCalloutInternal(
                  (ULONG_PTR)SMKM_STORE<SM_TRAITS>::SmStDirectReadCallout,
                  (ULONG_PTR)BugCheckParameter3,
                  0LL) >= 0 )
      {
        v3 = 2;
        if ( DWORD2(v12) )
        {
          v3 = 6;
        }
        else
        {
          v10 = v14;
          *a2 = v13;
          a2[1] = v10;
        }
      }
    }
  }
  if ( (v3 & 1) != 0 )
    ST_STORE<SM_TRAITS>::StReleaseReadContext(a1, v2);
  if ( (v3 & 2) != 0 )
    KiUnstackDetachProcess(v15, 0LL);
  return v3 >> 2;
}
