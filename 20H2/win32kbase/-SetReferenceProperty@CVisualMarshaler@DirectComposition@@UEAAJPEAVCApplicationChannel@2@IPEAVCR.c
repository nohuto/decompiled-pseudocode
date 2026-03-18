/*
 * XREFs of ?SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0093BD0
 * Callers:
 *     ?SetReferenceProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0003E90 (-SetReferenceProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?SetReferenceProperty@CHostVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0005550 (-SetReferenceProperty@CHostVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPE.c)
 *     ?SetReferenceProperty@CSpriteVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0093A90 (-SetReferenceProperty@CSpriteVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I.c)
 *     ?SetReferenceProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C01D84B0 (-SetReferenceProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationCh.c)
 *     ?SetReferenceProperty@CSceneVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C01D8E50 (-SetReferenceProperty@CSceneVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?SetReferenceProperty@CSuperWetInkVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C01D8F10 (-SetReferenceProperty@CSuperWetInkVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChanne.c)
 *     ?SetReferenceProperty@CShapeVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C01E02B0 (-SetReferenceProperty@CShapeVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?SetReferenceProperty@CRedirectVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C01ED8F0 (-SetReferenceProperty@CRedirectVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C00599C4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCResourceMarshaler@2@_NPEA_N@Z @ 0x1C0093E98 (-SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCReso.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01CEAD4 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 *     McTemplateK0qqqxx_EtwWriteTransfer @ 0x1C01DFB00 (McTemplateK0qqqxx_EtwWriteTransfer.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetReferenceProperty(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v9; // edi
  struct DirectComposition::CResourceMarshaler **v10; // r14
  unsigned int v11; // esi
  struct DirectComposition::CResourceMarshaler *v13; // rdx
  char v14; // al
  int v15; // ecx
  char v16; // al
  int v17; // ecx
  char v18; // al
  int v19; // ecx
  int v20; // r10d
  char v21; // al
  int v22; // ecx
  char v23; // al
  char v24; // al
  int v25; // ecx

  v9 = 0;
  *a5 = 0;
  v10 = 0LL;
  v11 = 0;
  switch ( a3 )
  {
    case 3:
      if ( a4 )
      {
        v14 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
                a4,
                186LL);
        v15 = 0;
        if ( !v14 )
          v15 = -1073741811;
        v9 = v15;
      }
      v10 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 136);
      v11 = 256;
      goto LABEL_10;
    case 4:
      goto LABEL_8;
    case 5:
      if ( a4 )
      {
        v18 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
                a4,
                54LL);
        v19 = 0;
        if ( !v18 )
          v19 = -1073741811;
        v9 = v19;
      }
      v10 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 152);
      v11 = 1024;
      goto LABEL_10;
    case 6:
      if ( a4 )
      {
        v16 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
                a4,
                65LL);
        v17 = 0;
        if ( !v16 )
          v17 = -1073741811;
        v9 = v17;
      }
      v10 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 160);
      v11 = 4096;
      goto LABEL_10;
    case 10:
      if ( a4 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
                a4,
                127LL)
          && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
                a4,
                40LL) )
        {
          v23 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
                  a4,
                  81LL);
          if ( !v23
            && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
                  a4,
                  205LL)
            && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
                  a4,
                  86LL)
            && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
                  a4,
                  64LL)
            && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
                  a4,
                  174LL) )
          {
            v24 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
                    a4,
                    181LL);
            v25 = 0;
            if ( !v24 )
              v25 = -1073741811;
            v9 = v25;
          }
        }
      }
      v10 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 168);
      if ( v9 < 0 )
        v10 = 0LL;
      v11 = ((v9 >> 31) & 0xFFFFF800) + 2048;
      goto LABEL_10;
    case 23:
      if ( a4 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
                a4,
                87LL) )
        {
          v9 = -1073741811;
LABEL_49:
          v10 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 216);
          v11 = 0x100000;
          goto LABEL_10;
        }
        v20 = *((_DWORD *)a4 + 6);
      }
      else
      {
        v20 = 0;
      }
      if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000000LL) != 0 )
        McTemplateK0qqqxx_EtwWriteTransfer(
          v20,
          0,
          *((_DWORD *)this + 6),
          *((_DWORD *)a2 + 7),
          *((_DWORD *)this + 6),
          v20,
          *((_DWORD *)this + 6),
          v20);
      goto LABEL_49;
    case 39:
LABEL_8:
      if ( a4
        && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
              a4,
              195LL)
        && (a3 == 4
         || !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
               a4,
               198LL)) )
      {
        return (unsigned int)-1073741811;
      }
      v9 = DirectComposition::CVisualMarshaler::SetTransformParent(this, a2, a4, a3 == 39, a5);
      goto LABEL_10;
  }
  if ( a3 != 40 )
    return (unsigned int)-1073741811;
  if ( a4 )
  {
    v21 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
            a4,
            14LL);
    v22 = 0;
    if ( !v21 )
      v22 = -1073741811;
    v9 = v22;
  }
  v10 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 224);
  v11 = 0x4000000;
LABEL_10:
  if ( v9 >= 0 && a3 != 39 && a3 != 4 )
  {
    v13 = *v10;
    if ( *v10 != a4 )
    {
      if ( v13 )
      {
        DirectComposition::CApplicationChannel::ReleaseResource(a2, v13);
        *v10 = 0LL;
      }
      if ( a4 )
      {
        *v10 = a4;
        DirectComposition::CResourceMarshaler::AddRef(a4);
      }
      *((_DWORD *)this + 4) |= v11;
      *a5 = 1;
    }
  }
  return (unsigned int)v9;
}
