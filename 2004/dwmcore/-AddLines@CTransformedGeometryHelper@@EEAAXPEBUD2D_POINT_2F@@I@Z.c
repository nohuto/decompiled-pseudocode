/*
 * XREFs of ?AddLines@CTransformedGeometryHelper@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x18025E1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x180210E00 (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     ??$_Emplace_reallocate@AEAUD2D_POINT_2F@@@?$vector@UD2D_POINT_2F@@V?$allocator@UD2D_POINT_2F@@@std@@@std@@QEAAPEAUD2D_POINT_2F@@QEAU2@AEAU2@@Z @ 0x18025DFFC (--$_Emplace_reallocate@AEAUD2D_POINT_2F@@@-$vector@UD2D_POINT_2F@@V-$allocator@UD2D_POINT_2F@@@s.c)
 */

void __fastcall CTransformedGeometryHelper::AddLines(
        CTransformedGeometryHelper *this,
        const struct D2D_POINT_2F *a2,
        unsigned int a3)
{
  __int64 *v3; // rbx
  __int64 v5; // r10
  __int64 v7; // rbp
  _QWORD *v8; // r10
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = (__int64 *)((char *)this + 32);
  v5 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 5) = v5;
  if ( a3 )
  {
    v7 = a3;
    do
    {
      CMILMatrix::Transform(*((CMILMatrix **)this + 1), (const struct MilPoint2F *)a2, (struct MilPoint2F *)&v9);
      if ( (_QWORD *)v3[2] == v8 )
      {
        std::vector<D2D_POINT_2F>::_Emplace_reallocate<D2D_POINT_2F &>(v3, v8, &v9);
      }
      else
      {
        *v8 = v9;
        v3[1] += 8LL;
      }
      v5 = v3[1];
      ++a2;
      --v7;
    }
    while ( v7 );
  }
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 3) + 48LL))(
    *((_QWORD *)this + 3),
    *v3,
    (unsigned int)((v5 - *v3) >> 3));
}
