/*
 * XREFs of ObpCaptureObjectCreateInformation @ 0x14064B260
 * Callers:
 *     ObOpenObjectByNameEx @ 0x14064AAF0 (ObOpenObjectByNameEx.c)
 *     ObReferenceObjectByNameEx @ 0x1406CDDFC (ObReferenceObjectByNameEx.c)
 *     CmpCreateKeyBody @ 0x140713A70 (CmpCreateKeyBody.c)
 *     IopAllocRealFileObject @ 0x14071A4C0 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x14071BBF0 (ObCreateObjectEx.c)
 * Callees:
 *     ObpCaptureObjectName @ 0x14064B4D0 (ObpCaptureObjectName.c)
 *     SeCaptureSecurityDescriptor @ 0x140650980 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x140651570 (SeReleaseSecurityDescriptor.c)
 *     SeComputeQuotaInformationSize @ 0x1406549F0 (SeComputeQuotaInformationSize.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall ObpCaptureObjectCreateInformation(
        unsigned __int8 a1,
        char a2,
        __int64 a3,
        _OWORD *a4,
        __int64 a5,
        unsigned int a6)
{
  _OWORD *v6; // r15
  int v8; // eax
  __int64 v9; // r14
  __int64 v10; // r10
  __int64 v11; // rdi
  int v12; // r12d
  _QWORD *v14; // r13
  __int64 v15; // rcx
  int v16; // [rsp+34h] [rbp-64h] BYREF
  int v17; // [rsp+38h] [rbp-60h]
  int v18; // [rsp+3Ch] [rbp-5Ch]
  __int64 v19; // [rsp+40h] [rbp-58h]
  __int64 v20; // [rsp+48h] [rbp-50h]
  __int64 v21; // [rsp+50h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-38h]
  struct _KTHREAD *v23; // [rsp+68h] [rbp-30h]

  v6 = a4;
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
    v14 = (_QWORD *)(a5 + 32);
    LOBYTE(a4) = 1;
    v12 = SeCaptureSecurityDescriptor(v10, a1, 1, (_DWORD)a4, a5 + 32);
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
      v12 = ObpCaptureObjectName(a1, v9, v6, a6);
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
  v15 = *(_QWORD *)(a5 + 32);
  if ( v15 )
  {
    LOBYTE(a3) = 1;
    SeReleaseSecurityDescriptor(v15, *(unsigned __int8 *)(a5 + 16), a3, a4);
    *(_QWORD *)(a5 + 32) = 0LL;
  }
  return (unsigned int)v12;
}
