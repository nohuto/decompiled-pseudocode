/*
 * XREFs of ?SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C004014C
 * Callers:
 *     ?SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00400F0 (-SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA.c)
 * Callees:
 *     ?SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@IPEBX_K@Z @ 0x1C0040268 (-SetResourceBufferProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@.c)
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C008E340 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C008F624 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01D6DD4 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetClipRectangleHelper(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        const void *a3,
        unsigned __int64 a4,
        bool *a5)
{
  __int64 v6; // rcx
  char v7; // bp
  DirectComposition::CResourceMarshaler *v11; // rbx
  struct DirectComposition::CResourceMarshaler *v12; // rdx
  int v13; // eax
  int v14; // ebx
  struct DirectComposition::CResourceMarshaler *v16; // [rsp+50h] [rbp+8h] BYREF

  v16 = 0LL;
  v6 = *((_QWORD *)this + 20);
  v7 = 0;
  if ( !v6 )
    goto LABEL_9;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 96LL))(v6, 138LL) )
  {
    v11 = (DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 20);
    DirectComposition::CResourceMarshaler::AddRef(v11);
    --*((_DWORD *)v11 + 5);
    v12 = v16;
    if ( *((_DWORD *)v11 + 5) == 1 )
      v12 = v11;
    v16 = v12;
  }
  else
  {
    v12 = v16;
  }
  if ( !v12 )
  {
LABEL_9:
    v7 = 1;
    v14 = DirectComposition::CApplicationChannel::CreateInternalResource(a2, 0x8Au, &v16);
    if ( v14 < 0 )
    {
LABEL_13:
      DirectComposition::CApplicationChannel::ReleaseResource(a2, v16);
      return (unsigned int)v14;
    }
    v12 = v16;
  }
  v13 = DirectComposition::CApplicationChannel::SetResourceBufferProperty(a2, v12, 0x10u, a3, a4);
  v14 = v13;
  if ( v7 )
  {
    if ( v13 >= 0 )
      (*(void (__fastcall **)(DirectComposition::CVisualMarshaler *, struct DirectComposition::CApplicationChannel *, __int64, struct DirectComposition::CResourceMarshaler *, bool *))(*(_QWORD *)this + 152LL))(
        this,
        a2,
        6LL,
        v16,
        a5);
    goto LABEL_13;
  }
  return (unsigned int)v14;
}
