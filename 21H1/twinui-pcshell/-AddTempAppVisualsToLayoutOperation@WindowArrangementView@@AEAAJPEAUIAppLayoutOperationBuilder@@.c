/*
 * XREFs of ?AddTempAppVisualsToLayoutOperation@WindowArrangementView@@AEAAJPEAUIAppLayoutOperationBuilder@@@Z @ 0x1803EA878
 * Callers:
 *     ?ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x1803EC898 (-ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?CreateInstance@CTempAppVisualArray@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x180406778 (-CreateInstance@CTempAppVisualArray@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall WindowArrangementView::AddTempAppVisualsToLayoutOperation(
        WindowArrangementView *this,
        struct IAppLayoutOperationBuilder *a2)
{
  const struct _GUID *v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v16; // [rsp+20h] [rbp-10h] BYREF
  __int64 v17; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  void *v19; // [rsp+60h] [rbp+30h] BYREF
  __int64 v20; // [rsp+68h] [rbp+38h] BYREF

  v19 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
  v5 = CTempAppVisualArray::CreateInstance(v4, &v19);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v17 = 0LL;
    v7 = *((_QWORD *)this + 9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 40LL))(v7, &v17);
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = 1519LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v8);
LABEL_21:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
      goto LABEL_22;
    }
    v8 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v19 + 48LL))(v19, v17);
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = 1520LL;
      goto LABEL_7;
    }
    v16 = 0LL;
    v10 = *((_QWORD *)this + 10);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 104LL))(v10, &v16);
    v6 = v11;
    if ( v11 < 0 )
    {
      v12 = 1524LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v11);
LABEL_20:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      goto LABEL_21;
    }
    v11 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v19 + 48LL))(v19, v16);
    v6 = v11;
    if ( v11 < 0 )
    {
      v12 = 1525LL;
      goto LABEL_12;
    }
    v20 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    v13 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 9))(
            *((_QWORD *)this + 9),
            &GUID_114ed843_c914_443d_9588_6ffb643e73d0,
            &v20);
    v6 = v13;
    if ( v13 >= 0 )
    {
      v13 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v19 + 40LL))(v19, v20);
      v6 = v13;
      if ( v13 >= 0 )
      {
        (*(void (__fastcall **)(struct IAppLayoutOperationBuilder *, void *))(*(_QWORD *)a2 + 32LL))(a2, v19);
        v6 = 0;
        goto LABEL_19;
      }
      v14 = 1530LL;
    }
    else
    {
      v14 = 1529LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v13);
LABEL_19:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5EB,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
    (const char *)(unsigned int)v5);
LABEL_22:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
  return v6;
}
