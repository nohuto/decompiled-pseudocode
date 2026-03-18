/*
 * XREFs of ?SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01EAA50
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0059680 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32AllocPoolWithQuota @ 0x1C0059700 (Win32AllocPoolWithQuota.c)
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C0059774 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01CEAD4 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 *     ?GetInertiaModifierMarshalerFlag@CInteractionTrackerMarshaler@DirectComposition@@AEAA?AW4InteractionTrackerMarshalerFlag@12@W4InertiaModifierAxis@@@Z @ 0x1C01EA7F8 (-GetInertiaModifierMarshalerFlag@CInteractionTrackerMarshaler@DirectComposition@@AEAA-AW4Interac.c)
 *     ?ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01EA948 (-ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition@@AEAAXPEAVCApplica.c)
 */

__int64 __fastcall DirectComposition::CInteractionTrackerMarshaler::SetBufferProperty(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _OWORD *a4,
        size_t Size,
        bool *a6)
{
  bool *v6; // r13
  int v7; // edi
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  int v16; // r8d
  _QWORD *v17; // rsi
  unsigned int v18; // ebp
  int v19; // eax
  unsigned int v20; // esi
  __int64 v21; // rcx
  void *v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // r12
  __int64 v25; // rax
  int v26; // ecx
  unsigned int v27; // r13d
  int v28; // ecx
  unsigned __int64 v29; // rdx
  __int64 v30; // rbp
  int v31; // eax
  unsigned __int64 v32; // rdx
  __int64 v33; // rbp
  __int64 Src; // [rsp+20h] [rbp-38h] BYREF
  int v36; // [rsp+28h] [rbp-30h]

  v6 = a6;
  v7 = 0;
  *a6 = 0;
  v11 = a3 - 21;
  if ( v11 )
  {
    v12 = v11 - 20;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          v15 = v14 - 1;
          if ( v15 )
          {
            v16 = v15 - 21;
            if ( v16 )
            {
              if ( v16 != 1 )
              {
                v7 = -1073741811;
                goto LABEL_54;
              }
              if ( Size == 36 )
              {
                *(_OWORD *)((char *)this + 412) = *a4;
                *(_OWORD *)((char *)this + 428) = a4[1];
                *((_DWORD *)this + 111) = *((_DWORD *)a4 + 8);
                *a6 = 1;
                *((_DWORD *)this + 4) &= ~0x1000000u;
                return (unsigned int)v7;
              }
LABEL_10:
              v7 = -1073741811;
              goto LABEL_55;
            }
            if ( Size != 12 )
              goto LABEL_10;
            v17 = (_QWORD *)((char *)this + 368);
            v18 = *((_DWORD *)this + 98);
            v19 = *((_DWORD *)a4 + 2);
            Src = *(_QWORD *)a4;
            v36 = v19;
            v7 = DirectComposition::CDCompDynamicArrayBase::Grow(
                   (DirectComposition::CInteractionTrackerMarshaler *)((char *)this + 368),
                   1LL,
                   0x72694344u);
            if ( v7 >= 0 )
            {
              memmove((void *)(*v17 + v17[4] * v18), &Src, v17[4]);
              *a6 = 1;
            }
LABEL_54:
            if ( v7 < 0 )
              goto LABEL_55;
            return (unsigned int)v7;
          }
          v20 = 2;
        }
        else
        {
          v20 = 3;
        }
      }
      else
      {
        v20 = 1;
      }
    }
    else
    {
      v20 = 0;
    }
    v21 = *((_QWORD *)this + v20 + 33);
    if ( v21 )
    {
      Win32FreePool(v21);
      *((_QWORD *)this + v20 + 33) = 0LL;
    }
    v22 = Win32AllocPoolWithQuotaZInit(Size, 0x72694344u);
    *((_QWORD *)this + v20 + 33) = v22;
    if ( !v22 )
    {
      v7 = -1073741801;
      goto LABEL_55;
    }
    memmove(v22, a4, Size);
    *((_QWORD *)this + v20 + 37) = Size;
    *((_DWORD *)this + 4) &= ~(unsigned int)DirectComposition::CInteractionTrackerMarshaler::GetInertiaModifierMarshalerFlag(
                                              v23,
                                              v20);
    *a6 = 1;
    return (unsigned int)v7;
  }
  if ( !a4 && *((_DWORD *)this + 90) )
  {
    DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(this, a2);
    *a6 = 1;
    *((_DWORD *)this + 4) &= ~0x800u;
    return (unsigned int)v7;
  }
  DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(this, a2);
  v24 = Size >> 3;
  if ( !(unsigned int)(Size >> 3) )
    goto LABEL_53;
  v25 = Win32AllocPoolWithQuota(16LL * (unsigned int)v24, 0x72694344u);
  v26 = 0;
  *((_QWORD *)this + 44) = v25;
  if ( !v25 )
    v26 = -1073741801;
  v7 = v26;
  if ( v26 < 0 )
    goto LABEL_54;
  v27 = 0;
  while ( v27 < (unsigned int)v24 )
  {
    v28 = *((_DWORD *)a4 + 2 * v27);
    v29 = (unsigned int)(v28 - 1);
    if ( v28 && v29 < *((_QWORD *)a2 + 10) )
    {
      _mm_lfence();
      v30 = *(_QWORD *)(v29 * *((_QWORD *)a2 + 11) + *((_QWORD *)a2 + 7));
    }
    else
    {
      v30 = 0LL;
    }
    if ( v30 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 96LL))(v30, 103LL) )
    {
      *(_QWORD *)(*((_QWORD *)this + 44) + 16LL * v27) = v30;
      DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 44)
                                                                                              + 16LL * v27));
      ++*((_DWORD *)this + 90);
    }
    else
    {
      v7 = -1073741811;
    }
    if ( v7 < 0 )
      goto LABEL_51;
    v31 = *((_DWORD *)a4 + 2 * v27 + 1);
    if ( !v31 )
      goto LABEL_50;
    v32 = (unsigned int)(v31 - 1);
    if ( v32 >= *((_QWORD *)a2 + 10) )
    {
      v33 = 0LL;
    }
    else
    {
      _mm_lfence();
      v33 = *(_QWORD *)(v32 * *((_QWORD *)a2 + 11) + *((_QWORD *)a2 + 7));
    }
    if ( !v33 || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 96LL))(v33, 87LL) )
    {
      v7 = -1073741811;
LABEL_50:
      *(_QWORD *)(*((_QWORD *)this + 44) + 16LL * v27 + 8) = 0LL;
      goto LABEL_51;
    }
    *(_QWORD *)(*((_QWORD *)this + 44) + 16LL * v27 + 8) = v33;
    DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 44)
                                                                                            + 16LL * v27
                                                                                            + 8));
LABEL_51:
    ++v27;
    if ( v7 < 0 )
      break;
  }
  v6 = a6;
  if ( v7 >= 0 )
  {
LABEL_53:
    *v6 = 1;
    *((_DWORD *)this + 4) &= ~0x800u;
    goto LABEL_54;
  }
LABEL_55:
  if ( *((_QWORD *)this + 44) )
    DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(this, a2);
  return (unsigned int)v7;
}
