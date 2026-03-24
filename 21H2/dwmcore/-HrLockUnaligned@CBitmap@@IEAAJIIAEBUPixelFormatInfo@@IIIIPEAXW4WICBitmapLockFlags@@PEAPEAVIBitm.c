/*
 * XREFs of ?HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180218078
 * Callers:
 *     ?Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x18003BC20 (-Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ?LockRead@CBitmapLockState@@QEAAJXZ @ 0x18003C3DC (-LockRead@CBitmapLockState@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18009F358 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?LockWrite@CBitmapLockState@@QEAAJXZ @ 0x1800DEF20 (-LockWrite@CBitmapLockState@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18020FB94 (ModuleFailFastForHRESULT.c)
 *     ??0CBitmapLockUnaligned@@QEAA@XZ @ 0x180218834 (--0CBitmapLockUnaligned@@QEAA@XZ.c)
 *     ?HrInit@CBitmapLockUnaligned@@QEAAJPEAVCBitmap@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@II@Z @ 0x18021896C (-HrInit@CBitmapLockUnaligned@@QEAAJPEAVCBitmap@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlag.c)
 */

__int64 __fastcall CBitmap::HrLockUnaligned(
        CBitmap *this,
        unsigned int a2,
        unsigned int a3,
        const struct PixelFormatInfo *a4,
        unsigned int a5,
        unsigned int a6,
        void *a7,
        unsigned int a8,
        void *lpMem,
        enum WICBitmapLockFlags a10,
        struct IBitmapLock **a11)
{
  volatile signed __int32 *v14; // r14
  int v15; // eax
  unsigned int v16; // ebx
  int v17; // r9d
  CBitmapLockUnaligned *v18; // rax
  CBitmapLockUnaligned *v19; // rax
  __int64 v20; // rcx
  CBitmapLockUnaligned *v21; // rsi
  int v22; // eax
  __int64 v23; // rcx
  unsigned int v26; // [rsp+20h] [rbp-68h]
  const void *retaddr; // [rsp+88h] [rbp+0h]

  if ( (a10 & 2) != 0 )
  {
    v14 = (volatile signed __int32 *)((char *)this + 212);
    v15 = CBitmapLockState::LockWrite((CBitmap *)((char *)this + 212));
    v16 = v15;
    if ( v15 < 0 )
    {
      v26 = 764;
LABEL_4:
      v17 = v15;
LABEL_25:
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v17, v26, 0LL);
      return v16;
    }
  }
  else
  {
    if ( (a10 & 1) == 0 )
    {
      v16 = -2147024809;
      v17 = -2147024809;
      v26 = 772;
      goto LABEL_25;
    }
    v14 = (volatile signed __int32 *)((char *)this + 212);
    v15 = CBitmapLockState::LockRead((CBitmap *)((char *)this + 212));
    v16 = v15;
    if ( v15 < 0 )
    {
      v26 = 768;
      goto LABEL_4;
    }
  }
  v18 = (CBitmapLockUnaligned *)DefaultHeap::AllocClear(0xC0uLL);
  if ( !v18 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v19 = CBitmapLockUnaligned::CBitmapLockUnaligned(v18);
  v21 = v19;
  if ( !v19 )
  {
    v16 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, -2147024882, 0x30Au, 0LL);
LABEL_18:
    if ( (a10 & 2) != 0 )
    {
      *v14 = 0;
    }
    else if ( (a10 & 1) != 0 )
    {
      _InterlockedDecrement(v14);
    }
    if ( v21 )
      (*(void (__fastcall **)(CBitmapLockUnaligned *))(*(_QWORD *)v21 + 16LL))(v21);
    return v16;
  }
  (*(void (__fastcall **)(CBitmapLockUnaligned *))(*(_QWORD *)v19 + 8LL))(v19);
  v22 = CBitmapLockUnaligned::HrInit(v21, this, a2, a3, a4, (unsigned int)a7, a8, lpMem, a10, a5, a6);
  v16 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x316u, 0LL);
    goto LABEL_18;
  }
  if ( (a10 & 2) != 0 && (*((_DWORD *)this + 32))++ == -1 )
    ++*((_DWORD *)this + 32);
  *a11 = (CBitmapLockUnaligned *)((char *)v21 + 16);
  return v16;
}
