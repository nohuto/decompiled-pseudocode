/*
 * XREFs of ?OnSpatialManipulationUpdated@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationUpdatedEventArgs@3456@@Z @ 0x1800812F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ?CalculatePathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUfloat3@Numerics@Foundation@Windows@@PEAUISpatialManipulationUpdatedEventArgs@Spatial@Input@UI@5@@Z @ 0x18008003C (-CalculatePathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA-AUfloat3@Numerics@Foundation@Win.c)
 *     ?GetHitTestResultForPathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUHitTestResult3D@@Ufloat3@Numerics@Foundation@Windows@@@Z @ 0x180080E00 (-GetHitTestResultForPathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA-AUHitTestResult3D@@Ufl.c)
 */

__int64 __fastcall MPCSpatialGestureRecognizerHandler::OnSpatialManipulationUpdated(
        MPCSpatialGestureRecognizerHandler *this,
        struct Windows::UI::Input::Spatial::ISpatialGestureRecognizer *a2,
        struct Windows::UI::Input::Spatial::ISpatialManipulationUpdatedEventArgs *a3)
{
  __int64 v4; // rax
  char v5; // al
  __int64 v6; // rdx
  _OWORD *v7; // rax
  _OWORD *v8; // rcx
  __int128 v9; // xmm1
  unsigned __int64 v11; // [rsp+20h] [rbp-E0h] BYREF
  int v12; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v13; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+38h] [rbp-C8h]
  _BYTE v15[4]; // [rsp+40h] [rbp-C0h] BYREF
  float v16; // [rsp+44h] [rbp-BCh]
  float v17; // [rsp+48h] [rbp-B8h]

  MPCSpatialGestureRecognizerHandler::CalculatePathingDelta(this, &v11, (__int64)a3);
  v13 = v11;
  v14 = v12;
  MPCSpatialGestureRecognizerHandler::GetHitTestResultForPathingDelta((__int64)this, v15, (float *)&v13);
  v4 = *((_QWORD *)this + 13);
  if ( v15[0] )
  {
    *(float *)(v4 + 672) = v16;
    *(float *)(*((_QWORD *)this + 13) + 676LL) = v17;
    if ( !*((_BYTE *)this + 188)
      || ((float)*((int *)this + 48) != v16 || (float)*((int *)this + 49) != v17 ? (v5 = 0) : (v5 = 1),
          (*((_BYTE *)this + 188) = v5) == 0) )
    {
      v6 = 2LL;
      *(_DWORD *)(*((_QWORD *)this + 13) + 656LL) = 7;
      v7 = v15;
      v8 = (_OWORD *)(*((_QWORD *)this + 13) + 152LL);
      do
      {
        *v8 = *v7;
        v8[1] = v7[1];
        v8[2] = v7[2];
        v8[3] = v7[3];
        v8[4] = v7[4];
        v8[5] = v7[5];
        v8[6] = v7[6];
        v8 += 8;
        v9 = v7[7];
        v7 += 8;
        *(v8 - 1) = v9;
        --v6;
      }
      while ( v6 );
      *v8 = *v7;
      v8[1] = v7[1];
      v8[2] = v7[2];
      v8[3] = v7[3];
      *((_QWORD *)v8 + 8) = *((_QWORD *)v7 + 8);
    }
  }
  else
  {
    *(_BYTE *)(v4 + 2024) = 1;
  }
  *((_BYTE *)this + 172) = 1;
  return 0LL;
}
