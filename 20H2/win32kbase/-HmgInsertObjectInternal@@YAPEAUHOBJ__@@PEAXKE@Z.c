/*
 * XREFs of ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C003DC40
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C001C8E0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     NtGdiCreateRectRgn @ 0x1C001CC30 (NtGdiCreateRectRgn.c)
 *     GreCreateRectRgnIndirect @ 0x1C003DA50 (GreCreateRectRgnIndirect.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C003DBE0 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C005C9B0 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C005D690 (--0PATHMEMOBJ@@QEAA@XZ.c)
 * Callees:
 *     EtwTraceGdiCreateHandle @ 0x1C003A8DC (EtwTraceGdiCreateHandle.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003D970 (GreReleaseHmgrSemaphore.c)
 *     HmgDecProcessHandleCount @ 0x1C003E660 (HmgDecProcessHandleCount.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C003EAF0 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C0040C10 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C0040E60 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 *     GreAcquireHmgrSemaphore @ 0x1C005EA20 (GreAcquireHmgrSemaphore.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     ?TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z @ 0x1C0092E14 (-TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z.c)
 *     ?Feature_Servicing_gdi_leak_tracking__private_IsEnabled@@YAHXZ @ 0x1C00CF0D0 (-Feature_Servicing_gdi_leak_tracking__private_IsEnabled@@YAHXZ.c)
 *     HmgIncProcessHandleCountEx @ 0x1C00CF1F8 (HmgIncProcessHandleCountEx.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C013CC2C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

struct HOBJ__ *__fastcall HmgInsertObjectInternal(struct OBJECT *a1, unsigned __int16 a2, unsigned __int8 a3)
{
  struct HOBJ__ *v4; // r14
  unsigned __int64 v7; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  GdiHandleManager *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  char EtwGdiHandleType; // al
  __int64 v21; // r9
  int v22; // r9d
  __int64 v24; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v25; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v26; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0LL;
  v7 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v9 = *(_QWORD *)(ThreadWin32Thread + 72);
  else
    v9 = 0LL;
  if ( v9 )
    LODWORD(v7) = *(_DWORD *)(v9 + 8);
  GreAcquireHmgrSemaphore();
  if ( (a2 & 8) != 0 || (unsigned int)HmgIncProcessHandleCountEx((unsigned int)v7, v10, 0LL) )
  {
    v25 = 0;
    if ( GdiHandleManager::AcquireEntryIndex(v11, &v25) )
    {
      v4 = ENTRYOBJ::hSetup(a1, a3, a2, v25);
      if ( a3 == 5 )
      {
        v18 = *((_QWORD *)a1 + 85);
        v19 = 0LL;
      }
      else
      {
        if ( a3 != 16 )
        {
LABEL_14:
          LOBYTE(v15) = a3;
          if ( (a2 & 8) != 0 )
            LODWORD(v7) = 0;
          EtwGdiHandleType = GetEtwGdiHandleType(v15, v14, v16, v17);
          EtwTraceGdiCreateHandle((int)v4, EtwGdiHandleType, v7);
          goto LABEL_25;
        }
        v18 = *((_QWORD *)a1 + 17);
        v19 = 2LL;
      }
      TrackObjectReferenceInitialization(v19, v18, *((unsigned int *)a1 + 2));
      goto LABEL_14;
    }
    if ( (a2 & 8) == 0 )
      HmgDecProcessHandleCount((unsigned int)v7);
    if ( (unsigned int)Feature_Servicing_gdi_leak_tracking__private_IsEnabled() )
    {
      if ( !gGDISessionLimitReachedAtLeastOnce )
      {
        LODWORD(v11) = (_DWORD)gpHandleManager;
        if ( *((_DWORD *)gpHandleManager + 1) >= *((_DWORD *)gpHandleManager + 2) )
        {
          gGDISessionLimitReachedAtLeastOnce = 1;
          if ( (unsigned int)dword_1C0243250 > 5 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_1C0243250, 0x400000000000LL, v13, v21) )
            {
              v26 = gMaxGdiHandleCount;
              v24 = 0x1000000LL;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                (unsigned int)&dword_1C0243250,
                (unsigned int)&unk_1C021307C,
                v13,
                v22,
                (__int64)&v26,
                (__int64)&v24);
            }
          }
        }
      }
    }
  }
LABEL_25:
  GreReleaseHmgrSemaphore((int)v11, v12, v13);
  return v4;
}
