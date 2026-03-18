/*
 * XREFs of ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180047B70
 * Callers:
 *     <none>
 * Callees:
 *     ??$UpdateProperty@M@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z @ 0x18004794C (--$UpdateProperty@M@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z.c)
 *     ??$UpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180047D8C (--$UpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$UpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3@@@Z @ 0x1800E19A0 (--$UpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVecto.c)
 *     ??$UpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@@Z @ 0x1800E7358 (--$UpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x1801BCAB8 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ??$UpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQuaternion@@@Z @ 0x180239428 (--$UpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQu.c)
 *     ??$UpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector2@@@Z @ 0x180239528 (--$UpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVecto.c)
 *     ??$UpdateProperty@UD2DVector4@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector4@@@Z @ 0x180239628 (--$UpdateProperty@UD2DVector4@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVecto.c)
 *     ??$UpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3DCOLORVALUE@@@Z @ 0x180239728 (--$UpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3D.c)
 *     ??$UpdateProperty@_N@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z @ 0x180239828 (--$UpdateProperty@_N@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::SetProperty(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned int v3; // ecx
  int v4; // r8d
  CResource *v5; // r10
  unsigned int v6; // ebx
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int updated; // eax
  unsigned int v16; // ecx
  unsigned int v18; // [rsp+20h] [rbp-18h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(a1 + 88, a2) )
  {
    v7 = v4 - 17;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 17;
        if ( v9 )
        {
          v10 = v9 - 17;
          if ( v10 )
          {
            v11 = v10 - 17;
            if ( v11 )
            {
              v12 = v11 - 1;
              if ( v12 )
              {
                v13 = v12 - 1;
                if ( v13 )
                {
                  v14 = v13 - 33;
                  if ( v14 )
                  {
                    if ( v14 != 161 )
                      ModuleFailFastForHRESULT(2147549183LL, retaddr);
                    updated = CPropertySet::UpdateProperty<D2DMatrix>(v5);
                    v6 = updated;
                    if ( updated < 0 )
                    {
                      v18 = 289;
LABEL_31:
                      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, updated, v18, 0LL);
                      return v6;
                    }
                  }
                  else
                  {
                    updated = CPropertySet::UpdateProperty<D2D_MATRIX_3X2_F>(v5);
                    v6 = updated;
                    if ( updated < 0 )
                    {
                      v18 = 285;
                      goto LABEL_31;
                    }
                  }
                }
                else
                {
                  updated = CPropertySet::UpdateProperty<D2DQuaternion>(v5);
                  v6 = updated;
                  if ( updated < 0 )
                  {
                    v18 = 281;
                    goto LABEL_31;
                  }
                }
              }
              else
              {
                updated = CPropertySet::UpdateProperty<_D3DCOLORVALUE>(v5);
                v6 = updated;
                if ( updated < 0 )
                {
                  v18 = 277;
                  goto LABEL_31;
                }
              }
            }
            else
            {
              updated = CPropertySet::UpdateProperty<D2DVector4>(v5);
              v6 = updated;
              if ( updated < 0 )
              {
                v18 = 273;
                goto LABEL_31;
              }
            }
          }
          else
          {
            updated = CPropertySet::UpdateProperty<D2DVector3>(v5);
            v6 = updated;
            if ( updated < 0 )
            {
              v18 = 269;
              goto LABEL_31;
            }
          }
        }
        else
        {
          updated = CPropertySet::UpdateProperty<D2DVector2>(v5);
          v6 = updated;
          if ( updated < 0 )
          {
            v18 = 265;
            goto LABEL_31;
          }
        }
      }
      else
      {
        updated = CPropertySet::UpdateProperty<float>(v5, v2);
        v6 = updated;
        if ( updated < 0 )
        {
          v18 = 261;
          goto LABEL_31;
        }
      }
    }
    else
    {
      updated = CPropertySet::UpdateProperty<bool>(v5);
      v6 = updated;
      if ( updated < 0 )
      {
        v18 = 257;
        goto LABEL_31;
      }
    }
    return 0;
  }
  v6 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2147024809, 0xFBu, 0LL);
  return v6;
}
