/*
 * XREFs of ??_GSharedData@CPolygonShape@@UEAAPEAXI@Z @ 0x1800EA190
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D737C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

CPolygonShape::SharedData *__fastcall CPolygonShape::SharedData::`scalar deleting destructor'(
        CPolygonShape::SharedData *this,
        char a2)
{
  void *v4; // rcx
  __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  unsigned __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = (void *)*((_QWORD *)this + 3);
  if ( v4 )
  {
    v5 = *((_QWORD *)this + 5) - (_QWORD)v4;
    v9 = v4;
    v6 = v5 & 0xFFFFFFFFFFFFFFF8uLL;
    v8 = v6;
    if ( v6 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v9, &v8);
      v6 = v8;
      v4 = v9;
    }
    operator delete(v4, v6);
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
  }
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)this + 2);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x30uLL);
  return this;
}
