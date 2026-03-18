/*
 * XREFs of ?CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ @ 0x1C001D6D0
 * Callers:
 *     ?PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C001D298 (-PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C001FD38 (-PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C0028B14 (WPP_IFR_SF_.c)
 */

_IO_RESOURCE_REQUIREMENTS_LIST *__fastcall FxIoResReqList::CreateWdmList(FxIoResReqList *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r11
  FxCollectionInternal *v2; // rsi
  __int64 m_Count; // r10
  unsigned int v4; // r9d
  unsigned int *v5; // r8
  _LIST_ENTRY *Flink; // rdx
  _QWORD *p_Blink; // r8
  FxIoResReqList *v9; // rcx
  unsigned __int64 v10; // rax
  unsigned int v11; // ecx
  unsigned __int64 v12; // rax
  unsigned int v13; // edi
  unsigned int v14; // eax
  unsigned int v15; // edi
  unsigned int *Pool2; // rax
  _LIST_ENTRY *v17; // r10
  _LIST_ENTRY *v18; // rdx
  _LIST_ENTRY **v19; // rdx
  _LIST_ENTRY *v21; // rcx
  _LIST_ENTRY *v22; // r9
  _LIST_ENTRY **v23; // r9
  _LIST_ENTRY *v24; // rax

  m_Globals = this->m_Globals;
  v2 = &this->FxCollectionInternal;
  m_Count = this->m_Count;
  v4 = 0;
  v5 = 0LL;
  if ( !(_DWORD)m_Count )
    return (_IO_RESOURCE_REQUIREMENTS_LIST *)v5;
  Flink = this->m_ListHead.Flink;
  p_Blink = &Flink[-1].Blink;
  if ( Flink != &this->m_ListHead )
  {
    while ( v4 + *(_DWORD *)(*p_Blink + 120LL) >= v4 )
    {
      v9 = (FxIoResReqList *)p_Blink[1];
      v4 += *(_DWORD *)(*p_Blink + 120LL);
      p_Blink = &v9[-1].m_SlotNumber;
      if ( v9 == (FxIoResReqList *)&this->m_ListHead )
        goto LABEL_5;
    }
    goto LABEL_19;
  }
LABEL_5:
  v10 = 40LL * (unsigned int)(m_Count - 1);
  if ( v10 <= 0xFFFFFFFF )
  {
    v11 = v10 + 72;
    if ( (unsigned int)v10 < 0xFFFFFFB8 )
    {
      v12 = 32LL * v4;
      if ( v12 <= 0xFFFFFFFF )
      {
        v13 = v12 + v11;
        if ( (unsigned int)v12 + v11 >= v11 )
        {
          v14 = 32 * m_Count;
          if ( (unsigned __int64)(32 * m_Count) <= 0xFFFFFFFF && v13 >= v14 )
          {
            v15 = v13 - v14;
            Pool2 = (unsigned int *)ExAllocatePool2(256LL, v15, m_Globals->Tag);
            v5 = Pool2;
            if ( Pool2 )
            {
              v17 = (_LIST_ENTRY *)(Pool2 + 8);
              v18 = this->m_ListHead.Flink;
              Pool2[1] = this->m_InterfaceType;
              Pool2[3] = this->m_SlotNumber;
              Pool2[7] = v2->m_Count;
              *Pool2 = v15;
              while ( 1 )
              {
                v19 = &v18[-1].Blink;
                if ( v19 == (_LIST_ENTRY **)v2 )
                  break;
                v21 = *v19;
                LODWORD(v17->Flink) = 65537;
                HIDWORD(v17->Flink) = v21[7].Blink;
                v17 = (_LIST_ENTRY *)((char *)v17 + 8);
                v22 = v21[8].Flink;
                while ( 1 )
                {
                  v23 = &v22[-1].Blink;
                  if ( v23 == &v21[7].Blink )
                    break;
                  v24 = *v23;
                  *v17 = *(_LIST_ENTRY *)((char *)*v23 + 104);
                  v17[1] = *(_LIST_ENTRY *)((char *)v24 + 120);
                  v22 = v23[1];
                  v17 += 2;
                }
                v18 = v19[1];
              }
            }
            return (_IO_RESOURCE_REQUIREMENTS_LIST *)v5;
          }
        }
      }
    }
  }
LABEL_19:
  WPP_IFR_SF_(m_Globals, 2u, 0xCu, 0xCu, WPP_FxResourceCollection_cpp_Traceguids);
  return 0LL;
}
