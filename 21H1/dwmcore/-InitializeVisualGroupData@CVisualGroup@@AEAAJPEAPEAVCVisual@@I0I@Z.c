/*
 * XREFs of ?InitializeVisualGroupData@CVisualGroup@@AEAAJPEAPEAVCVisual@@I0I@Z @ 0x1801B0038
 * Callers:
 *     ?ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALGROUP@@PEBXI@Z @ 0x1801B0264 (-ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALGROUP@@PEBXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800DF184 (--$_Emplace_reallocate@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisual.c)
 *     ?Create@CExcludeVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800DF2EC (-Create@CExcludeVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ??1CExcludeVisualReference@@QEAA@XZ @ 0x1800DF3D4 (--1CExcludeVisualReference@@QEAA@XZ.c)
 */

__int64 __fastcall CVisualGroup::InitializeVisualGroupData(
        CVisualGroup *this,
        struct CVisual **a2,
        unsigned int a3,
        struct CVisual **a4,
        unsigned int a5)
{
  int v5; // edi
  unsigned int i; // r14d
  struct CVisual *v11; // rcx
  __int64 v12; // rcx
  CExcludeVisualReference *v13; // rbx
  char *v14; // rdx
  CExcludeVisualReference *v15; // rax
  CExcludeVisualReference *v16; // rbx
  unsigned int j; // esi
  struct CVisual *v18; // rcx
  __int64 v19; // rcx
  CExcludeVisualReference *v20; // rbx
  char *v21; // rdx
  CExcludeVisualReference *v22; // rax
  CExcludeVisualReference *v23; // rbx
  CExcludeVisualReference *v24; // rbx
  CExcludeVisualReference *v26; // [rsp+30h] [rbp-20h] BYREF
  CExcludeVisualReference **v27; // [rsp+38h] [rbp-18h]
  struct CExcludeVisualReference *v28; // [rsp+40h] [rbp-10h] BYREF
  char v29; // [rsp+48h] [rbp-8h]

  v5 = 0;
  for ( i = 0; i < a3; ++a2 )
  {
    v11 = *a2;
    if ( *a2 )
    {
      v26 = 0LL;
      v28 = 0LL;
      v27 = &v26;
      v29 = 1;
      v5 = CExcludeVisualReference::Create(v11, &v28);
      if ( v29 )
      {
        v13 = *v27;
        *v27 = v28;
        if ( v13 )
        {
          CExcludeVisualReference::~CExcludeVisualReference(v13);
          operator delete(v13);
        }
      }
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v5, 0x6Au, 0LL);
LABEL_28:
        v24 = v26;
        if ( v26 )
        {
          CExcludeVisualReference::~CExcludeVisualReference(v26);
          operator delete(v24);
        }
        return (unsigned int)v5;
      }
      v14 = (char *)*((_QWORD *)this + 8);
      if ( *((char **)this + 9) == v14 )
      {
        std::vector<std::unique_ptr<CExcludeVisualReference>>::_Emplace_reallocate<std::unique_ptr<CExcludeVisualReference>>(
          (__int64 **)this + 7,
          v14,
          (__int64 *)&v26);
      }
      else
      {
        v15 = v26;
        v26 = 0LL;
        *(_QWORD *)v14 = v15;
        *((_QWORD *)this + 8) += 8LL;
      }
      v16 = v26;
      if ( v26 )
      {
        CExcludeVisualReference::~CExcludeVisualReference(v26);
        operator delete(v16);
      }
    }
    ++i;
  }
  for ( j = 0; j < a5; ++a4 )
  {
    v18 = *a4;
    if ( *a4 )
    {
      v26 = 0LL;
      v28 = 0LL;
      v27 = &v26;
      v29 = 1;
      v5 = CExcludeVisualReference::Create(v18, &v28);
      if ( v29 )
      {
        v20 = *v27;
        *v27 = v28;
        if ( v20 )
        {
          CExcludeVisualReference::~CExcludeVisualReference(v20);
          operator delete(v20);
        }
      }
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v5, 0x76u, 0LL);
        goto LABEL_28;
      }
      v21 = (char *)*((_QWORD *)this + 8);
      if ( *((char **)this + 9) == v21 )
      {
        std::vector<std::unique_ptr<CExcludeVisualReference>>::_Emplace_reallocate<std::unique_ptr<CExcludeVisualReference>>(
          (__int64 **)this + 7,
          v21,
          (__int64 *)&v26);
      }
      else
      {
        v22 = v26;
        v26 = 0LL;
        *(_QWORD *)v21 = v22;
        *((_QWORD *)this + 8) += 8LL;
      }
      v23 = v26;
      if ( v26 )
      {
        CExcludeVisualReference::~CExcludeVisualReference(v26);
        operator delete(v23);
      }
    }
    ++j;
  }
  return (unsigned int)v5;
}
