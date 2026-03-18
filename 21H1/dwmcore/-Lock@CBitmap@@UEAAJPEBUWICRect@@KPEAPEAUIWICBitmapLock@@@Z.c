/*
 * XREFs of ?Lock@CBitmap@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z @ 0x180219E00
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VIBitmapLock@@@@YAXPEAVIBitmapLock@@@Z @ 0x180028A5C (--$ReleaseInterfaceNoNULL@VIBitmapLock@@@@YAXPEAVIBitmapLock@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800386EC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmap::Lock(
        struct _RTL_CRITICAL_SECTION *this,
        const struct WICRect *a2,
        unsigned int a3,
        struct IWICBitmapLock **a4)
{
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  __int64 (__fastcall ***v12)(_QWORD, GUID *, struct IWICBitmapLock **); // rcx
  unsigned int v14; // [rsp+20h] [rbp-28h]
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+58h] [rbp+10h] BYREF

  v15 = 0LL;
  v16 = this + 2;
  EnterCriticalSection(this + 2);
  if ( a2 )
  {
    if ( a4 )
    {
      v10 = (*((__int64 (__fastcall **)(HANDLE *, const struct WICRect *, _QWORD, __int64 *))this[-1].LockSemaphore + 3))(
              &this[-1].LockSemaphore,
              a2,
              a3,
              &v15);
      v9 = v10;
      if ( v10 < 0 )
      {
        v14 = 286;
      }
      else
      {
        v12 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IWICBitmapLock **))(v15
                                                                                 + 8
                                                                                 + *(int *)(*(_QWORD *)(v15 + 8) + 4LL));
        v10 = (**v12)(v12, &IID_IWICBitmapLock, a4);
        v9 = v10;
        if ( v10 >= 0 )
          goto LABEL_10;
        v14 = 288;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, v14, 0LL);
      goto LABEL_10;
    }
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024809, 0x11Au, 0LL);
  }
  else
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024809, 0x119u, 0LL);
  }
LABEL_10:
  ReleaseInterfaceNoNULL<IBitmapLock>(v15);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v16);
  return v9;
}
