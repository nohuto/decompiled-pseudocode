/*
 * XREFs of ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C0057EEC
 * Callers:
 *     NtDCompositionCreateDwmChannel @ 0x1C0057E50 (NtDCompositionCreateDwmChannel.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0098B90 (Win32AllocPoolWithQuotaZInit.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C009DB60 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C009E0F4 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C00A2B44 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 *     ?InsertObject@?$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@QEAAJIPEAVCChannel@2@@Z @ 0x1C00A6244 (-InsertObject@-$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@QE.c)
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C00A6288 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ??0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z @ 0x1C00A62B8 (--0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDwmChannel::Create(unsigned int *a1)
{
  struct DirectComposition::CConnection *DefaultConnection; // rsi
  DirectComposition::CApplicationChannel *v3; // rax
  unsigned int *v4; // rdi
  int inserted; // ebx
  struct DirectComposition::CProcessData *v6; // rax
  struct DirectComposition::CProcessData *v7; // r14
  struct _ERESOURCE *v8; // rbx

  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  if ( DefaultConnection )
  {
    v3 = (DirectComposition::CApplicationChannel *)Win32AllocPoolWithQuotaZInit(0x320uLL);
    v4 = (unsigned int *)v3;
    if ( v3 )
    {
      DirectComposition::CApplicationChannel::CApplicationChannel(v3, DefaultConnection, 1, 0);
      *(_QWORD *)v4 = &DirectComposition::CDwmChannel::`vftable';
    }
    else
    {
      v4 = 0LL;
    }
    if ( v4 )
    {
      inserted = DirectComposition::CApplicationChannel::Initialize(
                   (DirectComposition::CApplicationChannel *)v4,
                   0LL,
                   0LL);
      if ( inserted < 0 )
        goto LABEL_16;
      v6 = DirectComposition::CProcessData::Current();
      v7 = v6;
      if ( v6 )
      {
        v8 = (struct _ERESOURCE *)*((_QWORD *)v6 + 1);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v8, 1u);
        inserted = DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::InsertObject(
                     *(_QWORD *)v7,
                     v4[7],
                     v4);
        ExReleaseResourceLite(*((PERESOURCE *)v7 + 1));
        KeLeaveCriticalRegion();
      }
      else
      {
        inserted = -1073741823;
      }
      if ( inserted < 0 )
LABEL_16:
        (*(void (__fastcall **)(unsigned int *, __int64))(*(_QWORD *)v4 + 32LL))(v4, 1LL);
      else
        *a1 = v4[7];
    }
    else
    {
      inserted = -1073741801;
    }
    DirectComposition::CConnection::Release(DefaultConnection);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)inserted;
}
