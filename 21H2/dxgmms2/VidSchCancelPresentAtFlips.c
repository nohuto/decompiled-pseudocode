/*
 * XREFs of VidSchCancelPresentAtFlips @ 0x1C003C650
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0014690 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0014924 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAA@PEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@@Z @ 0x1C0019AE0 (--0VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAA@PEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@@Z.c)
 *     ?VidSchiCancelQueuedIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@IPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLIP_QUEUE@@_KAEAI444@Z @ 0x1C00346C8 (-VidSchiCancelQueuedIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@IPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLI.c)
 *     McTemplateK0qqxxqxqqqq_EtwWriteTransfer @ 0x1C003C458 (McTemplateK0qqxxqxqqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchCancelPresentAtFlips(struct _VIDSCH_GLOBAL *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  char v4; // di
  char v5; // r14
  unsigned int v7; // r12d
  unsigned int v8; // r13d
  int v9; // ebx
  unsigned int v10; // esi
  __int64 v11; // rdx
  struct _VIDSCH_DEVICE *v12; // r8
  struct _VIDSCH_DEVICE *v13; // rax
  __int64 v14; // rcx
  char v15; // r13
  __int64 v16; // rcx
  unsigned int v18; // [rsp+78h] [rbp-39h] BYREF
  unsigned int v19; // [rsp+7Ch] [rbp-35h] BYREF
  unsigned int v20; // [rsp+80h] [rbp-31h] BYREF
  unsigned int v21; // [rsp+84h] [rbp-2Dh] BYREF
  _BYTE v22[4]; // [rsp+88h] [rbp-29h] BYREF
  unsigned int v23; // [rsp+8Ch] [rbp-25h]
  unsigned int v24; // [rsp+90h] [rbp-21h]
  __int64 v25; // [rsp+98h] [rbp-19h]
  _QWORD v26[4]; // [rsp+A0h] [rbp-11h] BYREF
  __int16 v27; // [rsp+C0h] [rbp+Fh]
  unsigned int v28; // [rsp+118h] [rbp+67h]
  int v29; // [rsp+124h] [rbp+73h]

  v29 = HIDWORD(a2);
  v4 = 0;
  v5 = -1;
  v18 = 0;
  v19 = -1;
  v21 = -1;
  v7 = 0;
  v20 = -1;
  v8 = 0;
  v26[0] = (char *)a1 + 1728;
  v27 = 0;
  v9 = a2;
  v10 = -1073741275;
  AcquireSpinLock::Acquire((Acquire *)v26);
  if ( *((int *)a1 + 878) < 0 )
  {
LABEL_8:
    v15 = a4;
    v16 = 0LL;
  }
  else
  {
    v12 = (struct _VIDSCH_DEVICE *)*((_QWORD *)a1 + 416);
    v13 = v12;
    v11 = a3;
    v14 = 0LL;
    while ( *((_DWORD *)v13 + 28) != 2
         || *(_DWORD *)v13 != v9
         || *((_DWORD *)v13 + 1) != v29
         || *((_QWORD *)v13 + 1) != a3 )
    {
      ++v8;
      ++v14;
      v13 = (struct _VIDSCH_DEVICE *)((char *)v13 + 160);
      if ( v14 > *((int *)a1 + 878) )
        goto LABEL_8;
    }
    v10 = 0;
    VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
      (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)v22,
      (struct _VIDSCH_DEVICE *)((char *)v12 + 160 * v8));
    v12 = *(struct _VIDSCH_DEVICE **)(v11 + 152);
    v7 = v23;
    v15 = a4;
    v16 = *(unsigned int *)(v25 + 4LL * v24);
    v28 = *(_DWORD *)(v25 + 4LL * v24);
    if ( v12 )
    {
      VidSchiCancelQueuedIndependentFlips(
        a1,
        v23,
        v12,
        *(struct VIDSCH_FLIP_QUEUE **)(*((_QWORD *)a1 + v23 + 400) + 8 * v16 + 32),
        a4,
        &v21,
        &v18,
        &v19,
        &v20);
      v16 = v28;
      v4 = v18;
      v5 = v19;
    }
  }
  if ( (byte_1C006E944 & 1) != 0 )
    McTemplateK0qqxxqxqqqq_EtwWriteTransfer(v16, v11, (__int64)v12, v7, v16, v9, a3, v10, v15, v21, v4, v5, v20);
  AcquireSpinLock::Release((AcquireSpinLock *)v26);
  return v10;
}
