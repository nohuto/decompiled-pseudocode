/*
 * XREFs of ??$PropertyUpdated@UD2DVector4@@@CPropertySet@@AEAAJIIPEBUD2DVector4@@@Z @ 0x1801E6BA4
 * Callers:
 *     ??$AddProperty@UD2DQuaternion@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQuaternion@@@Z @ 0x1801E63C0 (--$AddProperty@UD2DQuaternion@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQuat.c)
 *     ??$AddProperty@_N@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z @ 0x1801E648C (--$AddProperty@_N@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z.c)
 *     ??$UpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQuaternion@@@Z @ 0x1801E6C74 (--$UpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQu.c)
 *     ??$UpdateProperty@_N@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z @ 0x1801E6E30 (--$UpdateProperty@_N@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A0060 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800AF0F4 (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ??$LogValueUpdate@UD2DQuaternion@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD2DQuaternion@@@Z @ 0x1801E6558 (--$LogValueUpdate@UD2DQuaternion@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD2DQ.c)
 */

__int64 __fastcall CPropertySet::PropertyUpdated<D2DVector4>(
        CResource *this,
        unsigned int a2,
        unsigned int a3,
        int *a4)
{
  __int64 v4; // rax
  __int64 (__fastcall ***v6)(_QWORD, _QWORD, _QWORD); // rcx
  unsigned int v10; // ebp
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  int v14; // eax
  __int64 v15; // rcx

  v4 = *((_QWORD *)this + 10);
  v6 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))*((_QWORD *)this + 9);
  v10 = *(_DWORD *)(v4 + 8LL * a2);
  if ( v6 && (v11 = (**v6)(v6, a2, v10), v13 = v11, v11 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x1B6u, 0LL);
  }
  else
  {
    CResource::InvalidateAnimationSources(this, a2);
    CPropertySet::LogValueUpdate<D2DQuaternion>((__int64)this, a2, v10, a3, a4);
    v14 = CPropertySet::NotifyPropertyValue((__int64)this, a2, v10);
    v13 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x1C9u, 0LL);
    else
      return 0;
  }
  return v13;
}
