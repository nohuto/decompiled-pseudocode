/*
 * XREFs of ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C00B5910
 * Callers:
 *     ?SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z @ 0x1C00B575C (-SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z.c)
 * Callees:
 *     ?RemoveFromBatchList@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@PEAPEAV32@@Z @ 0x1C004E24C (-RemoveFromBatchList@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@PEAPEAV.c)
 *     ?NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C00B559C (-NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?Create@CAnimationBinding@DirectComposition@@SAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@PEAPEAV12@@Z @ 0x1C00B568C (-Create@CAnimationBinding@DirectComposition@@SAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@P.c)
 *     ?Initialize@CAnimationBinding@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C00B5708 (-Initialize@CAnimationBinding@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@IPEAVCBaseAnimati.c)
 *     ?FindAnimationBindings@CResourceMarshaler@DirectComposition@@QEAAXIPEAPEAVCAnimationBinding@2@00@Z @ 0x1C00B58CC (-FindAnimationBindings@CResourceMarshaler@DirectComposition@@QEAAXIPEAPEAVCAnimationBinding@2@00.c)
 *     ?NewAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C00B5A98 (-NewAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C00B9354 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01D6DD4 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 *     ?DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C01D70F8 (-DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?Reassign@CAnimationBinding@DirectComposition@@QEAAXPEAVCBaseAnimation@2@PEAVCApplicationChannel@2@@Z @ 0x1C01D81DC (-Reassign@CAnimationBinding@DirectComposition@@QEAAXPEAVCBaseAnimation@2@PEAVCApplicationChannel.c)
 *     ?RemovingToBound@CAnimationBinding@DirectComposition@@QEAAXXZ @ 0x1C01D8274 (-RemovingToBound@CAnimationBinding@DirectComposition@@QEAAXXZ.c)
 *     ?GetAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAXPEA_NPEA_JPEA_K@Z @ 0x1C01D8310 (-GetAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAXPEA_NPEA_JPEA_K@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::BindAnimation(
        struct DirectComposition::CAnimationBinding ***this,
        struct DirectComposition::CResourceMarshaler *a2,
        unsigned int a3,
        struct DirectComposition::CBaseAnimation *a4)
{
  struct DirectComposition::CBaseAnimation **v7; // r15
  struct DirectComposition::CBaseAnimation **v8; // r12
  struct DirectComposition::CAnimationBinding *v9; // rax
  __int64 v10; // rax
  DirectComposition::CApplicationChannel *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rbx
  struct DirectComposition::CAnimationBinding **v14; // rbx
  unsigned int v15; // r13d
  DirectComposition::CAnimationBinding *v16; // rsi
  _DWORD *v18; // rsi
  __int64 v19; // rax
  _DWORD *v20; // rsi
  struct DirectComposition::CAnimationBinding *v21; // [rsp+30h] [rbp-10h] BYREF
  struct DirectComposition::CAnimationBinding *v22; // [rsp+38h] [rbp-8h] BYREF
  struct DirectComposition::CAnimationBinding *v25; // [rsp+98h] [rbp+58h] BYREF

  v21 = 0LL;
  v25 = 0LL;
  v22 = 0LL;
  DirectComposition::CResourceMarshaler::FindAnimationBindings(a2, a3, &v21, &v25, &v22);
  v7 = (struct DirectComposition::CBaseAnimation **)v21;
  v8 = (struct DirectComposition::CBaseAnimation **)v25;
  v9 = v25;
  if ( v21 )
    v9 = v21;
  v25 = v9;
  v10 = (**(__int64 (__fastcall ***)(struct DirectComposition::CBaseAnimation *))a4)(a4);
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 96LL))(v10, 2LL) )
  {
    v12 = (**(__int64 (__fastcall ***)(struct DirectComposition::CBaseAnimation *))a4)(a4);
    v13 = v12 ? v12 - 16 : 0LL;
    if ( v13 && *(_DWORD *)(v13 + 164) )
    {
      DirectComposition::CApplicationChannel::ProcessReturnedBatches((DirectComposition::CApplicationChannel *)this);
      v18 = 0LL;
      LODWORD(v21) = 0;
      if ( v25
        && (v19 = (***((__int64 (__fastcall ****)(_QWORD))v25 + 3))(*((_QWORD *)v25 + 3)), (v18 = (_DWORD *)v19) != 0LL)
        && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 96LL))(v19, 151LL) )
      {
        LODWORD(v21) = v18[14];
      }
      else
      {
        (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, struct DirectComposition::CAnimationBinding **))(*(_QWORD *)a2 + 184LL))(
          a2,
          a3,
          &v21);
      }
      if ( v18 && (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v18 + 96LL))(v18, 2LL) )
      {
        v20 = v18 - 4;
        if ( *(_QWORD *)(v13 + 176) || (*(_DWORD *)(v13 + 32) & 0x1000) != 0 || v20 == (_DWORD *)v13 )
          return (unsigned int)-1073741811;
        if ( v20 )
        {
          *(_QWORD *)(v13 + 176) = v20;
          DirectComposition::CResourceMarshaler::AddRef((DirectComposition::CResourceMarshaler *)(v20 + 4));
          LOBYTE(v25) = 0;
          DirectComposition::CAnimationMarshaler::GetAnimationTimeState(
            (DirectComposition::CAnimationMarshaler *)v20,
            (bool *)&v25,
            (__int64 *)(v13 + 192),
            (unsigned __int64 *)(v13 + 200));
          *(_BYTE *)(v13 + 208) ^= ((unsigned __int8)v25 ^ *(_BYTE *)(v13 + 208)) & 1;
          v20[8] |= 0x1000u;
        }
      }
      *(_DWORD *)(v13 + 184) = (_DWORD)v21;
    }
  }
  v14 = (struct DirectComposition::CAnimationBinding **)v22;
  v15 = 0;
  if ( v8 )
    goto LABEL_17;
  if ( v7 && v7[3] != a4 || v22 && *((struct DirectComposition::CBaseAnimation **)v22 + 3) != a4 )
    goto LABEL_13;
  if ( v7 )
    goto LABEL_41;
  if ( !v22 )
  {
LABEL_13:
    v25 = 0LL;
    v16 = (DirectComposition::CAnimationBinding *)this[44];
    if ( v16 )
    {
      this[44] = 0LL;
      DirectComposition::CAnimationBinding::Initialize(v16, a2, a3, a4);
    }
    else
    {
      v15 = DirectComposition::CAnimationBinding::Create(a2, a3, a4, &v25);
      if ( (v15 & 0x80000000) != 0 )
        return v15;
      v16 = v25;
    }
    DirectComposition::CApplicationChannel::NewAddingBinding((DirectComposition::CApplicationChannel *)this, v16);
LABEL_17:
    if ( !v7 )
    {
      if ( !v14 )
      {
LABEL_19:
        if ( v8 && v8[3] != a4 )
          DirectComposition::CAnimationBinding::Reassign(
            (DirectComposition::CAnimationBinding *)v8,
            a4,
            (struct DirectComposition::CApplicationChannel *)this);
        return v15;
      }
      goto LABEL_43;
    }
LABEL_41:
    if ( v7[3] != a4 )
      DirectComposition::CApplicationChannel::NewRemovingBinding(
        (DirectComposition::CApplicationChannel *)this,
        (struct DirectComposition::CAnimationBinding *)v7);
    return v15;
  }
LABEL_43:
  if ( v14[3] != a4 )
    goto LABEL_19;
  if ( this[56] )
    DirectComposition::CApplicationChannel::RemoveFromBatchList(v11, v14, this + 56);
  DirectComposition::CAnimationBinding::RemovingToBound((DirectComposition::CAnimationBinding *)v14);
  if ( v8 )
    DirectComposition::CApplicationChannel::DeleteAddingBinding(
      (DirectComposition::CApplicationChannel *)this,
      (struct DirectComposition::CAnimationBinding *)v8);
  return v15;
}
