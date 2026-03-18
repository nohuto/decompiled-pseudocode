/*
 * XREFs of ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C0064EE8
 * Callers:
 *     NtDCompositionCreateChannel @ 0x1C00651C0 (NtDCompositionCreateChannel.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0059680 (Win32AllocPoolWithQuotaZInit.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00619C0 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0061F54 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?InsertObject@?$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@QEAAJIPEAVCChannel@2@@Z @ 0x1C0065000 (-InsertObject@-$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@QE.c)
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C0065044 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ??0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z @ 0x1C0065074 (--0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z.c)
 *     ?Release@CChannel@DirectComposition@@QEAAKXZ @ 0x1C0067C00 (-Release@CChannel@DirectComposition@@QEAAKXZ.c)
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C007C9C4 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::Create(
        unsigned int *a1,
        unsigned int *a2,
        void **a3,
        __int64 a4)
{
  struct DirectComposition::CConnection *DefaultConnection; // rbp
  DirectComposition::CApplicationChannel *v8; // rax
  unsigned int v9; // edx
  unsigned int *v10; // rdi
  int inserted; // ebx
  struct DirectComposition::CProcessData *v12; // rax
  struct DirectComposition::CProcessData *v13; // rsi
  struct _ERESOURCE *v14; // rbx

  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection((__int64)a1, (__int64)a2, (__int64)a3, a4);
  if ( DefaultConnection )
  {
    v8 = (DirectComposition::CApplicationChannel *)Win32AllocPoolWithQuotaZInit(0x320uLL, 0x63614344u);
    if ( v8 )
      v10 = (unsigned int *)DirectComposition::CApplicationChannel::CApplicationChannel(v8, DefaultConnection, 1, *a2);
    else
      v10 = 0LL;
    if ( v10 )
    {
      inserted = DirectComposition::CApplicationChannel::Initialize(
                   (DirectComposition::CApplicationChannel *)v10,
                   a2,
                   a3);
      if ( inserted < 0 )
        goto LABEL_16;
      v12 = DirectComposition::CProcessData::Current();
      v13 = v12;
      if ( v12 )
      {
        v14 = (struct _ERESOURCE *)*((_QWORD *)v12 + 1);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v14, 1u);
        inserted = DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::InsertObject(
                     *(_QWORD *)v13,
                     v10[7],
                     v10);
        ExReleaseResourceLite(*((PERESOURCE *)v13 + 1));
        KeLeaveCriticalRegion();
      }
      else
      {
        inserted = -1073741823;
      }
      if ( inserted < 0 )
LABEL_16:
        DirectComposition::CChannel::Release((DirectComposition::CChannel *)v10);
      else
        *a1 = v10[7];
    }
    else
    {
      inserted = -1073741801;
    }
    DirectComposition::CConnection::Release(DefaultConnection, v9);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)inserted;
}
