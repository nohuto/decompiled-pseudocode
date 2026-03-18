/*
 * XREFs of ?AddLines@CTransformedGeometryHelper@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x18000E910
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@AEAUD2D_POINT_2F@@@?$vector@UD2D_POINT_2F@@V?$allocator@UD2D_POINT_2F@@@std@@@std@@QEAAPEAUD2D_POINT_2F@@QEAU2@AEAU2@@Z @ 0x18000E9D4 (--$_Emplace_reallocate@AEAUD2D_POINT_2F@@@-$vector@UD2D_POINT_2F@@V-$allocator@UD2D_POINT_2F@@@s.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x1800102BC (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 */

void __fastcall CTransformedGeometryHelper::AddLines(
        CTransformedGeometryHelper *this,
        const struct D2D_POINT_2F *a2,
        unsigned int a3)
{
  __int64 *v3; // rbx
  __int64 v5; // r8
  __int64 v7; // rdx
  __int64 v9; // rbp
  _QWORD *v10; // rdx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = (__int64 *)((char *)this + 40);
  v5 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 6) = v5;
  v7 = v5;
  if ( a3 )
  {
    v9 = a3;
    do
    {
      CMILMatrix::Transform(*((CMILMatrix **)this + 2), (const struct MilPoint2F *)a2, (struct MilPoint2F *)&v11, 1u);
      v10 = (_QWORD *)*((_QWORD *)this + 6);
      if ( v10 == *((_QWORD **)this + 7) )
      {
        std::vector<D2D_POINT_2F>::_Emplace_reallocate<D2D_POINT_2F &>(v3, v10, &v11);
        v5 = *((_QWORD *)this + 6);
      }
      else
      {
        *v10 = v11;
        v3[1] += 8LL;
        v5 = v3[1];
      }
      ++a2;
      --v9;
    }
    while ( v9 );
    v7 = *v3;
  }
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 4) + 48LL))(
    *((_QWORD *)this + 4),
    v7,
    (v5 - v7) >> 3);
}
