/*
 * XREFs of ?HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x1800924F4
 * Callers:
 *     ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180091280 (-Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180092230 (-Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800466E8 (--2@YAPEAX_K@Z.c)
 *     ?LockWrite@CBitmapLockState@@QEAAJXZ @ 0x18008F80C (-LockWrite@CBitmapLockState@@QEAAJXZ.c)
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x180092664 (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x1800927F0 (--0CBitmapLock@@QEAA@XZ.c)
 *     ?LockRead@CBitmapLockState@@QEAAJXZ @ 0x1800929EC (-LockRead@CBitmapLockState@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmap::HrLock(
        CBitmap *this,
        unsigned int a2,
        unsigned int a3,
        const struct PixelFormatInfo *a4,
        unsigned int a5,
        unsigned int a6,
        void *a7,
        enum WICBitmapLockFlags a8,
        struct IBitmapLock **a9,
        bool a10,
        struct IUnknown *a11)
{
  volatile signed __int32 *v14; // r14
  int v15; // eax
  unsigned int v16; // ebx
  CBitmapLock *v17; // rax
  __int64 v18; // rcx
  CBitmapLock *v19; // rdi
  int v20; // eax
  __int64 v21; // rcx
  int v24; // r9d
  unsigned int v25; // [rsp+20h] [rbp-68h]

  if ( (a8 & 2) == 0 )
  {
    if ( (a8 & 1) == 0 )
    {
      v16 = -2147024809;
      v24 = -2147024809;
      v25 = 684;
      goto LABEL_27;
    }
    v14 = (volatile signed __int32 *)((char *)this + 204);
    v15 = CBitmapLockState::LockRead((CBitmap *)((char *)this + 204));
    v16 = v15;
    if ( v15 >= 0 )
      goto LABEL_4;
    v25 = 680;
LABEL_16:
    v24 = v15;
LABEL_27:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v24, v25, 0LL);
    return v16;
  }
  v14 = (volatile signed __int32 *)((char *)this + 204);
  v15 = CBitmapLockState::LockWrite((CBitmap *)((char *)this + 204));
  v16 = v15;
  if ( v15 < 0 )
  {
    v25 = 676;
    goto LABEL_16;
  }
LABEL_4:
  v17 = (CBitmapLock *)operator new(0xA8uLL);
  if ( v17 )
    v19 = CBitmapLock::CBitmapLock(v17);
  else
    v19 = 0LL;
  if ( v19 )
  {
    (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v19 + 8LL))(v19);
    v20 = CBitmapLock::HrInit(
            v19,
            (struct IBitmapUnlock *)(((unsigned __int64)this + 40) & -(__int64)(this != 0LL)),
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8,
            a10,
            a11);
    v16 = v20;
    if ( v20 >= 0 )
    {
      if ( (a8 & 2) != 0 && (*((_DWORD *)this + 30))++ == -1 )
        ++*((_DWORD *)this + 30);
      *a9 = (CBitmapLock *)((char *)v19 + 16);
      return v16;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x2BEu, 0LL);
  }
  else
  {
    v16 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024882, 0x2B2u, 0LL);
  }
  if ( (a8 & 2) != 0 )
  {
    *v14 = 0;
  }
  else if ( (a8 & 1) != 0 )
  {
    _InterlockedDecrement(v14);
  }
  if ( v19 )
    (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v19 + 16LL))(v19);
  return v16;
}
