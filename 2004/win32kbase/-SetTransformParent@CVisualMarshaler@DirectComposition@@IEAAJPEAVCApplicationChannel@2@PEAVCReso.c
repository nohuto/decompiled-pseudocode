/*
 * XREFs of ?SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCResourceMarshaler@2@_NPEA_N@Z @ 0x1C002A268
 * Callers:
 *     ?SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0029FA0 (-SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCR.c)
 * Callees:
 *     ?SetResourceReferenceProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@I0@Z @ 0x1C002A3F0 (-SetResourceReferenceProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler.c)
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0097BF0 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0098ED4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01D0E54 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetTransformParent(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2,
        struct DirectComposition::CResourceMarshaler *a3,
        char a4,
        bool *a5)
{
  bool *v5; // r14
  int v6; // ebx
  char v11; // cl
  char v13; // r15
  struct DirectComposition::CResourceMarshaler *v14; // rcx
  DirectComposition::CResourceMarshaler *v15; // rbx
  struct DirectComposition::CResourceMarshaler *v16; // rdx
  int v17; // eax
  struct DirectComposition::CResourceMarshaler *v18; // [rsp+50h] [rbp+8h] BYREF

  v5 = a5;
  v6 = 0;
  if ( a3 != this[18] )
  {
    if ( !a3
      || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a3 + 96LL))(
           a3,
           198LL) )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(a2, this[18]);
      this[18] = a3;
      if ( a3 )
        DirectComposition::CResourceMarshaler::AddRef(a3);
      goto LABEL_22;
    }
    v18 = 0LL;
    v13 = 0;
    v14 = this[18];
    if ( !v14 )
      goto LABEL_18;
    if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v14 + 96LL))(
           v14,
           199LL) )
    {
      v15 = this[18];
      DirectComposition::CResourceMarshaler::AddRef(v15);
      --*((_DWORD *)v15 + 5);
      v16 = v18;
      if ( *((_DWORD *)v15 + 5) == 1 )
        v16 = v15;
      v18 = v16;
    }
    else
    {
      v16 = v18;
    }
    if ( !v16 )
    {
LABEL_18:
      v13 = 1;
      v6 = DirectComposition::CApplicationChannel::CreateInternalResource(a2, 0xC7u, &v18);
      if ( v6 < 0 )
        goto LABEL_24;
      v16 = v18;
    }
    v17 = DirectComposition::CApplicationChannel::SetResourceReferenceProperty(a2, v16, 0, a3);
    v6 = v17;
    if ( !v13 )
      goto LABEL_13;
    if ( v17 >= 0 )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(a2, this[18]);
      this[18] = v18;
LABEL_22:
      *((_DWORD *)this + 4) |= 0x200u;
      *v5 = 1;
      goto LABEL_13;
    }
LABEL_24:
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v18);
LABEL_13:
    if ( v6 < 0 )
      return (unsigned int)v6;
  }
  v11 = *((_BYTE *)this + 289);
  if ( (v11 & 1) != a4 )
  {
    if ( this[18] )
    {
      *((_DWORD *)this + 4) |= 0x200u;
      *v5 = 1;
      v11 = *((_BYTE *)this + 289);
    }
    *((_BYTE *)this + 289) = a4 | v11 & 0xFE;
  }
  return (unsigned int)v6;
}
