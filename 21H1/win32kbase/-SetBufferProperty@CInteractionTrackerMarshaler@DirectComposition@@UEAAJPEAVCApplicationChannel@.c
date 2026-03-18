/*
 * XREFs of ?SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01F1DC0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C008F2E0 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32AllocPoolWithQuota @ 0x1C008F360 (Win32AllocPoolWithQuota.c)
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C008F3D4 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01D6DD4 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 *     ?GetInertiaModifierMarshalerFlag@CInteractionTrackerMarshaler@DirectComposition@@AEAA?AW4InteractionTrackerMarshalerFlag@12@W4InertiaModifierAxis@@@Z @ 0x1C01F1B68 (-GetInertiaModifierMarshalerFlag@CInteractionTrackerMarshaler@DirectComposition@@AEAA-AW4Interac.c)
 *     ?ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01F1CB8 (-ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition@@AEAAXPEAVCApplica.c)
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
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  _QWORD *v14; // rsi
  unsigned int v15; // ebp
  int v16; // eax
  unsigned int v17; // esi
  __int64 v18; // rcx
  void *v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // r12
  __int64 v22; // rax
  int v23; // ecx
  unsigned int v24; // r13d
  int v25; // ecx
  unsigned __int64 v26; // rdx
  __int64 v27; // rbp
  int v28; // eax
  unsigned __int64 v29; // rdx
  __int64 v30; // rbp
  __int64 Src; // [rsp+20h] [rbp-38h] BYREF
  int v33; // [rsp+28h] [rbp-30h]

  v6 = a6;
  v7 = 0;
  *a6 = 0;
  v11 = (unsigned int)(a3 - 21);
  if ( (_DWORD)v11 )
  {
    v12 = (unsigned int)(v11 - 20);
    if ( (_DWORD)v12 )
    {
      v12 = (unsigned int)(v12 - 1);
      if ( (_DWORD)v12 )
      {
        v12 = (unsigned int)(v12 - 1);
        if ( (_DWORD)v12 )
        {
          v12 = (unsigned int)(v12 - 1);
          if ( (_DWORD)v12 )
          {
            v13 = (unsigned int)(v12 - 21);
            if ( (_DWORD)v13 )
            {
              if ( (_DWORD)v13 != 1 )
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
            v14 = (_QWORD *)((char *)this + 368);
            v15 = *((_DWORD *)this + 98);
            v16 = *((_DWORD *)a4 + 2);
            Src = *(_QWORD *)a4;
            v33 = v16;
            v7 = DirectComposition::CDCompDynamicArrayBase::Grow(
                   (DirectComposition::CInteractionTrackerMarshaler *)((char *)this + 368),
                   1LL,
                   0x72694344u);
            if ( v7 >= 0 )
            {
              memmove((void *)(*v14 + v14[4] * v15), &Src, v14[4]);
              *a6 = 1;
            }
LABEL_54:
            if ( v7 < 0 )
              goto LABEL_55;
            return (unsigned int)v7;
          }
          v17 = 2;
        }
        else
        {
          v17 = 3;
        }
      }
      else
      {
        v17 = 1;
      }
    }
    else
    {
      v17 = 0;
    }
    v18 = *((_QWORD *)this + v17 + 33);
    if ( v18 )
    {
      Win32FreePool(v18, (__int64)a2, v12);
      *((_QWORD *)this + v17 + 33) = 0LL;
    }
    v19 = Win32AllocPoolWithQuotaZInit(Size, 0x72694344u);
    *((_QWORD *)this + v17 + 33) = v19;
    if ( !v19 )
    {
      v7 = -1073741801;
      goto LABEL_55;
    }
    memmove(v19, a4, Size);
    *((_QWORD *)this + v17 + 37) = Size;
    *((_DWORD *)this + 4) &= ~(unsigned int)DirectComposition::CInteractionTrackerMarshaler::GetInertiaModifierMarshalerFlag(
                                              v20,
                                              v17);
    *a6 = 1;
    return (unsigned int)v7;
  }
  if ( !a4 && *((_DWORD *)this + 90) )
  {
    DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(this, a2, v11);
    *a6 = 1;
    *((_DWORD *)this + 4) &= ~0x800u;
    return (unsigned int)v7;
  }
  DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(this, a2, v11);
  v21 = Size >> 3;
  if ( !(unsigned int)(Size >> 3) )
    goto LABEL_53;
  v22 = Win32AllocPoolWithQuota(16LL * (unsigned int)v21, 0x72694344u);
  v23 = 0;
  *((_QWORD *)this + 44) = v22;
  if ( !v22 )
    v23 = -1073741801;
  v7 = v23;
  if ( v23 < 0 )
    goto LABEL_54;
  v24 = 0;
  while ( v24 < (unsigned int)v21 )
  {
    v25 = *((_DWORD *)a4 + 2 * v24);
    v26 = (unsigned int)(v25 - 1);
    if ( v25 && v26 < *((_QWORD *)a2 + 10) )
    {
      _mm_lfence();
      v27 = *(_QWORD *)(v26 * *((_QWORD *)a2 + 11) + *((_QWORD *)a2 + 7));
    }
    else
    {
      v27 = 0LL;
    }
    if ( v27 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 96LL))(v27, 103LL) )
    {
      *(_QWORD *)(*((_QWORD *)this + 44) + 16LL * v24) = v27;
      DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 44)
                                                                                              + 16LL * v24));
      ++*((_DWORD *)this + 90);
    }
    else
    {
      v7 = -1073741811;
    }
    if ( v7 < 0 )
      goto LABEL_51;
    v28 = *((_DWORD *)a4 + 2 * v24 + 1);
    if ( !v28 )
      goto LABEL_50;
    v29 = (unsigned int)(v28 - 1);
    if ( v29 >= *((_QWORD *)a2 + 10) )
    {
      v30 = 0LL;
    }
    else
    {
      _mm_lfence();
      v30 = *(_QWORD *)(v29 * *((_QWORD *)a2 + 11) + *((_QWORD *)a2 + 7));
    }
    if ( !v30 || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 96LL))(v30, 87LL) )
    {
      v7 = -1073741811;
LABEL_50:
      *(_QWORD *)(*((_QWORD *)this + 44) + 16LL * v24 + 8) = 0LL;
      goto LABEL_51;
    }
    *(_QWORD *)(*((_QWORD *)this + 44) + 16LL * v24 + 8) = v30;
    DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 44)
                                                                                            + 16LL * v24
                                                                                            + 8));
LABEL_51:
    ++v24;
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
    DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(this, a2, v13);
  return (unsigned int)v7;
}
