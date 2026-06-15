/*
 * XREFs of ?ReplaceEffectChain@SystemEffectChainDescriptor@@IEAAJIPEBU_GUID@@I0@Z @ 0x18002968C
 * Callers:
 *     ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x180029574 (-UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IP.c)
 * Callees:
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x180027A48 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SystemEffectChainDescriptor::ReplaceEffectChain(
        SystemEffectChainDescriptor *this,
        unsigned int a2,
        const struct _GUID *a3,
        unsigned int a4,
        const struct _GUID *a5)
{
  void *v7; // rcx
  __int64 *v10; // rdi
  void *v11; // rcx
  unsigned int v12; // r14d
  int v13; // eax
  int v14; // esi
  __int64 v15; // rax
  struct _GUID *v16; // rcx
  int v17; // eax
  int v18; // esi
  __int64 v19; // rax
  struct _GUID *v20; // rcx
  int v21; // ebx
  __int64 v23; // rdx
  int v24; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v7 = (void *)*((_QWORD *)this + 5);
  if ( v7 )
  {
    free(v7);
    *((_QWORD *)this + 5) = 0LL;
  }
  *((_DWORD *)this + 12) = 0;
  v10 = (__int64 *)((char *)this + 56);
  *((_DWORD *)this + 13) = 0;
  v11 = (void *)*((_QWORD *)this + 7);
  if ( v11 )
  {
    free(v11);
    *v10 = 0LL;
  }
  *((_DWORD *)this + 16) = 0;
  v12 = 0;
  for ( *((_DWORD *)this + 17) = 0; v12 < a2; *((_DWORD *)this + 16) = v17 + 1 )
  {
    v13 = *((_DWORD *)this + 12);
    if ( v13 == *((_DWORD *)this + 13) )
    {
      if ( *((_DWORD *)this + 13) )
      {
        v14 = 2 * v13;
        if ( (v13 & 0x40000000) != 0 )
          goto LABEL_26;
      }
      else
      {
        v14 = 1;
      }
      if ( (unsigned __int64)v14 > 0x7FFFFFF || (v15 = _o__recalloc(*((_QWORD *)this + 5), v14, 16LL)) == 0 )
      {
LABEL_26:
        v23 = 70LL;
        goto LABEL_30;
      }
      *((_QWORD *)this + 5) = v15;
      v13 = *((_DWORD *)this + 12);
      *((_DWORD *)this + 13) = v14;
    }
    v16 = (struct _GUID *)(*((_QWORD *)this + 5) + 16LL * v13);
    if ( v16 )
    {
      *v16 = *a3;
      v13 = *((_DWORD *)this + 12);
    }
    *((_DWORD *)this + 12) = v13 + 1;
    v17 = *((_DWORD *)this + 16);
    if ( v17 == *((_DWORD *)this + 17) )
    {
      if ( *((_DWORD *)this + 17) )
      {
        v18 = 2 * v17;
        if ( (v17 & 0x40000000) != 0 )
          goto LABEL_28;
      }
      else
      {
        v18 = 1;
      }
      if ( (unsigned __int64)v18 > 0x7FFFFFF || (v19 = _o__recalloc(*v10, v18, 16LL)) == 0 )
      {
LABEL_28:
        v23 = 72LL;
        goto LABEL_30;
      }
      *v10 = v19;
      v17 = *((_DWORD *)this + 16);
      *((_DWORD *)this + 17) = v18;
    }
    v20 = (struct _GUID *)(*v10 + 16LL * v17);
    if ( v20 )
    {
      *v20 = *a3;
      v17 = *((_DWORD *)this + 16);
    }
    ++v12;
    ++a3;
  }
  v21 = 0;
  if ( !a4 )
    return 0LL;
  while ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add((__int64)v10, &a5[v21].Data1) )
  {
    if ( ++v21 >= a4 )
      return 0LL;
  }
  v23 = 77LL;
LABEL_30:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v23,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL,
    v24);
  return 2147942414LL;
}
