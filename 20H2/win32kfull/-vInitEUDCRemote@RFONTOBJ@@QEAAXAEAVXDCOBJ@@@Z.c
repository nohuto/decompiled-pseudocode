/*
 * XREFs of ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02A6BC8
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00252E8 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C0001008 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     _tlgKeywordOn @ 0x1C0016DD8 (_tlgKeywordOn.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002120C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C0023EE8 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C0025A70 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C00262AC (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0026E20 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ?UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ @ 0x1C0027034 (-UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C005D6E0 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C00646D8 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C0065044 (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C00650FC (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     PALLOCMEM2 @ 0x1C00673AC (PALLOCMEM2.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00A4750 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C00AFAAC (--1RFONTOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     ?bActive@RFONTOBJ@@QEBAHXZ @ 0x1C0272110 (-bActive@RFONTOBJ@@QEBAHXZ.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C028A598 (--1LFONTOBJ@@QEAA@XZ.c)
 *     ?ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C02A6AA8 (-ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z.c)
 */

void __fastcall RFONTOBJ::vInitEUDCRemote(RFONTOBJ *this, HDC **a2)
{
  RFONTOBJ *v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rdi
  _QWORD *v6; // rax
  char v7; // r12
  unsigned int v8; // edx
  void *v9; // rax
  HDC v10; // rax
  __int64 v11; // rbx
  struct HLFONT__ *v12; // rdx
  HDC *v13; // rdx
  __int64 *v14; // r15
  __int64 v15; // rbx
  unsigned int v16; // ecx
  HDC *v17; // rdx
  unsigned int v18; // esi
  __int64 v19; // r13
  struct PFE *v20; // rax
  struct PFE *v21; // r12
  struct _LIST_ENTRY *LinkedFontList; // rax
  struct _LIST_ENTRY *i; // rcx
  int Blink; // eax
  int v25; // r14d
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  HDC v30; // rdx
  __int64 v31; // rcx
  __int64 *v32; // rdi
  __int64 v33; // [rsp+50h] [rbp-B0h] BYREF
  int v34; // [rsp+58h] [rbp-A8h] BYREF
  HDC v35; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+68h] [rbp-98h] BYREF
  __int64 v37; // [rsp+70h] [rbp-90h] BYREF
  __int64 v38; // [rsp+78h] [rbp-88h] BYREF
  struct LFONT *v39; // [rsp+80h] [rbp-80h] BYREF
  __int64 v40; // [rsp+88h] [rbp-78h] BYREF
  int v41; // [rsp+98h] [rbp-68h]
  _BYTE v42[16]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v43; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v44; // [rsp+C0h] [rbp-40h]
  _OWORD v45[4]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v46[80]; // [rsp+110h] [rbp+10h] BYREF

  v2 = this;
  v37 = (__int64)this;
  v3 = *(_QWORD *)this;
  v4 = 0LL;
  v6 = *(_QWORD **)(v3 + 744);
  if ( v6 )
  {
    if ( *v6 )
      return;
    DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 24LL);
    v3 = *(_QWORD *)v2;
  }
  v7 = 0;
  if ( !*(_QWORD *)(v3 + 744) )
  {
    v8 = *((_DWORD *)*a2 + 76);
    if ( v8 <= 0xA )
    {
      *(_QWORD *)(v3 + 744) = v3 + 752;
    }
    else
    {
      v9 = PALLOCMEM2(8 * v8, 1718382187LL, 1);
      *(_QWORD *)(*(_QWORD *)v2 + 744LL) = v9;
      if ( !v9 )
        return;
      v7 = 1;
    }
  }
  *(_DWORD *)(*(_QWORD *)v2 + 840LL) = 0;
  v10 = (*a2)[6];
  v12 = (struct HLFONT__ *)(*a2)[216];
  v38 = *(_QWORD *)(*(_QWORD *)v2 + 120LL);
  v11 = v38;
  v35 = v10;
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v39, v12, (struct PDEVOBJ *)&v35);
  v13 = *a2;
  v35 = *(HDC *)v2;
  DCOBJ::DCOBJ((DCOBJ *)v42, *v13);
  IFIOBJR::IFIOBJR(
    (IFIOBJR *)v45,
    *(const struct _IFIMETRICS **)(v11 + 32),
    (struct RFONTOBJ *)&v35,
    (struct DCOBJ *)v42);
  v43 = 0LL;
  v44 = 0LL;
  RFONTOBJ::ComputeEUDCLogfont(v2, (struct _EUDCLOGFONT *)&v43, (struct XDCOBJ *)a2);
  memset(v46, 0, sizeof(v46));
  v14 = (__int64 *)v46;
  v15 = 0LL;
  v16 = *((_DWORD *)*a2 + 76);
  if ( v16 <= 0xA || (v14 = (__int64 *)PALLOCMEM2(8 * v16, 1718382187LL, 1)) != 0LL )
  {
    *(_DWORD *)(*(_QWORD *)v2 + 712LL) |= 0x200u;
    v17 = *a2;
    if ( ((_DWORD)(*a2)[6][10] & 0x8000) != 0 )
    {
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)v2 + 848LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)v2 + 848LL));
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_QWORD *)(*(_QWORD *)v2 + 504LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)v2 + 504LL));
      v17 = *a2;
    }
    if ( *((_DWORD *)v17 + 76) )
    {
      v18 = 0;
      do
      {
        v19 = 0LL;
        v33 = 0LL;
        v40 = 0LL;
        v36 = ghsemPublicPFT;
        GreAcquireSemaphore(ghsemPublicPFT);
        v20 = ppfeFromUFI((struct _UNIVERSAL_FONT_ID *)((*a2)[37] + 2 * v18));
        v21 = v20;
        if ( v20 )
        {
          v19 = *(_QWORD *)v20;
          v40 = v19;
          v41 = 0;
          ++*(_DWORD *)(v19 + 68);
        }
        SEMOBJ::vUnlock((SEMOBJ *)&v36);
        if ( v21 )
        {
          v45[0] = v43;
          v45[1] = v44;
          LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v38);
          if ( LinkedFontList )
          {
            for ( i = LinkedFontList->Flink; i != LinkedFontList; i = i->Flink )
            {
              if ( (struct PFE *)i[2].Flink == v21 || (struct PFE *)i[2].Blink == v21 )
              {
                Blink = (int)i[1].Blink;
                if ( Blink )
                  HIDWORD(v45[0]) = HIDWORD(v43) * Blink / SHIDWORD(i[1].Blink);
                break;
              }
            }
          }
          RFONTOBJ::vInit((RFONTOBJ *)&v33, (struct XDCOBJ *)a2, v21, (struct _EUDCLOGFONT *)v45);
          if ( v33 )
          {
            v14[v15] = v33;
            v15 = (unsigned int)(v15 + 1);
          }
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v33);
        if ( v19 && !v41 )
          PFFOBJ::vDeleteRFONTRef((PFFOBJ *)&v40);
        v17 = *a2;
        ++v18;
      }
      while ( v18 < *((_DWORD *)*a2 + 76) );
      v2 = (RFONTOBJ *)v37;
    }
    if ( ((_DWORD)v17[6][10] & 0x8000) != 0 )
    {
      GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)v2 + 504LL));
      GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)v2 + 848LL));
    }
    v25 = *(_DWORD *)(*(_QWORD *)v2 + 712LL) & 0x200;
    *(_DWORD *)(*(_QWORD *)v2 + 712LL) &= ~0x200u;
    if ( !RFONTOBJ::bActive(v2)
      && v25
      && (unsigned int)dword_1C032A3F8 > 5
      && tlgKeywordOn((__int64)&dword_1C032A3F8, 0x400000000000LL) )
    {
      v34 = 0;
      LODWORD(v36) = 1;
      v37 = 0x1000000LL;
      LODWORD(v33) = 68651;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v26,
        (int)&unk_1C02F2AEF,
        v27,
        v28,
        (__int64)&v33,
        (__int64)&v37,
        (__int64)&v36,
        (__int64)&v34);
    }
    if ( (unsigned __int8)-(v25 != 0) & RFONTOBJ::bActive(v2) )
    {
      if ( (_DWORD)v15 )
      {
        v29 = (unsigned int)v15;
        do
        {
          *(_QWORD *)(v4 * 8 + *(_QWORD *)(*(_QWORD *)v2 + 744LL)) = v14[v4];
          ++v4;
          --v29;
        }
        while ( v29 );
        *(_DWORD *)(*(_QWORD *)v2 + 840LL) = v15;
      }
      else
      {
        v30 = *(HDC *)v2;
        v31 = *(_QWORD *)(*(_QWORD *)v2 + 744LL);
        if ( v31 != *(_QWORD *)v2 + 752LL )
        {
          Win32FreePool(v31);
          v30 = *(HDC *)v2;
        }
        *((_QWORD *)v30 + 93) = 0LL;
        *(_DWORD *)(*(_QWORD *)v2 + 840LL) = 0;
      }
      RFONTOBJ::UpdateFontLinksLockOrder(v2);
    }
    else if ( (_DWORD)v15 )
    {
      v32 = v14;
      do
      {
        v33 = *v32;
        RFONTOBJ::vMakeInactive((RFONTOBJ *)&v33);
        RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v33);
        ++v32;
        --v15;
      }
      while ( v15 );
    }
    if ( v14 != (__int64 *)v46 )
      Win32FreePool(v14);
  }
  else if ( v7 )
  {
    Win32FreePool(*(_QWORD *)(*(_QWORD *)v2 + 744LL));
    *(_QWORD *)(*(_QWORD *)v2 + 744LL) = 0LL;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v42);
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v35);
  LFONTOBJ::~LFONTOBJ(&v39);
}
