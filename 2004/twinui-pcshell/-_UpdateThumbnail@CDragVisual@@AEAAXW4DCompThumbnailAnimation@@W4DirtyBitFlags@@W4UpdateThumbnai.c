/*
 * XREFs of ?_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnailOptions@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180428C04
 * Callers:
 *     ?SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z @ 0x180426460 (-SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z.c)
 *     ?SetDragStartRect@CDragVisual@@UEAAXUtagRECT@@@Z @ 0x180426B10 (-SetDragStartRect@CDragVisual@@UEAAXUtagRECT@@@Z.c)
 *     ?SetGrowFeedback@CDragVisual@@UEAAXW4DragVisualSizeFeedback@@W4GrowFeedbackFlags@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180426C70 (-SetGrowFeedback@CDragVisual@@UEAAXW4DragVisualSizeFeedback@@W4GrowFeedbackFlags@@PEAUIDCompBatc.c)
 *     ?SetMode@CDragVisual@@UEAAXW4DragVisualMode@@@Z @ 0x180426CB0 (-SetMode@CDragVisual@@UEAAXW4DragVisualMode@@@Z.c)
 *     ?SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z @ 0x180426F50 (-SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z.c)
 *     ?ShowPlaceModeEntryAnimation@CDragVisual@@UEAAXXZ @ 0x1804272A0 (-ShowPlaceModeEntryAnimation@CDragVisual@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18038DCD0 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x18038DD54 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_6322593fd6617ded31d0a35e6b081f9a___ @ 0x180424BB0 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_6322593fd6617ded31d0a35e6b081.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_bbeb76a51bfb926050d075f4007d064b___lambda_ce3300e2c568934d15624d64d17a11bc___ @ 0x180424D8C (DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_-__lambda_bb.c)
 */

void __fastcall CDragVisual::_UpdateThumbnail(__int64 a1, unsigned int a2, char a3, char a4, __int64 a5)
{
  __int64 v9; // r9
  int v10; // ecx
  int v11; // ebx
  int v12; // eax
  float v13; // xmm0_4
  int v14; // r8d
  float v15; // xmm0_4
  int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-60h]
  int v21; // [rsp+28h] [rbp-58h]
  __int64 v22; // [rsp+40h] [rbp-40h] BYREF
  __int64 v23; // [rsp+48h] [rbp-38h] BYREF
  __int64 v24[2]; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT rc; // [rsp+60h] [rbp-20h] BYREF

  if ( !*(_QWORD *)(a1 + 112) )
    return;
  v22 = *(_QWORD *)(a1 + 72);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v22);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v24, &v22, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  if ( (a3 & 5) != 0 )
  {
    v10 = *(_DWORD *)(a1 + 288);
    rc = *(struct tagRECT *)(a1 + 240);
    if ( v10 )
    {
      v11 = (int)(float)((float)(*(_DWORD *)(a1 + 200) - *(_DWORD *)(a1 + 192)) * 0.052000001);
      v12 = *(_DWORD *)(a1 + 248) - *(_DWORD *)(a1 + 240);
      v13 = (float)(*(_DWORD *)(a1 + 252) - *(_DWORD *)(a1 + 244));
      if ( v10 == 3 )
      {
        v14 = (int)(float)(v13 * -0.025000006);
        v15 = (float)v12 * -0.025000006;
      }
      else if ( v10 == 4 )
      {
        v14 = (int)(float)(v13 * -0.050000012);
        v15 = (float)v12 * -0.050000012;
      }
      else
      {
        v14 = (int)(float)(v13 * 0.050000001);
        v15 = (float)v12 * 0.050000001;
      }
      InflateRect(&rc, (int)v15, v14);
      v16 = *(_DWORD *)(a1 + 288);
      if ( v16 == 1 )
      {
        v11 = -v11;
LABEL_12:
        rc.left += v11;
        rc.right += v11;
        goto LABEL_13;
      }
      if ( v16 == 2 )
        goto LABEL_12;
    }
LABEL_13:
    LOBYTE(v21) = 0;
    LOBYTE(v20) = 0;
    DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const____lambda_bbeb76a51bfb926050d075f4007d064b___lambda_ce3300e2c568934d15624d64d17a11bc___(
      *(_QWORD *)(a1 + 112),
      (__int64)&rc,
      a2,
      v9,
      v20,
      v21,
      a5);
  }
  v23 = 0LL;
  if ( (a4 & 1) != 0 )
  {
    *(_QWORD *)&rc.left = *(_QWORD *)(a1 + 112);
    v17 = *(_QWORD *)&rc.left;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&rc.left);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    v22 = v17;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v22);
    if ( (int)DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_6322593fd6617ded31d0a35e6b081f9a___(
                &v22,
                v18,
                &v23) < 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v17 + 40LL))(v17, 0LL, 0LL, 0LL);
      a3 &= ~8u;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&rc.left);
  }
  if ( (a3 & 8) != 0
    || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 112) + 48LL))(*(_QWORD *)(a1 + 112))
    && *(_DWORD *)(a1 + 148) != 4 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(a1 + 112) + 40LL))(
      *(_QWORD *)(a1 + 112),
      a1 + 240,
      a2,
      v23);
  }
  if ( (a3 & 2) != 0 )
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 112) + 32LL))(
      *(_QWORD *)(a1 + 112),
      v19,
      a2,
      0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v24);
}
