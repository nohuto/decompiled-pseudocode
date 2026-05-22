/*
 * XREFs of ?EndGesture@MPCGamepadProcessor@@AEAAXXZ @ 0x180192508
 * Callers:
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180192A10 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1801944C8 (-UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180194774 (-UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x18006B0DC (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006B454 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18006B79C (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAUInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x180084A7C (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAUInputInfo@@W4MPCDownLevel.c)
 */

void __fastcall MPCGamepadProcessor::EndGesture(MPCGamepadProcessor *this)
{
  _OWORD *v2; // rax
  __int64 v3; // r9
  char *v4; // rdx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 *Instance; // rbx
  _QWORD *v18; // rax
  const char *v19; // r9
  __int64 v20; // [rsp+20h] [rbp-818h] BYREF
  _BYTE v21[24]; // [rsp+30h] [rbp-808h] BYREF
  int v22; // [rsp+48h] [rbp-7F0h]
  char v23; // [rsp+C8h] [rbp-770h] BYREF

  memset_0(v21, 0, 0x7F0uLL);
  v22 = 2032;
  v2 = (_OWORD *)((char *)this + 4736);
  v3 = 2LL;
  v4 = &v23;
  do
  {
    v5 = v2[1];
    *(_OWORD *)v4 = *v2;
    v6 = v2[2];
    *((_OWORD *)v4 + 1) = v5;
    v7 = v2[3];
    *((_OWORD *)v4 + 2) = v6;
    v8 = v2[4];
    *((_OWORD *)v4 + 3) = v7;
    v9 = v2[5];
    *((_OWORD *)v4 + 4) = v8;
    v10 = v2[6];
    *((_OWORD *)v4 + 5) = v9;
    v11 = v2[7];
    v2 += 8;
    *((_OWORD *)v4 + 6) = v10;
    v4 += 128;
    *((_OWORD *)v4 - 1) = v11;
    --v3;
  }
  while ( v3 );
  v12 = v2[1];
  *(_OWORD *)v4 = *v2;
  v13 = v2[2];
  *((_OWORD *)v4 + 1) = v12;
  v14 = v2[3];
  v15 = *((_QWORD *)v2 + 8);
  *((_OWORD *)v4 + 2) = v13;
  *((_OWORD *)v4 + 3) = v14;
  *((_QWORD *)v4 + 8) = v15;
  MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult(128LL, (__int64)v21, 2);
  Instance = (__int64 *)MPCGestureHandlerManager::GetInstance(v16);
  v18 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
          &v20,
          ((unsigned __int64)this + 32) & -(__int64)(this != 0LL));
  MPCGestureHandlerManager::DownLevelTo2D(Instance, (__int64)v21, v18, v19);
  *((_DWORD *)this + 1266) = 0;
}
