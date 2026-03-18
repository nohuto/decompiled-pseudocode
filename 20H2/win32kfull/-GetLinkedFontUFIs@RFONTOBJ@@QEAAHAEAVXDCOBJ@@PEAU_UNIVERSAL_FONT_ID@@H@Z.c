/*
 * XREFs of ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C01452C4
 * Callers:
 *     NtGdiGetLinkedUFIs @ 0x1C01451A0 (NtGdiGetLinkedUFIs.c)
 * Callees:
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C0065044 (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C00AFAAC (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?AddUFIToBuffer@RFONTOBJ@@AEAAXPEAVPFE@@AEAPEAU_UNIVERSAL_FONT_ID@@AEAHH@Z @ 0x1C010C5C0 (-AddUFIToBuffer@RFONTOBJ@@AEAAXPEAVPFE@@AEAPEAU_UNIVERSAL_FONT_ID@@AEAHH@Z.c)
 *     ?GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z @ 0x1C01455A8 (-GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z.c)
 *     TraceGreReleaseSemaphore @ 0x1C015A094 (TraceGreReleaseSemaphore.c)
 *     ?bIsPerFontEUDC@PFFOBJ@@QEBAHXZ @ 0x1C015EAA0 (-bIsPerFontEUDC@PFFOBJ@@QEBAHXZ.c)
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C02A69A4 (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall RFONTOBJ::GetLinkedFontUFIs(
        RFONTOBJ *this,
        struct XDCOBJ *a2,
        struct _UNIVERSAL_FONT_ID *a3,
        int a4)
{
  int v5; // ebx
  struct _UNIVERSAL_FONT_ID *v6; // rdi
  __int64 v8; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // r13d
  struct _LIST_ENTRY *LinkedFontList; // rax
  __int64 v14; // r8
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  struct PFE *v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  int v20; // ebx
  __int64 v21; // rax
  __int64 v22; // r12
  struct _LIST_ENTRY *v23; // rax
  struct _LIST_ENTRY *v24; // r14
  struct PFE *v25; // rdx
  __int64 v26; // rcx
  int v27; // eax
  unsigned int v28; // ebx
  __int64 v29; // rax
  struct PFE *EUDCDefaultFontPFE; // rax
  __int64 v31; // [rsp+30h] [rbp-20h]
  __int64 v32; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v33[2]; // [rsp+40h] [rbp-10h] BYREF
  struct _UNIVERSAL_FONT_ID *v34; // [rsp+A0h] [rbp+50h] BYREF
  int v35; // [rsp+A8h] [rbp+58h] BYREF

  v34 = a3;
  v5 = 0;
  v6 = a3;
  v35 = 0;
  if ( a4 && !a3 )
    return 0LL;
  v8 = *(_QWORD *)this;
  if ( *(_DWORD *)(*(_QWORD *)this + 708LL) )
  {
    if ( !*(_QWORD *)(v8 + 720) && !RFONTOBJ::bInitSystemTT(this, a2) )
      return 0LL;
    *(_DWORD *)(*(_QWORD *)this + 712LL) |= 0x100u;
    v8 = *(_QWORD *)this;
  }
  v10 = *(_QWORD *)(v8 + 720);
  if ( v10 )
  {
    v5 = 1;
    v35 = 1;
    if ( a4 > 0 )
    {
      v11 = *(_QWORD *)(v10 + 120);
      v32 = 0LL;
      *(_QWORD *)v6 = *(_QWORD *)(v11 + 84);
      v6 = (struct _UNIVERSAL_FONT_ID *)((char *)v6 + 8);
      v34 = v6;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v32);
      v8 = *(_QWORD *)this;
    }
  }
  v12 = *(_DWORD *)(v8 + 844) != 0;
  GreAcquireSemaphore(ghsemEUDC1);
  ++gcEUDCCount;
  TraceGreReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  v32 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v32);
  v31 = 0LL;
  Blink = LinkedFontList->Blink;
  if ( Blink != LinkedFontList )
  {
    Flink = (struct _LIST_ENTRY *)*((_QWORD *)&Blink[2].Flink + v12);
    if ( !Flink )
      Flink = Blink[2].Flink;
    v33[0] = Flink->Flink;
    v31 = 0LL;
    if ( (unsigned int)PFFOBJ::bIsPerFontEUDC((PFFOBJ *)v33) )
    {
      RFONTOBJ::AddUFIToBuffer(this, v17, &v34, &v35, a4);
      v14 = *(_QWORD *)this;
      v6 = v34;
      v5 = v35;
      v31 = 1LL;
    }
  }
  v18 = *(_QWORD *)(v14 + 728);
  if ( v18 )
  {
    v19 = v5;
    v20 = v5 + 1;
    v35 = v20;
    if ( v19 < a4 )
    {
      v21 = *(_QWORD *)(v18 + 120);
      v33[0] = 0LL;
      *(_QWORD *)v6 = *(_QWORD *)(v21 + 84);
      v6 = (struct _UNIVERSAL_FONT_ID *)((char *)v6 + 8);
      v34 = v6;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v33);
    }
    v22 = v12;
  }
  else
  {
    v22 = v12;
    RFONTOBJ::AddUFIToBuffer(this, (struct PFE *)(&gappfeSysEUDC)[v12], &v34, &v35, a4);
    v6 = v34;
    v20 = v35;
  }
  v23 = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v32);
  v24 = v23->Flink;
  if ( v23->Flink != v23 )
  {
    do
    {
      v25 = (struct PFE *)*((_QWORD *)&v24[2].Flink + v22);
      if ( !v25 )
        v25 = (struct PFE *)v24[2].Flink;
      if ( v24 != v23->Blink || !v31 )
        RFONTOBJ::AddUFIToBuffer(this, v25, &v34, &v35, a4);
      v24 = v24->Flink;
      v23 = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v32);
    }
    while ( v24 != v23 );
    v6 = v34;
    v20 = v35;
  }
  GreAcquireSemaphore(ghsemEUDC1);
  --gcEUDCCount;
  TraceGreReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  v26 = *(_QWORD *)(*(_QWORD *)this + 736LL);
  if ( v26 )
  {
    v27 = v20;
    v28 = v20 + 1;
    if ( v27 < a4 )
    {
      v29 = *(_QWORD *)(v26 + 120);
      v33[0] = 0LL;
      *(_QWORD *)v6 = *(_QWORD *)(v29 + 84);
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v33);
    }
  }
  else
  {
    EUDCDefaultFontPFE = RFONTOBJ::GetEUDCDefaultFontPFE(this, v12);
    RFONTOBJ::AddUFIToBuffer(this, EUDCDefaultFontPFE, &v34, &v35, a4);
    return (unsigned int)v35;
  }
  return v28;
}
