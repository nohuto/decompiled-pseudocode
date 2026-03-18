/*
 * XREFs of ?OnInput@InputTransform@@YGHPAUtagWND@@_K@Z @ 0xAEB5C
 * Callers:
 *     _PostInputMessage@60 @ 0x467D0 (_PostInputMessage@60.c)
 *     ?StoreQMessage@@YGXPAUtagQMSG@@PAUtagWND@@IIJK_KKKKPAUtagINPUT_MESSAGE_SOURCE@@KPAXPAUtagUIPI_INFO@@@Z @ 0xEFC1E (-StoreQMessage@@YGXPAUtagQMSG@@PAUtagWND@@IIJK_KKKKPAUtagINPUT_MESSAGE_SOURCE@@KPAXPAUtagUIPI_IN.c)
 *     _InputTransformOnInput@116 @ 0xF2002 (_InputTransformOnInput@116.c)
 *     _SetManipulationInputTargetTransform@124 @ 0xF2056 (_SetManipulationInputTargetTransform@124.c)
 * Callees:
 *     _MagpRemoveTransformOutputMagFac@4 @ 0xA3ACC (_MagpRemoveTransformOutputMagFac@4.c)
 *     ?GetTransform@InputTransform@@YGHPBUtagWND@@PAUtagINPUT_TRANSFORM@@@Z @ 0xAEBB6 (-GetTransform@InputTransform@@YGHPBUtagWND@@PAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?OnInput@InputSink@InputTraceLogging@@SGX_KPAUHWND__@@PBUCompositionInputObject@@_NABUtagINPUT_TRANSFORM@@@Z @ 0xF1E96 (-OnInput@InputSink@InputTraceLogging@@SGX_KPAUHWND__@@PBUCompositionInputObject@@_NABUtagINPUT_T.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?ClearStaleEntries@@YGXPAUtagINPUTTRANSFORMLIST@@_K@Z @ 0x15E31A (-ClearStaleEntries@@YGXPAUtagINPUTTRANSFORMLIST@@_K@Z.c)
 *     ?StoreTransform@InputTransform@@YGHPAUtagWND@@PBUtagINPUT_TRANSFORM@@PA_K@Z @ 0x15E750 (-StoreTransform@InputTransform@@YGHPAUtagWND@@PBUtagINPUT_TRANSFORM@@PA_K@Z.c)
 */

int __userpurge InputTransform::OnInput@<eax>(HWND *a1@<ecx>, unsigned __int64 this, unsigned __int64 a3)
{
  int v3; // edi
  HWND *v4; // esi
  HWND v5; // ebx
  _DWORD *v7; // eax
  int v8; // edx
  _DWORD *v9; // ecx
  int v10; // esi
  unsigned __int64 v11; // [esp-4h] [ebp-5Ch]
  InputTransform *v12; // [esp+0h] [ebp-58h]
  bool v13; // [esp+0h] [ebp-58h]
  const struct tagWND *v14; // [esp+4h] [ebp-54h]
  const struct tagINPUT_TRANSFORM *v15; // [esp+4h] [ebp-54h]
  struct tagINPUT_TRANSFORM *v16; // [esp+8h] [ebp-50h]
  unsigned __int64 *v17; // [esp+8h] [ebp-50h]
  float v18[17]; // [esp+10h] [ebp-48h] BYREF
  HWND *v19; // [esp+54h] [ebp-4h]

  v3 = 0;
  v4 = a1;
  v19 = a1;
  memset(v18, 0, 0x40u);
  if ( InputTransform::GetTransform(v12, v14, v16) )
  {
    MagpRemoveTransformOutputMagFac(v18);
    InputTransform::StoreTransform((InputTransform *)&this, (struct tagWND *)HIDWORD(v11), v15, v17);
  }
  v5 = v4[40];
  if ( !v5 )
  {
    EtwTraceOnInputXformUpdate(*v4, this, HIDWORD(this), 0);
    return 0;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v5, 0);
  LODWORD(v11) = HIDWORD(this);
  ClearStaleEntries((struct tagINPUTTRANSFORMLIST *)this, v11);
  if ( ((_BYTE)v5[19] & 1) == 0 )
  {
    v8 = HIDWORD(this);
LABEL_12:
    v3 = 1;
    EtwTraceOnInputXformUpdate(*v4, this, v8, 1);
    InputTraceLogging::InputSink::OnInput(this, *v4, (const struct CompositionInputObject *)(v5 + 3), v13, v15);
    goto LABEL_13;
  }
  v7 = (_DWORD *)Win32AllocPoolZInit(80, 2020176725);
  v8 = HIDWORD(this);
  if ( v7 )
  {
    v7[2] = this;
    v7[3] = v8;
    qmemcpy(v7 + 4, v5 + 3, 0x40u);
    v9 = v5 + 1;
    v10 = *((_DWORD *)v5 + 1);
    if ( *(HWND *)(v10 + 4) != v5 + 1 )
      __fastfail(3u);
    *v7 = v10;
    v7[1] = v9;
    *(_DWORD *)(v10 + 4) = v7;
    v4 = v19;
    *v9 = v7;
    *((_DWORD *)v5 + 19) &= ~1u;
    goto LABEL_12;
  }
  EtwTraceOnInputXformUpdate(*v4, this, HIDWORD(this), 0);
LABEL_13:
  ExReleasePushLockExclusiveEx(v5, 0);
  KeLeaveCriticalRegion();
  return v3;
}
