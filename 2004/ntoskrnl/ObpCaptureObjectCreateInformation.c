/*
 * XREFs of ObpCaptureObjectCreateInformation @ 0x140694DC0
 * Callers:
 *     CmpCreateKeyBody @ 0x1405ED820 (CmpCreateKeyBody.c)
 *     ObReferenceObjectByNameEx @ 0x14062DD40 (ObReferenceObjectByNameEx.c)
 *     IopAllocRealFileObject @ 0x140678970 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x140679FF0 (ObCreateObjectEx.c)
 *     ObOpenObjectByNameEx @ 0x140694650 (ObOpenObjectByNameEx.c)
 * Callees:
 *     SeReleaseSecurityDescriptor @ 0x140628670 (SeReleaseSecurityDescriptor.c)
 *     SeComputeQuotaInformationSize @ 0x140669530 (SeComputeQuotaInformationSize.c)
 *     SeCaptureSecurityDescriptor @ 0x14067DCA0 (SeCaptureSecurityDescriptor.c)
 *     ObpCaptureObjectName @ 0x140695030 (ObpCaptureObjectName.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall ObpCaptureObjectCreateInformation(
        unsigned __int8 a1,
        char a2,
        __int64 a3,
        _OWORD *a4,
        __int64 a5,
        unsigned int a6)
{
  int v8; // eax
  __int64 v9; // r14
  __int64 v10; // r10
  __int64 v11; // rdi
  int v12; // r12d
  __int64 *v14; // r13
  void *v15; // rcx
  unsigned int v16; // [rsp+34h] [rbp-64h] BYREF
  int v17; // [rsp+38h] [rbp-60h]
  int v18; // [rsp+3Ch] [rbp-5Ch]
  __int64 v19; // [rsp+40h] [rbp-58h]
  __int64 v20; // [rsp+48h] [rbp-50h]
  __int64 v21; // [rsp+50h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-38h]
  struct _KTHREAD *v23; // [rsp+68h] [rbp-30h]

  v16 = 0;
  *a4 = 0LL;
  *(_OWORD *)a5 = 0LL;
  *(_OWORD *)(a5 + 16) = 0LL;
  *(_OWORD *)(a5 + 32) = 0LL;
  *(_OWORD *)(a5 + 48) = 0LL;
  if ( !a3 )
    return 0LL;
  *(_BYTE *)(a5 + 16) = a1;
  if ( a1 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( CurrentThread->PreviousMode )
    {
      if ( (a3 & 7) != 0 )
        goto LABEL_18;
    }
  }
  if ( *(_DWORD *)a3 != 48 )
  {
    v12 = -1073741811;
    v17 = -1073741811;
    goto LABEL_33;
  }
  *(_QWORD *)(a5 + 8) = *(_QWORD *)(a3 + 8);
  v8 = *(_DWORD *)(a3 + 24);
  v18 = v8;
  if ( a2 )
  {
    v8 &= ~0x200u;
    v18 = v8;
  }
  if ( (v8 & 0xFFFEE00D) != 0 )
  {
    v12 = -1073741811;
    v17 = -1073741811;
    goto LABEL_33;
  }
  *(_DWORD *)a5 = v8;
  v9 = *(_QWORD *)(a3 + 16);
  v20 = v9;
  v10 = *(_QWORD *)(a3 + 32);
  v21 = v10;
  v11 = *(_QWORD *)(a3 + 40);
  v19 = v11;
  if ( v11 )
  {
    if ( !a1 )
    {
LABEL_14:
      *(_QWORD *)(a5 + 48) = *(_QWORD *)v11;
      *(_DWORD *)(a5 + 56) = *(_DWORD *)(v11 + 8);
      goto LABEL_19;
    }
    v23 = KeGetCurrentThread();
    if ( !v23->PreviousMode || (v19 & 3) == 0 )
    {
      v11 = v19;
      v10 = v21;
      v9 = v20;
      goto LABEL_14;
    }
LABEL_18:
    ExRaiseDatatypeMisalignment();
  }
LABEL_19:
  if ( v10 )
  {
    v14 = (__int64 *)(a5 + 32);
    v12 = SeCaptureSecurityDescriptor(v10, a1, PagedPool, 1, (_QWORD *)(a5 + 32));
    if ( v12 < 0 )
    {
      *v14 = 0LL;
      goto LABEL_33;
    }
    SeComputeQuotaInformationSize(*v14, &v16);
    *(_DWORD *)(a5 + 28) = v16;
  }
  if ( !v11 )
    goto LABEL_21;
  *(_DWORD *)(a5 + 48) = 12;
  *(_QWORD *)(a5 + 40) = a5 + 48;
  if ( *(_BYTE *)(a5 + 56) >= 2u )
  {
    v12 = -1073741811;
    goto LABEL_33;
  }
  if ( *(_DWORD *)(a5 + 52) > 3u )
  {
    v12 = -1073741659;
  }
  else
  {
LABEL_21:
    if ( v9 )
    {
      v12 = ObpCaptureObjectName(a1, v9, a4, a6);
      if ( v12 >= 0 )
        return 0LL;
    }
    else
    {
      if ( !*(_QWORD *)(a5 + 8) )
        return 0LL;
      v12 = -1073741773;
    }
  }
LABEL_33:
  v15 = *(void **)(a5 + 32);
  if ( v15 )
  {
    SeReleaseSecurityDescriptor(v15, *(_BYTE *)(a5 + 16), 1);
    *(_QWORD *)(a5 + 32) = 0LL;
  }
  return (unsigned int)v12;
}
