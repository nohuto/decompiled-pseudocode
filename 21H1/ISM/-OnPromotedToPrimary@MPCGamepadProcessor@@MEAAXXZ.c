/*
 * XREFs of ?OnPromotedToPrimary@MPCGamepadProcessor@@MEAAXXZ @ 0x1801935B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011C98 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     memcpy_0 @ 0x18004AC7B (memcpy_0.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x180079FB8 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 */

void __fastcall MPCGamepadProcessor::OnPromotedToPrimary(MPCGamepadProcessor *this)
{
  struct MPCHolographicInputManager *Instance; // rax
  struct MPCHolographicInputManager *v3; // rax
  float *v4; // rax
  float v5[4]; // [rsp+20h] [rbp-948h] BYREF
  _OWORD v6[4]; // [rsp+30h] [rbp-938h] BYREF
  _BYTE v7[952]; // [rsp+70h] [rbp-8F8h] BYREF
  __int128 v8; // [rsp+428h] [rbp-540h]
  __int128 v9; // [rsp+438h] [rbp-530h]
  __int128 v10; // [rsp+448h] [rbp-520h]
  __int128 v11; // [rsp+458h] [rbp-510h]

  Instance = MPCHolographicInputManager::GetInstance();
  *((_QWORD *)this + 632) = *((_QWORD *)Instance + 28);
  *((_DWORD *)this + 1266) = *((_DWORD *)Instance + 58);
  v3 = MPCHolographicInputManager::GetInstance();
  memcpy_0(v7, v3, 0x8F0uLL);
  v6[0] = v8;
  v6[1] = v9;
  v6[2] = v10;
  v6[3] = v11;
  v4 = Windows::Foundation::Numerics::transform(v5, (float *)this + 1264, (float *)v6);
  *(_QWORD *)((char *)this + 5068) = *(_QWORD *)v4;
  *(float *)&v4 = v4[2];
  *(_OWORD *)((char *)this + 5096) = 0LL;
  *((_DWORD *)this + 1269) = (_DWORD)v4;
}
