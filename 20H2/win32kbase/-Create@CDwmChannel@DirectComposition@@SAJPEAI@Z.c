/*
 * XREFs of ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C00B79BC
 * Callers:
 *     NtDCompositionCreateDwmChannel @ 0x1C00B7920 (NtDCompositionCreateDwmChannel.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0059680 (Win32AllocPoolWithQuotaZInit.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00619C0 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0061F54 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?InsertObject@?$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@QEAAJIPEAVCChannel@2@@Z @ 0x1C0065000 (-InsertObject@-$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@QE.c)
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C0065044 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ??0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z @ 0x1C0065074 (--0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z.c)
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C007C9C4 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDwmChannel::Create(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct DirectComposition::CConnection *DefaultConnection; // rsi
  DirectComposition::CApplicationChannel *v6; // rax
  unsigned int v7; // edx
  int *v8; // rdi
  __int64 v9; // rcx
  int inserted; // ebx
  struct DirectComposition::CProcessData *v11; // rax
  struct DirectComposition::CProcessData *v12; // r14
  struct _ERESOURCE *v13; // rbx

  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection((__int64)a1, a2, a3, a4);
  if ( DefaultConnection )
  {
    v6 = (DirectComposition::CApplicationChannel *)Win32AllocPoolWithQuotaZInit(0x320uLL, 0x63644344u);
    v8 = (int *)v6;
    if ( v6 )
    {
      DirectComposition::CApplicationChannel::CApplicationChannel(v6, DefaultConnection, 1, 0);
      *(_QWORD *)v8 = &DirectComposition::CDwmChannel::`vftable';
    }
    else
    {
      v8 = 0LL;
    }
    if ( v8 )
    {
      inserted = DirectComposition::CApplicationChannel::Initialize(
                   (DirectComposition::CApplicationChannel *)v8,
                   0LL,
                   0LL);
      if ( inserted < 0 )
        goto LABEL_16;
      v11 = DirectComposition::CProcessData::Current(v9);
      v12 = v11;
      if ( v11 )
      {
        v13 = (struct _ERESOURCE *)*((_QWORD *)v11 + 1);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v13, 1u);
        inserted = DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::InsertObject(
                     *(struct _RTL_GENERIC_TABLE **)v12,
                     v8[7],
                     (__int64)v8);
        ExReleaseResourceLite(*((PERESOURCE *)v12 + 1));
        KeLeaveCriticalRegion();
      }
      else
      {
        inserted = -1073741823;
      }
      if ( inserted < 0 )
LABEL_16:
        (*(void (__fastcall **)(int *, __int64))(*(_QWORD *)v8 + 32LL))(v8, 1LL);
      else
        *a1 = v8[7];
    }
    else
    {
      inserted = -1073741801;
    }
    DirectComposition::CConnection::Release(DefaultConnection, v7);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)inserted;
}
