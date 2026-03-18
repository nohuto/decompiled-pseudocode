/*
 * XREFs of PspCreatePicoThread @ 0x14090E7A0
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140611880 (ObReferenceObjectByHandleWithTag.c)
 *     PspAllocateThread @ 0x14068411C (PspAllocateThread.c)
 *     PspInsertThread @ 0x1406867E0 (PspInsertThread.c)
 *     PspCreateUserContext @ 0x140694230 (PspCreateUserContext.c)
 */

__int64 __fastcall PspCreatePicoThread(__int64 a1, __int64 a2, __int64 *a3)
{
  struct _EX_RUNDOWN_REF *v6; // rdi
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v8; // ebx
  int inserted; // esi
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  __int64 v13; // [rsp+60h] [rbp-A0h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+68h] [rbp-98h] BYREF
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  __int64 v16; // [rsp+78h] [rbp-88h] BYREF
  __int64 v17[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v18; // [rsp+90h] [rbp-70h]
  _QWORD v19[66]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v20[154]; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int64 v21[50]; // [rsp+780h] [rbp+680h] BYREF

  memset(v19, 0, 0x208uLL);
  v6 = 0LL;
  LODWORD(v13) = 0;
  v16 = 0LL;
  memset(v21, 0, sizeof(v21));
  DmaAdapter = 0LL;
  v18 = 0LL;
  *(_OWORD *)v17 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = 0;
  Object = 0LL;
  if ( !*(_QWORD *)(a1 + 184) )
  {
    v6 = (struct _EX_RUNDOWN_REF *)Object;
    inserted = -1073741811;
    goto LABEL_18;
  }
  inserted = ObReferenceObjectByHandleWithTag(
               *(HANDLE *)a1,
               2u,
               (POBJECT_TYPE)PsProcessType,
               0,
               0x72437350u,
               &Object,
               0LL);
  if ( inserted >= 0 )
  {
    v6 = (struct _EX_RUNDOWN_REF *)Object;
    if ( *((_QWORD *)Object + 280) )
    {
      --CurrentThread->KernelApcDisable;
      v8 = 1;
      if ( ExAcquireRundownProtection_0(v6 + 139) )
      {
        v8 = 3;
        ObfReferenceObjectWithTag(v6, 0x72437350u);
        memset(v20, 0, sizeof(v20));
        PspCreateUserContext((__int64)v20, 0, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32));
        v10 = *(_QWORD *)(a1 + 8);
        HIWORD(v20[7]) = *(_WORD *)(a1 + 56);
        LOWORD(v20[8]) = *(_WORD *)(a1 + 58);
        v17[1] = *(_QWORD *)(a1 + 40);
        v18 = *(_QWORD *)(a1 + 48);
        v20[15] = *(_QWORD *)(a1 + 64);
        v20[18] = *(_QWORD *)(a1 + 72);
        v20[22] = *(_QWORD *)(a1 + 96);
        v20[21] = *(_QWORD *)(a1 + 104);
        v20[20] = *(_QWORD *)(a1 + 112);
        v20[23] = *(_QWORD *)(a1 + 120);
        v20[24] = *(_QWORD *)(a1 + 128);
        v20[25] = *(_QWORD *)(a1 + 136);
        v20[26] = *(_QWORD *)(a1 + 144);
        v20[27] = *(_QWORD *)(a1 + 152);
        v20[28] = *(_QWORD *)(a1 + 160);
        v20[29] = *(_QWORD *)(a1 + 168);
        v20[30] = *(_QWORD *)(a1 + 176);
        v20[19] = v10;
        LODWORD(v13) = 1;
        v17[0] = 0LL;
        inserted = PspAllocateThread(
                     (ULONG_PTR)v6,
                     0LL,
                     0,
                     0LL,
                     (__int64)v20,
                     v17,
                     0LL,
                     0LL,
                     (int *)&v13,
                     &DmaAdapter,
                     0LL,
                     (_DMA_OPERATIONS **)v21);
        if ( inserted < 0 )
        {
          DmaAdapter = 0LL;
LABEL_17:
          ExReleaseRundownProtection_0(v6 + 139);
          goto LABEL_18;
        }
        v11 = 0LL;
        if ( a2 )
        {
          v19[57] = a2;
          v11 = v19;
        }
        *(_QWORD *)&DmaAdapter[94].Version = *(_QWORD *)(a1 + 184);
        inserted = PspInsertThread(
                     (char *)DmaAdapter,
                     (ULONG_PTR)v6,
                     0LL,
                     &v13,
                     0x1FFFFFu,
                     0LL,
                     (__int64)v11,
                     0LL,
                     (__int64)v21,
                     &v16,
                     0LL);
        if ( inserted >= 0 )
        {
          _interlockedbittestandset((volatile signed __int32 *)&DmaAdapter[81], 0x14u);
          inserted = 0;
          v6 = (struct _EX_RUNDOWN_REF *)Object;
          *a3 = v16;
        }
      }
      else
      {
        inserted = -1073741558;
      }
    }
    else
    {
      inserted = -1073741816;
    }
  }
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  if ( v8 >= 2 )
    goto LABEL_17;
LABEL_18:
  if ( (v8 & 1) != 0 )
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x72437350u);
  return (unsigned int)inserted;
}
