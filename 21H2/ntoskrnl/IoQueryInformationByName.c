/*
 * XREFs of IoQueryInformationByName @ 0x1405D8B10
 * Callers:
 *     NtQueryInformationByName @ 0x140894960 (NtQueryInformationByName.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x14026A8D0 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     IopVerifierExAllocatePoolWithQuota_3 @ 0x140506D4C (IopVerifierExAllocatePoolWithQuota_3.c)
 *     IopCleanupExtraCreateParameters @ 0x1406229B4 (IopCleanupExtraCreateParameters.c)
 *     ObOpenObjectByNameEx @ 0x14064AAF0 (ObOpenObjectByNameEx.c)
 *     FsRtlpPrepareExtraCreateParametersForCreate @ 0x14069BE44 (FsRtlpPrepareExtraCreateParametersForCreate.c)
 *     IopValidateQueryInformationParameters @ 0x1406EAF70 (IopValidateQueryInformationParameters.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoQueryInformationByName(
        __int64 a1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        int a5,
        __int16 a6,
        _QWORD *Src)
{
  SIZE_T v7; // r13
  unsigned int v10; // ebx
  char v11; // r12
  __int64 v12; // rcx
  unsigned int v13; // eax
  int v14; // edi
  __int64 result; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  ULONG_PTR v19; // rcx
  size_t v20; // r8
  struct _KTHREAD *CurrentThread; // rax
  int v22; // edi
  void *v23; // rsi
  char v24; // [rsp+40h] [rbp-268h]
  _OWORD v26[14]; // [rsp+60h] [rbp-248h] BYREF
  _BYTE v27[16]; // [rsp+140h] [rbp-168h] BYREF
  _BYTE v28[272]; // [rsp+150h] [rbp-158h] BYREF

  v7 = a4;
  memset(v28, 0, sizeof(v28));
  v10 = 0;
  v11 = 0;
  v12 = 0LL;
  v13 = (unsigned __int8)KeGetCurrentThread()->$6BEBF485330D18E60173AA6D991B35AC::gap0[10];
  if ( (a6 & 0x100) == 0 )
    v12 = v13;
  v24 = v12;
  v14 = a5;
  result = IopValidateQueryInformationParameters(v12, KeGetCurrentThread(), a2, a3, v7, a5);
  if ( (int)result >= 0 )
  {
    if ( a5 == 75 && !v24 )
    {
      v14 = 71;
      v11 = 1;
    }
    if ( ((v14 - 68) & 0xFFFFFFFC) != 0 || v14 == 69 )
      return 3221225485LL;
    memset(v26, 0, sizeof(v26));
    LODWORD(v26[0]) = 14680072;
    WORD3(v26[4]) = 7;
    DWORD2(v26[5]) = 1;
    LODWORD(v26[4]) = 2113536;
    BYTE9(v26[8]) = 1;
    LOBYTE(v26[13]) = 1;
    *(_QWORD *)&v26[9] = v28;
    *(_QWORD *)&v26[3] = a1;
    DWORD2(v26[9]) = 32;
    *((_QWORD *)&v26[12] + 1) = __PAIR64__(v7, v14);
    memset(&v26[10], 0, 32);
    LOWORD(v26[10]) = 40;
    v18 = 1LL;
    *(_QWORD *)&v26[12] = 1LL;
    if ( v11 )
      DWORD1(v26[5]) |= 1u;
    if ( Src )
    {
      v19 = Src[1];
      if ( v19 )
      {
        result = FsRtlpPrepareExtraCreateParametersForCreate(v19);
        if ( (int)result < 0 )
          return result;
      }
      v20 = *(__int16 *)Src;
      if ( v20 > 0x28 )
        v20 = 40LL;
      memmove(&v26[10], Src, v20);
      v18 = *(_QWORD *)&v26[12];
    }
    if ( v18 == 1 )
      *(_QWORD *)&v26[12] = PsGetCurrentSilo();
    if ( (unsigned __int64)a3 <= 0x7FFFFFFEFFFFLL )
      *(_QWORD *)&v26[7] = IopVerifierExAllocatePoolWithQuota_3(v16, v7);
    else
      *(_QWORD *)&v26[7] = a3;
    CurrentThread = KeGetCurrentThread();
    ++CurrentThread->OtherOperationCount;
    __incgsdword(0x2EE4u);
    LOBYTE(v17) = v24;
    v22 = ObOpenObjectByNameEx(a1, IoFileObjectType, v17, 0LL, 128, v26, *(_QWORD *)&v26[12], v27);
    IopCleanupExtraCreateParameters(v26);
    if ( LODWORD(v26[2]) == -1096154543 )
      v22 = v26[1];
    v23 = *(void **)&v26[7];
    if ( a3 != *(void **)&v26[7] )
    {
      if ( v22 >= 0 )
        memmove(a3, *(const void **)&v26[7], HIDWORD(v26[12]));
      ExFreePoolWithTag(v23, 0);
    }
    *(_DWORD *)a2 = v22;
    if ( v22 >= 0 )
      v10 = HIDWORD(v26[12]);
    *(_QWORD *)(a2 + 8) = v10;
    return (unsigned int)v22;
  }
  return result;
}
