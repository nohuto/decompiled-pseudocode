/*
 * XREFs of ?CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ @ 0x1C0060B64
 * Callers:
 *     ?PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0089E6C (-PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C008B688 (-PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     memset @ 0x1C001CA80 (memset.c)
 *     WPP_IFR_SF_ @ 0x1C0031C84 (WPP_IFR_SF_.c)
 */

_IO_RESOURCE_REQUIREMENTS_LIST *__fastcall FxIoResReqList::CreateWdmList(FxIoResReqList *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r11
  FxCollectionInternal *v2; // r14
  __int64 m_Count; // r10
  unsigned int v4; // r8d
  unsigned int *v5; // rdi
  _LIST_ENTRY *Flink; // rdx
  _QWORD *p_Blink; // r9
  FxIoResReqList *v9; // rcx
  unsigned __int64 v10; // rax
  unsigned int v11; // ecx
  unsigned __int64 v12; // rax
  unsigned int v13; // ebp
  unsigned int v14; // eax
  unsigned int v15; // ebp
  _DWORD *PoolWithTag; // rax
  char *v17; // rsi
  _LIST_ENTRY *i; // rdx
  _LIST_ENTRY *v19; // rcx
  _LIST_ENTRY *v20; // r8
  _LIST_ENTRY *v21; // rax
  _LIST_ENTRY **v22; // r8
  _LIST_ENTRY **v23; // rdx

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
    goto $Overflow;
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
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, v15, m_Globals->Tag);
            v5 = PoolWithTag;
            if ( PoolWithTag )
            {
              v17 = (char *)(PoolWithTag + 8);
              memset(PoolWithTag, 0, v15);
              v5[1] = this->m_InterfaceType;
              v5[3] = this->m_SlotNumber;
              *v5 = v15;
              v5[7] = v2->m_Count;
              for ( i = this->m_ListHead.Flink; ; i = v23[1] )
              {
                v23 = &i[-1].Blink;
                if ( v23 == (_LIST_ENTRY **)v2 )
                  break;
                v19 = *v23;
                *(_DWORD *)v17 = 65537;
                *((_DWORD *)v17 + 1) = v19[7].Blink;
                v17 += 8;
                v20 = v19[8].Flink;
                while ( 1 )
                {
                  v22 = &v20[-1].Blink;
                  if ( v22 == &v19[7].Blink )
                    break;
                  v21 = *v22;
                  *(_LIST_ENTRY *)v17 = *(_LIST_ENTRY *)((char *)*v22 + 104);
                  *((_LIST_ENTRY *)v17 + 1) = *(_LIST_ENTRY *)((char *)v21 + 120);
                  v20 = v22[1];
                  v17 += 32;
                }
              }
            }
            return (_IO_RESOURCE_REQUIREMENTS_LIST *)v5;
          }
        }
      }
    }
  }
$Overflow:
  WPP_IFR_SF_(m_Globals, 2u, 0xCu, 0xCu, WPP_FxResourceCollection_cpp_Traceguids);
  return 0LL;
}
