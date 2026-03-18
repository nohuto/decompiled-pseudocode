/*
 * XREFs of ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800AEB60
 * Callers:
 *     <none>
 * Callees:
 *     ??$UpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3@@@Z @ 0x18001B0E8 (--$UpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVecto.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ??$UpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@@Z @ 0x1800AE978 (--$UpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix.c)
 *     ??$PropertyUpdated@M@CPropertySet@@AEAAJIIPEBM@Z @ 0x1800AEF9C (--$PropertyUpdated@M@CPropertySet@@AEAAJIIPEBM@Z.c)
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800AF0F4 (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ??$LogValueUpdate@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800AF240 (--$LogValueUpdate@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ??$UpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQuaternion@@@Z @ 0x1801E6C74 (--$UpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQu.c)
 *     ??$UpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector2@@@Z @ 0x1801E6D08 (--$UpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVecto.c)
 *     ??$UpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3DCOLORVALUE@@@Z @ 0x1801E6D9C (--$UpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3D.c)
 *     ??$UpdateProperty@_N@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z @ 0x1801E6E30 (--$UpdateProperty@_N@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x1801E74C8 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::SetProperty(_QWORD *a1, unsigned int a2, int a3, __int64 a4)
{
  __int64 v4; // rsi
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int updated; // eax
  __int64 v16; // rcx
  unsigned int v17; // edi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 *v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 (__fastcall ***v24)(_QWORD, __int64, _QWORD); // rcx
  unsigned int v25; // r12d
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdi
  struct _RTL_GENERIC_TABLE *v30; // rcx
  __int64 v31; // r15
  unsigned __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rcx
  _QWORD *v40; // rcx
  _DWORD *v41; // r9
  int v42; // eax
  __int64 v43; // rcx
  int v44; // esi
  unsigned int v46; // [rsp+20h] [rbp-58h]
  int Buffer; // [rsp+30h] [rbp-48h] BYREF
  void *lpMem[2]; // [rsp+38h] [rbp-40h]
  int v49; // [rsp+48h] [rbp-30h]
  int v50; // [rsp+4Ch] [rbp-2Ch]
  int v51; // [rsp+50h] [rbp-28h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v4 = a2;
  v7 = a3 - 17;
  if ( !v7 )
  {
    updated = CPropertySet::UpdateProperty<bool>(a1, a2, 17LL);
    v17 = updated;
    if ( updated < 0 )
    {
      v46 = 243;
      goto LABEL_51;
    }
    return 0;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( (unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(a1 + 10)
      && *(_DWORD *)(*v40 + 8 * v4) == 18 )
    {
      *(_DWORD *)((*(_DWORD *)(*v40 + 8 * v4 + 4) & 0x1FFFFFFF) + v40[4]) = *v41;
      v42 = CPropertySet::PropertyUpdated<float>(a1, (unsigned int)v4, 1LL, v41);
      v44 = v42;
      if ( v42 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v42, 0x192u, 0LL);
      else
        v44 = 0;
    }
    else
    {
      v44 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v40, 0LL, 0, -2147024809, 0x18Bu, 0LL);
    }
    v17 = v44;
    if ( v44 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v44, 0xF7u, 0LL);
      return v17;
    }
    return 0;
  }
  v9 = v8 - 17;
  if ( !v9 )
  {
    updated = CPropertySet::UpdateProperty<D2DVector2>(a1, a2, 35LL);
    v17 = updated;
    if ( updated < 0 )
    {
      v46 = 251;
      goto LABEL_51;
    }
    return 0;
  }
  v10 = v9 - 17;
  if ( !v10 )
  {
    updated = CPropertySet::UpdateProperty<D2DVector3>((__int64)a1);
    v17 = updated;
    if ( updated < 0 )
    {
      v46 = 255;
      goto LABEL_51;
    }
    return 0;
  }
  v11 = v10 - 17;
  if ( !v11 )
  {
    updated = CPropertySet::UpdateProperty<D2DQuaternion>(a1, a2, 69LL);
    v17 = updated;
    if ( updated < 0 )
    {
      v46 = 259;
      goto LABEL_51;
    }
    return 0;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    updated = CPropertySet::UpdateProperty<_D3DCOLORVALUE>(a1, a2, 70LL);
    v17 = updated;
    if ( updated < 0 )
    {
      v46 = 263;
      goto LABEL_51;
    }
    return 0;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    updated = CPropertySet::UpdateProperty<D2DQuaternion>(a1, a2, 71LL);
    v17 = updated;
    if ( updated < 0 )
    {
      v46 = 267;
      goto LABEL_51;
    }
    return 0;
  }
  v14 = v13 - 33;
  if ( v14 )
  {
    if ( v14 != 161 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    updated = CPropertySet::UpdateProperty<D2DMatrix>((__int64)a1);
    v17 = updated;
    if ( updated < 0 )
    {
      v46 = 275;
LABEL_51:
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, updated, v46, 0LL);
      return v17;
    }
    return 0;
  }
  if ( (unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(a1 + 10)
    && (v19 = *v20, *(_DWORD *)(*v20 + 8 * v4) == 104) )
  {
    v22 = v20[4];
    v23 = *(_DWORD *)(v19 + 8 * v4 + 4) & 0x1FFFFFFF;
    *(_OWORD *)(v23 + v22) = *(_OWORD *)v21;
    *(_QWORD *)(v23 + v22 + 16) = *(_QWORD *)(v21 + 16);
    v24 = (__int64 (__fastcall ***)(_QWORD, __int64, _QWORD))a1[9];
    v25 = *(_DWORD *)(*v20 + 8 * v4);
    if ( v24 && (v26 = (**v24)(v24, v18, v25), v17 = v26, v26 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x1B6u, 0LL);
    }
    else
    {
      v29 = 0LL;
      v30 = (struct _RTL_GENERIC_TABLE *)a1[5];
      v31 = *(_QWORD *)(a1[2] + 352LL);
      if ( v30 )
      {
        v49 = 0;
        v50 = 0;
        v51 = 0;
        *(_OWORD *)lpMem = 0LL;
        Buffer = v4;
        v29 = (__int64)RtlLookupElementGenericTable(v30, &Buffer);
        if ( lpMem[0] != lpMem[1] )
        {
          operator delete(lpMem[0]);
          lpMem[0] = 0LL;
        }
      }
      v32 = v29 + 8;
      v33 = -v29;
      v34 = v32 & -(__int64)(v33 != 0);
      if ( v34 )
      {
        v35 = 0LL;
        if ( *(_DWORD *)((v32 & -(__int64)(v33 != 0)) + 0x18) )
        {
          do
          {
            v36 = *(_QWORD *)(*(_QWORD *)v34 + 8 * v35);
            v35 = (unsigned int)(v35 + 1);
            *(_QWORD *)(v36 + 272) = v31;
          }
          while ( (unsigned int)v35 < *(_DWORD *)(v34 + 24) );
        }
        *(_BYTE *)(*(_QWORD *)(a1[2] + 272LL) + 416LL) |= 2u;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1[2] + 504LL) + 96LL))(
          *(_QWORD *)(a1[2] + 504LL),
          0LL,
          8LL);
      }
      CPropertySet::LogValueUpdate<D2D_MATRIX_3X2_F>((_DWORD)a1, v4, v25, 1, a4);
      v37 = CPropertySet::NotifyPropertyValue(a1, (unsigned int)v4, v25);
      v17 = v37;
      if ( v37 >= 0 )
        return 0;
      MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0x1C9u, 0LL);
    }
    MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v17, 0x192u, 0LL);
  }
  else
  {
    v17 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, -2147024809, 0x18Bu, 0LL);
  }
  if ( (v17 & 0x80000000) == 0 )
    return 0;
  MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v17, 0x10Fu, 0LL);
  return v17;
}
