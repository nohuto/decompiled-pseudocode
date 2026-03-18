/*
 * XREFs of ?ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALGROUP@@PEBXI@Z @ 0x1801B0264
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x18002A6AC (-UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTa.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800392D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?InitializeVisualGroupData@CVisualGroup@@AEAAJPEAPEAVCVisual@@I0I@Z @ 0x1801B0038 (-InitializeVisualGroupData@CVisualGroup@@AEAAJPEAPEAVCVisual@@I0I@Z.c)
 *     ?clear@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x1801B04B8 (-clear@-$vector@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisualReferen.c)
 */

__int64 __fastcall CVisualGroup::ProcessUpdate(
        CVisualGroup *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUALGROUP *a3,
        unsigned int *a4,
        unsigned int a5)
{
  struct CVisual **v9; // rdi
  unsigned int v10; // r14d
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  struct CVisual **v19; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v20; // [rsp+90h] [rbp+8h] BYREF
  struct CResourceTable *v21; // [rsp+98h] [rbp+10h]
  unsigned int v22; // [rsp+A0h] [rbp+18h] BYREF
  void *lpMem; // [rsp+A8h] [rbp+20h] BYREF

  v21 = a2;
  v9 = 0LL;
  std::vector<std::unique_ptr<CExcludeVisualReference>>::clear((char *)this + 56);
  v10 = a5;
  v11 = CResource::UnmarshalResourceArray(a4, a5, *((_DWORD *)a3 + 2), 0xC3u, &v22, &lpMem, (__int64)a2, 0);
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x26u, 0LL);
  }
  else
  {
    v14 = CResource::UnmarshalResourceArray(
            (unsigned int *)((char *)a4 + *((unsigned int *)a3 + 2)),
            v10 - *((_DWORD *)a3 + 2),
            *((_DWORD *)a3 + 3),
            0xC3u,
            &v20,
            (void **)&v19,
            (__int64)v21,
            0);
    v9 = v19;
    v13 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x38u, 0LL);
    }
    else
    {
      v16 = CVisualGroup::InitializeVisualGroupData(this, (struct CVisual **)lpMem, v22, v19, v20);
      v13 = v16;
      if ( v16 >= 0 )
        goto LABEL_8;
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x3Eu, 0LL);
    }
  }
  std::vector<std::unique_ptr<CExcludeVisualReference>>::clear((char *)this + 56);
LABEL_8:
  if ( lpMem )
    operator delete(lpMem);
  if ( v9 )
    operator delete(v9);
  CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  return v13;
}
