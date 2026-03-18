/*
 * XREFs of ?QueryInstance@FxWmiInstanceExternal@@MEAAJKPEAXPEAK@Z @ 0x1C003ECE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_qq @ 0x1C0013E44 (WPP_IFR_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001D440 (memmove.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E5DC (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qddd @ 0x1C002F7EC (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_ @ 0x1C0032554 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qddq @ 0x1C003F5D8 (WPP_IFR_SF_qddq.c)
 */

__int64 __fastcall FxWmiInstanceExternal::QueryInstance(
        FxWmiInstanceExternal *this,
        unsigned int OutBufferSize,
        void *OutBuffer,
        unsigned int *BufferUsed)
{
  char *v4; // rdi
  unsigned int v7; // esi
  const void *_a2; // rax
  int _a3; // edx
  int v10; // r10d
  int _a4; // r11d
  __int64 m_ObjectSize; // rax
  unsigned int v13; // ebp
  unsigned __int8 *v14; // r15
  unsigned __int64 v15; // rax
  __int64 (__fastcall *v16)(unsigned __int64, _QWORD, unsigned __int8 *, unsigned int *); // r10
  const void *v17; // rax
  unsigned int v18; // edx
  const void *v19; // rax
  int v20; // edx
  FxWmiProvider *m_Provider; // rcx
  const void *v22; // rax
  const void *v23; // rdx
  unsigned int v24; // r8d
  unsigned __int16 v25; // r9
  int v26; // r10d
  const void *ObjectHandleUnchecked; // rax
  const _GUID *_a1; // [rsp+20h] [rbp-58h]
  unsigned __int8 dummy[16]; // [rsp+50h] [rbp-28h] BYREF

  v4 = 0LL;
  if ( this->m_UseContextForQuery )
  {
    *BufferUsed = this->m_ContextLength;
    if ( OutBufferSize >= this->m_ContextLength )
    {
      m_ObjectSize = this->m_ObjectSize;
      v7 = 0;
      if ( (_WORD)m_ObjectSize )
        v4 = (char *)this + m_ObjectSize;
      memmove(OutBuffer, v4 + 48, this->m_ContextLength);
    }
    else
    {
      v7 = -1073741789;
      _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qddd(this->m_Globals, _a3, 0x12u, 0x12u, WPP_FxWmiInstance_cpp_Traceguids, _a2, _a3, _a4, v10);
    }
    return v7;
  }
  if ( !this->m_QueryInstanceCallback.m_Method )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qq(
      this->m_Globals,
      2u,
      0xCu,
      0x17u,
      WPP_FxWmiInstance_cpp_Traceguids,
      ObjectHandleUnchecked,
      this->m_ExecuteMethodCallback.m_Method);
    v7 = 0;
    goto LABEL_23;
  }
  dummy[0] = 0;
  v13 = 1;
  v14 = dummy;
  if ( OutBufferSize )
  {
    v13 = OutBufferSize;
    v14 = (unsigned __int8 *)OutBuffer;
  }
  v15 = FxObject::GetObjectHandleUnchecked(this);
  v7 = v16(v15, v13, v14, BufferUsed);
  if ( v7 == 259 )
  {
    v17 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qL(this->m_Globals, 2u, 0xCu, 0x13u, WPP_FxWmiInstance_cpp_Traceguids, v17, v18);
LABEL_12:
    FxVerifierDbgBreakPoint(this->m_Globals);
    v7 = -1073741823;
LABEL_23:
    *BufferUsed = 0;
    return v7;
  }
  if ( (v7 & 0x80000000) != 0 )
  {
    if ( v7 == -1073741789 )
    {
      m_Provider = this->m_Provider;
      if ( m_Provider->m_MinInstanceBufferSize )
      {
        FxObject::GetObjectHandleUnchecked(m_Provider);
        v22 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_qddq(this->m_Globals, (unsigned __int8)v23, v24, v25, _a1, v22, v26, v24, v23);
        WPP_IFR_SF_(this->m_Globals, 2u, 0xCu, 0x16u, WPP_FxWmiInstance_cpp_Traceguids);
        FxVerifierDbgBreakPoint(this->m_Globals);
      }
    }
  }
  else
  {
    if ( *BufferUsed > v13 )
    {
      v19 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qddd(this->m_Globals, v20, 0xCu, 0x14u, WPP_FxWmiInstance_cpp_Traceguids, v19, v13, v20, v7);
      goto LABEL_12;
    }
    if ( v14 == dummy && *BufferUsed )
      return (unsigned int)-1073741789;
  }
  return v7;
}
