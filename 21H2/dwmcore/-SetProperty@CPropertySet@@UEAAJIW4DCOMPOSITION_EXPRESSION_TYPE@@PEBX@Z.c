/*
 * XREFs of ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800BC9E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$UpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3@@@Z @ 0x18001982C (--$UpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVecto.c)
 *     ??$LogValueUpdate@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD2D_MATRIX_3X2_F@@@Z @ 0x180019C18 (--$LogValueUpdate@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     ??$UpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@@Z @ 0x1800BC6D0 (--$UpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix.c)
 *     ??$PropertyUpdated@M@CPropertySet@@AEAAJIIPEBM@Z @ 0x1800BCF4C (--$PropertyUpdated@M@CPropertySet@@AEAAJIIPEBM@Z.c)
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800BD120 (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x180180A3C (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ??$UpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQuaternion@@@Z @ 0x1801E5998 (--$UpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQu.c)
 *     ??$UpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector2@@@Z @ 0x1801E5A98 (--$UpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVecto.c)
 *     ??$UpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3DCOLORVALUE@@@Z @ 0x1801E5B98 (--$UpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3D.c)
 *     ??$UpdateProperty@_N@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z @ 0x1801E5C98 (--$UpdateProperty@_N@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020FB94 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::SetProperty(CResource *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v7; // rcx
  int v8; // r8d
  _OWORD *v9; // r9
  int v10; // ebx
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  int v16; // r8d
  int v17; // r8d
  int v18; // r8d
  int updated; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  _QWORD *v22; // r10
  __int64 v23; // rcx
  __int64 v24; // r9
  __int64 v25; // r10
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  _QWORD *v30; // r10
  __int64 (__fastcall ***v31)(_QWORD, __int64, _QWORD, __int64); // rcx
  unsigned int v32; // ebp
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rbx
  struct _RTL_GENERIC_TABLE *v36; // rcx
  __int64 v37; // r15
  unsigned __int64 v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // rdx
  unsigned int v41; // r8d
  __int64 v42; // rcx
  int v43; // edi
  int v44; // r9d
  __int64 v45; // rcx
  _QWORD *v46; // r10
  __int64 v47; // rcx
  __int64 v48; // r9
  __int64 v49; // r10
  int v50; // eax
  unsigned int v52; // [rsp+20h] [rbp-58h]
  unsigned int v53; // [rsp+20h] [rbp-58h]
  unsigned int v54; // [rsp+20h] [rbp-58h]
  int Buffer; // [rsp+30h] [rbp-48h] BYREF
  void *lpMem[2]; // [rsp+38h] [rbp-40h]
  __int64 v57; // [rsp+48h] [rbp-30h]
  int v58; // [rsp+50h] [rbp-28h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v4 = a2;
  if ( (unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((char *)a1 + 80) )
  {
    v11 = v8 - 17;
    if ( !v11 )
    {
      updated = CPropertySet::UpdateProperty<bool>(a1);
      v10 = updated;
      if ( updated < 0 )
      {
        v52 = 258;
        goto LABEL_64;
      }
      return 0;
    }
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = v12 - 17;
      if ( !v13 )
      {
        updated = CPropertySet::UpdateProperty<D2DVector2>(a1);
        v10 = updated;
        if ( updated < 0 )
        {
          v52 = 266;
          goto LABEL_64;
        }
        return 0;
      }
      v14 = v13 - 17;
      if ( !v14 )
      {
        updated = CPropertySet::UpdateProperty<D2DVector3>(a1);
        v10 = updated;
        if ( updated < 0 )
        {
          v52 = 270;
          goto LABEL_64;
        }
        return 0;
      }
      v15 = v14 - 17;
      if ( !v15 )
      {
        updated = CPropertySet::UpdateProperty<D2DQuaternion>(a1);
        v10 = updated;
        if ( updated < 0 )
        {
          v52 = 274;
          goto LABEL_64;
        }
        return 0;
      }
      v16 = v15 - 1;
      if ( !v16 )
      {
        updated = CPropertySet::UpdateProperty<_D3DCOLORVALUE>(a1);
        v10 = updated;
        if ( updated < 0 )
        {
          v52 = 278;
          goto LABEL_64;
        }
        return 0;
      }
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 33;
        if ( v18 )
        {
          if ( v18 != 161 )
            ModuleFailFastForHRESULT(2147549183LL, retaddr);
          updated = CPropertySet::UpdateProperty<D2DMatrix>(a1, (unsigned int)v4, 265LL, v9);
          v10 = updated;
          if ( updated < 0 )
          {
            v52 = 290;
LABEL_64:
            v44 = updated;
            goto LABEL_65;
          }
          return 0;
        }
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v7) )
          goto LABEL_36;
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v21) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        if ( *(_DWORD *)(*v22 + 8 * v4) == 104 )
        {
          if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v21) )
            ModuleFailFastForHRESULT(2147942487LL, retaddr);
          if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v23) )
            ModuleFailFastForHRESULT(2147942487LL, retaddr);
          v26 = *(_QWORD *)(v25 + 32);
          v27 = *(_DWORD *)(v24 + 8 * v4 + 4) & 0x1FFFFFFF;
          *(_OWORD *)(v27 + v26) = *(_OWORD *)a4;
          *(_QWORD *)(v27 + v26 + 16) = *(_QWORD *)(a4 + 16);
          if ( (unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v25) )
          {
            if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v28) )
              ModuleFailFastForHRESULT(2147942487LL, retaddr);
            v31 = (__int64 (__fastcall ***)(_QWORD, __int64, _QWORD, __int64))*((_QWORD *)a1 + 9);
            v32 = *(_DWORD *)(*v30 + 8 * v4);
            if ( v31 && (v33 = (**v31)(v31, v29, v32, a4), v10 = v33, v33 < 0) )
            {
              v53 = 458;
            }
            else
            {
              v35 = 0LL;
              v36 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)a1 + 5);
              v37 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 352LL);
              if ( v36 )
              {
                v57 = 0LL;
                v58 = 0;
                *(_OWORD *)lpMem = 0LL;
                Buffer = v4;
                v35 = (__int64)RtlLookupElementGenericTable(v36, &Buffer);
                if ( lpMem[0] != lpMem[1] )
                {
                  operator delete(lpMem[0]);
                  lpMem[0] = 0LL;
                }
              }
              v38 = v35 + 8;
              v39 = -v35;
              v40 = v38 & -(__int64)(v39 != 0);
              if ( v40 )
              {
                v41 = 0;
                if ( *(_DWORD *)((v38 & -(__int64)(v39 != 0)) + 0x18) )
                {
                  do
                  {
                    v42 = v41++;
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v40 + 8 * v42) + 272LL) = v37;
                  }
                  while ( v41 < *(_DWORD *)(v40 + 24) );
                }
                *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 272LL) + 416LL) |= 2u;
                (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)a1 + 2) + 504LL) + 96LL))(
                  *(_QWORD *)(*((_QWORD *)a1 + 2) + 504LL),
                  0LL,
                  8LL);
              }
              CPropertySet::LogValueUpdate<D2D_MATRIX_3X2_F>((__int64)a1, v4, v32, 1u, (int *)a4);
              v33 = CPropertySet::NotifyPropertyValue(a1, (unsigned int)v4, v32);
              v10 = v33;
              if ( v33 >= 0 )
                return 0;
              v53 = 477;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, v53, 0LL);
          }
          else
          {
            v10 = -2147024809;
            MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, -2147024809, 0x1BEu, 0LL);
          }
          v54 = 417;
        }
        else
        {
LABEL_36:
          v10 = -2147024809;
          v54 = 410;
        }
        v43 = v10;
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v10, v54, 0LL);
        if ( v10 < 0 )
        {
          v52 = 286;
          goto LABEL_39;
        }
      }
      else
      {
        updated = CPropertySet::UpdateProperty<D2DQuaternion>(a1);
        v10 = updated;
        if ( updated < 0 )
        {
          v52 = 282;
          goto LABEL_64;
        }
      }
      return 0;
    }
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v7) )
      goto LABEL_58;
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v45) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( *(_DWORD *)(*v46 + 8 * v4) == 18 )
    {
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v45) )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v47) )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      *(_DWORD *)((*(_DWORD *)(v48 + 8 * v4 + 4) & 0x1FFFFFFF) + *(_QWORD *)(v49 + 32)) = *(_DWORD *)a4;
      v50 = CPropertySet::PropertyUpdated<float>(a1, (unsigned int)v4, 1LL, a4);
      v43 = v50;
      if ( v50 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v50, 0x1A1u, 0LL);
      else
        v43 = 0;
    }
    else
    {
LABEL_58:
      v43 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, -2147024809, 0x19Au, 0LL);
    }
    v10 = v43;
    if ( v43 >= 0 )
      return 0;
    v52 = 262;
LABEL_39:
    v44 = v43;
LABEL_65:
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v44, v52, 0LL);
    return (unsigned int)v10;
  }
  v10 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024809, 0xFCu, 0LL);
  return (unsigned int)v10;
}
