/*
 * XREFs of ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800B8010
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800B7B60 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800B7F40 (-RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z @ 0x180051DE0 (-GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18007A590 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?EtwLogCurrentState@CDrawingContext@@QEBAXXZ @ 0x1800BA744 (-EtwLogCurrentState@CDrawingContext@@QEBAXXZ.c)
 *     _Init_thread_footer @ 0x1800E7910 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E7978 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?HasProtectedContent@CVisual@@QEBA_NXZ @ 0x1801778A0 (-HasProtectedContent@CVisual@@QEBA_NXZ.c)
 *     McTemplateU0pffffss_EventWriteTransfer @ 0x1801AF2B4 (McTemplateU0pffffss_EventWriteTransfer.c)
 */

__int64 __fastcall CVisual::RenderContent(CVisual *this, struct CDrawingContext *a2, bool *a3)
{
  unsigned int v3; // r13d
  __int64 v7; // rbp
  struct CDrawListCache *v8; // rbx
  struct _LIST_ENTRY *v9; // r15
  int v10; // r14d
  const struct IDeviceTarget *v11; // r12
  struct _LIST_ENTRY *v12; // rcx
  int Cache; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rdx
  const char *v21; // rbp
  const char *v22; // rbx
  char v23; // r14
  __int64 v24; // rcx
  int v25; // edx
  int v26; // ecx
  int v27; // r9d
  struct CDrawListCache *v28; // [rsp+50h] [rbp-38h] BYREF

  v3 = CCachedVisualImage::s_CVIEnsureBitmapCount;
  if ( CVisual::HasProtectedContent(this) )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 2) + 1129LL) )
    {
      *a3 = 1;
      goto LABEL_15;
    }
    *((_BYTE *)a2 + 5948) = 1;
  }
  v7 = *((_QWORD *)this + 31);
  if ( v7 )
  {
    if ( dword_18034B1FC > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                     + 4LL) )
    {
      Init_thread_header(&dword_18034B1FC);
      if ( dword_18034B1FC == -1 )
      {
        dword_180345AD8 = -2147022876;
        Init_thread_footer(&dword_18034B1FC);
      }
    }
    v8 = 0LL;
    v28 = 0LL;
    if ( !*((_BYTE *)a2 + 5956) )
      goto LABEL_10;
    v9 = (struct _LIST_ENTRY *)*((_QWORD *)a2 + 741);
    v10 = -2003292412;
    v11 = (const struct IDeviceTarget *)*((_QWORD *)a2 + 4);
    if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v9->Flink[12].Blink)(v9) )
    {
      v12 = (struct _LIST_ENTRY *)((char *)this + 320);
    }
    else
    {
      TreeDataListHead = CVisual::GetTreeDataListHead(this);
      if ( !TreeDataListHead )
        goto LABEL_28;
      Flink = TreeDataListHead->Flink;
      if ( TreeDataListHead->Flink == TreeDataListHead )
        goto LABEL_28;
      while ( 1 )
      {
        v12 = Flink - 18;
        if ( Flink[2].Flink == v9 )
          break;
        Flink = Flink->Flink;
        if ( Flink == TreeDataListHead )
          goto LABEL_28;
      }
    }
    if ( v12 )
    {
      Cache = CDrawListCacheSet::GetCache((CDrawListCacheSet *)&v12[8], 0, 0, v11, &v28);
      v10 = Cache;
      if ( Cache >= 0 )
      {
        v8 = v28;
LABEL_10:
        v15 = v7 + *(int *)(*(_QWORD *)(v7 + 56) + 8LL) + 56LL;
        v16 = (*(__int64 (__fastcall **)(__int64, struct CDrawingContext *, char *, struct CDrawListCache *))(*(_QWORD *)v15 + 16LL))(
                v15,
                a2,
                (char *)this + 132,
                v8);
        if ( v16 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_180345AD0, 3u, v16, 0x106Fu, 0LL);
        goto LABEL_12;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, Cache, 0x751u, 0LL);
      v8 = v28;
    }
LABEL_28:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v12, &dword_180345AD0, 3u, v10, 0x106Au, 0LL);
LABEL_12:
    if ( v8 && _InterlockedExchangeAdd((volatile signed __int32 *)v8 + 2, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(struct CDrawListCache *, __int64))(*(_QWORD *)v28 + 16LL))(v28, 1LL);
  }
LABEL_15:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) == 0
    || !(*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)this + 280LL))(this) )
  {
    return 0LL;
  }
  v21 = (const char *)&word_1802CE406;
  v22 = (const char *)&word_1802CE406;
  v23 = 1;
  if ( (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 56LL))(this, 203LL) )
  {
    v21 = "Window";
    goto LABEL_56;
  }
  if ( (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 56LL))(this, 178LL) )
    v21 = "Sprite";
  else
    v23 = 0;
  v24 = *((_QWORD *)this + 31);
  if ( !v24 )
    goto LABEL_56;
  if ( v3 != CCachedVisualImage::s_CVIEnsureBitmapCount )
  {
    v22 = "CVI";
    goto LABEL_56;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 56LL))(v24, 127LL) )
  {
    v22 = "PG";
    goto LABEL_55;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 31) + 56LL))(
         *((_QWORD *)this + 31),
         145LL) )
  {
    v22 = "RD";
    goto LABEL_55;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 31) + 56LL))(
         *((_QWORD *)this + 31),
         40LL) )
  {
    v22 = "CS";
    goto LABEL_55;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 31) + 56LL))(
         *((_QWORD *)this + 31),
         81LL) )
  {
    v22 = "HWnd";
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 31) + 56LL))(
              *((_QWORD *)this + 31),
              205LL) )
  {
    v22 = "YCbCr";
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 31) + 56LL))(
              *((_QWORD *)this + 31),
              174LL) )
  {
    v22 = "Snap";
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 31) + 56LL))(
              *((_QWORD *)this + 31),
              86LL) )
  {
    v22 = "Ink";
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 31) + 56LL))(
              *((_QWORD *)this + 31),
              64LL) )
  {
    v22 = "GenInk";
  }
  else if ( !v23 )
  {
LABEL_55:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000) == 0 )
      return 0LL;
  }
LABEL_56:
  CDrawingContext::EtwLogCurrentState(a2);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
    McTemplateU0pffffss_EventWriteTransfer(
      v26,
      v25,
      (_DWORD)this,
      v27,
      *((_DWORD *)this + 42),
      *((_DWORD *)this + 43),
      *((_DWORD *)this + 44),
      (__int64)v21,
      (__int64)v22);
  return 0LL;
}
